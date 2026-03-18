/*
 * XREFs of SymCryptSizeofIntFromDigits @ 0x140401350
 * Callers:
 *     SymCryptRsakeyCreate @ 0x1403FF10C (SymCryptRsakeyCreate.c)
 *     SymCryptRsakeyCreateAllObjects @ 0x1403FF298 (SymCryptRsakeyCreateAllObjects.c)
 *     SymCryptRsakeySetValue @ 0x1403FF3BC (SymCryptRsakeySetValue.c)
 *     SymCryptSizeofRsakeyFromParams @ 0x1403FF8AC (SymCryptSizeofRsakeyFromParams.c)
 *     SymCryptEcurveAllocate @ 0x1403FF93C (SymCryptEcurveAllocate.c)
 *     SymCryptEckeyCreate @ 0x14040015C (SymCryptEckeyCreate.c)
 *     SymCryptEckeySetValue @ 0x140400318 (SymCryptEckeySetValue.c)
 *     SymCryptSizeofEckeyFromCurve @ 0x14040079C (SymCryptSizeofEckeyFromCurve.c)
 *     SymCryptEcDsaVerify @ 0x140401470 (SymCryptEcDsaVerify.c)
 *     SymCryptRsaCoreVerifyInput @ 0x140401BCC (SymCryptRsaCoreVerifyInput.c)
 *     SymCryptCrtGenerateForTwoCoprimes @ 0x1404053F0 (SymCryptCrtGenerateForTwoCoprimes.c)
 *     SymCryptIntExtendedGcd @ 0x1404055F4 (SymCryptIntExtendedGcd.c)
 *     SymCryptEcpointMultiScalarMulWnafWithInterleaving @ 0x140405BF0 (SymCryptEcpointMultiScalarMulWnafWithInterleaving.c)
 *     SymCryptEcpointScalarMulFixedWindow @ 0x140406130 (SymCryptEcpointScalarMulFixedWindow.c)
 *     SymCryptEcpointSetValue @ 0x140406B10 (SymCryptEcpointSetValue.c)
 *     SymCryptTwistedEdwardsFillScratchSpaces @ 0x1404079EC (SymCryptTwistedEdwardsFillScratchSpaces.c)
 *     SymCryptMontgomeryFillScratchSpaces @ 0x14040844C (SymCryptMontgomeryFillScratchSpaces.c)
 *     SymCryptMontgomeryPointScalarMul @ 0x140408730 (SymCryptMontgomeryPointScalarMul.c)
 *     SymCryptShortWeierstrassFillScratchSpaces @ 0x140409DC8 (SymCryptShortWeierstrassFillScratchSpaces.c)
 *     SymCryptFdefModInvGeneric @ 0x14040BDF0 (SymCryptFdefModInvGeneric.c)
 * Callees:
 *     SymCryptFdefSizeofIntFromDigits @ 0x14040D570 (SymCryptFdefSizeofIntFromDigits.c)
 */

__int64 SymCryptSizeofIntFromDigits()
{
  return SymCryptFdefSizeofIntFromDigits();
}
