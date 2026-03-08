/*
 * XREFs of SymCryptIntCopy @ 0x1403F3798
 * Callers:
 *     SymCryptEckeySetValue @ 0x1403F2F18 (SymCryptEckeySetValue.c)
 *     SymCryptEcpointMultiScalarMulWnafWithInterleaving @ 0x1403F8820 (SymCryptEcpointMultiScalarMulWnafWithInterleaving.c)
 *     SymCryptEcpointScalarMulFixedWindow @ 0x1403F8D30 (SymCryptEcpointScalarMulFixedWindow.c)
 *     SymCryptFdefModInvGeneric @ 0x1403FE960 (SymCryptFdefModInvGeneric.c)
 * Callees:
 *     SymCryptFdefIntCopy @ 0x1403FFC20 (SymCryptFdefIntCopy.c)
 */

__int64 SymCryptIntCopy()
{
  return SymCryptFdefIntCopy();
}
