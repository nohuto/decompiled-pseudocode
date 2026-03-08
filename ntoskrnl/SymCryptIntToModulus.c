/*
 * XREFs of SymCryptIntToModulus @ 0x1403F3A10
 * Callers:
 *     SymCryptRsakeySetValue @ 0x1403F1F8C (SymCryptRsakeySetValue.c)
 *     SymCryptEcurveAllocate @ 0x1403F252C (SymCryptEcurveAllocate.c)
 * Callees:
 *     SymCryptFdefIntToModulus @ 0x1403FE36C (SymCryptFdefIntToModulus.c)
 */

__int64 __fastcall SymCryptIntToModulus(int a1, int a2, int a3, int a4, __int64 a5, __int64 a6)
{
  return SymCryptFdefIntToModulus(a1, a2, a3, a4, a5, a6);
}
