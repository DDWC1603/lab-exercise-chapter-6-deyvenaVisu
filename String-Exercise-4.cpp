
#include <iostream>
using namespace std;

int main()
{
	char lowerToUpper[80];
	int i;

	strcpy(lowerToUpper, "This is a check");

	for(i=0;i<80;i++)
	{
		lowerToUpper[i] = toupper(lowerToUpper[i]);

	}

	cout<<lowerToUpper<<endl;
	return 0;
}
	
