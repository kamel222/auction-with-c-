#include <iostream>
#include <string>
using namespace std;

struct member
{
	int id;
	string email;
	string name;
	int password;
	string delivery_address;
	int phone;
	int points = 0;
};

struct item
{
	int item_number;
	int starting_price;
	string category;
	string start_date = "2020-6-6";
	string end_date = "2020-12-12";
	string status = "avalible";

};
member arrMeM[50];
int memNum = 0;

member seller[50];
int seller_counter = 0;

item marketplace[50];
int marketplaceCounter = 0;

void add_seller()
{
	seller[0].id = 1111;
	seller[0].email = "ahmed.com";
	seller[0].name = "ahmed";
	seller[0].password = 123;
	seller[0].delivery_address = "none";
	seller[0].phone = 11125;
	seller[0].points = 10;
	seller_counter++;

	seller[1].id = 2222;
	seller[1].email = "mohamed.com";
	seller[1].name = "mohamed";
	seller[1].password = 1234;
	seller[1].delivery_address = "none";
	seller[1].phone = 11150;
	seller[1].points = 25;
	seller_counter++;

	seller[2].id = 33;
	seller[2].email = "kamel.com";
	seller[2].name = "kamel";
	seller[2].password = 321;
	seller[2].delivery_address = "none";
	seller[2].phone = 5125;
	seller[2].points = 14;
	seller_counter++;
}
void addmember()
{
	member m;

	cout << "enter your id : ";
	int id;
	cin >> id;
	m.id = id;

	cout << "enter your email : ";
	string email;
	cin >> email;
	m.email = email;

	cout << "enter your name : ";
	string name;
	cin >> name;
	m.name = name;


	cout << "enter your password : ";
	int password;
	cin >> password;
	m.password = password;

	cout << "enter your delivery address : ";
	string delivery_address;
	cin >> delivery_address;
	m.delivery_address = delivery_address;

	cout << "enter your phone : ";
	int phone;
	cin >> phone;
	m.phone = phone;

	cout << "enter your points : ";
	int points;
	cin >> points;
	m.points = points;

	arrMeM[memNum] = m;
	memNum++;

}

void marketplace_input()
{
	item I;
	I.category = "car";
	I.item_number = 0;
	I.starting_price = 50000;
	I.status = "avalible";
	marketplace[marketplaceCounter] = I;
	marketplaceCounter++;

	I.category = "furniture";
	I.item_number = 1;
	I.starting_price = 100000;
	I.status = "avalible";

	marketplace[marketplaceCounter] = I;
	marketplaceCounter++;


	I.category = "house";
	I.item_number = 2;
	I.starting_price = 150000;
	I.status = "avalible";

	marketplace[marketplaceCounter] = I;
	marketplaceCounter++;

	I.category = "watch";
	I.item_number = 3;
	I.starting_price = 200000;
	I.status = "avalible";

	marketplace[marketplaceCounter] = I;
	marketplaceCounter++;

	I.category = "laptop";
	I.item_number = 4;
	I.starting_price = 200000;
	I.status = "avalible";

	marketplace[marketplaceCounter] = I;
	marketplaceCounter++;

	I.category = "Motorcycle";
	I.item_number = 5;
	I.starting_price = 500;
	I.status = "avalible";

	marketplace[marketplaceCounter] = I;
	marketplaceCounter++;

	I.category = "clothes";
	I.item_number = 6;
	I.starting_price = 600;
	I.status = "avalible";

	marketplace[marketplaceCounter] = I;
	marketplaceCounter++;

	I.category = "phone";
	I.item_number = 7;
	I.starting_price = 400;
	I.status = "avalible";

	marketplace[marketplaceCounter] = I;
	marketplaceCounter++;

	I.category = "shoes";
	I.item_number = 8;
	I.starting_price = 5000;
	I.status = "avalible";

	marketplace[marketplaceCounter] = I;
	marketplaceCounter++;

	I.category = "farm";
	I.item_number = 9;
	I.starting_price = 666;
	I.status = "avalible";

	marketplace[marketplaceCounter] = I;
	marketplaceCounter++;



}
void transaction()
{

	for (int i = 0; i < marketplaceCounter; i++)
	{
		cout << "item number: " << marketplace[i].item_number << endl;
		cout << "starting price: " << marketplace[i].starting_price << endl;
		cout << "category: " << marketplace[i].category << endl;
		cout << "start date: " << marketplace[i].start_date << endl;
		cout << "end date: " << marketplace[i].end_date << endl;
		cout << "status: " << marketplace[i].status << endl;
		cout << "************************************" << endl;
	}

	cout << "enter item category: ";
	string category;
	cin >> category;

	cout << "you want to pay " << category << " with its starting bid price y/n : ";
	char ch;
	cin >> ch;
	int itemNum;
	if (ch == 'y')
	{
		cout << "write the item number : ";
		cin >> itemNum;
	}
	else if (ch == 'n')
	{
		cout << "write the item number : ";

		cin >> itemNum;

		cout << "write the suggested price : ";
		int Sprice;
		cin >> Sprice;

	}

	for (int i = 0; i < marketplaceCounter - 1; i++)
	{
		if (marketplace[i].item_number == itemNum)
		{
			marketplace[i] = marketplace[i + 1];
		}
	}
	marketplaceCounter--;

	for (int i = 0; i < marketplaceCounter; i++)
	{
		if (marketplace[i].item_number == itemNum)
		{

			marketplace[i].status = "sold";
		}
	}
	cout << "the item with id " << itemNum << " is sold" << endl;
}

