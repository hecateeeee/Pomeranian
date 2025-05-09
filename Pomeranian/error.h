#pragma once

#include "Syntax/location.h"

namespace Pom
{
class Error
{
public:
    void Fail(const Syntax::Location& loc, const char* message);

private:
    void Report(const Syntax::Location& loc, const char* message);
};
}  // namespace Pom
