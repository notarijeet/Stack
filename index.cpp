#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	stack<int> s;
	stack<int> reverse;
	
	s.push(3);
	s.push(4);
	s.push(5);
	
	cout<<"Printing stack element from"<<endl;
	
	while(!s.empty()){
	    int element = s.top();
	    cout<<element<<endl;
	    reverse.push(element);
	    s.pop();
	}
	
	cout<<"Printing reverse element"<<endl;
	while(!reverse.empty()){
	    cout<<reverse.top()<<endl;
	    reverse.pop();
	}

    
    
}
