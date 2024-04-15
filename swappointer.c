#include<stdio.h>

//Write a Program to swap two variables using Pointers


main()
{
	int A,B,temp;
	int *ptr,*ptr1;
	ptr=&A;
	ptr1=&B;
	
	
	printf("Enter value of A=");
	scanf("%d",&A);
	
	printf("Enter value of B=");
	scanf("%d",&B);
	
	temp = ptr;
	ptr = ptr1;
	ptr1 = temp;
	  
	printf("\n\n\nBefore Swapping=\n");
	
	printf("After swapping value of A= %d\n",*ptr1);
	printf("After swapping value of B= %d\n\n\n",*ptr);
	
	printf("After Swapping=\n");
	
	printf("After swapping value of A= %d\n",*ptr);
	printf("After swapping value of B= %d\n",*ptr1);
	
	
}