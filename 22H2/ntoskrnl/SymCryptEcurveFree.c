/*
 * XREFs of SymCryptEcurveFree @ 0x1403F81D4
 * Callers:
 *     HashpVerifyEcdsaSignature @ 0x140A77244 (HashpVerifyEcdsaSignature.c)
 * Callees:
 *     SymCryptWipe @ 0x1403F5EA8 (SymCryptWipe.c)
 *     SymCryptCallbackFree @ 0x14067DA88 (SymCryptCallbackFree.c)
 */

__int64 __fastcall SymCryptEcurveFree(__int64 a1)
{
  SymCryptWipe(a1, *(unsigned int *)(a1 + 40));
  return SymCryptCallbackFree(a1);
}
