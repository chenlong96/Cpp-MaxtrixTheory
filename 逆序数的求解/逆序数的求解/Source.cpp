/* Inverse.cpp ��������*/
#include <iostream>
void main()
{
	const int N = 10;/*����N��10*/
	int i, j, n, t, s, a[N];
	std::cout << "n="; std::cin >> n;/*n�����еĳ��ȣ�С�ڻ����N*/
	for (i = 0; i < n; i++)
	{
		std::cout << "a[" << i << "]="; std::cin >> a[i];/*a[i]�������е�Ԫ�أ�i=0,1,2,...n-1*/
	}
	t = 0;/*t�������е�����������ʼ��Ϊ0*/
	for (i = 0; i < n; i++)
	{
		s = 0;/*s��Ԫ��a[i]��������*/
		for (j = 0; j < i; j++)
			if (a[j] > a[i]) s++;
		std::cout << a[i] << "inverse=" << s << std::endl;
		t = t + s;
	}
	std::cout << "t=" << t << std::endl;
	system("pause");
}