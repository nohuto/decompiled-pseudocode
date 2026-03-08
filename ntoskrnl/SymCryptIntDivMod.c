/*
 * XREFs of SymCryptIntDivMod @ 0x1403F37E0
 * Callers:
 *     SymCryptRsakeyCalculatePrivateFields @ 0x1403F1A48 (SymCryptRsakeyCalculatePrivateFields.c)
 *     SymCryptEckeySetValue @ 0x1403F2F18 (SymCryptEckeySetValue.c)
 *     SymCryptIntExtendedGcd @ 0x1403F81E4 (SymCryptIntExtendedGcd.c)
 * Callees:
 *     SymCryptFdefIntDivMod @ 0x1403FD6A8 (SymCryptFdefIntDivMod.c)
 */

__int64 __fastcall SymCryptIntDivMod(int a1, int a2, int a3, int a4, __int64 a5, __int64 a6)
{
  return SymCryptFdefIntDivMod(a1, a2, a3, a4, a5, a6);
}
