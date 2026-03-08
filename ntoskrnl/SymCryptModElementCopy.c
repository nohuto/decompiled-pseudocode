/*
 * XREFs of SymCryptModElementCopy @ 0x1403F3AD4
 * Callers:
 *     SymCryptEcpointTransform @ 0x1403F98E4 (SymCryptEcpointTransform.c)
 *     SymCryptMontgomeryPointScalarMul @ 0x1403FB2C0 (SymCryptMontgomeryPointScalarMul.c)
 *     SymCryptShortWeierstrassAddDiffNonZero @ 0x1403FB890 (SymCryptShortWeierstrassAddDiffNonZero.c)
 *     SymCryptShortWeierstrassAddSideChannelUnsafe @ 0x1403FBD54 (SymCryptShortWeierstrassAddSideChannelUnsafe.c)
 *     SymCryptShortWeierstrassDouble @ 0x1403FC510 (SymCryptShortWeierstrassDouble.c)
 *     SymCryptFdefModInvGeneric @ 0x1403FE960 (SymCryptFdefModInvGeneric.c)
 *     SymCryptModExpSquareAndMultiply32 @ 0x1404036D4 (SymCryptModExpSquareAndMultiply32.c)
 *     SymCryptModExpWindowed @ 0x140403800 (SymCryptModExpWindowed.c)
 * Callees:
 *     SymCryptFdefModElementCopy @ 0x1403FE608 (SymCryptFdefModElementCopy.c)
 */

__int64 SymCryptModElementCopy()
{
  return SymCryptFdefModElementCopy();
}
