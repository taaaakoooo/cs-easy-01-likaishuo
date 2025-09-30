#include <stdio.h>
#include <string.h>
void paixu(int fenshu[], char name[][100])
{
    for(int i = 0; i < 2; i ++)
  {
        for(int j = 0; j < 2 - i; j ++)
        {
             if(fenshu[j] < fenshu[j + 1])
            {
                 int temp = fenshu[j];
                 fenshu[j] = fenshu[j + 1];
                 fenshu[j + 1] = temp;
                 char tname[100];
                 strcpy(tname, name[j]);
                 strcpy(name[j], name[j + 1]);
                 strcpy(name[j + 1], tname);
            }
        }
        
   }
}
int pingjunshu(int a, int b, int c)
{
  int sum = (a + b + c)/3;
  int fang = ((sum - a) * (sum - a) + (sum - b) * (sum - b) + (sum - c) * (sum - c)) / 3;
  int pingjunshu = 3 * sum - fang / 3;
  return pingjunshu;
}
int main()
{
  int x1, x2, x3;
  int y1, y2, y3;
  int z1, z2, z3;

  printf("请输入小明的三项成绩（顺序为A B C,以一个空格为间隔）：");
  scanf("%d %d %d", &x1, &x2, &x3);
  printf("请输入小强的三项成绩（顺序为A B C,以一个空格为间隔）：");
  scanf("%d %d %d", &y1, &y2, &y3);
  printf("请输入小林的三项成绩（顺序为A B C,以一个空格为间隔）：");
  scanf("%d %d %d", &z1, &z2, &z3);
  int zh1 = pingjunshu(x1, x2, x3);
  int zh2 = pingjunshu(y1, y2, y3);
  int zh3 = pingjunshu(z1, z2, z3);
  //为了进一步简化函数，可以使用冒泡排序，利用数组来进行比较
  //但是，在使用冒泡排序的过程中，我只能比较出三个平均数得大小，而不能替换为三个人名
  //因此， 可以使用双数组来优化这个代码
  int fenshu[] = {zh1, zh2, zh3};
  char name[][100] = {"小明", "小强", "小林"};
  paixu(fenshu , name);
  
  printf("三人平均成绩从高到低的顺序为：%s %d, %s %d, %s %d", name[0], fenshu[0], name[1], fenshu[1], name[2], fenshu[2]);
  
  
  return 0;
} 
