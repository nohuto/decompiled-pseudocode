/*
 * XREFs of SymCryptEcurveFree @ 0x1403F2CB4
 * Callers:
 *     HashpVerifyEcdsaSignature @ 0x140A74544 (HashpVerifyEcdsaSignature.c)
 * Callees:
 *     SymCryptWipe @ 0x1403F0988 (SymCryptWipe.c)
 *     SymCryptCallbackFree @ 0x14067B438 (SymCryptCallbackFree.c)
 */

__int64 __fastcall SymCryptEcurveFree(__int64 a1)
{
  SymCryptWipe(a1, *(unsigned int *)(a1 + 40));
  return SymCryptCallbackFree(a1);
}
