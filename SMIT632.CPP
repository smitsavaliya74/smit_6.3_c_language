#include<stdio.h>
#include<conio.h>

void main ()
{
  int n;
  int i;
  int final;

  clrscr();
  printf("enter any number: ");
  scanf("%d",&n);

  for(i=1;i<=n;i++)
  {
    final *=i ;

  }
    printf("Your ans is:%d",final);
  getch();
}