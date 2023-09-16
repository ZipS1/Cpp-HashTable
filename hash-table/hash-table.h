#pragma once
#include <string>

/*
* �������� ��������� (������������ ������������).
* ��������� ��������:
* ����� �������� (10 ��������) -> �����
* 
* ���������: ��������� ������ �� ����������,
* �.�. � �������� ������ ���������
* ����� ������������������ �� 10 ��������.
*/

/*
* ������������ ������������
* ����� = h(x)+ci+d(i^2)
*/

/*
* ����������� ����
* h(x) = x mod size
* ��� x � �������� ��������, 
* size � ���������� ����������� ���������� ��������� �������� ����������\
* (�, ��� ���������, ���������� ���������� ������� � ������������ ���������).
*/

namespace HashTable
{
	class StringHashTable
	{
	public:
		StringHashTable();
		bool insert(std::string key, std::string value);
		bool remove(std::string key);
		std::string getValue(std::string key);
		// TODO: make it iterable
		// TODO: overload operator []
		~StringHashTable();
	private:
		static const int initialSize = 10;
		int size = initialSize;
		std::string* table;

		int hash(std::string key);
		int getAsciiSum(std::string str);

	};
}