//Program to print character stored in a char variable, also print its ASCII code

#include<stdio.h>
#include<conio.h>
int main()
{
    char a;
    printf("Enter any Character\n");
    scanf("%c",&a); 
    printf("ASCII Code is %d",a);
    getch();
}