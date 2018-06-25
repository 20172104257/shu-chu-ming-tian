// shu-chu-ming-tian.cpp : 定义控制台应用程序的入口点。
//

// dayyearmonth.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class Cdate
{
private:
	int year;
	int month;
	int day;
public:
	//Cdate();
	int init(int y, int m, int d);
	int display();
	int nexday();
};
/*date::Cdate()
{
year = 2018;
month = 1;
day = 1;
}*/
int Cdate::init(int y, int m, int d)
{
	year = y;
	month = m;
	day = d;
	return 0;
}
int Cdate::display()
{
	cout << year << month << day << endl;
	return 0;
}int Cdate::nexday()
{
	int d[12] = { 31,28,31,30,31,30,31,30,31,30,31,30 };
	day++;
	if (year % 400 == 0 || (year % 100 != 0) && year % 4 == 0)
		d[1] = 29;
	if (d[month - 1] < day)
	{
		day = 1;
		month++;
	}
	if (month ==13)
	{
		month = 1;
		year++;
	}
	return 0;
}
int main()
{
	Cdate ojbk;
	ojbk.init(2017, 2, 28);
	ojbk.nexday();
	ojbk.display();
	return 0;
}