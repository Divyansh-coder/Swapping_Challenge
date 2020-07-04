#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;
	printf("Hello!, this program will swap the numbers which you will entered.\n");
	printf("Enter the first number 'A'= ");   /* Here I have taken the input from user for value of 'A'*/
	scanf("%d",&a);
	printf("Enter the second number 'B'= ");  /*Here I have taken the input from user for value of 'B'*/
	scanf("%d",&b);
  /* Below I have written the Algo for swapping the numbers*/ 
	a=a+b;
	b=a-b;
	a=a-b;
	printf("Hurray!, The numbers are swapped.\n");
	printf("A = %d and B = %d",a,b);   /* This line will printout the Swapped numbers*/
	return 0;
}
