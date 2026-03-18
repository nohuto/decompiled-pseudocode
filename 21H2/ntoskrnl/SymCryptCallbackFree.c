/*
 * XREFs of SymCryptCallbackFree @ 0x140656BA8
 * Callers:
 *     SymCryptRsakeySetValue @ 0x1403FF3BC (SymCryptRsakeySetValue.c)
 *     SymCryptEcurveAllocate @ 0x1403FF93C (SymCryptEcurveAllocate.c)
 *     SymCryptEcurveFree @ 0x1404000C8 (SymCryptEcurveFree.c)
 *     SymCryptEckeyFree @ 0x1404001EC (SymCryptEckeyFree.c)
 *     SymCryptEckeySetValue @ 0x140400318 (SymCryptEckeySetValue.c)
 *     SymCryptEcDsaVerify @ 0x140401470 (SymCryptEcDsaVerify.c)
 *     SymCryptRsaPkcs1Verify @ 0x140401C90 (SymCryptRsaPkcs1Verify.c)
 * Callees:
 *     MincryptFree @ 0x140A3412C (MincryptFree.c)
 */

__int64 __fastcall SymCryptCallbackFree(__int64 a1)
{
  return MincryptFree(a1 - *(unsigned int *)(a1 - 4));
}
