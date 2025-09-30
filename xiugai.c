#include <stdio.h>

int main()
{
  int age;
  char name[20];

  printf("请输入你的姓名：");
  scanf("%s", &name);
  printf("请输入你的年龄：");
  scanf("%d", &age);
  while(1)
  {

    int flag = 0, count = 0;
    b: printf("My name is %s.\n", name);
    printf("I am %d years old.\n", age);
    printf("是否继续输入？（若继续请输入1，反之请输入0）：");
    scanf("%d", &flag); 
    count ++;
    if(flag == 1)
    {
      printf("请输入你的姓名：");
      scanf("%s", &name);
      printf("请输入你的年龄：");
      scanf("%d", &age);
      goto b;
    }
    else{
      printf("一共输入了%d次", count);
      goto a;
    }
  }

  a:return 0;
}