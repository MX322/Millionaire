#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	cout << "Выбери правельный ответ : \n";

	for (int i = 5; i > 0; i--)
	{
		if (i == 5)
		{
			int ans;
			cout << "Самое популярный язык в мире? : \n";
			cout << "1 - Английский";
			cout << "\t2 - Испанский\n";
			cout << "3 - Китайский";
			cout << "\t4 - Немецкий\n";
			cin >> ans;

			if (ans == 3)
			{
				cout << "\nПравильно\n\n";
			}
			else
			{
				cout << "\nНе правильно\n\n";
				break;
			}
		}

		if (i == 4)
		{
			int ans;
			cout << "Сколько жизней у кота? : \n";
			cout << "1 - 4";
			cout << "\t2 - 9\n";
			cout << "3 - 12";
			cout << "\t4 - 1\n";
			cin >> ans;

			if (ans == 2 || ans == 4)
			{
				cout << "\nПравильно\n\n";
			}
			else
			{
				cout << "\nНе правильно\n\n";
				break;
			}
		}

		if (i == 3)
		{
			int ans;
			cout << "Столица Украины? : \n";
			cout << "1 - Харьков";
			cout << "\t2 - Киев\n";
			cout << "3 - Одесса";
			cout << "\t4 - Львов\n";
			cin >> ans;

			if (ans == 2)
			{
				cout << "\nПравильно\n\n";
			}
			else
			{
				cout << "\nНе правильно\n\n";
				break;
			}
		}

		if (i == 2)
		{
			int ans;
			cout << "Самый большой остров? : \n";
			cout << "1 - Гренландия";
			cout << "\t2 - Мадагаскар\n";
			cout << "3 - Суматра";
			cout << "\t4 - Хонсю \n";
			cin >> ans;

			if (ans == 1)
			{
				cout << "\nПравильно\n\n";
			}
			else
			{
				cout << "\nНе правильно\n\n";
				break;
			}
		}

		if (i == 1)
		{
			int ans;
			cout << "Из сколько направлений готовилось нападение на Белорусь? : \n";
			cout << "1 - 2";
			cout << "\t2 - 4\n";
			cout << "3 - 1";
			cout << "\t4 - 3 \n";
			cin >> ans;

			if (ans == 2)
			{
				cout << "\nПравильно\n\n";
				cout << "Вы ВЫЙГРАЛИ!\n\n";
			}
			else
			{
				cout << "\nНе правильно\n\n";
				break;
			}
		}

	}
	
}
