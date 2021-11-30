#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool errorBrackets(const string str)
{
	int k = 0, n = 0;
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '(')
			k++;
		if (str[i] == ')')
		{
			n++;
			if (k <= 1)
			{
				k = 0;
				n = 0;

			}

		}
		if (k >= 2 && n >= 2)
			return true;
		i++;
	}
	return false;
}

string rezStr(string str)
{
	string st;
	size_t pos1 = -1;
	size_t pos2 = 0;

	for (size_t i = 0; i < str.length(); i++)
	
	{
		if (str[i] == '(' && pos1 == -1)
			pos1 = i;
		if (str[i] == ')' && pos1 >= 0)
		{
			pos2 = i;
			str.erase(pos1, (pos2 - pos1 + 1));
			break;
		}
	
	}
	
		return str;
	
}

bool isBrackets(string str)
{
	int pos1 = -1;
	int pos2 = 0;
	
	for(int i = 0; i < str.length(); i++)
	
	{
		if (str[i] == '(' && pos1 == -1)
			pos1 = i;
		if (str[i] == ')' && pos1 >= 0)
		{
			return true;
		}
	
	}
	return false;
}

void deleteBrackets(string str)
{
	string s;
	if (!errorBrackets(str))
	{
		s = rezStr(str);
		while(isBrackets(s))
			s = rezStr(s);
		cout << "new row: " << s << endl;
	}
	else
		cerr << "error: nested brackets ";
	
		
}



int main()
{
	string str;
	cout << "Enter string:" << endl;
	getline(cin, str);
	deleteBrackets(str);
	return 0;
}
