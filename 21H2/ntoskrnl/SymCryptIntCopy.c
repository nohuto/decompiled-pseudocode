/*
 * XREFs of SymCryptIntCopy @ 0x140400B8C
 * Callers:
 *     SymCryptEckeySetValue @ 0x140400318 (SymCryptEckeySetValue.c)
 *     SymCryptEcpointMultiScalarMulWnafWithInterleaving @ 0x140405BF0 (SymCryptEcpointMultiScalarMulWnafWithInterleaving.c)
 *     SymCryptEcpointScalarMulFixedWindow @ 0x140406130 (SymCryptEcpointScalarMulFixedWindow.c)
 *     SymCryptFdefModInvGeneric @ 0x14040BDF0 (SymCryptFdefModInvGeneric.c)
 * Callees:
 *     SymCryptFdefIntCopy @ 0x14040D16C (SymCryptFdefIntCopy.c)
 */

__int64 SymCryptIntCopy()
{
  return SymCryptFdefIntCopy();
}
