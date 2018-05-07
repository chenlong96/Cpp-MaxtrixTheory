/* Inverse.cpp 求逆序数*/
#include <iostream>
void main()
{
	const int N = 10;/*定义N是10*/
	int i, j, n, t, s, a[N];
	std::cout << "n="; std::cin >> n;/*n是排列的长度，小于或等于N*/
	for (i = 0; i < n; i++)
	{
		std::cout << "a[" << i << "]="; std::cin >> a[i];/*a[i]是排列中的元素，i=0,1,2,...n-1*/
	}
	t = 0;/*t代表排列的逆序数，初始化为0*/
	for (i = 0; i < n; i++)
	{
		s = 0;/*s是元素a[i]的逆序数*/
		for (j = 0; j < i; j++)
			if (a[j] > a[i]) s++;
		std::cout << a[i] << "inverse=" << s << std::endl;
		t = t + s;
	}
	std::cout << "t=" << t << std::endl;
	system("pause");
}