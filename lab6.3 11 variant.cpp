#include <iostream>
using namespace std;

template <typename T>
void create(T* &a, int n,int i)
{
	if (i<=n-1)
	{
		a[i] = -20 + rand() % (41);
		cout << a[i] << " ";
		create(a, n, i + 1);
	}
}

void create(int* & a, int n, int i)
{
	if (i <= n - 1)
	{
		a[i] = -20 + rand() % (41);
		cout << a[i] << " ";
		create(a, n, i + 1);
	}
}
template <typename T>
void sort(T*& q, int n, int i)
{
	int zamina;
	
		int k = 0;
		for (int j = 0; j < n-1; j++)
		if (q[j] > q[j + 1])
		{
			zamina = q[j];
			q[j] = q[j + 1];
			q[j + 1] = zamina;
			k = 1;
		}
		if (k == 0)
			return;
		if (i < n - 1)
			sort(q, n, i + 1);
}

void sort(int* &q, int n, int i)
{
	int zamina;

	int k = 0;
	for (int j = 0; j < n - 1; j++)
		if (q[j] > q[j + 1])
		{
			zamina = q[j];
			q[j] = q[j + 1];
			q[j + 1] = zamina;
			k = 1;
		}
	if (k == 0)
		return;
	if (i < n - 1)
		sort(q, n, i + 1);
}

template <typename T>
void show(T*& q, int n,int i)
{
	if (i < n)
	{
		cout << q[i] << " ";
		show(q, n, i + 1);
	}

}

void show(int* &q, int n, int i)
{
	if (i < n)
	{
		cout << q[i] << " ";
		show(q, n, i + 1);
	}

}

int main()
{
	srand((unsigned)time(NULL));
	int n, i = 0;

	cout << "n="; cin >> n;
	int* q = new int[n];

	create(q, n,i);
	cout << endl;
	sort(q, n,i);
	show(q, n,i);

	return 0;
}