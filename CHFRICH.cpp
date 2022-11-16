#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while (t--)
    {
        int A,B,X;
        cin>>A>>B>>X;
        
        int ans=B-A;
        int temp = ans /X;
        
        cout<<temp<<endl;
    }
	
	return 0;
}
