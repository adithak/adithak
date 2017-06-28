#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("enter the number");
scanf("%d",&n);
if(n%2==0)
printf("the number %d is even",n);
else
printf("the number %d is odd",n);
getch();
}
