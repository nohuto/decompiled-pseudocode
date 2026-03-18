/*
 * XREFs of SymCryptEckeyFree @ 0x1403F82F8
 * Callers:
 *     HashpVerifyEcdsaSignature @ 0x140A77244 (HashpVerifyEcdsaSignature.c)
 * Callees:
 *     SymCryptEckeyWipe @ 0x1403F8890 (SymCryptEckeyWipe.c)
 *     SymCryptCallbackFree @ 0x14067DA88 (SymCryptCallbackFree.c)
 */

__int64 __fastcall SymCryptEckeyFree(__int64 a1)
{
  SymCryptEckeyWipe();
  return SymCryptCallbackFree(a1);
}
