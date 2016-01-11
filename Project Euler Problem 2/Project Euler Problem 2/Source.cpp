/*Each new term in the Fibonacci sequence is generated by adding the previous two terms.By starting with 1 and 2, the first 10 terms will be :
 * 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
 *By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even - valued terms.
*/
#include <iostream>
using namespace std;
int main()
{
	int currTerm = 2;
	int pastTerm = 1;
	int sum = currTerm;
	int maxValue = 4000000;
	while (currTerm < maxValue)
	{
		int placeHolder = currTerm;
		currTerm += pastTerm;
		pastTerm = placeHolder;
		if (currTerm % 2 == 0 && currTerm < maxValue)
		{
			sum += currTerm;
		}
	}
	cout << sum << endl;
	system("PAUSE");
}