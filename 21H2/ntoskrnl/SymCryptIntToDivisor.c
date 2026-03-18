/*
 * XREFs of SymCryptIntToDivisor @ 0x140400DB8
 * Callers:
 *     SymCryptRsakeyCalculatePrivateFields @ 0x1403FEE6C (SymCryptRsakeyCalculatePrivateFields.c)
 *     SymCryptIntExtendedGcd @ 0x1404055F4 (SymCryptIntExtendedGcd.c)
 *     SymCryptFdefIntToModulus @ 0x14040B7F4 (SymCryptFdefIntToModulus.c)
 * Callees:
 *     SymCryptFdefIntToDivisor @ 0x14040B088 (SymCryptFdefIntToDivisor.c)
 */

__int64 __fastcall SymCryptIntToDivisor(int a1, int a2, int a3, int a4, __int64 a5, __int64 a6)
{
  return SymCryptFdefIntToDivisor(a1, a2, a3, a4, a5, a6);
}
