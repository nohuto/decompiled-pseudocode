/*
 * XREFs of SymCryptRsaCoreVerifyInput @ 0x1403F476C
 * Callers:
 *     SymCryptRsaCoreEnc @ 0x1403F4594 (SymCryptRsaCoreEnc.c)
 * Callees:
 *     SymCryptRsakeySizeofModulus @ 0x1403F2470 (SymCryptRsakeySizeofModulus.c)
 *     SymCryptIntCreate @ 0x1403F37C8 (SymCryptIntCreate.c)
 *     SymCryptIntFromModulus @ 0x1403F383C (SymCryptIntFromModulus.c)
 *     SymCryptIntIsLessThan @ 0x1403F38B4 (SymCryptIntIsLessThan.c)
 *     SymCryptIntSetValue @ 0x1403F391C (SymCryptIntSetValue.c)
 *     SymCryptSizeofIntFromDigits @ 0x1403F3EF0 (SymCryptSizeofIntFromDigits.c)
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
    return 32782;
  if ( a5 < (unsigned int)SymCryptRsakeySizeofModulus(a1) )
    return 32782;
  if ( a3 == (unsigned int)SymCryptRsakeySizeofModulus(a1) )
  {
    SymCryptSizeofIntFromDigits();
    SymCryptIntCreate();
    v7 = SymCryptIntSetValue();
    if ( !v7 )
    {
      SymCryptIntFromModulus();
      if ( !(unsigned int)SymCryptIntIsLessThan() )
        return 32782;
    }
  }
  return v7;
}
