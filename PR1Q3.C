#include<stdio.h>
#include<conio.h>
void main(){
   int angel_1,angel_2,angel_3;

clrscr();
       printf("Enter the value of angel-1:");
       scanf("%d",&angel_1);

       printf("Enter the value of angel-2:");
       scanf("%d",&angel_2);

       angel_3=180-(angel_1+angel_2);
       printf("The value of angel is :%d",angel_3);

getch();
}