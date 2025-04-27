#include <iostream>
#include <string>
//#include <cctype>
using namespace std;

void calculateVowels(const string&);

int main()
{
	string sentence;
	getline(cin, sentence);
	
	return 0;
}
void calculateVowels(const string &text) {
	char ch;
	int vowels = 0, consonents = 0;
	for (int i = 0; i < text.length(); i++) {
		ch = text[i];
		tolower(ch);
		if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
			vowels++;
		else
			consonents++;
	}
	cout << "Total no. of vowels are : " << vowels <<
		endl << "Total no. of consonents are : " << consonents << endl;
}