// Carculator.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <iostream>

int add(int x, int y){
	return x + y;
}
int sub(int x, int y){
	return x - y;
}
int mul(int x, int y){
	return x * y;
}
int div(int x, int y){
	return x / y;
}
int _tmain(int argc, _TCHAR* argv[])
{
	int result;

	std::cout << "hello world" << std :: endl;

	result = add(11, 11);
	std::cout << "add=" << result << std::endl;

	result = sub(11, 11);
	std::cout << "sub=" << result << std::endl;

	result = mul(11, 11);
	std::cout << "mul=" << result << std::endl;
	
	result = div(11, 11);
	std::cout << "div=" << result << std::endl;
	
	return 0;
}

