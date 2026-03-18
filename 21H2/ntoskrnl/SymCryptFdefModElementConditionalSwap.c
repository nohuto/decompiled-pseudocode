/*
 * XREFs of SymCryptFdefModElementConditionalSwap @ 0x14040BA70
 * Callers:
 *     SymCryptModElementConditionalSwap @ 0x140400F1C (SymCryptModElementConditionalSwap.c)
 * Callees:
 *     SymCryptFdefConditionalSwap @ 0x14040CF48 (SymCryptFdefConditionalSwap.c)
 */

__int64 __fastcall SymCryptFdefModElementConditionalSwap(__int64 a1, __int64 a2, __int64 a3)
{
  return SymCryptFdefConditionalSwap(a2, a3, *(unsigned int *)(a1 + 4));
}
