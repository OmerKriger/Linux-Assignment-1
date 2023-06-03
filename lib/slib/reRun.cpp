#include "reRun.h"
using namespace std;
namespace fs = std::filesystem;

int reRun(std::string inputs, const FlightDatabase &DB)
{
    set<string> airports;
    string command = "./flightScanner.sh";
    if (inputs.size() == 0)
    {
        airports = DB.get_airports_names();
    }
    else
    { // TODO: Handle statusBack
        int stautsBack;
        stautsBack = system("rm -r flightsDB");
        command = command + inputs;
        stautsBack = system(command.c_str());
        return EXIT_SUCCESS;
    }
    return EXIT_SUCCESS;
}