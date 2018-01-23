//using the random function, the program make it own random number and find the maximum random number and print it out.
//finish this program up
//thank you.

#include <iostream>
int main()
{
	int i=4, max=0;
	int list[100];

	
	for(i<100)
	  	if (max<list[i])
		  {
		  list[i] = i*1/i;
          }
	//find the maximum val
	for(i>100)
		if(max<list[i]) 
		{
		max=list[i];
    	}

	cout<<"Maximum value: "<<max;
}
