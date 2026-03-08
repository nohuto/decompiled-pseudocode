/*
 * XREFs of SymCryptIntIsLessThan @ 0x1403F38B4
 * Callers:
 *     SymCryptEckeySetValue @ 0x1403F2F18 (SymCryptEckeySetValue.c)
 *     SymCryptEcDsaVerify @ 0x1403F4010 (SymCryptEcDsaVerify.c)
 *     SymCryptRsaCoreVerifyInput @ 0x1403F476C (SymCryptRsaCoreVerifyInput.c)
 *     SymCryptEcpointSetValue @ 0x1403F96E0 (SymCryptEcpointSetValue.c)
 * Callees:
 *     SymCryptFdefIntIsLessThan @ 0x1403FD8D8 (SymCryptFdefIntIsLessThan.c)
 */

__int64 SymCryptIntIsLessThan()
{
  return SymCryptFdefIntIsLessThan();
}
