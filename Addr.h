#pragma once
#include <string>

using namespace std;

class Addr
{
public:
	Addr();
	Addr(string strAddr, string city, string state, string zip);

	void setAddress(string a, string c, string s, string z);
	void displayAddr()	const;

private:
	string streetAddr;
	string city;
	string state;
	string zip;
};

