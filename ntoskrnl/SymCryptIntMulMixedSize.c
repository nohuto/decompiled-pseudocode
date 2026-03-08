/*
 * XREFs of SymCryptIntMulMixedSize @ 0x1403F38E4
 * Callers:
 *     SymCryptRsakeyCalculatePrivateFields @ 0x1403F1A48 (SymCryptRsakeyCalculatePrivateFields.c)
 *     SymCryptIntExtendedGcd @ 0x1403F81E4 (SymCryptIntExtendedGcd.c)
 * Callees:
 *     SymCryptFdefIntMulMixedSize @ 0x1403FD9AC (SymCryptFdefIntMulMixedSize.c)
 */

__int64 __fastcall SymCryptIntMulMixedSize(int a1, int a2, int a3, int a4, __int64 a5)
{
  return SymCryptFdefIntMulMixedSize(a1, a2, a3, a4, a5);
}
