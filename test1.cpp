// test1.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int in;
	unsigned long s1=1, s2=1, temp;
	cin >> in;
	if (in < 1)
		in = 1;
	if (in > 1000000)
		in = 1000000;
	for (int i = 3; i <= in; i++)
	{
		temp = s1 + s2;
		s1 = s2;
		s2 = temp;
	}
	cout << s2 % 10007;
    return 0;
}

