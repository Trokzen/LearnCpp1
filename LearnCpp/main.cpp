#include <iostream>


int readNumber()// котора€ запрашивает у пользовател€ целое число, а затем возвращает его в main();
{
	int x;
	std::cout << "enter number" << std::endl;
	std::cin >> x;
	return x;
}
void writeAnswer(int answer)// котора€ выводит результат на экран.‘ункци€ должна быть без возвращаемого значени€ и иметь только один параметр;
{
	std::cout << "Answer: " << answer << std::endl;
	return;
}

int main()
{
	writeAnswer(readNumber() + readNumber());
	return 0;
}