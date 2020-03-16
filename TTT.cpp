#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()

{
	cout<<"                                                 "<<"TIC TAC TOE"<<endl;
	cout<<"                                     "<<" THIS IS A TWO PLAYER TIC TAC TOE GAME  "<<endl;
	cout<<"Press Y to play else Press any other key to exit"<<endl;
	char a;
	cin>>a;
	if(a=='y' || a=='Y')
	{
		cout<<"THE GRID IS AS SHOWN BELOW"<<endl;
					
					cout<<"                                              "<<"1"<<"  "<<"|"<<"  "<<"2"<<"  "<<"|"<<"  "<<"3"<<endl;
					cout<<"                                                 "<<"|"<<"     "<<"|"<<endl;
					cout<<"                                             "<<"----------------"<<endl;
					cout<<"                                              "<<"4"<<"  "<<"|"<<"  "<<"5"<<"  "<<"|"<<"  "<<"6"<<endl;
					cout<<"                                                 "<<"|"<<"     "<<"|"<<endl;
					cout<<"                                             "<<"----------------"<<endl;
					cout<<"                                              "<<"7"<<"  "<<"|"<<"  "<<"8"<<"  "<<"|"<<"  "<<"9"<<endl;
					cout<<"                                                 "<<"|"<<"     "<<"|"<<endl;
	}
	cout<<endl<<endl<<"Press respective key number from 1-9 as shown in the grid to mark O and X respectivly";
	cout<<endl<<"In the First chance the user will starting with marking O then the second user will play by using X"<<endl;
	int arr1[5],arr2[4],r=0,s=0,flag=0,m=1,inp,chck[10]={0};
	char inpt[10]={"_________"};
	while(m<10)
{		cin>>inp;
		if(chck[inp]==1)
		{
			cout<<endl<<"INVALID MOVE PLEASE ENTER A VALID MOVE "<<endl;
			cin>>inp;
		}
		if(m%2!=0)// moves of player 1
		{	
			inpt[inp-1]='O';
			chck[m]=1;
			arr1[r]=inp;
			sort(arr1,arr1+r);
			r++;
		}
		else // moves of player 2
		{
			inpt[inp-1]='X';// here we are using array to store input there recording moves of player 1 
			chck[m]=1;
			arr2[s]=inp;
			sort(arr2,arr2+s);
			s++;
		}
		for(int w1=1;w1<10;w1++)
		{
			cout<<inpt[w1-1];
			if(w1%3==0)
			{
				cout<<endl;
			}
		}
		//WINNING CASES
		int win[3];
		win[0]=1;
		win[1]=2;
		win[2]=3;
		if(  (arr1[0]==win[0] && arr1[1]==win[1] && arr1[2]==win[2]) || (arr1[0]==win[0] && arr1[1]==win[1] && arr1[3]==win[2]) || (arr1[0]==win[0] && arr1[1]==win[1] && arr1[4]==win[2]) || (arr1[0]==win[0] && arr1[2]==win[1] && arr1[3]==win[2])|| (arr1[0]==win[0] && arr1[2]==win[1] && arr1[4]==win[2])|| (arr1[0]==win[0] && arr1[3]==win[1] && arr1[4]==win[2])|| (arr1[1]==win[0] && arr1[2]==win[1] && arr1[3]==win[2])|| (arr1[1]==win[0] && arr1[2]==win[1] && arr1[4]==win[2])|| (arr1[1]==win[0] && arr1[3]==win[1] && arr1[4]==win[2])|| (arr1[2]==win[0] && arr1[3]==win[1] && arr1[4]==win[2]))
		{
			cout<<endl<<"PLAYER 1 WINS"<<endl;
			exit(0);
		}
		if( (arr2[0]==win[0] && arr2[1]==win[1] && arr2[2]==win[2]) || (arr2[1]==win[0] && arr2[2]==win[1] && arr2[3]==win[2]) || (arr2[0]==win[0] && arr2[2]==win[1] && arr2[3]==win[2]) )
		{
			cout<<endl<<"PLAYER 2 WINS"<<endl;
			exit(0);
		}
		win[0]=4;
		win[1]=5;
		win[2]=6;
		if( (arr1[0]==win[0] && arr1[1]==win[1] && arr1[2]==win[2]) || (arr1[0]==win[0] && arr1[1]==win[1] && arr1[3]==win[2]) || (arr1[0]==win[0] && arr1[1]==win[1] && arr1[4]==win[2]) || (arr1[0]==win[0] && arr1[2]==win[1] && arr1[3]==win[2])|| (arr1[0]==win[0] && arr1[2]==win[1] && arr1[4]==win[2])|| (arr1[0]==win[0] && arr1[3]==win[1] && arr1[4]==win[2])|| (arr1[1]==win[0] && arr1[2]==win[1] && arr1[3]==win[2])|| (arr1[1]==win[0] && arr1[2]==win[1] && arr1[4]==win[2])|| (arr1[1]==win[0] && arr1[3]==win[1] && arr1[4]==win[2])|| (arr1[2]==win[0] && arr1[3]==win[1] && arr1[4]==win[2]))
		{
			cout<<endl<<"PLAYER 1 WINS"<<endl;
			exit(0);
		}
		if( (arr2[0]==win[0] && arr2[1]==win[1] && arr2[2]==win[2]) || (arr2[1]==win[0] && arr2[2]==win[1] && arr2[3]==win[2]) || (arr2[0]==win[0] && arr2[2]==win[1] && arr2[3]==win[2]) )
		{
			cout<<endl<<"PLAYER 2 WINS"<<endl;
			exit(0);
		}
		win[0]=7;
		win[1]=8;
		win[2]=9;
		if( (arr1[0]==win[0] && arr1[1]==win[1] && arr1[2]==win[2]) || (arr1[0]==win[0] && arr1[1]==win[1] && arr1[3]==win[2]) || (arr1[0]==win[0] && arr1[1]==win[1] && arr1[4]==win[2]) || (arr1[0]==win[0] && arr1[2]==win[1] && arr1[3]==win[2])|| (arr1[0]==win[0] && arr1[2]==win[1] && arr1[4]==win[2])|| (arr1[0]==win[0] && arr1[3]==win[1] && arr1[4]==win[2])|| (arr1[1]==win[0] && arr1[2]==win[1] && arr1[3]==win[2])|| (arr1[1]==win[0] && arr1[2]==win[1] && arr1[4]==win[2])|| (arr1[1]==win[0] && arr1[3]==win[1] && arr1[4]==win[2])|| (arr1[2]==win[0] && arr1[3]==win[1] && arr1[4]==win[2]))
		{
			cout<<endl<<"PLAYER 1 WINS"<<endl;
			exit(0);
		}
		if( (arr2[0]==win[0] && arr2[1]==win[1] && arr2[2]==win[2]) || (arr2[1]==win[0] && arr2[2]==win[1] && arr2[3]==win[2]) || (arr2[0]==win[0] && arr2[2]==win[1] && arr2[3]==win[2]) )
		{
			cout<<endl<<"PLAYER 2 WINS"<<endl;
			exit(0);
		}
		win[0]=1;
		win[1]=4;
		win[2]=7;
		if( (arr1[0]==win[0] && arr1[1]==win[1] && arr1[2]==win[2]) || (arr1[0]==win[0] && arr1[1]==win[1] && arr1[3]==win[2]) || (arr1[0]==win[0] && arr1[1]==win[1] && arr1[4]==win[2]) || (arr1[0]==win[0] && arr1[2]==win[1] && arr1[3]==win[2])|| (arr1[0]==win[0] && arr1[2]==win[1] && arr1[4]==win[2])|| (arr1[0]==win[0] && arr1[3]==win[1] && arr1[4]==win[2])|| (arr1[1]==win[0] && arr1[2]==win[1] && arr1[3]==win[2])|| (arr1[1]==win[0] && arr1[2]==win[1] && arr1[4]==win[2])|| (arr1[1]==win[0] && arr1[3]==win[1] && arr1[4]==win[2])|| (arr1[2]==win[0] && arr1[3]==win[1] && arr1[4]==win[2]))
		{
			cout<<endl<<"PLAYER 1 WINS"<<endl;
			exit(0);
		}
		if( (arr2[0]==win[0] && arr2[1]==win[1] && arr2[2]==win[2]) || (arr2[1]==win[0] && arr2[2]==win[1] && arr2[3]==win[2]) || (arr2[0]==win[0] && arr2[2]==win[1] && arr2[3]==win[2]) )
		{
			cout<<endl<<"PLAYER 2 WINS"<<endl;
			exit(0);
		}
		win[0]=2;
		win[1]=5;
		win[2]=8;
		if( (arr1[0]==win[0] && arr1[1]==win[1] && arr1[2]==win[2]) || (arr1[0]==win[0] && arr1[1]==win[1] && arr1[3]==win[2]) || (arr1[0]==win[0] && arr1[1]==win[1] && arr1[4]==win[2]) || (arr1[0]==win[0] && arr1[2]==win[1] && arr1[3]==win[2])|| (arr1[0]==win[0] && arr1[2]==win[1] && arr1[4]==win[2])|| (arr1[0]==win[0] && arr1[3]==win[1] && arr1[4]==win[2])|| (arr1[1]==win[0] && arr1[2]==win[1] && arr1[3]==win[2])|| (arr1[1]==win[0] && arr1[2]==win[1] && arr1[4]==win[2])|| (arr1[1]==win[0] && arr1[3]==win[1] && arr1[4]==win[2])|| (arr1[2]==win[0] && arr1[3]==win[1] && arr1[4]==win[2]))
		{
			cout<<endl<<"PLAYER 1 WINS"<<endl;
			exit(0);
		}
		if( (arr2[0]==win[0] && arr2[1]==win[1] && arr2[2]==win[2]) || (arr2[1]==win[0] && arr2[2]==win[1] && arr2[3]==win[2]) || (arr2[0]==win[0] && arr2[2]==win[1] && arr2[3]==win[2]) )
		{
			cout<<endl<<"PLAYER 2 WINS"<<endl;
			exit(0);
		}
		win[0]=3;
		win[1]=6;
		win[2]=9;
		if( (arr1[0]==win[0] && arr1[1]==win[1] && arr1[2]==win[2]) || (arr1[0]==win[0] && arr1[1]==win[1] && arr1[3]==win[2]) || (arr1[0]==win[0] && arr1[1]==win[1] && arr1[4]==win[2]) || (arr1[0]==win[0] && arr1[2]==win[1] && arr1[3]==win[2])|| (arr1[0]==win[0] && arr1[2]==win[1] && arr1[4]==win[2])|| (arr1[0]==win[0] && arr1[3]==win[1] && arr1[4]==win[2])|| (arr1[1]==win[0] && arr1[2]==win[1] && arr1[3]==win[2])|| (arr1[1]==win[0] && arr1[2]==win[1] && arr1[4]==win[2])|| (arr1[1]==win[0] && arr1[3]==win[1] && arr1[4]==win[2])|| (arr1[2]==win[0] && arr1[3]==win[1] && arr1[4]==win[2]))
		{
			cout<<endl<<"PLAYER 1 WINS"<<endl;
			exit(0);
		}
		if( (arr2[0]==win[0] && arr2[1]==win[1] && arr2[2]==win[2]) || (arr2[1]==win[0] && arr2[2]==win[1] && arr2[3]==win[2]) || (arr2[0]==win[0] && arr2[2]==win[1] && arr2[3]==win[2]) )
		{
			cout<<endl<<"PLAYER 2 WINS"<<endl;
			exit(0);
		}
		win[0]=1;
		win[1]=5;
		win[2]=9;
		if( (arr1[0]==win[0] && arr1[1]==win[1] && arr1[2]==win[2]) || (arr1[0]==win[0] && arr1[1]==win[1] && arr1[3]==win[2]) || (arr1[0]==win[0] && arr1[1]==win[1] && arr1[4]==win[2]) || (arr1[0]==win[0] && arr1[2]==win[1] && arr1[3]==win[2])|| (arr1[0]==win[0] && arr1[2]==win[1] && arr1[4]==win[2])|| (arr1[0]==win[0] && arr1[3]==win[1] && arr1[4]==win[2])|| (arr1[1]==win[0] && arr1[2]==win[1] && arr1[3]==win[2])|| (arr1[1]==win[0] && arr1[2]==win[1] && arr1[4]==win[2])|| (arr1[1]==win[0] && arr1[3]==win[1] && arr1[4]==win[2])|| (arr1[2]==win[0] && arr1[3]==win[1] && arr1[4]==win[2]))
		{
			cout<<endl<<"PLAYER 1 WINS"<<endl;
			exit(0);
		}
		if( (arr2[0]==win[0] && arr2[1]==win[1] && arr2[2]==win[2]) || (arr2[1]==win[0] && arr2[2]==win[1] && arr2[3]==win[2]) || (arr2[0]==win[0] && arr2[2]==win[1] && arr2[3]==win[2]) )
		{
			cout<<endl<<"PLAYER 2 WINS"<<endl;
			exit(0);
		}
		win[0]=3;
		win[1]=5;
		win[2]=7;
		if( (arr1[0]==win[0] && arr1[1]==win[1] && arr1[2]==win[2]) || (arr1[0]==win[0] && arr1[1]==win[1] && arr1[3]==win[2]) || (arr1[0]==win[0] && arr1[1]==win[1] && arr1[4]==win[2]) || (arr1[0]==win[0] && arr1[2]==win[1] && arr1[3]==win[2])|| (arr1[0]==win[0] && arr1[2]==win[1] && arr1[4]==win[2])|| (arr1[0]==win[0] && arr1[3]==win[1] && arr1[4]==win[2])|| (arr1[1]==win[0] && arr1[2]==win[1] && arr1[3]==win[2])|| (arr1[1]==win[0] && arr1[2]==win[1] && arr1[4]==win[2])|| (arr1[1]==win[0] && arr1[3]==win[1] && arr1[4]==win[2])|| (arr1[2]==win[0] && arr1[3]==win[1] && arr1[4]==win[2]))
		{
			cout<<endl<<"PLAYER 1 WINS"<<endl;
			exit(0);
		}
		if( (arr2[0]==win[0] && arr2[1]==win[1] && arr2[2]==win[2]) || (arr2[1]==win[0] && arr2[2]==win[1] && arr2[3]==win[2]) || (arr2[0]==win[0] && arr2[2]==win[1] && arr2[3]==win[2]) )
		{
			cout<<endl<<"PLAYER 2 WINS"<<endl;
			exit(0);
		}
		m++;
		if(m==10)
		{	cout<<endl<<endl<<"THE MATCH IS A DRAW"<<endl;
			exit(0);
		}
}

	return 0;
}