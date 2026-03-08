/*
 * XREFs of SymCryptModElementCreate @ 0x1403F3AEC
 * Callers:
 *     SymCryptRsakeyCreateAllObjects @ 0x1403F1E6C (SymCryptRsakeyCreateAllObjects.c)
 *     SymCryptEcurveAllocate @ 0x1403F252C (SymCryptEcurveAllocate.c)
 *     SymCryptEckeySetValue @ 0x1403F2F18 (SymCryptEckeySetValue.c)
 *     SymCryptEcDsaVerify @ 0x1403F4010 (SymCryptEcDsaVerify.c)
 *     SymCryptRsaCoreEnc @ 0x1403F4594 (SymCryptRsaCoreEnc.c)
 *     SymCryptEcpointGenericSetRandom @ 0x1403F8750 (SymCryptEcpointGenericSetRandom.c)
 *     SymCryptEcpointScalarMulFixedWindow @ 0x1403F8D30 (SymCryptEcpointScalarMulFixedWindow.c)
 *     SymCryptEcpointCreateEx @ 0x1403F94C0 (SymCryptEcpointCreateEx.c)
 *     SymCryptEcpointTransform @ 0x1403F98E4 (SymCryptEcpointTransform.c)
 *     SymCryptTwistedEdwardsAdd @ 0x1403F9E40 (SymCryptTwistedEdwardsAdd.c)
 *     SymCryptTwistedEdwardsDouble @ 0x1403FA260 (SymCryptTwistedEdwardsDouble.c)
 *     SymCryptTwistedEdwardsIsEqual @ 0x1403FA730 (SymCryptTwistedEdwardsIsEqual.c)
 *     SymCryptTwistedEdwardsNegate @ 0x1403FA9A0 (SymCryptTwistedEdwardsNegate.c)
 *     SymCryptTwistedEdwardsOnCurve @ 0x1403FAA70 (SymCryptTwistedEdwardsOnCurve.c)
 *     SymCryptMontgomeryIsEqual @ 0x1403FB190 (SymCryptMontgomeryIsEqual.c)
 *     SymCryptMontgomeryPointScalarMul @ 0x1403FB2C0 (SymCryptMontgomeryPointScalarMul.c)
 *     SymCryptShortWeierstrassAddDiffNonZero @ 0x1403FB890 (SymCryptShortWeierstrassAddDiffNonZero.c)
 *     SymCryptShortWeierstrassAddSideChannelUnsafe @ 0x1403FBD54 (SymCryptShortWeierstrassAddSideChannelUnsafe.c)
 *     SymCryptShortWeierstrassDouble @ 0x1403FC510 (SymCryptShortWeierstrassDouble.c)
 *     SymCryptShortWeierstrassIsEqual @ 0x1403FCAC0 (SymCryptShortWeierstrassIsEqual.c)
 *     SymCryptShortWeierstrassNegate @ 0x1403FCD70 (SymCryptShortWeierstrassNegate.c)
 *     SymCryptShortWeierstrassOnCurve @ 0x1403FCE10 (SymCryptShortWeierstrassOnCurve.c)
 *     SymCryptFdefModInvGeneric @ 0x1403FE960 (SymCryptFdefModInvGeneric.c)
 *     SymCryptModExpSquareAndMultiply32 @ 0x1404036D4 (SymCryptModExpSquareAndMultiply32.c)
 *     SymCryptModExpWindowed @ 0x140403800 (SymCryptModExpWindowed.c)
 * Callees:
 *     SymCryptFdefModElementCreate @ 0x1403FE62C (SymCryptFdefModElementCreate.c)
 */

__int64 SymCryptModElementCreate()
{
  return SymCryptFdefModElementCreate();
}
