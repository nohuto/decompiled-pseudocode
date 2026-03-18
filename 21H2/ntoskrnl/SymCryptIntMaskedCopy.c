/*
 * XREFs of SymCryptIntMaskedCopy @ 0x140400CC0
 * Callers:
 *     SymCryptEcpointScalarMulFixedWindow @ 0x140406130 (SymCryptEcpointScalarMulFixedWindow.c)
 *     SymCryptFixedWindowRecoding @ 0x140411408 (SymCryptFixedWindowRecoding.c)
 * Callees:
 *     SymCryptFdefIntMaskedCopy @ 0x14040D2E8 (SymCryptFdefIntMaskedCopy.c)
 */

__int64 SymCryptIntMaskedCopy()
{
  return SymCryptFdefIntMaskedCopy();
}
