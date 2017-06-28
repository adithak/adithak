#include<stdio.h>
#include<conio.h>
void main()
{
  int n;
  clrscr();
  printf("enter your name");
  scanf("%d",&n);
  if(n>0)
    printf("the number is possitive %d",n);
  else if(n==0)
    printf("the number is zero %d",n);
  else
    printf("the number is negative %d",n);
  getch();
}
