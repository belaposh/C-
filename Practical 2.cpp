#include<iostream>
using namespace std;
int main(){
	int a;
	cout<<"enter your obtained marks"<<endl;
	cin>>a;
	
	
	if(a>40){
		cout<<"you are pass \n";
		if(a>80){
			cout<<"you have A+ \n";
		}
		else if(a<80 && a>50){
			cout<<"you have just B++ grade \n";
		}
	}
	else {
		cout<<"you do not meet the criteria ! Try again";
	}
}