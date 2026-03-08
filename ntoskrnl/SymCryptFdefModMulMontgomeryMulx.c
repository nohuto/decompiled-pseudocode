/*
 * XREFs of SymCryptFdefModMulMontgomeryMulx @ 0x1403FF020
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptFdefRawMulMulx @ 0x140404140 (SymCryptFdefRawMulMulx.c)
 *     SymCryptFdefMontgomeryReduceMulx @ 0x1404051F0 (SymCryptFdefMontgomeryReduceMulx.c)
 */

__int64 __fastcall SymCryptFdefModMulMontgomeryMulx(__int64 a1, int a2, int a3, __int64 a4, __int64 a5)
{
  SymCryptFdefRawMulMulx(a2, *(_DWORD *)(a1 + 4), a3, *(_DWORD *)(a1 + 4), a5);
  return SymCryptFdefMontgomeryReduceMulx(a1, a5, a4);
}
