#include<iostream>
using namespace std;


class supermarket{
	public :

	int itemno;
	char itemname[100];
	char itemquantity[100];
	char itemprice[100];
	char itemdiscount[100];
	
	void setdata()
	{
		cout<<"Enter item no. = ";
		cin>>itemno;
		cout<<"Enter item name = ";
		cin>>itemname;
		cout<<"Enter item quantity = ";
		cin>>itemquantity;
		cout<<"Enter item price = ";
		cin>>itemprice;
		cout<<"Enter item discount = ";
		cin>>itemdiscount;
		
		
	}
	
	void getdata()
	{
		
		cout<<"item no. is = "<<itemno<<endl
		    <<"item name is = "<<itemname<<endl
		    <<"item quantity is = "<<itemquantity<<endl
		    <<"item price is = "<<itemprice<<endl
		    <<"item discount is = "<<itemdiscount<<endl;
		
	}
	
};


main()
{
	supermarket s1;
	
	s1.setdata();
	s1.getdata();
	
	
}

