#include<stdio.h>

main()

{
	int unit,ele_bill,tr,total;
	
	printf("enter the unit=");
	scanf("%d",&unit);
	
	if(unit<=50)
    {
    	ele_bill=50*0.50;
    	printf("ele_bill = %d",ele_bill);
	}
	else if(unit<=150)
	{
		ele_bill=(unit-50)*0.75+25;
		printf("ele_bill = %d",ele_bill);
		
	}
	else if(unit<=250)
	{
		ele_bill=(unit-200)*1.20+100;
		printf("ele_bill = %d",ele_bill);
	}
	else if(unit>250)
	{
		ele_bill=unit*1.50+150;
		printf("ele_bill = %d",ele_bill);
	}
	else
	{
		total=unit*0.2;
		printf("total = %d",total);
	}
}
