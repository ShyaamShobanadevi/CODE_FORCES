#include<bits/stdc++.h>
using namespace std;
int main(){
	 	long long x,y;
	 	cin>>x>>y;
	 	if(y*log10(x)>x*log10(y))
	 		cout<<'>';
	 	else if(y*log10(x)==x*log10(y))
	 			cout<<"=";
	 	else 
	 			cout<<"<";
	 	return 0;
}