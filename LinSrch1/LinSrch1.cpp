// A code for linear search, which scans through the sequence, looking
// for v. The loop invariant here is vector of indexes for elements matching v.
//
// Checking loop invariant:
//  * Initialization phase:  vector i is empty and lists all matching elements already found (which is none).
//  * Maintenance phase:	 after each detection (if any) of v in vector A, the index of occurence is added to vector i.
//							 In case of no occurences, the vector remains empty.
//							 Thus, vector i lists all occurences of v that have been found so far.
//  * Termination phase:	 all vector A has been searched through and each occurence has been added to vector i.
//							 In case of no occurences, the vector remains empty.
//							 Thus, vector i lists all occurences of v, that have been found during all search.
//
// As one can see, in all three phases the loop invariant is valid result - the index vector is either empty (no v found)
// or list the indexes of v occurence in vector A.

#include <iostream>
#include <vector>
using namespace std;


int main()
{
	// Specify value to be searched and vector, in which element should be found
	int v = 7;
	vector<int> A = { 5,8,10,12,4,2,6,1,7,0,11,15,9,3,13,14,7,7 };
	vector<int> i;		// Initially empty vector
	
	int k = 0;


	// Make linear search by checking every element of vector and comparing it with v
	// If the elements match, the answer has been found, the index of the element
	// is appended at the end of the index vector i
	for (k = 0; k < A.size(); k++)
		if (A[k] == v)
			i.push_back(k);
	
	// Output results. Two cases:
	//	* i is emtpy,  if no element v in vector A
	//  * i is vector, if the element v is present in vector A (found at least once)
	if (i.size() == NULL)
		cout << "Vector element v = " << v << " was not found!\n";
	else
	{
		cout << "Vector element v = " << v << " is located at i = [";
		for (k = 0; k < i.size(); k++)
			cout << i[k] << ",";		// Output index vector elements separated by comma
		cout << "\b].\n";
	}
	
	return 0;
}

