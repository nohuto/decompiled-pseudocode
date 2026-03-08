/*
 * XREFs of SymCryptModElementIsZero @ 0x1403F3B50
 * Callers:
 *     SymCryptEcDsaVerify @ 0x1403F4010 (SymCryptEcDsaVerify.c)
 *     SymCryptEcpointTransform @ 0x1403F98E4 (SymCryptEcpointTransform.c)
 *     SymCryptTwistedEdwardsIsZero @ 0x1403FA930 (SymCryptTwistedEdwardsIsZero.c)
 *     SymCryptMontgomeryIsZero @ 0x1403FB290 (SymCryptMontgomeryIsZero.c)
 *     SymCryptShortWeierstrassAdd @ 0x1403FB6D0 (SymCryptShortWeierstrassAdd.c)
 *     SymCryptShortWeierstrassAddSideChannelUnsafe @ 0x1403FBD54 (SymCryptShortWeierstrassAddSideChannelUnsafe.c)
 *     SymCryptShortWeierstrassIsZero @ 0x1403FCD40 (SymCryptShortWeierstrassIsZero.c)
 * Callees:
 *     SymCryptFdefModElementIsZero @ 0x1403FE74C (SymCryptFdefModElementIsZero.c)
 */

__int64 SymCryptModElementIsZero()
{
  return SymCryptFdefModElementIsZero();
}
