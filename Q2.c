//Write a Program to find cubes of all elements from a given 2D array using Pointer with UDF.

#include<stdio.h>

int cube(int *ptr, int n)
{
	int c;
	ptr=&c;
	return *ptr;
}

void main()
{
	int n,i,j;
	
	printf("Enter the size of an array :-");
	scanf("%d",&n);
	
	int a[n][n];
	printf("Enter the elements of an array:-\n");
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("a[%d][%d] =",i,j);
			scanf("%d",&a[i][j]);		
		}
		printf("\n");
	}
	
	int *ptr,c;
	
	printf("Cube of all elements are:-\n");
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			c=a[i][j]*a[i][j]*a[i][j];	
			ptr=&c;	
			printf("%d ",*ptr);
		}
		printf("\n");
	}
//	cube(a,n);
}
