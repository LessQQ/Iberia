//
//  IberiaJSON.cpp
//  Iberia
//
//  Created by Robb on 3/26/17.
//  Copyright © 2017 Robb Long. All rights reserved.
//

#include "IberiaJSON.hpp"

IberiaJSON::IberiaJSON()
{
}

IberiaJSON::~IberiaJSON()
{
}

/*
bool IberiaJSON::WriteJSONFile(std::string fileName, json j)
{
	// put the json in a string
	std::string str = j.dump();

	// open the file and truncate
	std::ofstream fn(fileName, std::ios::out | std::ios::trunc);

	// write the json string to the file
	fn << str << std::endl;

	// close the file
	fn.close();

	// Iberia File IO
	IberiaIO ibio;

	// does the file exist?
	bool state = ibio.FileExist(fileName.c_str());

	// 
	if (state)
		return true;
	else
		return false;
}
*/

/*json IberiaJSON::ReadJSONFile(std::string fileName)
{
	// read a JSON file
	std::ifstream ifile(fileName);

	// JSON object
	//json j;

	// read the contents of the file
	//ifile >> j;

	// return it
	//return j;
}
*/

/*
std::string IberiaJSON::LoadJSON(std::string fileName)
{
	// Load the raw json
	//json j = ReadJSONFile(fileName);

	// deserialize it
	std::string result = j.dump();

	// return the string
	return result;
}
*/




