#include <iostream>

#include <f1.h>
#include <f2.h>

int main()
{
	float inputA = 0;
	float inputB = 9;
	float v1 = f1(inputA, inputB);
	float v2 = f2(inputA, inputB);
	std::cout << "f1:" << v1    << std::endl;
	std::cout << "f2:" << v2    << std::endl;
	std::cout << "f3:" << v2-v1 << std::endl;
}
