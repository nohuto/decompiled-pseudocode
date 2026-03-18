/*
 * XREFs of SymCryptFdefModElementMaskedCopy @ 0x14040BC0C
 * Callers:
 *     SymCryptModElementMaskedCopy @ 0x140400FC8 (SymCryptModElementMaskedCopy.c)
 * Callees:
 *     SymCryptFdefMaskedCopy @ 0x14040D3B0 (SymCryptFdefMaskedCopy.c)
 */

__int64 __fastcall SymCryptFdefModElementMaskedCopy(__int64 a1, __int64 a2, __int64 a3)
{
  return SymCryptFdefMaskedCopy(a2, a3, *(unsigned int *)(a1 + 4));
}
