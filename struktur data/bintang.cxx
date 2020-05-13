#include<iostream>
using namespace std;
int main()
{
	for(int i=1;i<6;i++)
	{
		for(int j=6;j>=i;j--){
		cout << " ";
	}
		for (int n=1;n<=i;n++){
		cout << "*";
	}
	cout << endl;
	}
}