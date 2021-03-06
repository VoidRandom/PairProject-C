// WordCount.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"

string vv, s;
char *txi = nullptr;
string txo;
int num = 10, m=1;
int bo = 0;

int main(int agrc, char **agrv)
{
	if (agrc < 2)
		return 0;

	int i = 1;

	while (i < agrc)
	{
		vv = agrv[i];
		if (vv == "-i")
		{
			//输入
			txi = agrv[i + 1];
			i += 2;
			continue;
		}
		if (vv == "-o")
		{
			//输出
			txo = agrv[i + 1];
			i += 2;
			continue;
		}
		if (vv == "-w")
		{
			s = agrv[i + 1];
			//权重
			if (s == "1")
				bo = 1;
			i += 2;
			continue;
		}
		if (vv == "-m")
		{
			//词组长度
			m = atoi(agrv[i + 1]);
			i += 2;
			continue;
		}
		if (vv == "-n")
		{
			//输出个数
			num = atoi(agrv[i + 1]);
			i += 2;
			continue;
		}
	}
	charcount(txi, txo);
	wordcount(txi, txo, bo);
	linecount(txi, txo);
	if(m>=2)
	wordmax(txi, txo, num, m);
	else
		wordmax1(txi, txo, num);
	cout << "Task Ok" << endl;
	return 0;
}
