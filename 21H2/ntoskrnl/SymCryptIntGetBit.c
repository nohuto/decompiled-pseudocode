/*
 * XREFs of SymCryptIntGetBit @ 0x140400C48
 * Callers:
 *     SymCryptEcpointScalarMulFixedWindow @ 0x140406130 (SymCryptEcpointScalarMulFixedWindow.c)
 *     SymCryptMontgomeryPointScalarMul @ 0x140408730 (SymCryptMontgomeryPointScalarMul.c)
 * Callees:
 *     SymCryptFdefIntGetBit @ 0x14040ACEC (SymCryptFdefIntGetBit.c)
 */

__int64 SymCryptIntGetBit()
{
  return SymCryptFdefIntGetBit();
}
