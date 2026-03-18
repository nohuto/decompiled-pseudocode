/*
 * XREFs of SymCryptModElementIsEqual @ 0x1403F9058
 * Callers:
 *     SymCryptEcDsaVerify @ 0x1403F9530 (SymCryptEcDsaVerify.c)
 *     SymCryptTwistedEdwardsIsEqual @ 0x1403FFC50 (SymCryptTwistedEdwardsIsEqual.c)
 *     SymCryptTwistedEdwardsIsZero @ 0x1403FFE50 (SymCryptTwistedEdwardsIsZero.c)
 *     SymCryptTwistedEdwardsOnCurve @ 0x1403FFF90 (SymCryptTwistedEdwardsOnCurve.c)
 *     SymCryptMontgomeryIsEqual @ 0x1404006B0 (SymCryptMontgomeryIsEqual.c)
 *     SymCryptShortWeierstrassIsEqual @ 0x140401FE0 (SymCryptShortWeierstrassIsEqual.c)
 *     SymCryptShortWeierstrassOnCurve @ 0x140402330 (SymCryptShortWeierstrassOnCurve.c)
 * Callees:
 *     SymCryptFdefModElementIsEqual @ 0x140403C30 (SymCryptFdefModElementIsEqual.c)
 */

__int64 SymCryptModElementIsEqual()
{
  return SymCryptFdefModElementIsEqual();
}
