#include <iostream>

//Function to calculate factorial
unsigned long long factorial(int n) {
if(n==0)
return 1;
else
return n * factorial(n-1);
}
 
int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    if (num<0) 
    std::cout << "Factorial is not defined for negative numbers.";
else
  std::cout << "Factorial of " << num << " is " << factorial(num) << std::endl;

return 0;
}