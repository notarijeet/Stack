#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	vector<int> array = {3,1,0,8,6};
	int n = array.size();
	stack<int> s;
	vector<int> ans(n,0);
	
	
	for(int i = 0;i<n;i++){
	    
	    while(s.size()>0 && s.top()>=array[i]){
	        s.pop();
	    }
	    
	    if(s.empty()){
	        ans[i] = -1;
	    }
	    
	    else{
	        ans[i] = s.top();
	    }
	    
	    s.push(array[i]);
	}
	
	for(auto i:ans){
	    cout<<i<<" ";
	}
	
	

}
