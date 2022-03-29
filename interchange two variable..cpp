#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("enter value of a and b :");
	scanf("%d,%d",&a,&b);
	printf("\n before swappinga=%d \t b=%d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n after swapping a=%d \t b=%d",a,b);
	return 0;
}
