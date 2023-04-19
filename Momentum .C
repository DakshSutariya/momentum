#include<stdio.h>

main()

{
	int a,b,c,d;
	
	printf("value of A=");
	scanf("%d",&a);
	
	printf("value of B=");
	scanf("%d",&b);
	
	printf("value of C=");
	scanf("%d",&c);
	
	printf("value of D=");
	scanf("%d",&d);
	
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				printf("A is max");
			}
			else
			{
				printf("E is max");
			}
		}
		else
		{
			if(c>d)
			{
				printf("C is max");
			}
			else
			{
				printf("D is max");
			}
		}
	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
				printf("B is max");
			}
			else
			{
				printf("D is max");
			}
		}
		else
		{
			if(c>d)
			{
				printf("C is max");
			}
			else
			{
				printf("D is max");
			}
		}
	}
}

