#include<stdio.h>
#include<conio.h>

//Wap To Find Cube Of any number using User Defined Function.

void cube()
{
	
	int n;
	 
	printf("Enter Any Number :");
	scanf("%d",&n);
	
	printf("Cube Of Number is: %d",n*n*n);
}
void main()
{
	cube();
}