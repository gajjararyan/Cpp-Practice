#include <iostream>
#include<math.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int x1,x2,y1,y2;
	    cin>>x1>>y1>>x2>>y2;
	    cout<<max(abs(x1-x2),abs(y1-y2));
	    
	}
	return 0;
}