//EXPERIMENT - 1
//MAITRAIYEE VASHISTHA
//ENTC-A3
//PRN-24070123057
//Problem Statement: Write a program using C++ to make a simple calculator.

#include <iostream>

using namespace std;

int main(){
    float num1, num2, sum=0,product,subtraction;
    float division;
    cout<< "Enter the first number:";
    cin>>num1;
    cout<< "Enter the second number:";
    cin>>num2;
    sum=num1+num2;
    cout<<"\nSum of given numbers:\n"<<sum;
    product=num1*num2;
    cout<<"\nThe product of num1 and num2 is:\n"<<product;
    division=num1/num2;
    cout<<"\nThe division of num1 and num2 is:\n"<<division;
    subtraction=num1-num2;
    cout<<"\nThe subtraction of num1 and num2 is:\n"<<subtraction;
}

/*Output- 
Enter the first number : 72 
Enter the second number : 56

Sum of the given numbers : 128
The product of num1 and num2 is : 4032
The division of num1 and num2 is : 1.28 
The subtraction of num1 and num2 is : 16
  */
