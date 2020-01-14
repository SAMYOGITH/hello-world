#include<stdio.h>
#include<conio.h>
 void main()
 {
  clrscr();
  int a;
  printf("Enter a number:");
  scanf("%d",&a);
  if(a>0)
  printf("number is greater than zero");
  else if(a<0)
  printf("entered number is negative");
  else
  printf("entered number is zero");

  getch();
 }