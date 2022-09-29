#include<iostream>


using  std::endl;
using  std::cout;
using  std::cin;

void task1()
{
	int i, var, j;

	cout << "Enter num: ";
	cin >> var;
	for (i = 0; i <= var; i++)
	{
		for (j = 0; j <= i; j++)
		{
			cout << j;
		}
		cout << endl;
	}
	cout << endl;
}
void task2()
{
	int n;
	double c = 1;
	cout << "Enter: ";
	cin >> n;
	cout << c << " ";
	for (int k = 0; n > k; k++)
	{
		cout << c * (n - k) / (k + 1) << " ";
		c = c * (n - k) / (k + 1);
	}
	cout << endl;
}
void task3()
{
	cout << "Enter num:\n";
	int summ = 0, c = 0;
	int num, u = 0;
	while (u == 0) {
		cin >> num;
		if (num == 0) {
			u ++;
			continue;
		}
		c++;
		summ += num;
	}
	cout << "Answer: " << double(summ) / c << endl;
}

int main()
{
	int choice = 0;
	while (true)
	{
		cout << "\t<<Menu>>\n1 - 'Number Triangle'\n2 - 'Binomial coefficient'\n3 - 'Calculation of the arithmetic mean'\n";
		cin >> choice;
		switch (choice)
		{
		case 1:
		{
			task1();
			break;
		}
		case 2:
		{
			task2();
			break;
		}
		case 3:
		{
			task3();
			break;
		}
		default:
			return 0;
		}

	}
}

