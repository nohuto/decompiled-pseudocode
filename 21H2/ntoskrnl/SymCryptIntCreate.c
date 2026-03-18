/*
 * XREFs of SymCryptIntCreate @ 0x140400BBC
 * Callers:
 *     SymCryptRsakeyCalculatePrivateFields @ 0x1403FEE6C (SymCryptRsakeyCalculatePrivateFields.c)
 *     SymCryptRsakeyCreateAllObjects @ 0x1403FF298 (SymCryptRsakeyCreateAllObjects.c)
 *     SymCryptRsakeySetValue @ 0x1403FF3BC (SymCryptRsakeySetValue.c)
 *     SymCryptEcurveAllocate @ 0x1403FF93C (SymCryptEcurveAllocate.c)
 *     SymCryptEckeyCreate @ 0x14040015C (SymCryptEckeyCreate.c)
 *     SymCryptEckeySetValue @ 0x140400318 (SymCryptEckeySetValue.c)
 *     SymCryptEcDsaVerify @ 0x140401470 (SymCryptEcDsaVerify.c)
 *     SymCryptRsaCoreEnc @ 0x1404019F4 (SymCryptRsaCoreEnc.c)
 *     SymCryptRsaCoreVerifyInput @ 0x140401BCC (SymCryptRsaCoreVerifyInput.c)
 *     SymCryptCrtGenerateForTwoCoprimes @ 0x1404053F0 (SymCryptCrtGenerateForTwoCoprimes.c)
 *     SymCryptIntExtendedGcd @ 0x1404055F4 (SymCryptIntExtendedGcd.c)
 *     SymCryptEcpointMultiScalarMulWnafWithInterleaving @ 0x140405BF0 (SymCryptEcpointMultiScalarMulWnafWithInterleaving.c)
 *     SymCryptEcpointScalarMulFixedWindow @ 0x140406130 (SymCryptEcpointScalarMulFixedWindow.c)
 *     SymCryptEcpointSetValue @ 0x140406B10 (SymCryptEcpointSetValue.c)
 *     SymCryptFdefModInvGeneric @ 0x14040BDF0 (SymCryptFdefModInvGeneric.c)
 *     SymCryptFdefDivisorCreate @ 0x14040D018 (SymCryptFdefDivisorCreate.c)
 *     HashpVerifyPkcs1Signature @ 0x140A375DC (HashpVerifyPkcs1Signature.c)
 * Callees:
 *     SymCryptFdefIntCreate @ 0x14040D260 (SymCryptFdefIntCreate.c)
 */

__int64 SymCryptIntCreate()
{
  return SymCryptFdefIntCreate();
}
