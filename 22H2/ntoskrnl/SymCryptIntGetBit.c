/*
 * XREFs of SymCryptIntGetBit @ 0x1403F8D74
 * Callers:
 *     SymCryptEcpointScalarMulFixedWindow @ 0x1403FE250 (SymCryptEcpointScalarMulFixedWindow.c)
 *     SymCryptMontgomeryPointScalarMul @ 0x1404007E0 (SymCryptMontgomeryPointScalarMul.c)
 * Callees:
 *     SymCryptFdefIntGetBit @ 0x140402D7C (SymCryptFdefIntGetBit.c)
 */

__int64 SymCryptIntGetBit()
{
  return SymCryptFdefIntGetBit();
}
