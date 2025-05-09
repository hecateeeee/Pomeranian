#include "error.h"
#include <stdio.h>

void Pom::Error::Fail(const Syntax::Location& loc, const char* message)
{
    Report(loc, message);
}

void Pom::Error::Report(const Syntax::Location& loc, const char* message)
{
    printf("Error: %s\n%d:%d", message, loc.m_line, loc.m_char);
}
