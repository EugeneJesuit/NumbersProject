#include <iostream>

const int N = 15;

int main()
{
	std::cout << "Printing even numbers up to " << N << ":" << std::endl;
	for (int i{ 0 }; i <= N; i += 2)
	{
		std::cout << i << std::endl;
	}
}
