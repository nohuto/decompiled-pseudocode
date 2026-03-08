/*
 * XREFs of SymCryptCallbackFree @ 0x14067B438
 * Callers:
 *     SymCryptRsakeySetValue @ 0x1403F1F8C (SymCryptRsakeySetValue.c)
 *     SymCryptEcurveAllocate @ 0x1403F252C (SymCryptEcurveAllocate.c)
 *     SymCryptEcurveFree @ 0x1403F2CB4 (SymCryptEcurveFree.c)
 *     SymCryptEckeyFree @ 0x1403F2DD8 (SymCryptEckeyFree.c)
 *     SymCryptEckeySetValue @ 0x1403F2F18 (SymCryptEckeySetValue.c)
 *     SymCryptEcDsaVerify @ 0x1403F4010 (SymCryptEcDsaVerify.c)
 *     SymCryptRsaPkcs1Verify @ 0x1403F4830 (SymCryptRsaPkcs1Verify.c)
 * Callees:
 *     MincryptFree @ 0x140A6F0A0 (MincryptFree.c)
 */

__int64 __fastcall SymCryptCallbackFree(__int64 a1)
{
  return MincryptFree(a1 - *(unsigned int *)(a1 - 4));
}
