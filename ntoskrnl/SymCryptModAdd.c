/*
 * XREFs of SymCryptModAdd @ 0x1403F3A54
 * Callers:
 *     SymCryptEcurveAllocate @ 0x1403F252C (SymCryptEcurveAllocate.c)
 *     SymCryptTwistedEdwardsAdd @ 0x1403F9E40 (SymCryptTwistedEdwardsAdd.c)
 *     SymCryptTwistedEdwardsDouble @ 0x1403FA260 (SymCryptTwistedEdwardsDouble.c)
 *     SymCryptTwistedEdwardsOnCurve @ 0x1403FAA70 (SymCryptTwistedEdwardsOnCurve.c)
 *     SymCryptMontgomeryDoubleAndAdd @ 0x1403FAD2C (SymCryptMontgomeryDoubleAndAdd.c)
 *     SymCryptShortWeierstrassAddDiffNonZero @ 0x1403FB890 (SymCryptShortWeierstrassAddDiffNonZero.c)
 *     SymCryptShortWeierstrassAddSideChannelUnsafe @ 0x1403FBD54 (SymCryptShortWeierstrassAddSideChannelUnsafe.c)
 *     SymCryptShortWeierstrassDouble @ 0x1403FC510 (SymCryptShortWeierstrassDouble.c)
 *     SymCryptShortWeierstrassOnCurve @ 0x1403FCE10 (SymCryptShortWeierstrassOnCurve.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptModAdd(_DWORD *a1, __int64 a2)
{
  return (*(__int64 (__fastcall **)(_DWORD *, __int64))((char *)g_SymCryptModFns + (*a1 & 0x380)))(a1, a2);
}
