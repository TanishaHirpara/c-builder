#include<iostream>
using namespace std;


class railway{
	public :

	int trainno;
	char trainname[100];
	char trainsource[100];
	char traindestination[100];
	char traintime[100];
	
	void setdata()
	{
		cout<<"Enter train no. = ";
		cin>>trainno;
		cout<<"Enter train name = ";
		cin>>trainname;
		cout<<"Enter train source = ";
		cin>>trainsource;
		cout<<"Enter train destination = ";
		cin>>traindestination;
		cout<<"Enter train time = ";
		cin>>traintime;
		
		
	}
	
	void getdata()
	{
		
		cout<<"train no. is = "<<trainno<<endl
		    <<"train name is = "<<trainname<<endl
		    <<"train source is = "<<trainsource<<endl
		    <<"train destination is = "<<traindestination<<endl
		    <<"train time is = "<<traintime<<endl;
		
	}
	
};


main()
{
	railway r1;
	
	r1.setdata();
	r1.getdata();
	
	
}

