#include <iostream>
int choice;
int auxValue;
int arr1[4];
int auxValue2;
int arr2[4];
int number;
int secondnumber;
bool menu = true;
int mathChoice;
int multiplication;
int addition;
int substraction;
int division;
const int i = 4;
const int j = 4;
int x;
const int s = 4;
int prod[i + j - 1];
int add[i];
int sub[i];



// ********************************************************************************
/// <summary>
/// this function returns factorial of a number higher or equall to 0 
/// </summary>
/// <param name="n"></param> user's number input value
// ********************************************************************************
int factorial(int n)
{
	if (n == 0 || n == 1) 
	{
		return 1;
		
	}
	if (n > 1) 
	{
		return n * factorial(n - 1);
		
	}
	else {
		
	}
}

// ********************************************************************************
/// <summary>
/// this function prints exponential value of x for given polynomials
/// </summary>
/// <param name="arr"></param> general definition of a polynomial array
/// <param name="n"></param> general position of given array, in this case both polynomial arrays have equall size
// ********************************************************************************
void power(int arr[], int n) {


	int s = n-1;
	for (int i = 0; i < n; i++) {
		std::cout << arr[i] << "*x^" << s << " + ";
		s--;
	}
	
}


// ********************************************************************************
/// <summary>
/// this function finds the multiplication product of the 2 given polynomials while using positions of arrays
/// </summary>
/// <param name="arr1"></param>
/// <param name="arr2"></param>
/// <param name="i"></param>
/// <param name="j"></param>
// ********************************************************************************
void multiply(int arr1[], int arr2[], int i, int j)
{
	
	for (int n = 0; n < i; n++) {

		for (int m = 0; m < j; m++) {
			prod[m + n] += arr1[m] * arr2[n];
		}
	}
	power(prod, i + j-1);
	std::cout<<"\n";
   
}
// ********************************************************************************
/// </summary> this function adds two polynomials together
/// <param name="arr1"></param>  first polynomial array 
/// <param name="arr2"></param>  second polynomial array
/// <param name="i"></param>   position for the first polynomial array
/// <param name="j"></param>   position for the second polynomial array
// ********************************************************************************
void addPol(int arr1[], int arr2[], int i, int j)
{

	for (int n = 0; n < i; n++) {
		add[n] += arr1[n] +arr2[n];
		
	}
	std::cout << "Adiition product polynomial is ";
	power(add,i);
	std::cout << "\n";
}

// ********************************************************************************
/// </summary> this function substracts two polynomials from each other
/// <param name="arr1"></param>  first polynomial array 
/// <param name="arr2"></param>  second polynomial array
/// <param name="i"></param>   position for the first polynomial array
/// <param name="j"></param>   position for the second polynomial array
// ********************************************************************************
void subPol(int arr1[], int arr2[], int i, int j)
{

	for (int n = 0; n < i; n++) {
		sub[n] += arr1[n] - arr2[n];

	}
	std::cout << "Substraction product polynomial is ";
	power(sub, i);
	std::cout << "\n";
}


int main()
{
	

	while (menu) {
		std::cout << "Option 1: Factorial\n" << "Option 2: Solving polynomial equations\n" << "Option 3: Simple math\n" << "Option 4: Terminate the program\n";
		std::cout << "For choosing an option, please type in 1,2,3 or 4\n";
		std::cin >> choice;
		switch (choice) {
		case 1:
			int n;
			std::cout << "you chose factorial. \n"<<"please pick a number greater or equal to 0\n";
			std::cin >> n;
			if (n < 0) {
				std::cout << "no solution";
				std::cout << "\n";
				break;
			}
			std::cout << "factorial of " << n << " is " << factorial(n)<<"\n";

			break;
		case 2:
			std::cout << "you chose solving polynomial. First you need to decide what the polynomials are. Remember they can not be more than 3rd degree.\n Please write numbers in order, you don't need to write exponential values.  \n";
			
			//polynomial #1
			std::cout << "write your 4 numbers\n";
			for (int i = 0; i < 4; i++)
			{
				std::cin >> auxValue;
                arr1[i] = auxValue;

			}
			std::cout << "Your first polynomial is: ";
			x = 3;
			for (int i = 0; i < 4; i++) {
				std::cout << arr1[i] << "*x^" << x<<" + ";
				x--;
			}



			//polynomial#2 
			std::cout << "write your 4 numbers for second polynomial\n";
			for (int j = 0; j < 4; j++)
			{
				std::cin >> auxValue2;
				arr2[j] = auxValue2;

			}
			std::cout << "Your second polynomial is: ";
			x = 3;
			for (int j = 0; j < 4; j++) {
				std::cout << arr2[j] << "*x^" << x << " + ";
				x--;
			}

			
			std::cout << "What would you like to do?\n" << "Option 1. Multiply\n" << "Option2. Addition\n" << "Option 3. Substraction\n" << "Please choose number 1,2 or 3.\n";
			std::cin >> number;
			switch (number) {
			case 1:
				std::cout << "you chose Multiply. \n";
			    multiply(arr1, arr2, i, j);
				std::cout << "Product polynomial is ";
				
				break;


			case 2:
				std::cout << "you chose addition.\n";
				addPol(arr1, arr2, i, j);
				break;

			case 3:
				std::cout << "you chose substraction.\n";
				subPol(arr1, arr2, i, j);
				break;
			}
			break;

	    case 3:
			std::cout << "you chose simple math. \n";
			double division;
			std::cout << "Pick 2 numbers:   \n";  
			std::cin >> number;  
			std::cin >> secondnumber;
			std::cout << "Ok. What would you like to do with " << number << " and "<<secondnumber<< " ? \n";
			std::cout<<"Option 1. Multiplication\n" << "Option 2. Addition\n" << "Option 3. Substraction\n"<<"Option 4. Division\n" << "Please choose number 1,2,3 or 4.\n";
			std::cin >> mathChoice;
			switch (mathChoice) {
			case 1:
				std::cout << "you chose multiplication\n";
				int multiplication;
				multiplication = (double)number * (double)secondnumber;
				std::cout << number << "*" << secondnumber << " = " << (double)multiplication << "\n";
				break;
			case 2:
				std::cout << "you chose addition\n";
				addition = (double)number + (double)secondnumber;
				std::cout << number << " + " << secondnumber << " = " << (double)addition << "\n";
				break;
			case 3:
				std::cout << "you chose substraction\n";
				substraction = (double)number - (double)secondnumber;
				std::cout << number << " - " << secondnumber << " = " << (double)substraction << "\n";
				break;
			case 4:
				std::cout << "you chose division\n";
				if (secondnumber != 0) {
					division = (double)number / (double)secondnumber;
					std::cout << number << "/" << secondnumber << " = " << (double)division<<"\n";
				}

				else {
					std::cout << "Not possible to divide by 0 and you know it.\n";
				}
				break;
			
			
			}
			break;





		case 4:
			std::cout << "you chose to terminate the program. Bye then. ";
			std::cout << "  ";
			menu=false;
			break;

		default:
			std::cout << "Not what i've expected\n";
			
			break;
		
		}
	}
}