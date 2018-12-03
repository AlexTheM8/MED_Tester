//============================================================================
// Name        : MED_Tester.cpp
// Author      : 
// Version     :
// Copyright   : Steal this code!
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>       // std::cout
#include <thread>         // std::thread
#include <sstream>
#include "../../crypto/includes/crypto.h"
#include "../../crypto/includes/crypto_AES.h"
#include "../../crypto/includes/HexHelper.h"
#include "../../datastore/includes/data_store.h"
#include "../../datastore/includes/data_store_file.h"
#include "../../datastore/includes/string_data.h"
#include "../../stringdatabase/includes/string_database.h"

//I've provided some hints in the form of comments and commented out code
//use them if you wish

//global database object
/**
String_Database myGlobalCache;

bool testSerialization(const std::string &MYFILE1, const std::string &MYFILE2,
		Crypto *pCrypto) {
	DataStore_File myDataStore_File1(MYFILE1, pCrypto);
	myGlobalCache.save(&myDataStore_File1);

	//clear cache
	myGlobalCache.clear();
		std::cout<<"Clearing Cache\n";

	//load it
	myGlobalCache.load(&myDataStore_File1);
		std::cout<<"Loading from file "+ MYFILE1 +" \n";

	//save to a different file
	DataStore_File myDataStore_File2(MYFILE2, pCrypto);
	myGlobalCache.save(&myDataStore_File2);
		std::cout<<"Saving to file "+ MYFILE2 +" \n";

	//I use my own objects here to compare the files
	return true;
}
*/

int main() {

	//I created and ran a bunch(20) of threads that added different strings to a string_database instance

	//Then I waited for all of them to finish so my program did not crash

	//Then I went through my string_database instance and made sure that it held the correct data

	//then I tested  serialization
	//first without encryption, 
	/**
	testSerialization("", "", 0);

	//then with
	std::string str = "I Like Rollos   ";
	char *cstr = new char[str.length() + 1];
	strcpy(cstr, str.c_str());
	Crypto_AES myCrypto(cstr);
	testSerialization("", "", &myCrypto);
	*/
}
