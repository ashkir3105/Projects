//This is a program to perform basic calculations
#include<stdio.h>
#include<stdlib.h>
int main()
 {
 double n1,n2,sum,difference,product,quotient;
 char function;
 printf("Enter the function you want to perform(+,-,/,*):\n");
 scanf("%c",&function);         //taking input for the function to be performed
 printf("Enter 1st number:\n");
 scanf("%lf",&n1);             //taking input for first number
 printf("Enter 2nd number:\n");
 scanf("%lf",&n2);             //taking input for second number
 //Assigning algorithms
 sum=n1+n2;
 difference=n1-n2;
 product=n1*n2;
 quotient=n1/n2;
 //deploying case parameter for switch
 switch (function)                   
 {
  case '+':
    printf("%lf\n",sum);
    break;
  case '-':
    printf("%lf\n",difference);
    break;
  case '*':
    printf("%lf\n",product);
    break;
  case '/':
    printf("%lf\n",quotient);
    break;
  default:
    printf("Wrong function entered");
 }
 system("pause");
  return 0;
}