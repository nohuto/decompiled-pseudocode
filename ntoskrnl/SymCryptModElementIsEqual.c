/*
 * XREFs of SymCryptModElementIsEqual @ 0x1403F3B38
 * Callers:
 *     SymCryptEcDsaVerify @ 0x1403F4010 (SymCryptEcDsaVerify.c)
 *     SymCryptTwistedEdwardsIsEqual @ 0x1403FA730 (SymCryptTwistedEdwardsIsEqual.c)
 *     SymCryptTwistedEdwardsIsZero @ 0x1403FA930 (SymCryptTwistedEdwardsIsZero.c)
 *     SymCryptTwistedEdwardsOnCurve @ 0x1403FAA70 (SymCryptTwistedEdwardsOnCurve.c)
 *     SymCryptMontgomeryIsEqual @ 0x1403FB190 (SymCryptMontgomeryIsEqual.c)
 *     SymCryptShortWeierstrassIsEqual @ 0x1403FCAC0 (SymCryptShortWeierstrassIsEqual.c)
 *     SymCryptShortWeierstrassOnCurve @ 0x1403FCE10 (SymCryptShortWeierstrassOnCurve.c)
 * Callees:
 *     SymCryptFdefModElementIsEqual @ 0x1403FE710 (SymCryptFdefModElementIsEqual.c)
 */

__int64 SymCryptModElementIsEqual()
{
  return SymCryptFdefModElementIsEqual();
}
