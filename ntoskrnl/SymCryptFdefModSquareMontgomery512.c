/*
 * XREFs of SymCryptFdefModSquareMontgomery512 @ 0x1403FF550
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptFdefRawSquare512Asm @ 0x140401300 (SymCryptFdefRawSquare512Asm.c)
 *     SymCryptFdefMontgomeryReduce512Asm @ 0x140401900 (SymCryptFdefMontgomeryReduce512Asm.c)
 */

__int64 __fastcall SymCryptFdefModSquareMontgomery512(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  SymCryptFdefRawSquare512Asm(a2, *(unsigned int *)(a1 + 4), a4);
  return SymCryptFdefMontgomeryReduce512Asm(a1, a4, a3);
}
