#pragma once
// Copyright Akira Takahashi 2020
// Use, modification and distribution is subject to the Boost Software License,
// Version 1.0. (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#include <iostream>
#include <utility>

namespace io {

struct coutln_t {};
inline coutln_t coutln{};

struct cerrln_t {};
inline cerrln_t cerrln{};

struct clogln_t {};
inline clogln_t clogln{};

struct wcoutln_t {};
inline wcoutln_t wcoutln{};

struct wcerrln_t {};
inline wcerrln_t wcerrln{};

struct wclogln_t {};
inline wclogln_t wclogln{};


#define DEFINE_OSTREAM_OPERATOR(type, os) \
template <class T> \
type& operator<<(type& out, const T& x) { \
    os << x << std::endl; \
    return out; \
} \
\
template <class T> \
type& operator<<(type& out, T&& x) { \
    os << std::move(x) << std::endl; \
    return out; \
}

DEFINE_OSTREAM_OPERATOR(coutln_t, std::cout);
DEFINE_OSTREAM_OPERATOR(cerrln_t, std::cerr);
DEFINE_OSTREAM_OPERATOR(clogln_t, std::clog);

DEFINE_OSTREAM_OPERATOR(wcoutln_t, std::wcout);
DEFINE_OSTREAM_OPERATOR(wcerrln_t, std::wcerr);
DEFINE_OSTREAM_OPERATOR(wclogln_t, std::wclog);

}
