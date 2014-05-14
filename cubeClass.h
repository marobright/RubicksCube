#include <iostream>
#include <string>


class Square
{
		std::string colour;
		int x;
		
	public:
		Square();
		void printColour();
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
		Face(std::string facing) {side = facing;}
		Square squares[9];
		void printSide();
		void initColour(char colour);
};
void Face::printSide() 
{
	std::cout << side << std::endl;
};
void Face::initColour(char colour)
{
        for(int i=0; i < sizeof(squares); i++)
        {
            squares[i].y = i;
        } ;
};
//#########################################################################
class Cube
{
		std::string cube;
	public:
		Cube();

		void printCube();
};		
void Cube::printCube()
{
std::cout << cube << std::endl;
};

Cube::Cube()
{	
		Face faces[6] = {	Face("L"),
				            Face("F"), 
				            Face("R"), 
        			    	Face("T"), 
		        	    	Face("O"), 
		        	    	Face("A")};
		        	    	
        	        	    
};
















