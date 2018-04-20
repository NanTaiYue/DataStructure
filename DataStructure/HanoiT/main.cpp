#include <iostream>
#include <cstring>
using namespace std;

/*
汉诺塔问题：练习使用递归
*/
// n : 当前数量
// src: 源
// tmp：辅助
// dest: 目的地
void Hanoi(int n, string src, string tmp, string dest)
{
	if (n == 1) // 如果n=1，则直接将目标从src移动到dest
	{
		cout<<"from ("<<src.c_str()<<") to ("<<dest.c_str()<<")"<<endl;
	}
	else
	{
		// 1.如果n>1,则先将n-1个盘子，通过dest移动到tmp
		Hanoi(n-1, src, dest, tmp);
		// 2.将最后剩余的一个盘子，直接移动到dest
		cout<<"from ("<<src.c_str()<<") to ("<<dest.c_str()<<")"<<endl;
		// 3.最后将剩余的n-1个tmp上盘子通过src移动到dest
		Hanoi(n-1,tmp,src,dest);
	}
}

// 斐波拉契数列求解
// 1.递归算法
int Fac(int n)
{
	if (n <= 1) return n;
	else
	{
		return Fac(n-1) + Fac(n-2);
	}
}
// 2.非递归算法
// 采用递推算法求解
// 想要获取 第n项的值就需要取得第n-1和n-2项的值，由此可递推
int Fac2(int n)
{
	if (n <= 1) return n;
	int first = 0, second = 1;
	int now = 0;
	// 从第2项开始
	for (int i = 2; i <= n; i++)
	{
		now = first + second; // 当前值为 n-1 + n -2
		first = second;
		second = now;
	}
	return now;
}

// 求解阶乘
int factorial(int n)
{
	if (n <= 1) return 1;
	else
	{
		return n*factorial(n-1);
	}
}
// 递推算法
int factorial2(int n)
{
	if (n <= 1) return 1;
	int sum = 1;
	for (int i = 1; i <= n; i++)
	{
		sum = sum * i;
	}
	return sum;
}
int main()
{
	//Hanoi(3,"A","B","C");
	cout<<"Fac(20) = "<<Fac(20) <<endl;
	cout<<"Fac2(20) = "<<Fac2(20) <<endl;

	cout<<"factorial(8) = "<<factorial(8) <<endl;
	cout<<"factorial2(8) = "<<factorial2(8) <<endl;

	system("pause");
	return 0;
}