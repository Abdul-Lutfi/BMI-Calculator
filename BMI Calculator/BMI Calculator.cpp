#include <iostream>
#include <string>
using namespace std;
int main()
{
	string name;
	double weight, height, BMI;
	char gender, rerun;
	string genderStr;
	do{

		cout << "\t\tBMI Calculator\n";
		cout << "Enter name : ";
		cin >> name;
		cout << "Weight, Height, Gender";
		cin >> weight >> height >> gender;

		BMI = weight / (height*height);

		cout << "name : " << name;
		if (gender == 'm')
		{
			genderStr = "Male";
		}
		else
			genderStr = "Female";

		cout << "Gender : " << genderStr<<endl;
		cout << "weight\theight\tBMI\n";
		cout << weight<<"\t"<<height<<"\t"<<BMI<<endl;
		cout << endl << "BMI Status : ";
		if (BMI, 18.5)
			cout << "skinny";
		else if (BMI < 18.5 && BMI < 24.9)
			cout << "Just nice";
		else
			cout << "Too fat";

		cout << endl << endl << "Rerun program? (Y/N)";
		cin >> rerun;

	} while (rerun == 'Y' || rerun == 'y');
	
	return 0;
	cout << "\n";
}