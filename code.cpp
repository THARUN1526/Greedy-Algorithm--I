#include <iostream>
#include<string>

using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int N;
	    cin>>N;
	    string S;
	    cin>>S;
	    int count=0;
	    for(int i=0;i<N;i++){
	        if(S[i]==S[i+1]){
	            count++;
	            i++;
	        }else
	        count++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
