/*
 * XREFs of SymCryptIntIsLessThan @ 0x140400CA8
 * Callers:
 *     SymCryptEckeySetValue @ 0x140400318 (SymCryptEckeySetValue.c)
 *     SymCryptEcDsaVerify @ 0x140401470 (SymCryptEcDsaVerify.c)
 *     SymCryptRsaCoreVerifyInput @ 0x140401BCC (SymCryptRsaCoreVerifyInput.c)
 *     SymCryptEcpointSetValue @ 0x140406B10 (SymCryptEcpointSetValue.c)
 * Callees:
 *     SymCryptFdefIntIsLessThan @ 0x14040AD68 (SymCryptFdefIntIsLessThan.c)
 */

__int64 SymCryptIntIsLessThan()
{
  return SymCryptFdefIntIsLessThan();
}
