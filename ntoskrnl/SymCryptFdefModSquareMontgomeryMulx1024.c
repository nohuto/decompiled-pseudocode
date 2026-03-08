/*
 * XREFs of SymCryptFdefModSquareMontgomeryMulx1024 @ 0x1403FF5F0
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptFdefRawSquareMulx1024 @ 0x140407510 (SymCryptFdefRawSquareMulx1024.c)
 *     SymCryptFdefMontgomeryReduceMulx1024 @ 0x140408380 (SymCryptFdefMontgomeryReduceMulx1024.c)
 */

__int64 __fastcall SymCryptFdefModSquareMontgomeryMulx1024(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  SymCryptFdefRawSquareMulx1024(a2, *(unsigned int *)(a1 + 4), a4);
  return SymCryptFdefMontgomeryReduceMulx1024(a1, a4, a3);
}
