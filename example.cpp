// Copyright Akira Takahashi 2020
// Use, modification and distribution is subject to the Boost Software License,
// Version 1.0. (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
#include "coutln.h"

int main() {
    io::coutln << "Hello" << "World";
    io::cerrln << "Hello" << "World";
    io::clogln << "Hello" << "World";

    io::wcoutln << "Hello" << "World";
    io::wcerrln << "Hello" << "World";
    io::wclogln << "Hello" << "World";
}
