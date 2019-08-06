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


	vector<double> Nxs, Nys, Nzs;
	ng->GetAnchors(Nxs, Nys, Nzs);

	for(int i=0;i<Nxs.size();i++)
	{
		cout<<"ID "<<i<<", x "<<Nxs[i]<<", y "<<Nys[i]<<", z "<<Nzs[i]<<endl;
	}

	return 1;
}
