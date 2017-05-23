// Carculator.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
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

	result = add(11, 10);
	std::cout << "add=" << result << std::endl;

	result = sub(11, 10);
	std::cout << "sub=" << result << std::endl;

	result = mul(11, 10);
	std::cout << "mul=" << result << std::endl;
	
	result = div(11, 10);
	std::cout << "div=" << result << std::endl;
	//2017-05-23
	
	return 0;
}

