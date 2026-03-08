/*
 * XREFs of SymCryptFdefModElementConditionalSwap @ 0x1403FE5E0
 * Callers:
 *     SymCryptModElementConditionalSwap @ 0x1403F3ABC (SymCryptModElementConditionalSwap.c)
 * Callees:
 *     SymCryptFdefConditionalSwap @ 0x1403FFA14 (SymCryptFdefConditionalSwap.c)
 */

__int64 __fastcall SymCryptFdefModElementConditionalSwap(__int64 a1, __int64 a2, __int64 a3)
{
  return SymCryptFdefConditionalSwap(a2, a3, *(unsigned int *)(a1 + 4));
}
