/*
 * XREFs of SymCryptRsaCoreVerifyInput @ 0x140401BCC
 * Callers:
 *     SymCryptRsaCoreEnc @ 0x1404019F4 (SymCryptRsaCoreEnc.c)
 * Callees:
 *     SymCryptRsakeySizeofModulus @ 0x1403FF880 (SymCryptRsakeySizeofModulus.c)
 *     SymCryptIntCreate @ 0x140400BBC (SymCryptIntCreate.c)
 *     SymCryptIntFromModulus @ 0x140400C30 (SymCryptIntFromModulus.c)
 *     SymCryptIntIsLessThan @ 0x140400CA8 (SymCryptIntIsLessThan.c)
 *     SymCryptIntSetValue @ 0x140400D10 (SymCryptIntSetValue.c)
 *     SymCryptSizeofIntFromDigits @ 0x140401350 (SymCryptSizeofIntFromDigits.c)
 */

__int64 __fastcall SymCryptRsaCoreVerifyInput(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 a5)
{
  unsigned int v7; // ebx

  v7 = 0;
  if ( a3 > (unsigned int)SymCryptRsakeySizeofModulus(a1) )
    return 209715726;
  if ( a5 < (unsigned int)SymCryptRsakeySizeofModulus(a1) )
    return 209715726;
  if ( a3 == (unsigned int)SymCryptRsakeySizeofModulus(a1) )
  {
    SymCryptSizeofIntFromDigits();
    SymCryptIntCreate();
    v7 = SymCryptIntSetValue();
    if ( !v7 )
    {
      SymCryptIntFromModulus();
      if ( !(unsigned int)SymCryptIntIsLessThan() )
        return 209715726;
    }
  }
  return v7;
}
