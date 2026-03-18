/*
 * XREFs of SymCryptIntSetValue @ 0x1403F8E3C
 * Callers:
 *     SymCryptRsakeySetValue @ 0x1403F74AC (SymCryptRsakeySetValue.c)
 *     SymCryptEcurveAllocate @ 0x1403F7A4C (SymCryptEcurveAllocate.c)
 *     SymCryptEckeySetValue @ 0x1403F8438 (SymCryptEckeySetValue.c)
 *     SymCryptEcDsaTruncateHash @ 0x1403F9458 (SymCryptEcDsaTruncateHash.c)
 *     SymCryptEcDsaVerify @ 0x1403F9530 (SymCryptEcDsaVerify.c)
 *     SymCryptRsaCoreVerifyInput @ 0x1403F9C8C (SymCryptRsaCoreVerifyInput.c)
 *     SymCryptEcpointSetValue @ 0x1403FEC00 (SymCryptEcpointSetValue.c)
 *     HashpVerifyPkcs1Signature @ 0x140A7737C (HashpVerifyPkcs1Signature.c)
 * Callees:
 *     SymCryptFdefIntSetValue @ 0x1404052BC (SymCryptFdefIntSetValue.c)
 */

__int64 SymCryptIntSetValue()
{
  return SymCryptFdefIntSetValue();
}
