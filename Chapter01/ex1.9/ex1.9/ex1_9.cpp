//-----------------------------------------
//描述：用while循环将50到100的整数相加
//-----------------------------------------

#include<iostream>
using namespace std;

int main()
{
	int sum = 0, val = 50;
	while(val <= 100)
	{
		sum += val;
		++val;
	}

	cout << "The sum of 50 to 100 inclusive is: "
		 << sum << endl;

	return 0;
}