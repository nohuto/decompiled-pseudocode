/*
 * XREFs of SymCryptFdefIntMaskedCopy @ 0x1403FFD74
 * Callers:
 *     SymCryptIntMaskedCopy @ 0x1403F38CC (SymCryptIntMaskedCopy.c)
 * Callees:
 *     SymCryptFdefMaskedCopyAsm @ 0x140400260 (SymCryptFdefMaskedCopyAsm.c)
 */

__int64 __fastcall SymCryptFdefIntMaskedCopy(__int64 a1, __int64 a2, unsigned int a3)
{
  return SymCryptFdefMaskedCopyAsm(a1 + 32, a2 + 32, *(unsigned int *)(a1 + 4), a3);
}
