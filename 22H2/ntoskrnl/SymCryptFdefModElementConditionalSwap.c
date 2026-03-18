/*
 * XREFs of SymCryptFdefModElementConditionalSwap @ 0x140403B00
 * Callers:
 *     SymCryptModElementConditionalSwap @ 0x1403F8FDC (SymCryptModElementConditionalSwap.c)
 * Callees:
 *     SymCryptFdefConditionalSwap @ 0x140404F34 (SymCryptFdefConditionalSwap.c)
 */

__int64 __fastcall SymCryptFdefModElementConditionalSwap(__int64 a1, __int64 a2, __int64 a3)
{
  return SymCryptFdefConditionalSwap(a2, a3, *(unsigned int *)(a1 + 4));
}
