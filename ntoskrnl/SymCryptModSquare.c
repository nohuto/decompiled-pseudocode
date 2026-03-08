/*
 * XREFs of SymCryptModSquare @ 0x1403F3E50
 * Callers:
 *     SymCryptTwistedEdwardsDouble @ 0x1403FA260 (SymCryptTwistedEdwardsDouble.c)
 *     SymCryptTwistedEdwardsOnCurve @ 0x1403FAA70 (SymCryptTwistedEdwardsOnCurve.c)
 *     SymCryptMontgomeryDoubleAndAdd @ 0x1403FAD2C (SymCryptMontgomeryDoubleAndAdd.c)
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

__int64 __fastcall SymCryptModSquare(_DWORD *a1)
{
  return (*(__int64 (__fastcall **)(_DWORD *))((char *)&off_1400064C0 + (*a1 & 0x380)))(a1);
}
