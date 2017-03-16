#ifndef __DATA_H__
#define __DATA_H__

#include<vector>

typedef int int32
typedef long long int64
typedef float float32

namespace zml{
    template<typename TX, typename TY>
    class Input{
        public:
        std::vector<std::vector<TX> >  X;
        std::vector<TY> y;
    };
}

#endif
