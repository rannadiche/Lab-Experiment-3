#include<iostream>
using namespace std;

int main()
{
    int arr[15], n, i, min, max, sum;
    
	cout << "Enter the size of the array: ";
    cin >> n;
    
    if(n > 15)
		cout << "Invalid input.";
	
	else
	{
		cout << "Enter the elements of the array: ";	
		
		for (i = 0; i < n; i++)
        	cin >> arr[i];
    	
		max = arr[0];
    	
		for (i = 0; i < n; i++) 
    	{
        	if (max < arr[i])
            max = arr[i];
    	}

    	min = arr[0];
    
		for (i = 0; i < n; i++)
    	{
        	if (min > arr[i])
            min = arr[i];
    	}
 
 		sum = 0;
 	
  		for (i = 0; i < n; i++)
		{
			sum += arr[i]; 	
		}  
		
	cout << "The largest integer is: " << max;
    cout << endl << "The smallest integer is: " << min;
    cout << endl << "The sum of all the integers is: " << sum;
    
	}
    
	return 0;
}
