#include <iostream>
#include <string>


class Square
{
		std::string colour;
		
	public:
	    Square(){y = 5;}
		void printColour();
		int x;
		int y;
		
};
void Square::printColour() 
{
	std::cout << colour << std::endl;
};
//#########################################################################
class Face
{
		std::string side;
	public:
		Square squares[9];
		void printSide();
		void initColour(char colour);
};
void Face::printSide() 
{
        for(int i=0; i < 9; i++)
        {
            std::cout << squares[i].y << std::endl;
        };
};
void Face::initColour(char colour)
{
        for(int i=0; i < sizeof(squares); i++)
        {
            this->squares[i].y = i;
        };
};
//#########################################################################
class Cube
{
		std::string cube;
	public:
		//Cube();
        Face faces[6];
		void printCube();
};		
void Cube::printCube()
{
std::cout << cube << std::endl;
};

//Cube::Cube()
//{        	        	    
//};
















