#include<stdio.h>
#include<conio.h>

//Wap To Find Third Angel If Two Angles Is Given.

void main()
{
	int Ang1,Ang2,Ang3;
	
	printf("Enter Angele 1 :");
	scanf("%d",&Ang1);
	printf("Enter Angele 2 :");
	scanf("%d",&Ang2);
	
	Ang3=180-(Ang1+Ang2);
	
	printf("Third Angle is: %d",Ang3);
	
}