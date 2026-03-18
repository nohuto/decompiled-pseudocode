/*
 * XREFs of SymCryptIntToModElement @ 0x140400DE4
 * Callers:
 *     SymCryptEckeySetValue @ 0x140400318 (SymCryptEckeySetValue.c)
 *     SymCryptEcDsaTruncateHash @ 0x140401398 (SymCryptEcDsaTruncateHash.c)
 *     SymCryptEcDsaVerify @ 0x140401470 (SymCryptEcDsaVerify.c)
 *     SymCryptCrtGenerateForTwoCoprimes @ 0x1404053F0 (SymCryptCrtGenerateForTwoCoprimes.c)
 * Callees:
 *     SymCryptFdefIntToModElement @ 0x14040B76C (SymCryptFdefIntToModElement.c)
 */

__int64 __fastcall SymCryptIntToModElement(int a1, int a2, int a3, int a4, __int64 a5)
{
  return SymCryptFdefIntToModElement(a1, a2, a3, a4, a5);
}
