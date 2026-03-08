/*
 * XREFs of SymCryptIntSubSameSize @ 0x1403F3994
 * Callers:
 *     SymCryptIntExtendedGcd @ 0x1403F81E4 (SymCryptIntExtendedGcd.c)
 *     SymCryptEcpointScalarMulFixedWindow @ 0x1403F8D30 (SymCryptEcpointScalarMulFixedWindow.c)
 *     SymCryptFdefModInvGeneric @ 0x1403FE960 (SymCryptFdefModInvGeneric.c)
 * Callees:
 *     SymCryptFdefIntSubSameSize @ 0x1403FDBB0 (SymCryptFdefIntSubSameSize.c)
 */

__int64 SymCryptIntSubSameSize()
{
  return SymCryptFdefIntSubSameSize();
}
