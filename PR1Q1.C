#include<stdio.h>
#include<conio.h>
void main(){
   int celsius;
   float fahrenheit;
clrscr();
       printf("Enter the value of temperature in degree celcius: ");
       scanf("%d",&celsius);
	fahrenheit=(celsius*9/5)+32;
	printf("The temperature in fahrenheit is : %f",	fahrenheit);

getch();
}