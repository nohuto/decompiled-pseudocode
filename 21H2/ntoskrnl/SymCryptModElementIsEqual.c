/*
 * XREFs of SymCryptModElementIsEqual @ 0x140400F98
 * Callers:
 *     SymCryptEcDsaVerify @ 0x140401470 (SymCryptEcDsaVerify.c)
 *     SymCryptTwistedEdwardsIsEqual @ 0x140407B90 (SymCryptTwistedEdwardsIsEqual.c)
 *     SymCryptTwistedEdwardsIsZero @ 0x140407D90 (SymCryptTwistedEdwardsIsZero.c)
 *     SymCryptTwistedEdwardsOnCurve @ 0x140407ED0 (SymCryptTwistedEdwardsOnCurve.c)
 *     SymCryptMontgomeryIsEqual @ 0x140408600 (SymCryptMontgomeryIsEqual.c)
 *     SymCryptShortWeierstrassIsEqual @ 0x140409F50 (SymCryptShortWeierstrassIsEqual.c)
 *     SymCryptShortWeierstrassOnCurve @ 0x14040A2A0 (SymCryptShortWeierstrassOnCurve.c)
 * Callees:
 *     SymCryptFdefModElementIsEqual @ 0x14040BBA0 (SymCryptFdefModElementIsEqual.c)
 */

__int64 SymCryptModElementIsEqual()
{
  return SymCryptFdefModElementIsEqual();
}
