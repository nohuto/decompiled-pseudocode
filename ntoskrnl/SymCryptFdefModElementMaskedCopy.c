/*
 * XREFs of SymCryptFdefModElementMaskedCopy @ 0x1403FE77C
 * Callers:
 *     SymCryptModElementMaskedCopy @ 0x1403F3B68 (SymCryptModElementMaskedCopy.c)
 * Callees:
 *     SymCryptFdefMaskedCopy @ 0x1403FFE3C (SymCryptFdefMaskedCopy.c)
 */

__int64 __fastcall SymCryptFdefModElementMaskedCopy(__int64 a1, __int64 a2, __int64 a3)
{
  return SymCryptFdefMaskedCopy(a2, a3, *(unsigned int *)(a1 + 4));
}
