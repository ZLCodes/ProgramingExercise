// test2.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int * p = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> p[i];
	}
	for(int i=0;i<n-1;i++)
		for (int j = 0; j < n - i - 1; j++)
		{
			if (p[j] > p[j + 1])
			{
				int temp = p[j + 1];
				p[j + 1] = p[j];
				p[j] = temp;
			}
		}

	for (int i = 0; i < n; i++)
		cout << p[i] << " ";
	delete[]p;
    return 0;
}

