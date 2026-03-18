/*
 * XREFs of SymCryptModMul @ 0x1404011D4
 * Callers:
 *     SymCryptEcDsaVerify @ 0x140401470 (SymCryptEcDsaVerify.c)
 *     SymCryptEcpointTransform @ 0x140406D14 (SymCryptEcpointTransform.c)
 *     SymCryptTwistedEdwardsAdd @ 0x140407280 (SymCryptTwistedEdwardsAdd.c)
 *     SymCryptTwistedEdwardsDouble @ 0x1404076A0 (SymCryptTwistedEdwardsDouble.c)
 *     SymCryptTwistedEdwardsIsEqual @ 0x140407B90 (SymCryptTwistedEdwardsIsEqual.c)
 *     SymCryptTwistedEdwardsOnCurve @ 0x140407ED0 (SymCryptTwistedEdwardsOnCurve.c)
 *     SymCryptMontgomeryDoubleAndAdd @ 0x14040818C (SymCryptMontgomeryDoubleAndAdd.c)
 *     SymCryptMontgomeryIsEqual @ 0x140408600 (SymCryptMontgomeryIsEqual.c)
 *     SymCryptShortWeierstrassAddDiffNonZero @ 0x140408D00 (SymCryptShortWeierstrassAddDiffNonZero.c)
 *     SymCryptShortWeierstrassAddSideChannelUnsafe @ 0x1404091C8 (SymCryptShortWeierstrassAddSideChannelUnsafe.c)
 *     SymCryptShortWeierstrassDouble @ 0x140409980 (SymCryptShortWeierstrassDouble.c)
 *     SymCryptShortWeierstrassIsEqual @ 0x140409F50 (SymCryptShortWeierstrassIsEqual.c)
 *     SymCryptShortWeierstrassOnCurve @ 0x14040A2A0 (SymCryptShortWeierstrassOnCurve.c)
 *     SymCryptModExpSquareAndMultiply32 @ 0x140410C24 (SymCryptModExpSquareAndMultiply32.c)
 *     SymCryptModExpWindowed @ 0x140410D50 (SymCryptModExpWindowed.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptModMul(_DWORD *a1, __int64 a2)
{
  return (*(__int64 (__fastcall **)(_DWORD *, __int64))((char *)&off_140006948 + (*a1 & 0x380)))(a1, a2);
}
