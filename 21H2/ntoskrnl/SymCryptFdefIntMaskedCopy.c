/*
 * XREFs of SymCryptFdefIntMaskedCopy @ 0x14040D2E8
 * Callers:
 *     SymCryptIntMaskedCopy @ 0x140400CC0 (SymCryptIntMaskedCopy.c)
 * Callees:
 *     SymCryptFdefMaskedCopyAsm @ 0x14040D7E0 (SymCryptFdefMaskedCopyAsm.c)
 */

__int64 __fastcall SymCryptFdefIntMaskedCopy(__int64 a1, __int64 a2, unsigned int a3)
{
  return SymCryptFdefMaskedCopyAsm(a1 + 32, a2 + 32, *(unsigned int *)(a1 + 4), a3);
}
