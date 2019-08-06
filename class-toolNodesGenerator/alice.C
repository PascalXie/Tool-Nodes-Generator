#include <iostream>
#include <string>

#include "ToolNodesGenerator.hh"


using namespace std;

int main()
{
	cout<<"Hello "<<endl;

	ToolNodesGenerator * ng = new ToolNodesGenerator("ng", 20, 10, "2D");
	ng->SetBoundaryX(-100,100);
	ng->SetBoundaryY(-100,100);
	ng->Initialize();


	return 1;
}
