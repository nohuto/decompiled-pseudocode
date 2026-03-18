/*
 * XREFs of SymCryptModElementIsZero @ 0x140400FB0
 * Callers:
 *     SymCryptEcDsaVerify @ 0x140401470 (SymCryptEcDsaVerify.c)
 *     SymCryptEcpointTransform @ 0x140406D14 (SymCryptEcpointTransform.c)
 *     SymCryptTwistedEdwardsIsZero @ 0x140407D90 (SymCryptTwistedEdwardsIsZero.c)
 *     SymCryptMontgomeryIsZero @ 0x140408700 (SymCryptMontgomeryIsZero.c)
 *     SymCryptShortWeierstrassAdd @ 0x140408B40 (SymCryptShortWeierstrassAdd.c)
 *     SymCryptShortWeierstrassAddSideChannelUnsafe @ 0x1404091C8 (SymCryptShortWeierstrassAddSideChannelUnsafe.c)
 *     SymCryptShortWeierstrassIsZero @ 0x14040A1D0 (SymCryptShortWeierstrassIsZero.c)
 * Callees:
 *     SymCryptFdefModElementIsZero @ 0x14040BBDC (SymCryptFdefModElementIsZero.c)
 */

__int64 SymCryptModElementIsZero()
{
  return SymCryptFdefModElementIsZero();
}
