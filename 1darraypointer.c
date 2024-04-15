#include<stdio.h>

//Write a Program to find the square of each element of a given 1D array using a Pointer

main()
{
	 int n,i,A[100];
	 int *p[100];
	
	printf("size of an Array element=");
	scanf("%d",&n);	
	
	printf("Enter Array A value=\n");
	for(i=0; i<n; i++)
	{
		printf("A[%d]=",i);	
		scanf("%d",&A[i]);
	}
	
	printf("The squares are=");
	for(i=0; i<n; i++)
	{
		p[i] = &A[i];
		
		
		printf("\n%d = %d",p[i],*p[i] * *p[i]);	
	}
}