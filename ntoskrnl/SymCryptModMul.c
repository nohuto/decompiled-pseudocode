/*
 * XREFs of SymCryptModMul @ 0x1403F3D74
 * Callers:
 *     SymCryptEcDsaVerify @ 0x1403F4010 (SymCryptEcDsaVerify.c)
 *     SymCryptEcpointTransform @ 0x1403F98E4 (SymCryptEcpointTransform.c)
 *     SymCryptTwistedEdwardsAdd @ 0x1403F9E40 (SymCryptTwistedEdwardsAdd.c)
 *     SymCryptTwistedEdwardsDouble @ 0x1403FA260 (SymCryptTwistedEdwardsDouble.c)
 *     SymCryptTwistedEdwardsIsEqual @ 0x1403FA730 (SymCryptTwistedEdwardsIsEqual.c)
 *     SymCryptTwistedEdwardsOnCurve @ 0x1403FAA70 (SymCryptTwistedEdwardsOnCurve.c)
 *     SymCryptMontgomeryDoubleAndAdd @ 0x1403FAD2C (SymCryptMontgomeryDoubleAndAdd.c)
 *     SymCryptMontgomeryIsEqual @ 0x1403FB190 (SymCryptMontgomeryIsEqual.c)
 *     SymCryptShortWeierstrassAddDiffNonZero @ 0x1403FB890 (SymCryptShortWeierstrassAddDiffNonZero.c)
 *     SymCryptShortWeierstrassAddSideChannelUnsafe @ 0x1403FBD54 (SymCryptShortWeierstrassAddSideChannelUnsafe.c)
 *     SymCryptShortWeierstrassDouble @ 0x1403FC510 (SymCryptShortWeierstrassDouble.c)
 *     SymCryptShortWeierstrassIsEqual @ 0x1403FCAC0 (SymCryptShortWeierstrassIsEqual.c)
 *     SymCryptShortWeierstrassOnCurve @ 0x1403FCE10 (SymCryptShortWeierstrassOnCurve.c)
 *     SymCryptModExpSquareAndMultiply32 @ 0x1404036D4 (SymCryptModExpSquareAndMultiply32.c)
 *     SymCryptModExpWindowed @ 0x140403800 (SymCryptModExpWindowed.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptModMul(_DWORD *a1, __int64 a2)
{
  return (*(__int64 (__fastcall **)(_DWORD *, __int64))((char *)&off_1400064B8 + (*a1 & 0x380)))(a1, a2);
}
