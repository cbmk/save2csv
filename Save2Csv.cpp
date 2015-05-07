#include "stdafx.h"
#include <fstream>
#include <iostream>
#include <vector>

using namespace std;

public class KinectData
{
public:
	KinectData();
	~KinectData();
	double x;
	double y;
private:

};
KinectData::KinectData(){}
KinectData::~KinectData(){}

// Save CSV file
void SaveCsv(string fname, vector<KinectData> &kineDat)
{
	// open file to save
	ofstream ost(fname);
	vector<KinectData>::iterator kit;
	// loop data to end
	for (kit = kineDat.begin(); kit != kineDat.end(); kit++){
		// write csv data with comma
		ost << (*kit).x << "," << (*kit).y << endl;
	}
	return;
}

int main()
{
	vector<KinectData> data;
	KinectData dat1, dat2;
	dat1.x = 1.001;
	dat1.y = 1.101;
	dat2.x = 2.002;
	dat2.y = 2.202;
	// put sample data
	data.push_back(dat1);
	data.push_back(dat2);
	
	SaveCsv("sample.csv", data);

	return 0;
}


