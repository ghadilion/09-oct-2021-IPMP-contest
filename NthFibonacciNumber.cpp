#include <iostream>
 
int main() {
	long long int num;
	std::cin >> num;										
	if(num == 1)
		std::cout << "0";
	else if(num == 2)
		std::cout << "1";
	else
	{
		unsigned long long int fib_n = 1, fib_nMinus1 = 0;
		for(int i = 3; i <= num; ++i)
		{
			unsigned long long int temp = fib_n;
			fib_n = fib_n + fib_nMinus1;
			fib_nMinus1 = temp;
		}
		std::cout << fib_n;	
	}
}
