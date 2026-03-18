/*
 * XREFs of SymCryptIntMulMixedSize @ 0x140400CD8
 * Callers:
 *     SymCryptRsakeyCalculatePrivateFields @ 0x1403FEE6C (SymCryptRsakeyCalculatePrivateFields.c)
 *     SymCryptIntExtendedGcd @ 0x1404055F4 (SymCryptIntExtendedGcd.c)
 * Callees:
 *     SymCryptFdefIntMulMixedSize @ 0x14040AE3C (SymCryptFdefIntMulMixedSize.c)
 */

__int64 __fastcall SymCryptIntMulMixedSize(int a1, int a2, int a3, int a4, __int64 a5)
{
  return SymCryptFdefIntMulMixedSize(a1, a2, a3, a4, a5);
}
