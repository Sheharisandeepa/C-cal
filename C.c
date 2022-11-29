#include<stdio.h>
int main()
{
	char oper;
	float num1,num2,ans;
	
	printf ("enter an operator(+,-,*,/):");
	scanf("%c",&oper);
	
	printf("enter the first number:");
	scanf("%f",&num1);
	
	printf("enter the second number:");
	scanf("%f",&num2);
	
	switch (oper){
		case'+':
		ans=num1+num2;
		printf("%.2f+%.2f=%.2f\n",num1,num2,ans);
		break;
		
		case'-':
		ans=num1-num2;
		printf("%.2f-%.2f=%.2f\n",num1,num2,ans);
		break;
		
		case'*':
		ans=num1*num2;
		printf("%.2f*%.2f=%.2f\n",num1,num2,ans);
		break;
		
		case'/':
		ans=num1/num2;
		printf("%.2f/%.2f=%.2f\n",num1,num2,ans);
		break;
		
		defult:
		printf("invaled operator\n");
		break;
	}
	return 0;
}