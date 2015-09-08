#include<stdio.h>
int gy,gb;
int main()
{void hcf(int a,int b);
 void lcd(int a,int b,int gy);
 int a,b,t;
 printf("输入两个整数a,b:");
 scanf("%d,%d",&a,&b);
 if(a<b)
 {
  t=a;
  a=b;
  b=t;
 }
 hcf(a,b);
 lcd(a,b,gy);
printf("最大公约数为：%d,最小公倍数为：%d",gy,gb);
return 0;
}
void hcf(int a,int b)
{int c,r;
  r=a%b;
  while(r!=0)
  {a=b;
  b=r;
  r=a%b;}
  gy=b;
}
void lcd(int a,int b,int gy)
{int d,e;
d=a/gy;
e=d*b;
gb=e;
}