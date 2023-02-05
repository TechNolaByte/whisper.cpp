#include <cstdarg>
#include <cstdint>
#include <cstdlib>
#include <ostream>
#include <new>

enum class Response : uint8_t {
  DoNothing,
  Shutdown,
};

extern "C" {

Response parse_command(const char *command_as_c_string);

}
