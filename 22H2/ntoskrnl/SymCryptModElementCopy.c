/*
 * XREFs of SymCryptModElementCopy @ 0x1403F8FF4
 * Callers:
 *     SymCryptEcpointTransform @ 0x1403FEE04 (SymCryptEcpointTransform.c)
 *     SymCryptMontgomeryPointScalarMul @ 0x1404007E0 (SymCryptMontgomeryPointScalarMul.c)
 *     SymCryptShortWeierstrassAddDiffNonZero @ 0x140400DB0 (SymCryptShortWeierstrassAddDiffNonZero.c)
 *     SymCryptShortWeierstrassAddSideChannelUnsafe @ 0x140401274 (SymCryptShortWeierstrassAddSideChannelUnsafe.c)
 *     SymCryptShortWeierstrassDouble @ 0x140401A30 (SymCryptShortWeierstrassDouble.c)
 *     SymCryptFdefModInvGeneric @ 0x140403E80 (SymCryptFdefModInvGeneric.c)
 *     SymCryptModExpSquareAndMultiply32 @ 0x140408BF4 (SymCryptModExpSquareAndMultiply32.c)
 *     SymCryptModExpWindowed @ 0x140408D20 (SymCryptModExpWindowed.c)
 * Callees:
 *     SymCryptFdefModElementCopy @ 0x140403B28 (SymCryptFdefModElementCopy.c)
 */

__int64 SymCryptModElementCopy()
{
  return SymCryptFdefModElementCopy();
}
