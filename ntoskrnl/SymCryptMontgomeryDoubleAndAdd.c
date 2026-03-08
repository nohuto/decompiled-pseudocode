/*
 * XREFs of SymCryptMontgomeryDoubleAndAdd @ 0x1403FAD2C
 * Callers:
 *     SymCryptMontgomeryPointScalarMul @ 0x1403FB2C0 (SymCryptMontgomeryPointScalarMul.c)
 * Callees:
 *     SymCryptModAdd @ 0x1403F3A54 (SymCryptModAdd.c)
 *     SymCryptModMul @ 0x1403F3D74 (SymCryptModMul.c)
 *     SymCryptModSquare @ 0x1403F3E50 (SymCryptModSquare.c)
 *     SymCryptModSub @ 0x1403F3E84 (SymCryptModSub.c)
 */

__int64 __fastcall SymCryptMontgomeryDoubleAndAdd(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  SymCryptModAdd(a1, a5);
  SymCryptModSub(a1, a5);
  SymCryptModAdd(a1, a7);
  SymCryptModSub(a1, a7);
  SymCryptModMul(a1, a10);
  SymCryptModMul(a1, a8);
  SymCryptModSquare(a1);
  SymCryptModSquare(a1);
  SymCryptModSub(a1, a5);
  SymCryptModMul(a1, a5);
  SymCryptModMul(a1, a4);
  SymCryptModAdd(a1, a9);
  SymCryptModMul(a1, a10);
  SymCryptModAdd(a1, a8);
  SymCryptModSub(a1, a8);
  SymCryptModSquare(a1);
  if ( a3 )
    SymCryptModMul(a1, a3);
  SymCryptModSquare(a1);
  return SymCryptModMul(a1, a2);
}
