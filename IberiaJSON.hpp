//
//  IberiaJSON.hpp
//  Iberia
//
//  Created by Robb on 4/21/17.
//  Copyright © 2017 Robb Long. All rights reserved.
//

#include <string>
#include <iostream>
#include <fstream>

#include "IberiaIO.hpp"
#include "json.hpp"

#pragma once

#define DllExport   __declspec( dllexport ) 
using json = nlohmann::json;

class IberiaJSON
{
public:
	IberiaJSON();
	~IberiaJSON();
	bool WriteJSONFile(std::string fileName, json j);
	json ReadJSONFile(std::string fileName);
	std::string LoadJSON(std::string fileName);
};

