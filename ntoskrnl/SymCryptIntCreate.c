/*
 * XREFs of SymCryptIntCreate @ 0x1403F37C8
 * Callers:
 *     SymCryptRsakeyCalculatePrivateFields @ 0x1403F1A48 (SymCryptRsakeyCalculatePrivateFields.c)
 *     SymCryptRsakeyCreateAllObjects @ 0x1403F1E6C (SymCryptRsakeyCreateAllObjects.c)
 *     SymCryptRsakeySetValue @ 0x1403F1F8C (SymCryptRsakeySetValue.c)
 *     SymCryptEcurveAllocate @ 0x1403F252C (SymCryptEcurveAllocate.c)
 *     SymCryptEckeyCreate @ 0x1403F2D48 (SymCryptEckeyCreate.c)
 *     SymCryptEckeySetValue @ 0x1403F2F18 (SymCryptEckeySetValue.c)
 *     SymCryptEcDsaVerify @ 0x1403F4010 (SymCryptEcDsaVerify.c)
 *     SymCryptRsaCoreEnc @ 0x1403F4594 (SymCryptRsaCoreEnc.c)
 *     SymCryptRsaCoreVerifyInput @ 0x1403F476C (SymCryptRsaCoreVerifyInput.c)
 *     SymCryptCrtGenerateForTwoCoprimes @ 0x1403F7FE0 (SymCryptCrtGenerateForTwoCoprimes.c)
 *     SymCryptIntExtendedGcd @ 0x1403F81E4 (SymCryptIntExtendedGcd.c)
 *     SymCryptEcpointMultiScalarMulWnafWithInterleaving @ 0x1403F8820 (SymCryptEcpointMultiScalarMulWnafWithInterleaving.c)
 *     SymCryptEcpointScalarMulFixedWindow @ 0x1403F8D30 (SymCryptEcpointScalarMulFixedWindow.c)
 *     SymCryptEcpointSetValue @ 0x1403F96E0 (SymCryptEcpointSetValue.c)
 *     SymCryptFdefModInvGeneric @ 0x1403FE960 (SymCryptFdefModInvGeneric.c)
 *     SymCryptFdefDivisorCreate @ 0x1403FFAD0 (SymCryptFdefDivisorCreate.c)
 *     HashpVerifyPkcs1Signature @ 0x140A7467C (HashpVerifyPkcs1Signature.c)
 * Callees:
 *     SymCryptFdefIntCreate @ 0x1403FFD14 (SymCryptFdefIntCreate.c)
 */

__int64 SymCryptIntCreate()
{
  return SymCryptFdefIntCreate();
}
