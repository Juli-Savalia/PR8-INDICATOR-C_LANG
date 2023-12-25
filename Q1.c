//Write a Program to find the length of a 1D array.

#include<stdio.h>
#include<string.h>

void main()
{
	int len=0,i;
	char str[20];
	char *ptr;
	
	printf("Enter any string = ");
	gets(str);
	
	ptr = &str;
	
	for(i=0;str[i]!='\0';i++)
	{
		len++;
		ptr++;	
	}
	
//	for(i=0;i!='\0';i++){
//		len++;
//		ptr++;
//	}
		
	printf("The length of youe string is = %d",len);

}


