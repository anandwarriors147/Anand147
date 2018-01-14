//============================================================================
// Name        : file.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
int main()
{
	int i,n;
	cout<<"\n how many students?";
	cin>>n;
	ofstream fout("student");
	string name[n];
	string Class[n];
	int rno[n];
	char div[n];
	for(i=0;i<n;i++)
	{
	   cout<<"\n enter name:";
	   cin>>name[i];
	   cout<<"\n enter class:";
	   cin>>Class[i];
	   cout<<"\n enter roll no:";
	   cin>>rno[i];
	   cout<<"\n enter division:";
	   cin>>div[i];

	    fout<<name[i]<<endl;
	    fout<<Class[i]<<endl;
	    fout<<rno[i]<<endl;
	    fout<<div[i]<<endl;
	}
	    fout.close();
	ifstream fin("student");
	string name1[n];
	string Class1[n];
	int rnread[n];
	char div1[n];
	for(i=0;i<n;i++)
	{
	   fin>>name1[i];
	   fin>>Class1[i];
	   fin>>rnread[i];
	   fin>>div1[i];
       cout<<"\n student details of "<<i+1<<" student is";
	   cout<<"\n name:"<<name1[i];
	   cout<<"\n class:"<<Class1[i];
	   cout<<"\n roll no"<<rnread[i];
	   cout<<"\n div:"<<div1[i];
	}
	   fin.close();
	return 0;
}
