#include <iostream>
#include <cstring>
using namespace std;

/*
��ŵ�����⣺��ϰʹ�õݹ�
*/
// n : ��ǰ����
// src: Դ
// tmp������
// dest: Ŀ�ĵ�
void Hanoi(int n, string src, string tmp, string dest)
{
	if (n == 1) // ���n=1����ֱ�ӽ�Ŀ���src�ƶ���dest
	{
		cout<<"from ("<<src.c_str()<<") to ("<<dest.c_str()<<")"<<endl;
	}
	else
	{
		// 1.���n>1,���Ƚ�n-1�����ӣ�ͨ��dest�ƶ���tmp
		Hanoi(n-1, src, dest, tmp);
		// 2.�����ʣ���һ�����ӣ�ֱ���ƶ���dest
		cout<<"from ("<<src.c_str()<<") to ("<<dest.c_str()<<")"<<endl;
		// 3.���ʣ���n-1��tmp������ͨ��src�ƶ���dest
		Hanoi(n-1,tmp,src,dest);
	}
}

// 쳲������������
// 1.�ݹ��㷨
int Fac(int n)
{
	if (n <= 1) return n;
	else
	{
		return Fac(n-1) + Fac(n-2);
	}
}
// 2.�ǵݹ��㷨
// ���õ����㷨���
// ��Ҫ��ȡ ��n���ֵ����Ҫȡ�õ�n-1��n-2���ֵ���ɴ˿ɵ���
int Fac2(int n)
{
	if (n <= 1) return n;
	int first = 0, second = 1;
	int now = 0;
	// �ӵ�2�ʼ
	for (int i = 2; i <= n; i++)
	{
		now = first + second; // ��ǰֵΪ n-1 + n -2
		first = second;
		second = now;
	}
	return now;
}

// ���׳�
int factorial(int n)
{
	if (n <= 1) return 1;
	else
	{
		return n*factorial(n-1);
	}
}
// �����㷨
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