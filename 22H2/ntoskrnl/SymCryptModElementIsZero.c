/*
 * XREFs of SymCryptModElementIsZero @ 0x1403F9070
 * Callers:
 *     SymCryptEcDsaVerify @ 0x1403F9530 (SymCryptEcDsaVerify.c)
 *     SymCryptEcpointTransform @ 0x1403FEE04 (SymCryptEcpointTransform.c)
 *     SymCryptTwistedEdwardsIsZero @ 0x1403FFE50 (SymCryptTwistedEdwardsIsZero.c)
 *     SymCryptMontgomeryIsZero @ 0x1404007B0 (SymCryptMontgomeryIsZero.c)
 *     SymCryptShortWeierstrassAdd @ 0x140400BF0 (SymCryptShortWeierstrassAdd.c)
 *     SymCryptShortWeierstrassAddSideChannelUnsafe @ 0x140401274 (SymCryptShortWeierstrassAddSideChannelUnsafe.c)
 *     SymCryptShortWeierstrassIsZero @ 0x140402260 (SymCryptShortWeierstrassIsZero.c)
 * Callees:
 *     SymCryptFdefModElementIsZero @ 0x140403C6C (SymCryptFdefModElementIsZero.c)
 */

__int64 SymCryptModElementIsZero()
{
  return SymCryptFdefModElementIsZero();
}
