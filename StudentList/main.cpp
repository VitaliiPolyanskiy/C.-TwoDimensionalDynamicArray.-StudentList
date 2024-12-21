#include <Windows.h>
#include <conio.h>
#include "list.h"

void main()
{
	int number = 0;
	char ** list = nullptr;
	char menu[][30] = {
		"1. Добавление студентов",
		"2. Удаление студента",
		"3. Модификация студента",
		"4. Вывод на экран списка",
		"5. Сортировка списка",
		"6. Поиск студентов",
		"7. Выход" };
	while (true)
	{
		system("cls");
		Menu(menu, 7);
		int choice = _getch();
		switch (choice)
		{
		case '1':
			list = AddStudents(list, number);
			break;
		case '2':
			list = RemoveStudent(list, number);
			break;
		case '3':
			list = EditStudent(list, number);
			break;
		case '4':
			Print(list, number);
			break;
		case '5':
			Sort(list, number);
			break;
		case '6':
			FindStudent(list, number);
			break;
		case '7':
			return;
		}
	}
}