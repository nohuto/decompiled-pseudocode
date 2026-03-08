/*
 * XREFs of SymCryptIntToDivisor @ 0x1403F39C4
 * Callers:
 *     SymCryptRsakeyCalculatePrivateFields @ 0x1403F1A48 (SymCryptRsakeyCalculatePrivateFields.c)
 *     SymCryptIntExtendedGcd @ 0x1403F81E4 (SymCryptIntExtendedGcd.c)
 *     SymCryptFdefIntToModulus @ 0x1403FE36C (SymCryptFdefIntToModulus.c)
 * Callees:
 *     SymCryptFdefIntToDivisor @ 0x1403FDBFC (SymCryptFdefIntToDivisor.c)
 */

__int64 __fastcall SymCryptIntToDivisor(int a1, int a2, int a3, int a4, __int64 a5, __int64 a6)
{
  return SymCryptFdefIntToDivisor(a1, a2, a3, a4, a5, a6);
}
