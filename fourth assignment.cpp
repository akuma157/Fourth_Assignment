/*
My Name: Ahmed Khalid Abdelrahman Hassan
Class: Second Year
Department: Computer Engineering
*/
#include<iostream>
#include<cmath> // the c++ math library
using namespace std;
class ShapesClass{ // the shapes class
	private: // all the operations variables are saved previously
		float pi=3.14,ca,cc,r,ea,ec,a,b,sa,sc,S,ra,rc,l,w,ta,tc,BC,AB,CA;
 	public: // all the operations are hidden from the user
		circle(){ // the circle claculations
			cout<<"Enter the Circle Radius: ";cin>>r;
			ca=pi*pow(r, 2);
			cc=2*pi*r;
			cout<<"\nThe Circle Area is: "<<ca<<endl;
			cout<<"The Circle Circumference is: "<<cc;
		}
		ellipse(){ // the ellipse claculations
			cout<<"Enter the Long Axis: ";cin>>a;
			cout<<"Enter the Short Axis: ";cin>>b;
			ea=pi*a*b;
			ec=2*pi*sqrt(2*(pow(a/2, 2)+pow(b/2, 2)));
			cout<<"\nThe Ellipse Area is: "<<ea<<endl; 
			cout<<"The Ellipse Circumference is: ";cout<<ec;
		}
		square(){ // the square claculations
			cout<<"Enter the Sides Length: ";cin>>S;
			sa=pow(S, 2);
			sc=4*S;
			cout<<"The Square's Area is: "<<sa<<endl;
			cout<<"The Square's Circumference is: "<<sc;
		}
		rectangle(){ // the rectangle claculations
			cout<<"Enter the Rectangle's Length: ";cin>>l;
			cout<<"Enter the Rectangle's Width: ";cin>>w;
			ra=l*w;
			rc=2*(l+w);
			cout<<"The Rectangle Area is: "<<ra<<endl;
			cout<<"The Rectangle Circumference is: "<<rc;
		}
		triangle(){ // the triangle claculations
			cout<<"In the Triangle ABC\n";
			cout<<"Enter the BC Side (The Base): ";cin>>BC;
			cout<<"Enter the AB Side: ";cin>>AB;
			cout<<"Enter the CA Side: ";cin>>CA;
			ta=BC*AB/CA;
			tc=AB+CA+BC;
			cout<<"\nThe Triangle Area is: ";cout<<ta<<endl;
			cout<<"The Triangle Circumference is: ";cout<<tc;
		}
		polygon(){ // the polygon claculations
			int i=1, s;
			float pa,sl,ss,pp,ap ;
			cout<<"Enter the Number of Sides: ";cin>>s;
			cout<<"Enter the length of Each Side: \n";
			while (i<=s)
				{
					cin>>sl;
					ss=ss+sl;
					i=i+1;
				}
			pp=s*sl;
			cout<<"Enter the Apothem: ";cin>>ap;
			pa=pp*ap/2;
			cout<<"\nThe Polygon Area is: "<<pa<<endl;
			cout<<"The Polygon Perimeter is: "<<pp;
		}
};

main() // the function main in used for recalling functions
{
	int x; // the loop variable x
	string con;
	int cls; // the switch case selector
	ShapesClass ShapesObject; // the class objects name is ShapesObject
	do{
		x=x+1;
		cout<<"To Calculate Enter:\n1 for Circle\n2 for Ellipse\n3 for Square\n4 for Rectangle\n5 for Triangle\n6 for Polygon\n";cin>>cls;
		switch (cls){ // select the case number to start claculate 
			case 1:{ShapesObject.circle();break;}
			case 2:{ShapesObject.ellipse();break;}
			case 3:{ShapesObject.square();break;}
			case 4:{ShapesObject.rectangle();break;}
			case 5:{ShapesObject.triangle();break;}
			case 6:{ShapesObject.polygon();break;}
			default :{cout<<"";break;}}
		cout<<"\n--------------------------------\n";
		cout<<"Continue? (y/n) ";cin>>con; // enter y to continue or n to exit
		if (con=="n")
		break;
		cout<<"--------------------------------\n";
	}
	while (x>=1); // the program will repeat itself till the user break it
	return 0;
}
