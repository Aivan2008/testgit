#include <iostream>
#include <mutex>
#include <string>

static class UniqueLogger
{
	std::mutex locker;
	const std::string filename = "/home/ivan/testfile.txt"

	static void writelock(const std::string &data)
	{
		//locker.lock()
		std::ofstream ofs;
		ofs.open(filename);
		ofs<<data.c_str();
		//locker.unlock();	
	}
}
