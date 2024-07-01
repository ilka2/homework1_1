#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	enum class months
	{
		������ = 1,
		�������,
		����,
		������,
		���,
		����,
		����,
		������,
		��������,
		�������,
		������,
		�������
	};

	int numMonth = 0;

	while (true)
	{
		cout << "������� ����� ������: ";
		if (!(cin >> numMonth))
		{
			cin.clear();
			cin.ignore(1, '\n');
		}
		cout << endl;

		months month = static_cast<months>(numMonth);

		switch (static_cast<int>(month))
		{
		case 1:
			cout << "������";
			break;
		case 2:
			cout << "�������";
			break;
		case 3:
			cout << "����";
			break;
		case 4:
			cout << "������";
			break;
		case 5:
			cout << "���";
			break;
		case 6:
			cout << "����";
			break;
		case 7:
			cout << "����";
			break;
		case 8:
			cout << "������";
			break;
		case 9:
			cout << "��������";
			break;
		case 10:
			cout << "�������";
			break;
		case 11:
			cout << "������";
			break;
		case 12:
			cout << "�������";
			break;
		case 0:
			break;
		default:
			cout << "������������ ��� �� ��������� ������ ������ :)";
		};

		cout << "\n" << "\n\n===========================================\n";
	}
}