#include<iostream>
using namespace std;
int main(){
	int rows;
	cout<<" ENTER THE NUMBER OF ROWS :";
	cin>>rows;
	for(int i=0;i<(rows/2);i++){
		for(int j=(rows/2)-i;j>0;j--){
			cout<<" ";
		}
		for( int c=0;c<(i*2)+1;c++){
			cout<<"*";
			
		}
		cout<<endl;
	}
	for( int i=(rows/2)-1;i>=0;i--){
		for(int j=i;j<=(rows/2);j++){
			cout<<" ";
		}
		for( int k=0;k<(i*2)-1;k++){
			cout<<"*";
		}
		cout<<endl;
	}
	
	
	return 0;
}
