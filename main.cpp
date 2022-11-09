// Dale Sellers // J00548890 // Page 259 Question 7 //

#include<iostream>

#include<cmath>

using namespace std;

int main() {

int a,b,c;

//get coefficient of x^2 from the user

cout<<"Enter the coefficient of x^2: ";

cin>>a;

//get the coefficient of x from tge user

cout<<"Enter the coefficient of x: ";

cin>>b;

//get the constant term from the user

cout<<"Enter the constant term: ";

cin>>c;

cout<<endl;

float discr,root1,root2;

//compute the discriminant

discr = b*b - 4*a*c;

//check if discriminant is greater then 0

if (discr > 0) {

//compute real and different roots

root1 = (-b + pow(discr,0.5)) / (2*a);

//using pow() function to find sqr roots

root2= (-b - pow(discr,0.5)) / (2*a);

//print the roots with decimal precision of 2.

printf("Roots are: %.2f and %.2f",root1,root2);

}

//if discriminant is equal to 0

else if (discr== 0) {

//then compute real and same roots

root1 = (-b + pow(discr,0.5)) / (2*a);

//print the root with decimal precision of 2.

printf("Root is: %.2f",root1);

}

//if discriminant is less then 0 then

//as per the question dont print the roots

else {

//just print a message

cout << "Roots are complex." << endl;

}

  cout << " Dale Sellers // J00548890 // Page 259 // Question 7 " << endl;
  
return 0;

}
