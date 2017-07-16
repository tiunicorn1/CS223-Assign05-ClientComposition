#include "stdafx.h"
#include "Client.h"
#include <iostream>

using namespace std;


Client::Client()
{
	clientID = ++clientNumber;
}


Client::Client(string lName, string fName, string mid, string strAddr, string c, string s, string z)
	:clientName(lName, fName, mid),
	clientAddr(strAddr, c, s, z)
{
	clientID = ++clientNumber;
}

void Client::displayClient()	const
{
	cout << endl << clientID << endl;
	clientName.displayName();
	clientAddr.displayAddr();
}