﻿
#include "dmos.h"
#include "dmutil.h"
#include "dmtypes.h"
#include "dmformat.h"
#include "dmiconv.h"

int main(int argc, char* argv[]) {
    {
        std::string in = "hello iconv";
        std::string out = iconvpp::LatintoUtf8(in);
        fmt::fprintf(stdout, "%s\n", out.c_str());
        std::string out2 = iconvpp::Utf8toLatin(out);
        fmt::fprintf(stdout, "%s\n", out2.c_str());
    }
    {
        std::string in = "今天天气不错";
        std::string out = iconvpp::LatintoUtf8(in);
        fmt::fprintf(stdout, "%s\n", out.c_str());
        std::string out2 = iconvpp::Utf8toLatin(out);
        fmt::fprintf(stdout, "%s\n", out2.c_str());
    }
    {
        std::string in = "2018 你好";
        std::string out = iconvpp::LatintoUtf8(in);
        fmt::fprintf(stdout, "%s\n", out.c_str());
        std::string out2 = iconvpp::Utf8toLatin(out);
        fmt::fprintf(stdout, "%s\n", out2.c_str());
    }
    return 0;
}
