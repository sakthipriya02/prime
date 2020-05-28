#include<stdio.h>
int isprime(int num,int i);
int main()
{
	int num;
	printf("enter the num:");
	scanf("%d",&num);
	int check=isprime(num,num/2);
	if(check==1)
		{
			printf("the num is prime");
		}
	else
		{
			printf("the num is not a prime num");
		}
	return 0;
}
int isprime(int num,int i)
{
	if(i==1)
	return 1;
	else
	{
		if(num%i==0)
		return 0;
		else
		return isprime(num,i-1);
	}
}
