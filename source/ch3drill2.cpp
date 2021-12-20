#include "std_lib_facilities.h"

int main () {

cout << "Enter the name of the person you want to write to:\n";
string first_name;
cin >> first_name;

cout << "Enter the name of another friend:\n";
string friend_name;
cin >> friend_name;

char friend_sex;
cout << "Enter an 'm' if the friend is male and 'f' if the friend is female:\n";
cin >> friend_sex;


cout << "Enter the age of the recipient.\n";
	int age;
	cin >> age;

cout << "\n\nDear " << first_name << ",\n";


cout << "\n\tHow old are you? I am fine. I miss you.\n";
cout << "I hope you have a good condition and I would like to see you soon.\n";

cout << "Have you seen " << friend_name << " lately?\n";

if ('m' == friend_sex)
{
	cout << "If you see " << friend_name << " please ask him to call me.\n";
}
else if ('f' == friend_sex)
{

	cout << "If you see " << friend_name << " please ask her to call me.\n";
}

	
	cout << "I hear you just had a birthday and you are " << age << " years old.\n";
	if (0 >= age || 110 <= age)
	{

		simple_error("you're kidding!");
	}	

	if (12 > age)
	{
	cout << "Next year you will be " << age+1 << ".\n";
	}

	if (17 == age)
	{
		cout << "Next year you will be able to vote.\n";
	}

	if (70 < age)
	{
		cout << "I hope you are enjoying retirement.\n";
	}

	cout << "Yours sincerely, \n\n\n";
	cout << "Reni\n";

	return 0;
}

