/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/

#include <iostream>

long Factorial(int no);
long nCr(int n, int r);

int main()
 {
  int n, r;
  std::cout << "Enter a value for n ";
  std::cin >> n;
  std::cout << "Enter a value for r ";
  std::cin >> r;
  std::cout << "nCr = ";
  std::cout << nCr(n,r);
  std::cout << std::endl;
  
  return 0;
}

 
 long Factorial(int no);
 {
   int i;
   long fac = 1;
   for(i = no; i>0; i--)
   fac*=i;

   return fac;
 }

long nCr(int n, int r)
{
  long fac_n, fac_r, fac_n_r, ncr;

  fac_n = Factorial(n);  
  fac_r = Factorial(r);
  fac_n_r = Factorial(n-r);

  ncr = fac_n / (fac_n_r * fac_r);
  return ncr;
}