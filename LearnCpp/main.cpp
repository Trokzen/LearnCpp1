#include <iostream>


int readNumber()// ������� ����������� � ������������ ����� �����, � ����� ���������� ��� � main();
{
	int x;
	std::cout << "enter number" << std::endl;
	std::cin >> x;
	return x;
}
void writeAnswer(int answer)// ������� ������� ��������� �� �����.������� ������ ���� ��� ������������� �������� � ����� ������ ���� ��������;
{
	std::cout << "Answer: " << answer << std::endl;
	return;
}

int main()
{
	writeAnswer(readNumber() + readNumber());
	return 0;
}