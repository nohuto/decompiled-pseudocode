/*
 * XREFs of SymCryptIntToModElement @ 0x1403F39F0
 * Callers:
 *     SymCryptEckeySetValue @ 0x1403F2F18 (SymCryptEckeySetValue.c)
 *     SymCryptEcDsaTruncateHash @ 0x1403F3F38 (SymCryptEcDsaTruncateHash.c)
 *     SymCryptEcDsaVerify @ 0x1403F4010 (SymCryptEcDsaVerify.c)
 *     SymCryptCrtGenerateForTwoCoprimes @ 0x1403F7FE0 (SymCryptCrtGenerateForTwoCoprimes.c)
 * Callees:
 *     SymCryptFdefIntToModElement @ 0x1403FE2E4 (SymCryptFdefIntToModElement.c)
 */

__int64 __fastcall SymCryptIntToModElement(int a1, int a2, int a3, int a4, __int64 a5)
{
  return SymCryptFdefIntToModElement(a1, a2, a3, a4, a5);
}
