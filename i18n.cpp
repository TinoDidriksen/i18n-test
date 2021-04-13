#include <iostream>
#include <unicode/resbund.h>
using namespace icu;

int main() {
	UErrorCode status = U_ZERO_ERROR;
	auto loc = Locale::getDefault();
	ResourceBundle res(UnicodeString("./res"), loc, status);
	if (U_FAILURE(status)) {
		std::cerr << "BAD" << std::endl;
		return -1;
	}
	
	std::string utf8;
	std::cout << res.getStringEx("HELLO_WORLD", status).toUTF8String(utf8) << std::endl;
}
