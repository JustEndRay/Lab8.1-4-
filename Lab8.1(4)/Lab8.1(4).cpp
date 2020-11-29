#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <string>
using namespace std;

int Check(const string str)
{
	int k = 0;
	size_t pos = 0;
	while ((pos = str.find("no", pos, 5)) < str.size()))
	{
		k++;
		pos += 3;
	}
	return k;
}
string Change(string& s)
{
	size_t pos = 0;
	while ((pos = s.find("no", pos)) != -1)
		s.replace(pos, 2, "***");
	return s;
}
int main()
{
	string str;
	cout << "Enter string:" << endl;
	getline(cin, str);
	cout << "String contained " << Check(str) << " groups of 'no' or groups of 'on'" << endl;
	Change(str);
	cout << "Modified string (param) : " << str << endl;
	return 0;
}