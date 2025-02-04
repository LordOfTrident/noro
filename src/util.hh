#pragma once
#include "_components.hh"

namespace Util {
	std::string StringReplaceAll(std::string src, std::string replaceWhat, 
		std::string replaceWith
	);
	bool                      IsNumber(std::string str);
	bool                      IsBool(std::string str);
	bool                      StringEndsWith(std::string src, std::string suffix);
	std::vector <std::string> GetThemes();
	std::vector <std::string> GetRecordings();
}
