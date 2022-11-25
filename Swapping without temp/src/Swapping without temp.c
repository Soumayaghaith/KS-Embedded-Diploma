/*
 ============================================================================
 Name        : Swapping.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);
	int num1, num2 ;
	printf("Please enter two numbers to swap\n");
	scanf("%d",&num1);
	scanf("%d",&num2);
	num1= num1+num2;
	num2= num1-num2;
	num1=num1-num2;
	printf("The first number became %d\n",num1);
	printf("The second number became %d\n",num2);


	return EXIT_SUCCESS;
}

