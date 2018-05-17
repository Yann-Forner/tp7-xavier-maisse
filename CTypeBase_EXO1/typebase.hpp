#ifndef TYPEBASE_HPP
#define TYPEBASE_HPP
#include <cstdint>

namespace std {

template <class T>
class TypeBase
{
public:
    explicit TypeBase(T t=0) : myVal(t){}

    operator T &(void) {
        return myVal;
    }
private:
    T myVal;
};//

typedef TypeBase<int32_t> Integer;
typedef TypeBase<int16_t> Short;
typedef TypeBase<uint8_t> Character;
}

#endif // TYPEBASE_HPP
