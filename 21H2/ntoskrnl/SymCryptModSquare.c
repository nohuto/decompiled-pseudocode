/*
 * XREFs of SymCryptModSquare @ 0x1404012B0
 * Callers:
 *     SymCryptTwistedEdwardsDouble @ 0x1404076A0 (SymCryptTwistedEdwardsDouble.c)
 *     SymCryptTwistedEdwardsOnCurve @ 0x140407ED0 (SymCryptTwistedEdwardsOnCurve.c)
 *     SymCryptMontgomeryDoubleAndAdd @ 0x14040818C (SymCryptMontgomeryDoubleAndAdd.c)
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

__int64 __fastcall SymCryptModSquare(_DWORD *a1)
{
  return (*(__int64 (__fastcall **)(_DWORD *))((char *)&off_140006950 + (*a1 & 0x380)))(a1);
}
