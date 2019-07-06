#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	string word;

	cout << "Enter a word: ";
	cin >> word;

	for (int i = word.size() - 1; i >= 0; i--)
	{
		cout << word[i];
	}

	cout << "\nBye.\n";

	system("pause");
	return 0;
}