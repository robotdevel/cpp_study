// ConsoleApplication1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int getvaluefromuser()
{
	std::cout << "enter and integer : ";
	int input{};
	std::cin >> input;

	return input;
}

int main()
{
	int num{ getvaluefromuser() };

	std::cout << num << " doubled is: " << num * 2 << '\n';

	return 0;
}

