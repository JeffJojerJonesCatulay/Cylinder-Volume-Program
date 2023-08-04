#include <iostream>

using namespace std;

int main() {
	int radius, height;
	float volume_cylinder;
	cout<<"-----------------------------------\n";
	cout<<"Compute the Volume of a Cylinder\n";
	cout<<"-----------------------------------\n";
	cout<<"Enter the Value of It's Raduis:--> ";
	cin>> radius;
	cout<<"Enter the Value of It's Height: --> ";
	cin>>height;
	volume_cylinder = (3.14*radius*radius*height);
	cout<<"The Volume of the Cylinder is: "<<volume_cylinder;
	cout<<"\n\n\nSubmitted By: Jeff Jojer Jones E. Catulay\nBSCS 2B\n\n";
	system("pause");
}
