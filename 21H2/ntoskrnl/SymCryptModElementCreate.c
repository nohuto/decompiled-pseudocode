/*
 * XREFs of SymCryptModElementCreate @ 0x140400F4C
 * Callers:
 *     SymCryptRsakeyCreateAllObjects @ 0x1403FF298 (SymCryptRsakeyCreateAllObjects.c)
 *     SymCryptEcurveAllocate @ 0x1403FF93C (SymCryptEcurveAllocate.c)
 *     SymCryptEckeySetValue @ 0x140400318 (SymCryptEckeySetValue.c)
 *     SymCryptEcDsaVerify @ 0x140401470 (SymCryptEcDsaVerify.c)
 *     SymCryptRsaCoreEnc @ 0x1404019F4 (SymCryptRsaCoreEnc.c)
 *     SymCryptEcpointGenericSetRandom @ 0x140405B20 (SymCryptEcpointGenericSetRandom.c)
 *     SymCryptEcpointScalarMulFixedWindow @ 0x140406130 (SymCryptEcpointScalarMulFixedWindow.c)
 *     SymCryptEcpointCreateEx @ 0x140406900 (SymCryptEcpointCreateEx.c)
 *     SymCryptEcpointTransform @ 0x140406D14 (SymCryptEcpointTransform.c)
 *     SymCryptTwistedEdwardsAdd @ 0x140407280 (SymCryptTwistedEdwardsAdd.c)
 *     SymCryptTwistedEdwardsDouble @ 0x1404076A0 (SymCryptTwistedEdwardsDouble.c)
 *     SymCryptTwistedEdwardsIsEqual @ 0x140407B90 (SymCryptTwistedEdwardsIsEqual.c)
 *     SymCryptTwistedEdwardsNegate @ 0x140407E00 (SymCryptTwistedEdwardsNegate.c)
 *     SymCryptTwistedEdwardsOnCurve @ 0x140407ED0 (SymCryptTwistedEdwardsOnCurve.c)
 *     SymCryptMontgomeryIsEqual @ 0x140408600 (SymCryptMontgomeryIsEqual.c)
 *     SymCryptMontgomeryPointScalarMul @ 0x140408730 (SymCryptMontgomeryPointScalarMul.c)
 *     SymCryptShortWeierstrassAddDiffNonZero @ 0x140408D00 (SymCryptShortWeierstrassAddDiffNonZero.c)
 *     SymCryptShortWeierstrassAddSideChannelUnsafe @ 0x1404091C8 (SymCryptShortWeierstrassAddSideChannelUnsafe.c)
 *     SymCryptShortWeierstrassDouble @ 0x140409980 (SymCryptShortWeierstrassDouble.c)
 *     SymCryptShortWeierstrassIsEqual @ 0x140409F50 (SymCryptShortWeierstrassIsEqual.c)
 *     SymCryptShortWeierstrassNegate @ 0x14040A200 (SymCryptShortWeierstrassNegate.c)
 *     SymCryptShortWeierstrassOnCurve @ 0x14040A2A0 (SymCryptShortWeierstrassOnCurve.c)
 *     SymCryptFdefModInvGeneric @ 0x14040BDF0 (SymCryptFdefModInvGeneric.c)
 *     SymCryptModExpSquareAndMultiply32 @ 0x140410C24 (SymCryptModExpSquareAndMultiply32.c)
 *     SymCryptModExpWindowed @ 0x140410D50 (SymCryptModExpWindowed.c)
 * Callees:
 *     SymCryptFdefModElementCreate @ 0x14040BABC (SymCryptFdefModElementCreate.c)
 */

__int64 SymCryptModElementCreate()
{
  return SymCryptFdefModElementCreate();
}
