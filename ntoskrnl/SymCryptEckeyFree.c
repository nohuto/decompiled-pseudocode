/*
 * XREFs of SymCryptEckeyFree @ 0x1403F2DD8
 * Callers:
 *     HashpVerifyEcdsaSignature @ 0x140A74544 (HashpVerifyEcdsaSignature.c)
 * Callees:
 *     SymCryptEckeyWipe @ 0x1403F3370 (SymCryptEckeyWipe.c)
 *     SymCryptCallbackFree @ 0x14067B438 (SymCryptCallbackFree.c)
 */

__int64 __fastcall SymCryptEckeyFree(__int64 a1)
{
  SymCryptEckeyWipe();
  return SymCryptCallbackFree(a1);
}
