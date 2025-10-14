#include<stdio.h>
#include<stdlib.h>
void main()
{
int a,b,temp;
printf("Enter first number");
scanf("%d",&a);
printf("enter the secound number");
scanf("%d",&b);
temp=a;
a=b;
b=temp;
printf("swapped values are %d %d",a,b);
}
