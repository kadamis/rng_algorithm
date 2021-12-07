#include <algorithm>
#include <vector>
#include <list>
#include <iostream>
#include <ctime>

int main()
{
	using namespace std;
	srand(time(NULL));
	
	vector <int> numsInVEC(5);
	generate (numsInVec.begin(),numsInVec.end(),rand);
	
	cout << "Vector's elements are: ";
	for (size_t index = 0; index < numsInVec.size (); ++index)
		cout << numsInVec [index] << "";
	cout <<  endl;
	
	list <int> numsInList (5);
	generate_n (numsInList.begin (), 3, rand);
	
	cout << "List's elements are: ";
	for (auto element = numsInList.begin();
		element != numsInList.end();
		++element)
		cout << *element << '';
	
	return 0;
}