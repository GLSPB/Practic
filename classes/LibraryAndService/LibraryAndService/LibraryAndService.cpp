#include <iostream>
#include <string>
#include <locale.h>
#include <ctype.h>
#include <regex>
#include <iostream>

#define DEBUG_FLG

using namespace std;

class Library {
private:
	string Number_phome;
	string Name_library;
public:
	int setNumber_phome(string saLibraly) {
		int error_current{ 0 };
		smatch m;
		if (regex_match(saLibraly, m, regex("^[1-9][0-9]{4}-[0-9]{2}$"))) {
			error_current = 0;
		}
		else {
			error_current = 1;
		};
		return error_current;
	};
	string getNumber_phome() {
		return Number_phome;
	};
	int setName_library() {

	};
	string getName_library() {
		return Name_library;
	};
};

class Service {
private:
	string Name_servise;
	int Price;
public:
	int setName_servise() {

	};
	string getName_servise() {
		return Name_servise;
	};
	int setPrice(string saPrise) {
		int error_current1{ 0 };
		smatch m;
		if (regex_search(saPrise, m, regex("^[1-9][0-9]*$"))) {
			error_current1 = 0;
		}
		else {
			error_current1 = 1;
		};
		return error_current1;
	};
	int getPrice() {
		return Price;
	};


};



void testLibrarysetNumber_phome(Library testingNumber_phoneLibraly) {
	cout << endl << "Testing Number-phone Libraly:"<< endl;
	string Number_phome = "12345-67";
	if (testingNumber_phoneLibraly.setNumber_phome(Number_phome) == 0) {
		cerr << "Positive test " << Number_phome << " passed" << endl;
	}
	else {
		cerr << "Positive test " << Number_phome << " failed" << endl;
	}
	Number_phome = "01234-56";
	if (testingNumber_phoneLibraly.setNumber_phome(Number_phome) == 1) {
		cerr << "Negative test " << Number_phome << " passed" << endl;
	}
	else {
		cerr << "Negative test " << Number_phome << " failed" << endl;
	}
	Number_phome = "00000-00";
	if (testingNumber_phoneLibraly.setNumber_phome(Number_phome) == 1) {
		cerr << "Negative test " << Number_phome << " passed" << endl;
	}
	else {
		cerr << "Negative test " << Number_phome << " failed" << endl;
	}
	Number_phome = "10000-00phone";
	if (testingNumber_phoneLibraly.setNumber_phome(Number_phome) == 1) {
		cerr << "Negative test " << Number_phome << " passed" << endl;
	}
	else {
		cerr << "Negative test " << Number_phome << " failed" << endl;
	}
	Number_phome = "phone";
	if (testingNumber_phoneLibraly.setNumber_phome(Number_phome) == 1) {
		cerr << "Negative test " << Number_phome << " passed" << endl;
	}
	else {
		cerr << "Negative test " << Number_phome << " failed" << endl;
	}

	Number_phome = "1234567";
	if (testingNumber_phoneLibraly.setNumber_phome(Number_phome) == 1) {
		cerr << "Negative test " << Number_phome << " passed" << endl;
	}
	else {
		cerr << "Negative test " << Number_phome << " failed" << endl;
	}
	Number_phome = "0";
	if (testingNumber_phoneLibraly.setNumber_phome(Number_phome) == 1) {
		cerr << "Negative test " << Number_phome << " passed" << endl;
	}
	else {
		cerr << "Negative test " << Number_phome << " failed" << endl;
	}
	Number_phome = ",./";
	if (testingNumber_phoneLibraly.setNumber_phome(Number_phome) == 1) {
		cerr << "Negative test " << Number_phome << " passed" << endl;
	}
	else {
		cerr << "Negative test " << Number_phome << " failed" << endl;
	}
};

void testPriceServise(Service testingPrice) {
	cout <<endl << "Testing Price Servise:" << endl;
	string Price = "123456789";
	if (testingPrice.setPrice(Price) == 0) {
		cerr << "Positive test " << Price << " passed" << endl;
	}
	else {
		cerr << "Positive test " << Price << " failed" << endl;
	}
	Price = "1";
	if (testingPrice.setPrice(Price) == 0) {
		cerr << "Positive test " << Price << " passed" << endl;
	}
	else {
		cerr << "Positive test " << Price << " failed" << endl;
	}
	Price = "01";
	if (testingPrice.setPrice(Price) == 1) {
		cerr << "Negative test " << Price << " passed" << endl;
	}
	else {
		cerr << "Negative test " << Price << " failed" << endl;
	}
	Price = "-1";
	if (testingPrice.setPrice(Price) == 1) {
		cerr << "Negative test " << Price << " passed" << endl;
	}
	else {
		cerr << "Negative test " << Price << " failed" << endl;
	}
	Price = "0";
	if (testingPrice.setPrice(Price) == 1) {
		cerr << "Negative test " << Price << " passed" << endl;
	}
	else {
		cerr << "Negative test " << Price << " failed" << endl;
	}
	Price = "abc";
	if (testingPrice.setPrice(Price) == 1) {
		cerr << "Negative test " << Price << " passed" << endl;
	}
	else {
		cerr << "Negative test " << Price << " failed" << endl;
	}
	Price = ",./";
	if (testingPrice.setPrice(Price) == 1) {
		cerr << "Negative test " << Price << " passed" << endl;
	}
	else {
		cerr << "Negative test " << Price << " failed" << endl;
	}
};





int main()
{
	setlocale(LC_ALL, "Ru");
	Library testingNumber_phoneLibraly;
	Service testingPrice;

#ifdef DEBUG_FLG
	testLibrarysetNumber_phome(testingNumber_phoneLibraly);
	testPriceServise(testingPrice);
#endif // DEBUG_FLG

	return 0;




}


