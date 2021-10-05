# C++-Program_Tokens-and-Operators-1.
# C++-Program_Tokens-and-Operators-2.
# Write a C++ Program to Find Size of int, float, double and char.
# Write a C++ Program to find the product of two numbers entered by the User.

#include <iostream>
using namespace std;

int main() 
{    
    cout << "Size of char: " << sizeof(char) << " byte" << endl;
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;

    return 0;
}

# C++-Program_Tokens-and-Operators-2.

#include <iostream>
using namespace std;

int main() 
{
  double num1, num2, product;
  cout << "Enter two numbers: ";

  // stores two floating point numbers in num1 and num2 respectively
  cin >> num1 >> num2;
 
  // performs multiplication and stores the final value or result in product variable
  product = num1 * num2;  

  cout << "Product = " << product;    
    
  return 0;
}
