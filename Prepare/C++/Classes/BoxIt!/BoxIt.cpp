#include<bits/stdc++.h>

using namespace std;

class Box {
    
    int l, b, h;
    
public:
    
    Box(){ l = 0; b = 0; h = 0; }
    
    Box(int length, int breadth, int height) {
        this->l = length;
        this->b = breadth;
        this->h = height;
    }
    
    Box(Box &box) {
        l = box.l;
        b = box.b;
        h = box.h; 
    }
    
    int getLength();
    int getBreadth();
    int getHeight();
    long long CalculateVolume();
    bool operator<(const Box &box);
    friend ostream& operator<<(ostream &o, Box &box) {
        o << box.getLength() << " " << box.getBreadth() << " " <<  box.getHeight();
        return o;
    };
};
int Box::getLength() { return l; }
int Box::getBreadth() { return b; }
int Box::getHeight() { return h; }
long long Box::CalculateVolume() { long long vol = (long long)l * (long long)b * (long long)h; return vol; }
bool Box::operator<(const Box &box) {
    if (l < box.l)
    {
        return true;
    }
    else if (l == box.l)
    {
        if (b < box.b)
        {
            return true;
        }
        else if (b == box.b)
        {
            if (h < box.h)
            {
                return true;
            }
        }
    }
    return false;
}

//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)


void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}
