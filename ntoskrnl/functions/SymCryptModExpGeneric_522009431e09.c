__int64 __fastcall SymCryptModExpGeneric(
        int a1,
        int a2,
        int a3,
        unsigned int a4,
        char a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  if ( (a5 & 1) != 0 && a4 <= 0x20 )
    return SymCryptModExpSquareAndMultiply32(a1, a2, a3, a6, a7, a8);
  else
    return SymCryptModExpWindowed(a1, a2, a3, a4, a6, a7, a8);
}
