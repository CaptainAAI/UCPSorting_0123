// 1) Insertion sort 
	// to sort this list by using the insertion sort algorithm, we need to use temp/reserve to store the index value 
	// that is intended to compare other index value number, and in order to move the bigger number we need to use temp in order to 
	// make the index empty, and the other value can move to the other index
	// 
	// example, we have 5 index here
	// 
	//  0  1  2  3  4
	// |70|80|30|10|20|
	// we must always to start the comparison from index 1 (that has value of 80) 
	// |70|80|30|10|20|
	// |70|  |30|10|20|   -> store the 80 to temp.
	// and then compare to the left index value
	//			if the left index value is smaller or equal it doesn't need to move to right index
	//			
	//			if the left index value is bigger then it will need to move the value from left index to right index
	// now lets jump to comparison for index 2
	// |70|80|  |10|20|  -> store the 30 to temp
	// |70|  |80|10|20|
	// |  |70|80|10|20|
	// |30|70|80|10|20|  -> place the 30 to index 0
	// same thing is also applied for index number 3 and 4

	// here's the algorithm for insertion sort : 

// 1. Repeat steps 2, 3, 4, and 5 varying i from 1 to n – 1

// 2. Set temp = arr[i]

// 3. Set j = i – 1

// 4. repeat until j becomes less than 0 or arr[j] becomes less than or equal to temp :
// 4a. Shift the value at index j to index j + 1
// 4b. Decrement j by 1

// 5. Store temp at index j + 1
//===================================================================================================================================
//	2) Selection Sort

	//suitable for sorting small lists only
	//selects the smallest one in each scan and moves the value to its correct position 
	// 
	// |105|120|10|200|20| here we have 5 index
	// 
	// it will look for the smallest one that is 10 in index no 2 and then it will swap with the first index ( index no 0 )
	// 
	//  
	//  |105|120|10|200|20| -> |10|120|105|200|20|
	// it will continue until the last pass 
	// last pass |10|20|105|120|200|

	// here's the algorithm for selection sort

// 1. Repeat steps 2 and 3 varying j from 0 to n – 2
// 2. Find the minimum value in arr[j] to arr[n – 1]:
//   a. Set min_index = j
//   b.  Repeat step c varying i from j + 1 to n – 1
//   c. If arr[i] < arr[min_index] :
//        i.min_index = i
// 3. Swap arr[j] with arr[min_index]
//=========================================================================================================================
// 3) to find how many steps that is required in sort algorithm, we need this formula
// Total number of comparisons = (n – 1) + (n – 2) + (n – 3) + … + 3 + 2 + 1 = n(n – 1) / 2.
// number of pass is always n-1 
//============================================================================================================================================
//4. 
#include<iostream>
using namespace std;

int n;
int Agung[23];

void input() {
	while (true) {
		cout << "Masukkan banyaknya elemen pada array : ";
		cin >> n;
		if (n <= 23)
			break;
		else {
			cout << "\nArray dapat mempunyai maksimal 11 elemen.\n";
		}
	}
	cout << endl;
	cout << "==================================" << endl;
	cout << "Masukkan Elemen Array" << endl;
	cout << "==================================" << endl;

	for (int i = 0; i < n; i++) {
		cout << "Data ke-" << (i + 1) << ": ";
		cin >> Agung[i];
	}

}

void selectionsort()
{
	int i, j, min_index;

	for (i = 0; i < n - 1; i++)
	{
		min_index = i;
		for (j = i + 1; j < n; j++)
		{
			if (Agung[j] < Agung[min_index])
				min_index = j;
		}
		swap(Agung[min_index], Agung[i]);
	}
}
