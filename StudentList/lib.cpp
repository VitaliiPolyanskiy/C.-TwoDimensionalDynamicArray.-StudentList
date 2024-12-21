#include <windows.h>
#include <iostream>

using namespace std;

void RussianMessage(const char *s)
{
	char *buf = new char[strlen(s) + 1];
	CharToOemA(s, buf);
	cout << buf;
	delete[] buf;
}

void Menu(char ptr[][30], int row)
{
	for (int i = 0; i < row; i++)
	{
		RussianMessage(ptr[i]);
		cout << endl;
	}
}

char **AddStudents(char **oldList, int &number)
{
	system("cls");
	int n;
	RussianMessage("Введите количество студентов для добавления в список: ");
	cin >> n;
	cin.get();
	char **newList = new char *[number += n];
	for (int i = 0; i < number - n; i++)
		newList[i] = oldList[i];
	char str[100];
	for (int i = number - n; i < number; i++)
	{
		RussianMessage("Введите фамилию студента: ");
		cin.getline(str, 100);
		int length = strlen(str);
		newList[i] = new char[length + 1];
		strcpy_s(newList[i], length + 1, str);
	}
	delete[] oldList;
	system("pause");
	return newList;
}

void Print(char **list, int number) 
{
	system("cls");
	RussianMessage("Список студентов: ");
	cout << endl;
	for (int i = 0; i < number; i++)
		cout << list[i] << endl;
	cout << endl;
	system("pause");
}

void Sort(char **list, int number)
{
	system("cls");
	/*
		Реализация алгоритма сортировки списка студентов
	*/
	RussianMessage("Список отсортирован! ");
	system("pause");
}

char **RemoveStudent(char **oldList, int &number)
{
	system("cls");
	char str[100];
	RussianMessage("Введите фамилию студента для удаления: ");
	cin.getline(str, 100);
	/*
		Реализация алгоритма удаления студента из списка
	*/
	system("pause");
	return nullptr;
}

char **EditStudent(char **list, int number)
{
	system("cls");
	char str[100];
	RussianMessage("Введите фамилию студента для модификации: ");
	cin.getline(str, 100);
	/*
		Реализация алгоритма модификации фамилии студента
	*/
	system("pause");
	return list;
}

void FindStudent(char **list, int number)
{
	system("cls");
	char str[100];
	RussianMessage("Введите фамилию студента или несколько первых букв: ");
	cin.getline(str, 100);
	/*
		Реализация алгоритма поиска студента
	*/
	system("pause");
}