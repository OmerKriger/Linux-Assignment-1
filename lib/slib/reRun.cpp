#include "utility.h"
#include <filesystem>
using namespace std;
namespace fs = std::filesystem;

int rerun(std::string inputs, const FlightDatabase &DB)
{
    set<string> airports;
    string command = "./flightScanner.sh";
    if (inputs.size() == 0)
    {
        airports = DB.get_airports_names();
    }
    else
    {
        system("rm -r flightsDB");
        command = command + inputs;
        system(command.c_str());
        return EXIT_SUCCESS;
    }
}