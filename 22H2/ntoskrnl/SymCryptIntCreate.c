/*
 * XREFs of SymCryptIntCreate @ 0x1403F8CE8
 * Callers:
 *     SymCryptRsakeyCalculatePrivateFields @ 0x1403F6F68 (SymCryptRsakeyCalculatePrivateFields.c)
 *     SymCryptRsakeyCreateAllObjects @ 0x1403F738C (SymCryptRsakeyCreateAllObjects.c)
 *     SymCryptRsakeySetValue @ 0x1403F74AC (SymCryptRsakeySetValue.c)
 *     SymCryptEcurveAllocate @ 0x1403F7A4C (SymCryptEcurveAllocate.c)
 *     SymCryptEckeyCreate @ 0x1403F8268 (SymCryptEckeyCreate.c)
 *     SymCryptEckeySetValue @ 0x1403F8438 (SymCryptEckeySetValue.c)
 *     SymCryptEcDsaVerify @ 0x1403F9530 (SymCryptEcDsaVerify.c)
 *     SymCryptRsaCoreEnc @ 0x1403F9AB4 (SymCryptRsaCoreEnc.c)
 *     SymCryptRsaCoreVerifyInput @ 0x1403F9C8C (SymCryptRsaCoreVerifyInput.c)
 *     SymCryptCrtGenerateForTwoCoprimes @ 0x1403FD500 (SymCryptCrtGenerateForTwoCoprimes.c)
 *     SymCryptIntExtendedGcd @ 0x1403FD704 (SymCryptIntExtendedGcd.c)
 *     SymCryptEcpointMultiScalarMulWnafWithInterleaving @ 0x1403FDD40 (SymCryptEcpointMultiScalarMulWnafWithInterleaving.c)
 *     SymCryptEcpointScalarMulFixedWindow @ 0x1403FE250 (SymCryptEcpointScalarMulFixedWindow.c)
 *     SymCryptEcpointSetValue @ 0x1403FEC00 (SymCryptEcpointSetValue.c)
 *     SymCryptFdefModInvGeneric @ 0x140403E80 (SymCryptFdefModInvGeneric.c)
 *     SymCryptFdefDivisorCreate @ 0x140404FF0 (SymCryptFdefDivisorCreate.c)
 *     HashpVerifyPkcs1Signature @ 0x140A7737C (HashpVerifyPkcs1Signature.c)
 * Callees:
 *     SymCryptFdefIntCreate @ 0x140405234 (SymCryptFdefIntCreate.c)
 */

__int64 SymCryptIntCreate()
{
  return SymCryptFdefIntCreate();
}
