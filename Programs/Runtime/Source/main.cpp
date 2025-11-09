#include <Rapid/Core/Core.hpp>
#include <Rapid/Core/Logger.hpp>

using namespace Rapid;

int main(const int argc, const char* argv[])
{
	(void)argc; (void)argv;

	Logger::Trace("Printing: {0}", 10);
	Logger::Info("Printing: {0}", 20);
	Logger::Warning("Printing: {0}", 30);
	Logger::Error("Printing: {0}", 40);
	Logger::Fatal("Printing: {0}", 50);

	return 0;
}
