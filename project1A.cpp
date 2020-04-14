class Fraction 
{
	private:
		int numerator;
		int denominator;
	public:
		void set(int, int);
		void print() const;
		int addedTo(Fraction);
		int subtract(Fraction);
		int multipliedBy(Fraction);
		int dividedBy(Fraction);
		bool isEqualTo(Fraction) const;
};

#include<iostream>

using namespace std;

int main()
{
	Fraction f1;
	Fraction f2;
	Fraction result;

	f1.set(9, 8);
	f2.set(2, 3);
	
	cout << "\nArithmetic operations with fraction objects stored in the results class object\n";
	cout << "------------------------------------------------------------------------------\n\n";

	cout << "The product of ";
	f1.print();
	cout << " and ";
	f2.print();
	cout << " is ";
	result = f1.multipliedBy(f2);
	result.print();
	cout << endl;

	cout << "The quotient of ";
	f1.print();
	cout << " and ";
	f2.print();
	cout << " is ";
	result = f1.dividedBy(f2);
	result.print();
	cout << endl;

	cout << "The sum of ";
	f1.print();
	cout << " and ";
	f2.print();
	cout << " is ";
	result = f1.addedTo(f2);
	result.print();
	cout << endl;

	cout << "The difference of ";
	f1.print();
	cout << " and ";
	f2.print();
	cout << " is ";
	result = f1.subtract(f2);
	result.print();
	cout << endl;

	if(f1.isEqualTo(f2))
	{
		cout << "The two fractions are equal." << endl;
	}
	else
	{
		cout << "The two fractions are not equal." << endl;
	}
	
	cout << "\n---------------------------------------------------------\n";
	cout << "\nFraction class implementation test now successfully concluded\n";
	

	return 0;
}


void Fraction::set(int num, int den)
//Post: numerator is set to num, denominator is set to den
{
	numerator = num;
	denominator = den;

}


void Fraction::print() const
//Pre: The argument has been initialized
//Post: The numerater and denominator have been printed to the console
{
	cout << fractionVar.numerator << "/" << fractionVar.denominator;
}


int Fraction::addedTo(Fraction fractionVar)
//Pre: Both arguments have been initialized
//Post: sum of two arguments is returned
{
	Fraction sum;
	sum.numerator = numerator + fractionVar.numerator;
	sum.denominator = denominator + fractionVar.denominator;

	return sum;
}


int Fraction::subtract(Fraction fractionVar)
//Pre: Both arguments have been initialized
//Post: the result of one argument subtracted from the other is returned
{
	Fraction sub;
	sub.numerator = numerator - fractionVar.numerator;
	sub.denominator = denominator - fractionVar.denominator;

	return sub;
}


int Fraction::multipliedBy(Fraction fractionVar)
//Pre: Both arguments have been initialized
//Post: the product of two arguments is returned
{
	Fraction product;
	product.numerator = numerator * fractionVar.numerator;
	product.denominator = denominator * fractionVar.denominator;

	return product;
}


int Fraction::dividedBy(Fraction fractionVar)
//Pre: Both arguments have been initialized
//Post: sum of two arguments is returned
{
	Fraction quotient;
	quotient.numerator = numerator + fractionVar.numerator;
	quotient.denominator = denominator + fractionVar.denominator;

	return quotient;
}
bool Fraction::isEqualTo(Fraction fractionVar1, Fraction fractionVar2) const
//Pre: Both arguments have been initialized
//Post: true is returned if the arguments are equal
{
	if(fractionVar1.numerator * fractionVar2.denominator == fractionVar1.denominator * fractionVar2.numerator)
	{
		return true;
	}
	else
	{
		return false;
	}
}
