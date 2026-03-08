/*
 * XREFs of SymCryptFdef369ModSquareMontgomery @ 0x140403DA0
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptFdef369ModMulMontgomery @ 0x140403C40 (SymCryptFdef369ModMulMontgomery.c)
 */

__int64 __fastcall SymCryptFdef369ModSquareMontgomery(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  return SymCryptFdef369ModMulMontgomery(a1, a2, a2, a3, a4);
}