void display_seller()
{
	for (int i = 0; i < seller_counter; i++)
	{
		cout << "ID: " << seller[i].id << endl;
		cout << "Email: " << seller[i].email << endl;
		cout << "Name: " << seller[i].name << endl;
		cout << "Phone: " << seller[i].phone << endl;
		cout << "Points: " << seller[i].points << endl;
		cout << "-----------------------" << endl;
	}
}

void search()
{
	cout << "search by category click :1 " << endl;
	cout << "search by category and price click 2: " << endl;
	cout << "Enter your choise : ";
	char ch;
	cin >> ch;
	if (ch == '1')
	{
		string category;
		cout << "Enter the category: ";
		cin >> category;
		for (int i = 0; i < marketplaceCounter; i++)
		{
			if (marketplace[i].category == category)
			{
				cout << "item number: " << marketplace[i].item_number << endl;
				cout << "starting price: " << marketplace[i].starting_price << endl;
				cout << "category: " << marketplace[i].category << endl;
				cout << "start date: " << marketplace[i].start_date << endl;
				cout << "end date: " << marketplace[i].end_date << endl;
				cout << "status: " << marketplace[i].status << endl;
				cout << "************************************" << endl;
			}
		}
	}
	else if (ch == '2')
	{
		string category;
		int price;
		cout << "Enter the category: ";
		cin >> category;
		cout << "Enter the price: ";
		cin >> price;
		for (int i = 0; i < marketplaceCounter; i++)
		{
			if (marketplace[i].category == category && marketplace[i].starting_price == price)
			{
				cout << "item number: " << marketplace[i].item_number << endl;
				cout << "starting price: " << marketplace[i].starting_price << endl;
				cout << "category: " << marketplace[i].category << endl;
				cout << "start date: " << marketplace[i].start_date << endl;
				cout << "end date: " << marketplace[i].end_date << endl;
				cout << "status: " << marketplace[i].status << endl;
				cout << "************************************" << endl;
			}
		}
	}
}

void rating()
{
	//cout << "do you want to give a feedback about someone" << endl;
	//cout << "1 for yes and 0 for no " << endl;
	int  id, rate;
	string comment;
	//cin >> x;

	display_seller();
	cout << "enter his id " << endl;
	cin >> id;
	cout << "rate him from 1 to 5 in which 1 is very bad , 2 is bad , 3 is good , 4 is very good , 5 is Excellent" << endl;
	cin >> rate;
	int total_points = 0;
	for (int i = 0; i < seller_counter; i++)
	{
		if (seller[i].id == id)
		{
			seller[i].points += rate;

			total_points = seller[i].points;
		}
	}
	cout << "the person whose id = " << id << " increased to " << total_points << endl;
	cout << "give an comment to him " << endl;
	cin >> comment;
	cout << "your comment is " << comment << endl;

}
int main()
{
	add_seller();
	marketplace_input();
K:	cout << "click [1] if you are admin" << endl;
	cout << "click [2] if you are user" << endl;
	cout << "you choise is: ";
	char c;
	cin >> c;
	if (c == '1')
	{
		cout << "Enter [1] to add seller" << endl;
		cout << "you choise is: ";
		char c2;
		cin >> c2;
		if (c2 == '1')
		{
			addmember();
		}
	}
	else
	{
		cout << "Enter [1] to search category" << endl;
		cout << "Enter [2] to make a transaction to the system" << endl;
		cout << "Enter [3] to rate seller" << endl;
		cout << "you choise is: ";
		char ch2;
		cin >> ch2;
		if (ch2 == '1')
		{
			search();
		}
		else if (ch2 == '2')
		{
			transaction();
		}
		else if (ch2 == '3')
		{
			rating();
		}
	}

	goto K;
	return 0;
}
