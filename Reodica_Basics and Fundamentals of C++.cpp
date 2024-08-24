#include <iostream>
#include <algorithm>
using namespace std;

//Data
int number[10], number2[10];
int combined_set[20];
int temp;

int main()
{
	system("color 3");

	cout << "Input 10 numbers\n";
	for (int i = 0 ; i < 10 ; i++)
	{
		cin >> number[i]; 
	}
	
	cout << "Input 10 numbers again\n";
	for (int i = 0 ; i < 10 ; i++)
	{
		cin >> number2[i];
	}
	


	cout << "First set of numbers input was\n";
	for (int j = 0 ; j < 10 ; j++)
	{
		cout << number[j] << " ";
	}
	
	cout << "\nSecond set of numbers was\n";
	for (int j = 0 ; j < 10 ; j++)
	{
		cout << number2[j] << " ";
	}
	
	cout << "\nCombined set of numbers\n";
	
	//combine both arrays
	for (int i = 0 ; i < 10 ; i++)
	{
		combined_set[i] = number[i];
	}
	
	for (int i = 0 ; i < 10 ; i++)
	{
		combined_set[10 + i] = number2[i];
	}
	
	for (int i = 0 ; i < 20 ; i++)
	{
		cout << combined_set[i] << " ";
	}
	
	cout << endl << endl <<"================[Final output]================\n";


	//Sort Array
	
	//Bubble sort
	for(int i = 0 ; i < 20 - 1 ; ++i)
	{
		 for(int j = 0 ; j < 20 - i - 1 ; ++j)
		{
		 		if (combined_set[j] < combined_set[j + 1]) 
				{
                temp = combined_set[j];
                combined_set[j] = combined_set[j + 1];
                combined_set[j + 1] = temp;
				}
		}
	}

	
	//Print arranged
	
	cout << "Arranged Set\n";

	for (int i = 0 ; i < 20 ; i++)
	{
		cout << combined_set[i] << " ";
	}
	
	


return 0;
}