#pragma once

//Debugging, remove in final build
#include <iostream>

#include <string>
#include <fstream>
#include <streambuf>
#include "Book.h"

class InventoryDatabase
{
private:
	//Static members
	static std::string inventoryFilePath;
	static Book* bookArray;

	//Helper functions
	std::string parseString(std::string str, std::string delimiter);
	std::string inventoryFileToString();
	int getBookCount();

	//Database-related functions
	void createBookArray();
	void deleteBookArray();

public:
	//Database-related functions
	void setInventoryFilePath(std::string path);

	//Constuctors
	InventoryDatabase();

	//Destructors
	~InventoryDatabase();

	//Debugging function, remove in final build
	void debug();
};