/*
 * XREFs of SymCryptIntDivPow2 @ 0x1403F380C
 * Callers:
 *     SymCryptEckeySetValue @ 0x1403F2F18 (SymCryptEckeySetValue.c)
 *     SymCryptEcDsaTruncateHash @ 0x1403F3F38 (SymCryptEcDsaTruncateHash.c)
 *     SymCryptFdefModInvGeneric @ 0x1403FE960 (SymCryptFdefModInvGeneric.c)
 *     SymCryptFixedWindowRecoding @ 0x140403EA8 (SymCryptFixedWindowRecoding.c)
 *     SymCryptWidthNafRecoding @ 0x140404004 (SymCryptWidthNafRecoding.c)
 * Callees:
 *     SymCryptFdefIntDivPow2 @ 0x1403FD77C (SymCryptFdefIntDivPow2.c)
 */

__int64 SymCryptIntDivPow2()
{
  return SymCryptFdefIntDivPow2();
}
