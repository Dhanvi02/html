#include<stdio.h>
int main()
{
	int number1, number2, number3, sum;
	printf("enter number1: ");
	scanf("%d",&number1);
	printf("enter number2 :");
	scanf("%d",&number2);
	printf("enter number3 :");
	scanf("%d",&number3);
	sum=number1+number2+number3;
	scanf("%d=%d+%d+%d",number1, number2, number3);
}
