// https://www.codechef.com/problems/BIT2A

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin >> arr[i];
	    int c =0;
	    for(int i=0;i<n;i++)
	    {
	        
	        c=0;
	        for(int j=i+1;j<n;j++)
	        {
	            if(arr[j]>arr[i])
	            {
	                c++;
	            }
	        }
	            cout << c <<" " ;
	    }
	    cout << endl;
	}
	return 0;
}

