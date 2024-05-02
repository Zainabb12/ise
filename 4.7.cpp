#include<iostream>
using namespace std;
int main()
{
	int quantity;
	float unitcost=100;
	float totalcost,discount,amountsaved;
	cout<<"enter the quantity you want to purchase:";
	cin>>quantity;
	totalcost=quantity*unitcost;
	if(totalcost>100)
	 {
	 	discount=0.1; //10% discount
	 	amountsaved=totalcost*discount;
	 	}
	else
	{
		discount=0;
		amountsaved=0;
	}
	cout<<"\n the total cost is: $" <<totalcost;
	cout<<"\n you will save: $" <<amountsaved <<"with a 10% discount:";
}
