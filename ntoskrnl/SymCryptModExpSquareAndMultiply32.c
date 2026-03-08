/*
 * XREFs of SymCryptModExpSquareAndMultiply32 @ 0x1404036D4
 * Callers:
 *     SymCryptModExpGeneric @ 0x140403668 (SymCryptModExpGeneric.c)
 * Callees:
 *     SymCryptIntGetValueLsbits32 @ 0x1403F3884 (SymCryptIntGetValueLsbits32.c)
 *     SymCryptModElementCopy @ 0x1403F3AD4 (SymCryptModElementCopy.c)
 *     SymCryptModElementCreate @ 0x1403F3AEC (SymCryptModElementCreate.c)
 *     SymCryptModElementSetValueUint32 @ 0x1403F3C0C (SymCryptModElementSetValueUint32.c)
 *     SymCryptModMul @ 0x1403F3D74 (SymCryptModMul.c)
 *     SymCryptModSquare @ 0x1403F3E50 (SymCryptModSquare.c)
 *     SymCryptSizeofModElementFromModulus @ 0x1403F3F08 (SymCryptSizeofModElementFromModulus.c)
 */

__int64 __fastcall SymCryptModExpSquareAndMultiply32(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v9; // rbx
  unsigned int ValueLsbits32; // ebp
  __int64 v11; // r15
  __int64 v12; // r9
  __int64 v13; // rbx

  v9 = (unsigned int)SymCryptSizeofModElementFromModulus((__int64)a1);
  ValueLsbits32 = SymCryptIntGetValueLsbits32(a3);
  v11 = SymCryptModElementCreate();
  SymCryptModElementCreate();
  v12 = v9 + v9 + a5;
  v13 = -2 * v9 + a6;
  if ( !ValueLsbits32 )
    return SymCryptModElementSetValueUint32(1, a1, a4, v12, v13);
  SymCryptModElementSetValueUint32(1, a1, v11, v12, v13);
  SymCryptModElementCopy();
  while ( ValueLsbits32 > 1 )
  {
    if ( (ValueLsbits32 & 1) != 0 )
      SymCryptModMul(a1, v11);
    SymCryptModSquare(a1);
    ValueLsbits32 >>= 1;
  }
  return SymCryptModMul(a1, v11);
}
