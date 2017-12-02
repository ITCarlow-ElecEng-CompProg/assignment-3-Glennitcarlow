/*
Glenn Ahearne
06/11/17
Exercise 3
Standard Deviation
*/

/**Preprocessive Directives*/
#include <iostream>
#include <math.h>


using namespace std;

/**Function prototype main()*/
int main()
{
    /**Variable Declarations with array type for values*/
    double values[10]={0}, mean, product, sum = 0, standdev;
    int n;

    /**Assigning values to variables*/
    n=0;
    sum = 0;

    /**While loop for Postive/Negitive Value for N*/
    while (n<10)

    {
        /**Read out instruction to user*/
        cout << "\n\t\tEnter Positive or Negative Value : ";
        /**read in value to store in array values*/
        cin >> values[n];

        /**Calculating the sum*/
        sum = sum + values[n];

        n++;
    }
    /**calculating the mean value*/
    mean = sum / 10.0;

    product = 0;
    /**while loop for n < 10*/
    n = 0;
    while (n<10)
    {
        /**calculating the product and incrementing N*/
        product = product + ((values[n] - mean) * (values[n] - mean));

        n++;
    }
    /**Standard Deviation final calculation*/

    standdev = sqrt(product / 9.0) ;

    /**Read out mean to user*/
    cout << "\n\n\t\t Mean value is : " << mean <<endl;

    /**Read out Standard Deviation to user*/
    cout << "\n\n\t\tStandard Deviation is : " << standdev <<endl;


    return 0;
}
