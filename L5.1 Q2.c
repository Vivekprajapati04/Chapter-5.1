#include<stdio.h>

main()

{
	int a;
	printf("Enter value of A=");
	scanf("%d,",&a);
	
	
	if(a<0)
	{
		printf("This number is Negative = %d",a);
	}
	
	else if(a==0)
	{
		printf("This number is Neutral =%d",a);
		
	} 
	
	else if (a>0)
	{
		printf("This number is Positive =%d",a);
	
	}
}