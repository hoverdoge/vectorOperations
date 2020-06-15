#include <iostream>
#include <vector>
#include <string>
#include <algorithm> 
#include <cstdlib>

using namespace std;
vector <int> vec{};

void printOptions()
{
	cout << "P - Print numbers\n" << "A - Add numbers\n" << "M - Find mean\n" << "S - Find smallest element\n" << "L - Find largest element\n" << "Q - Quit program\n";
}

void printNumbers()
{
	if (vec.size() == 0)
	{
		cout << "Vector is empty." << endl;
	}
	else
	{
		for (int i = 0; i < vec.size(); i++)
		{
			if (i == vec.size() - 1)
			{
				cout << vec.at(i) << endl;
			}
			else
			{
				cout << vec.at(i) << ", ";
			}
		}

	}
}

void addInt()
{
	cout << "What integer would you like to add to the vector?" << endl;
	int input;
	cin >> input;
	if (input * 0 != 0)
	{
		cout << "invalid input";
	}
	else
	{
		vec.push_back(input);
		cout << "The new vector is ";
		for (int i = 0; i < vec.size(); i++)
		{
			if (i == vec.size() - 1)
			{
				cout << vec.at(i) << endl;
			}
			else
			{
				cout << vec.at(i) << ", ";
			}
		}
	}
	
}

void findMean()
{
	double sum{ 0 };
	for (int i = 0; i < vec.size(); i++)
	{
		sum += vec.at(i);
	}
	if (vec.size() > 0)
	{
		cout << "The mean is " << sum / vec.size() << endl;
	}
	else
	{
		cout << "No data; vector is empty.\n";
	}
}

void findSmall()
{
	if (vec.size() > 0)
	{
		cout << "The smallest number is " << *min_element(vec.begin(), vec.end()) << endl;
	}
	else
	{
		cout << "No data; vector is empty.\n";
	}
	
}

void findLarge()
{
	if (vec.size() > 0)
	{
		cout << "The largest number is " << *max_element(vec.begin(), vec.end()) << endl;
	}
	else
	{
		cout << "No data; vector is empty.\n";
	}
}

int quit()
{
	cout << "Goodbye";
	exit(0);
}

int main()
{
	//Displays possible inputs to the user
	printOptions();
	//handles input
	char input;
	while (true)
	{
		cin >> input;
		if (input == 'p' || input == 'P')
		{
			printNumbers();
			printOptions();
		}
		else if (input == 'a' || input == 'A')
		{
			addInt();
			printOptions();
		}
		else if (input == 'm' || input == 'M')
		{
			findMean();
			printOptions();
		}
		else if (input == 's' || input == 'S')
		{
			findSmall();
			printOptions();
		}
		else if (input == 'l' || input == 'L')
		{
			findLarge();
			printOptions();
		}
		else if (input == 'q' || input == 'Q')
		{
			quit();
		}
		else
		{
			cout << "invalid input\n";
			printOptions();
		}
	}
}


