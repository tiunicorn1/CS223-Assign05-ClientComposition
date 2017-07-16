#include "stdafx.h"
#include "Addr.h"
#include <iostream>

using namespace std;

Addr::Addr()
{
	streetAddr = "no address";
	city = "no city";
	state = "no state";

}


Addr::Addr(string strAddr, string aCity, string aState, string aZip)
{
	streetAddr = strAddr;
	city = aCity;
	state = aState;
	zip = aZip;
}


void Addr::setAddress(string a, string c, string s, string z)
{
	streetAddr = a;
	city = c;
	state = s;
	zip = z;
}

void Addr::displayAddr()	const
{
	cout << streetAddr << endl;
	cout << city << ", " << state << " " << zip << endl;
}
