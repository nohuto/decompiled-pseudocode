/*
 * XREFs of SymCryptFdefModMulMontgomery512 @ 0x14040C490
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptFdefRawMul512Asm @ 0x14040E690 (SymCryptFdefRawMul512Asm.c)
 *     SymCryptFdefMontgomeryReduce512Asm @ 0x14040EE40 (SymCryptFdefMontgomeryReduce512Asm.c)
 */

__int64 __fastcall SymCryptFdefModMulMontgomery512(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  SymCryptFdefRawMul512Asm(a2, a3, *(unsigned int *)(a1 + 4), a5);
  return SymCryptFdefMontgomeryReduce512Asm(a1, a5, a4);
}
