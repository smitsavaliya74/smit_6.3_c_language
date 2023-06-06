#include<stdio.h>
#include<conio.h>

void main ()
{
  int n,i,table;
  clrscr();

  printf("enter any number: ");
  scanf("%d",&n);

  for(i=1;i<=10;i++){
       table=n*i;
	printf("%d\n",table);
  }

  getch();
}
