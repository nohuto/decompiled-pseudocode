/*
 * XREFs of SymCryptIntDivPow2 @ 0x1403F8D2C
 * Callers:
 *     SymCryptEckeySetValue @ 0x1403F8438 (SymCryptEckeySetValue.c)
 *     SymCryptEcDsaTruncateHash @ 0x1403F9458 (SymCryptEcDsaTruncateHash.c)
 *     SymCryptFdefModInvGeneric @ 0x140403E80 (SymCryptFdefModInvGeneric.c)
 *     SymCryptFixedWindowRecoding @ 0x1404093C8 (SymCryptFixedWindowRecoding.c)
 *     SymCryptWidthNafRecoding @ 0x140409524 (SymCryptWidthNafRecoding.c)
 * Callees:
 *     SymCryptFdefIntDivPow2 @ 0x140402C9C (SymCryptFdefIntDivPow2.c)
 */

__int64 SymCryptIntDivPow2()
{
  return SymCryptFdefIntDivPow2();
}
