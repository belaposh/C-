#include<iostream>
using namespace std;

int main (){
	int number;
	cout<<"enter a number "<<endl;
	cin>>number;
	
	if( number > 0){
		cout<<"the number is postive." <<endl;
	}
	else if( number < 0 ){
		cout<<"the number is negative."<<endl;
	}
	else  {
		cout<<"the number is zero.";
	}
	return 0;
}
