#include<iostream>
using namespace std;
int main() {

	float price_of_product=0 ,  tax_rate = 0, total=0 , total_after_dicount = 0;
	int quantity = 0;
	//Welcome text
	cout << "Welcome to A B C MART." << endl;
	cout << "Please Enter the following Information: "<<endl;
	//Collection of information
	

	cout << "Quantity of product: ";
	cin >> quantity;

	
	if (quantity == 1) {
		cout << "Price of product: ";
		cin >> price_of_product;

		cout << "Tax Rate of product: ";
		cin >> tax_rate;
		total = price_of_product  + tax_rate ;
		cout << "total_cost: " << total;
	}

	else if (quantity >= 2) {

		for (int i = 1; i <= quantity; i++)
		{
			cout << "Price of product: ";
			cin >> price_of_product;

			cout << "Tax Rate of product: ";
			cin >> tax_rate;
		}

		if (quantity >= 10) {

			total = (price_of_product * quantity) + (tax_rate*quantity);
			total_after_dicount = total - total/10;

			cout << "total: " << total_after_dicount;
		}
		else
		{
			total = (price_of_product * quantity) + (tax_rate * quantity);
			cout << "total_cost: " << total;

		}

	}
	


	return 0;
}