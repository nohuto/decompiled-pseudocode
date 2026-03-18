/*
 * XREFs of SymCryptEckeyFree @ 0x1404001EC
 * Callers:
 *     HashpVerifyEcdsaSignature @ 0x140A374B0 (HashpVerifyEcdsaSignature.c)
 * Callees:
 *     SymCryptEckeyWipe @ 0x140400770 (SymCryptEckeyWipe.c)
 *     SymCryptCallbackFree @ 0x140656BA8 (SymCryptCallbackFree.c)
 */

__int64 __fastcall SymCryptEckeyFree(__int64 a1)
{
  SymCryptEckeyWipe();
  return SymCryptCallbackFree(a1);
}
