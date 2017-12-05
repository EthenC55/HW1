//Name Ethen Campos
// Date 9/13/17
//COP2000 - H1A
//This program calculates the recipe for pies
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	double C_flour, Tb_sugar, Tb_salt, C_butter, L_eggs;

	//Variables
	const float CUPS_OF_FLOUR = 15.00;
	const float TABLESPOONS_OF_SUGAR = 8.00;
	const float TABLESPOONS_OF_SALT = 3.00;
	const float CUPS_OF_BUTTER = 5.25;
	const float LARGE_EGGS = 6.00;


	int pie_crusts;


	//Ask User For Pie Amount
	cout << "How many pies do you wish to make?.\n";
	cin >> pie_crusts;

	//Calculate Total Ingredients of the pies
	C_flour = (CUPS_OF_FLOUR / 6)*pie_crusts;

	Tb_sugar = (TABLESPOONS_OF_SUGAR / 6)*pie_crusts;

	Tb_salt = (TABLESPOONS_OF_SALT / 6)*pie_crusts;

	C_butter = (CUPS_OF_BUTTER / 6)*pie_crusts;

	L_eggs = (LARGE_EGGS / 6)*pie_crusts;

	//Display number of pies wanted
	cout << "Malachi's Pie Shop-Pie Crust Recipe\n";
	cout << "`-`-`-`-`-`-`-`-`-`-`-`-`-`-`-`-`-`\n";
	cout << "You want to make  " << pie_crusts << " Pies\n";

	//Displays Ingredients after total number of pies
	cout << "Flour    " << C_flour << "  cups\n";

	cout << "Sugar    " << Tb_sugar << "  tablespoons\n";

	cout << "Salt     " << Tb_salt << "  tablespoons\n";

	cout << "Butter   " << C_butter << "  cups\n";

	cout << "Eggs     " << L_eggs << "  large eggs\n";

	cout << setprecision(2) << fixed;
	return 0;
}