#include<stdio.h>
#include<conio.h>
main()
{
	int i;
	printf("enter the number to check wheather it is even or odd");
	scanf("%d",&i);
	if((i>0)&&(i%2==0))
	printf("positive number and even");
	else
	if((i>0)&&(i%2==1))
	printf("postive  number and odd");
	else
	printf("invalid");
getch();
}

