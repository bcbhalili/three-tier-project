// Associated file: database.txt

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

	ifstream inData;
	string userAccountName;
	string userPassword;
	string accountName;
	string password;
	inData.open("database.txt");
	char ch = ' ';
	int limit = 0;

	cout << "Enter account name: ";
	cin >> userAccountName;
	cout << "Enter password: ";
	cin >> userPassword;
	inData >> accountName;
	while (inData) {

		inData.get(ch);
		inData >> password;
		if (accountName == userAccountName && password == userPassword) {

			cout << "Welcome, user " << userAccountName << "!" << endl;
			system("pause");
			system("cls");
			break;

		}
		else {

			limit++;
			cout << "Invalid account name and/or password!" << endl;
			if (limit > 2) {

				cout << "You have reached the maximum number of attempts!" << endl;
				cout << "Program terminates." << endl;
				break;

			}
			cout << "Please provide another account name and password." << endl;
			system("pause");
			system("cls");
			cout << "Enter account name: ";
			cin >> userAccountName;
			cout << "Enter password: ";
			cin >> userPassword;

		}

		inData >> accountName;

	}

	system("pause");
	return 0;

}