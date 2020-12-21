#include "ring_buffer.h"

#include <string>

int main()
{
    ring_buffer<std::string, 5> x{};

    x.write("Hello_world");

    for (auto const& each : x)
    {
        std::cout << each << std::endl;
    }
}