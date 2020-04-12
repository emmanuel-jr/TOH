#include<iostream>
using namespace std;

//tower of HANOI function implementation
void Tower(int n, char start, char mid, char end)
{
	if (n == 1)
	{
		cout << "Move Disk " << n << " from column" << start << " to column" << end << endl;

		return;
	}

	Tower(n - 1, start, end, mid);
	cout << "Move Disk " << n << " from column" << start << " to column" << end << endl;
	Tower(n - 1, mid, start, end);
}

//main program
int main()
{
	int n;

	cout << "Enter number of disks: ";
	cin >> n;

	int* array = new int[3 * n];
	int c = 1;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (j == 0)
			{
				array[3 * i + j] = c;
				c++;
			}
			else
				array[3 * i + j] = 0;
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 3; j++)
			cout << array[3 * i + j] << " ";
		cout << endl;
	}


	//calling the TOH 
	Tower(n, 'x', 'y', 'z');

	return 0;
}


