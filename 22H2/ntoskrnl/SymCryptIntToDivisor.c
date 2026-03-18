/*
 * XREFs of SymCryptIntToDivisor @ 0x1403F8EE4
 * Callers:
 *     SymCryptRsakeyCalculatePrivateFields @ 0x1403F6F68 (SymCryptRsakeyCalculatePrivateFields.c)
 *     SymCryptIntExtendedGcd @ 0x1403FD704 (SymCryptIntExtendedGcd.c)
 *     SymCryptFdefIntToModulus @ 0x14040388C (SymCryptFdefIntToModulus.c)
 * Callees:
 *     SymCryptFdefIntToDivisor @ 0x14040311C (SymCryptFdefIntToDivisor.c)
 */

__int64 __fastcall SymCryptIntToDivisor(int a1, int a2, int a3, int a4, __int64 a5, __int64 a6)
{
  return SymCryptFdefIntToDivisor(a1, a2, a3, a4, a5, a6);
}
