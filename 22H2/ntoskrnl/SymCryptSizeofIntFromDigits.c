/*
 * XREFs of SymCryptSizeofIntFromDigits @ 0x1403F9410
 * Callers:
 *     SymCryptRsakeyCreate @ 0x1403F7204 (SymCryptRsakeyCreate.c)
 *     SymCryptRsakeyCreateAllObjects @ 0x1403F738C (SymCryptRsakeyCreateAllObjects.c)
 *     SymCryptRsakeySetValue @ 0x1403F74AC (SymCryptRsakeySetValue.c)
 *     SymCryptSizeofRsakeyFromParams @ 0x1403F79BC (SymCryptSizeofRsakeyFromParams.c)
 *     SymCryptEcurveAllocate @ 0x1403F7A4C (SymCryptEcurveAllocate.c)
 *     SymCryptEckeyCreate @ 0x1403F8268 (SymCryptEckeyCreate.c)
 *     SymCryptEckeySetValue @ 0x1403F8438 (SymCryptEckeySetValue.c)
 *     SymCryptSizeofEckeyFromCurve @ 0x1403F88BC (SymCryptSizeofEckeyFromCurve.c)
 *     SymCryptEcDsaVerify @ 0x1403F9530 (SymCryptEcDsaVerify.c)
 *     SymCryptRsaCoreVerifyInput @ 0x1403F9C8C (SymCryptRsaCoreVerifyInput.c)
 *     SymCryptCrtGenerateForTwoCoprimes @ 0x1403FD500 (SymCryptCrtGenerateForTwoCoprimes.c)
 *     SymCryptIntExtendedGcd @ 0x1403FD704 (SymCryptIntExtendedGcd.c)
 *     SymCryptEcpointMultiScalarMulWnafWithInterleaving @ 0x1403FDD40 (SymCryptEcpointMultiScalarMulWnafWithInterleaving.c)
 *     SymCryptEcpointScalarMulFixedWindow @ 0x1403FE250 (SymCryptEcpointScalarMulFixedWindow.c)
 *     SymCryptEcpointSetValue @ 0x1403FEC00 (SymCryptEcpointSetValue.c)
 *     SymCryptTwistedEdwardsFillScratchSpaces @ 0x1403FFACC (SymCryptTwistedEdwardsFillScratchSpaces.c)
 *     SymCryptMontgomeryFillScratchSpaces @ 0x14040050C (SymCryptMontgomeryFillScratchSpaces.c)
 *     SymCryptMontgomeryPointScalarMul @ 0x1404007E0 (SymCryptMontgomeryPointScalarMul.c)
 *     SymCryptShortWeierstrassFillScratchSpaces @ 0x140401E7C (SymCryptShortWeierstrassFillScratchSpaces.c)
 *     SymCryptFdefModInvGeneric @ 0x140403E80 (SymCryptFdefModInvGeneric.c)
 * Callees:
 *     SymCryptFdefSizeofIntFromDigits @ 0x14040551C (SymCryptFdefSizeofIntFromDigits.c)
 */

__int64 SymCryptSizeofIntFromDigits()
{
  return SymCryptFdefSizeofIntFromDigits();
}
