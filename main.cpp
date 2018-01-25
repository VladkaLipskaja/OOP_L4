#include <iostream>
#include <cstdlib>
#include <string>
#include "Source.h"
#include "Error.h"
#include <cfloat>
#include <cctype>

using namespace std;
int main()
{
	int x1, y1, z1;
	string s;
	system("color F0");
	cout << "step C, class:Vaector, operations: +,-,*,-,*a, ==,+=,-=,*=" << endl;
	Vector v1(0,0,0), v2(0,0,0);
	for (int i = 0; i < 6; ) {
		try {
			cout << "Put in value" << endl;
			cin >> s;
			for each (char c in s)	if (!(isdigit(c) || c == '.')) throw StrangeSymbols();
			if (s.find_first_of('.') != s.find_last_of('.')) throw Points();
			if (s.length() > 38) throw OverFlow();
			switch (i) {
			case 0: v1.SetX(stof(s)); break;
			case 1: v1.SetY(stof(s)); break;
			case 2: v1.SetZ(stof(s)); break;
			case 3: v2.SetX(stof(s)); break;
			case 4: v2.SetY(stof(s)); break;
			default: v2.SetZ(stof(s)); break;
			} i++;
		}
		catch (StrangeSymbols &e) { e.ErrorPrint(); i = 6; }
		catch (Points &e) { e.ErrorPrint(); i = 6; }
		catch (OverFlow &e) { e.ErrorPrint(); i = 6; }
	}

	v1.GetC();
	v2.GetC();

	Vector v(1.4, 1, 0);
	Vector l(5.3, 5, 0);
	v.GetC();
	l.GetC();
	Vector c = v + l;
	Vector f = v - l;
	Vector g = v * l;
	Vector k = -l;
	Vector p = l * 5;
	cout << "c=v+l" << endl;
	c.GetC();
	c = v1 + v2;
	c.GetC();
	cout << "f=v-l" << endl;
	f.GetC();
	f = v1 - v2;
	f.GetC();
	cout << "g=v*l" << endl;
	g.GetC();
	g = v1*v2;
	g.GetC();
	cout << "k=-l" << endl;
	l.GetC();
	k.GetC();
	v1.GetC();
	k = -v1;
	k.GetC();
	cout << "p=l*5" << endl;
	p.GetC();
	p = v1 * 5;
	v1.GetC();
	p += l;
	p.GetC();
	p += v1;
	p.GetC();
	cout << "1/0 " << (l == v)<<endl;
	cout << "1/0 !=" << (l != v);
	system("pause");
}
