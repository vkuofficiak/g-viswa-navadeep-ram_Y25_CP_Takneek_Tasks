#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b;
	cin>>a>>b;
	if(b>a && b%a==0){
	    cout<<(b/a)-1;
	}
	else if(b>a && b%a!=0){
	    cout<<b/a;
	}
	else{
	    cout<<"0";
	}
}
