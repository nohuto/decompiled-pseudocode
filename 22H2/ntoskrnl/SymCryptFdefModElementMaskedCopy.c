/*
 * XREFs of SymCryptFdefModElementMaskedCopy @ 0x140403C9C
 * Callers:
 *     SymCryptModElementMaskedCopy @ 0x1403F9088 (SymCryptModElementMaskedCopy.c)
 * Callees:
 *     SymCryptFdefMaskedCopy @ 0x14040535C (SymCryptFdefMaskedCopy.c)
 */

__int64 __fastcall SymCryptFdefModElementMaskedCopy(__int64 a1, __int64 a2, __int64 a3)
{
  return SymCryptFdefMaskedCopy(a2, a3, *(unsigned int *)(a1 + 4));
}
