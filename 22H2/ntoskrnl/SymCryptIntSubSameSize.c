/*
 * XREFs of SymCryptIntSubSameSize @ 0x1403F8EB4
 * Callers:
 *     SymCryptIntExtendedGcd @ 0x1403FD704 (SymCryptIntExtendedGcd.c)
 *     SymCryptEcpointScalarMulFixedWindow @ 0x1403FE250 (SymCryptEcpointScalarMulFixedWindow.c)
 *     SymCryptFdefModInvGeneric @ 0x140403E80 (SymCryptFdefModInvGeneric.c)
 * Callees:
 *     SymCryptFdefIntSubSameSize @ 0x1404030D0 (SymCryptFdefIntSubSameSize.c)
 */

__int64 SymCryptIntSubSameSize()
{
  return SymCryptFdefIntSubSameSize();
}
