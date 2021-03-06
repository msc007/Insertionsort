#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>

using namespace std;

/*BIG-O(n^2) insertion sort
  
	sorted | unsorted
		 ^   |
		  \---

	insert unsorted part into sorted part.
*/
int main()
{
	vector<int> vec{ 7,3,1,2,4,6 };

	int j;
	int elementToInsert;

	//For each unsorted element
	for (int i = 1; i < vec.size(); i++) {
		elementToInsert = vec[i];
		j = i;
		//Find index to insert in sorted part
		while (j > 0 && vec[j-1] > elementToInsert) {
			vec[j] = vec[j-1];
			j = j - 1;
		}
		//Insert elment into sorted part
		vec[j] = elementToInsert;
	}

	//Print sorted vector
	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << endl;
	}

	string s;
	cin >> s;
	return 0;
}

