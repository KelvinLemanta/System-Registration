// registering to the system
#include <iostream>
using namespace std;

int main()
{
	string name, catgry, loc, gnre, email, usernme;
	int tel, pobox, passwrd;
	cout << "Input category either Publisher or Writer.";
	cin >> catgry;
	cout << "Input name.";
	cin >> name;
	cout << "Input genre of work.";
	cin >> gnre;
	cout << "input location.";
	cin >> loc;
	cout << "Input telephone contact.";
	cin >> tel;
	cout << "Input email.";
	cin >> email;
	cout << "Input P.O Box address.";
	cin >> pobox;
	cout << "Input your new username."; 
	cin >> usernme;	
	cout << "Input the password (numeric) to your account.";
	cin >> passwrd;
	cout << endl;	
	return 0;
}

