#include<iostream>
using namespace std;

int main()
{
	//------------2.26------------------------------
	//const int buf;//错误：常量必须初始化
	//int cnt = 0;//正确
	//const int sz = cnt; // 正确
	//++cnt; //正确
	//++sz;  //错误：sz是常量，不能更改其值


	//-------------2.27-----------------------------
	//int i = -1, &r = 0;//错误：引用不是对象，引用只能绑定在对象上，而不能与字面值或某个表达式的计算结果绑定在一起
	//const int i = -1, &r = 0;//正确，上面的特例：在初始化常量引用时允许用任意表达式作为初始值（允许为一个常量引用绑定非常量的
	                          //对象、字面值，甚至是一般表达式）
	
	//---------------2.28--------------------------------
	//int i, *const cp;//后者不合法，常量必须初始化
	//int *pi, *const p2;//后者不合法，常量必须初始化
	//const int ic, &r = ic;//不合法
	//const int *const p3;//错误：这里应该是欲定义一个指向int型常量的常量指针，但是常量要有初始值
	
	
	return 0;
}