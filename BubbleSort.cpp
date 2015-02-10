#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
using namespace std;

int main(void)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int n = 10;
	char arrayOfValues[100];
	char *mediary = NULL;
	int temp = 0;
	int count = 0;
	vector<int> values;
	char comma;
	int value;
		ifstream myInputFile;
	myInputFile.open("input.txt");
	if (myInputFile.is_open())
	{
		myInputFile >> value;
	
	
		if( myInputFile )
		{
			values.push_back( value );
    			while( myInputFile >> comma >> value && comma == ',' )
    			{	
			values.push_back( value );
		 	}
		}

	// 			temp = myInputFile.get();
	// 			*mediary = char(temp);
	// 			if(temp != ',')
	// 			{
				
	// 			arrayOfValues[i] = atoi(mediary);
	// 			cout<<arrayOfValues[i];
	// 			i++;
	// 			count++;
	// 			}
	// 	}
	 	myInputFile.close();
	}

	else cout << "Unable to open file"; 



	for (j; j <= 10; j++)
	{
		for(k; k <= n- 2 - j; k++)
		{
			if (arrayOfValues[k+1] < arrayOfValues[k])
			{
				if(arrayOfValues != NULL)
				{
					temp = arrayOfValues[k];
					arrayOfValues[k] = arrayOfValues[k+1];
					arrayOfValues[k+1] = temp;
				}
			}

		}


	}
	i = 0;
	ofstream myOutputFile ("output.txt");
	for(i; i <= count; i++)
	{
		myOutputFile<<arrayOfValues[i]<<" , "<<endl;

	}
	myOutputFile.close();
}
