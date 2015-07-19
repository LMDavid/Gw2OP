#pragma once

#include "resource.h"

#ifdef UNICODE
    #define ELPP_UNICODE 1
#endif
#include "easylogging++.h"

#ifdef _DEBUG
    #define ONLY_DEBUG(x) x
#else
    #define ONLY_DEBUG(x) {}
#endif