/* Program name: ticketsales.cpp
*  Author: Ryan Hurd
*  Date last updated: 2/12/2018
* Purpose: Calculate ticket sales for a football game
*/

#include <iostream>
#include <iomanip> 
#include <fstream>

using namespace std;

int main() {

	ifstream inFile;
	ofstream outFile;

	int ticketPrice;
	int ticketSold;
	int box;
	int sideline;
	int generaladmiss;
	int premium;

	myfile.open("tickets.txt");
	

	cout << fixed << showpoint;
	cout << setprecision(2);
	inFile >> ticketPrice >> ticketSold;

	cout << "250" << setw(8) << box << endl;
	cout << "100" << setw(9) << sideline << endl;
	cout << "50" << setw(10) << premium << endl;
	cout << "25" << setw(10) << generaladmiss << endl;
	cout << "Number of tickets sold : " << ticketSold << endl;
	cout << "Total sale amount : " << ticketPrice * ticketSold << endl;

	inFile.close();
	return 0;
}