#include<stdio.h>

sum(int num[])
{
	int i,sum=0;
	for(i=0;i<=9;i++)
	{
		sum=sum+num[i];
	}
	return sum;
}
main()
{
	int arr[]={10,12,13,14,15,16,17,18,19,9};
	sum(arr);
	printf("Sum of array elements is :%d",sum(arr));
}


