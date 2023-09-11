#include <iostream>
#include <string>  
using namespace std;

int main()
{
	char s[500];
	cout << "please give the sentence: ";
	gets_s(s);
	int word{ 0 };
	for (int i = 0; s[i] > 0; i++)
	{
		if (s[i] == ' ')
		{
			word++;
		}
	}
	word = word + 1;
	cout << "the numbers of words is: " << word;


	return 0;
}