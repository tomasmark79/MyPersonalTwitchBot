#include <MyTwitchBot/MyTwitchBot.hpp>
#include <mytwitchbot/version.h>

#include <chrono>
#include <iostream>
#include <memory>
#include <thread>

// Standalone main entry point

auto main(int argc, char *argv[], char *env[]) -> int
{
    // init MyTwitchBot instance
    std::unique_ptr<MyTwitchBot> Lib = std::make_unique<MyTwitchBot>();

    // five seconds delay
    std::cout << "Wait for 5 seconds please ..." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(5));

    // bye bye
    std::cout << "Bye bye!" << std::endl;

    return 0;
}
