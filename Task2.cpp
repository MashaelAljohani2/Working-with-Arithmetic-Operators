// Working with Arithmetic Operators 

#include <iostream>
using namespace std;

class Arithmetic
{
	private:
	int Numerator;
	int Denominator;

	public:
	void setValue() //Setter function 
	{
		cout<<"Numerator: ";
		cin>>Numerator;
		cout<<"Denominator: ";
		cin>>Denominator;
	}

	int Addition()
	{ return Numerator+Denominator; }
	
	int Subtraction()
	{ return Numerator-Denominator;	}
	
	int Multiply()
	{ return Numerator*Denominator;	}
	
	double Division()
	{
		if(Denominator == 0 )
		{
			cout<<"Error: Division by zero!! are you serious!!"<<endl;
			return 0.0;
		}
		//Convert numerator to double to perform floating-point division
		return static_cast<double>(Numerator/Denominator);		
	}
};

int main()
{
	Arithmetic operators;

        operators.setValue();
	cout<<"The result of the addition is: "<<operators.Addition()<<endl;
	cout<<"The result of the subtraction is: "<<operators.Subtraction()<<endl;
	cout<<"The result of the multiplication is: "<<operators.Multiply()<<endl;
	cout<<"The result of the division is: "<<operators.Division()<<endl;

	return 0;
}
