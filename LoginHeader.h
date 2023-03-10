#ifndef _LOGIN_H_
#define _LOGIN_H_
#include<iostream>
#include<fstream>
#include<string>
#include <cstring>

using namespace std;

const string defaultPass = "123456";

class Account {
public:
    string username;
    string password = defaultPass;
};

// File txt of Login: username -> password -> username -> password -> ...
class Login {
private:
    // return 0 if can not find the Account File
    // return 1 if find the account
    // return 2 if can not find the account
	int foundUsername(string filename);
	bool match(string a, string b); // to check if 2 string equal together

	int changePasswordInit(string filename);

public:
    Account userAccount;
    Login* Next = nullptr;

	Login() {
        userAccount.username = "";
        userAccount.password = "";
	}

	void login(string fileName); // login system
	void logout();
	void changePassword(string filename);
};

void loadUserAccount(Login* &userHead, string filename);
void saveUserAccount(Login* userHead, string filename);

Login* findUserByAccount(Login* AllUser, string username);
void addANewUser(Login* &AllUser, Login* newUser);
#endif

