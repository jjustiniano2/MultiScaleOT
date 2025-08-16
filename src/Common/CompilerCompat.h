#pragma once

#if defined(_MSC_VER)
// Ignore any GCC-style attributes on MSVC
#ifndef __attribute__
#define __attribute__(x)
#endif

// Provide a 'uint' alias if not present
#ifndef HAVE_UINT_TYPEDEF
using uint = unsigned int;
#endif
#endif
