#include<iostream>
#include<windows.h>

using namespace std;

void loadingBar()
{
	system("cls");
	system("color 57");
	
	char a = 177, b = 219;
	cout<<"\n\t\t\t\t\tProject By Harshvardhan Yadav & Deepak Kumar";
	cout<<"\n\n\n\t\t\t\t\tLoading...\n";
	cout<<endl;
	cout<<"\t\t\t\t\t";
	
	for(int i = 0;i<26;i++)

	cout<<a;

	cout<<"\r";
	cout<<"\t\t\t\t\t";
	for(int i = 0; i < 26 ; i++)
	{
		cout<<b;
		Sleep(200);
	}
	
}
