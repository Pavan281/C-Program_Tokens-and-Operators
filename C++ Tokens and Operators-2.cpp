# C++ Tokens and Operators.
# Write a C++ Program to find the product of two numbers entered by the User.

#include <iostream>
using namespace std;

int main() 
{
  double num1, num2, product;
  cout << "Enter two numbers: ";

  // It stores two floating point values or numbers in num1 and num2 respectively
  cin >> num1 >> num2;
 
  //  It performs multiplication and stores the final value or result in product variable
  product = num1 * num2;  

  cout << "Product = " << product;    
    
  return 0;
}
