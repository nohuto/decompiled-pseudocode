/*
 * XREFs of SymCryptIntDivMod @ 0x140400BD4
 * Callers:
 *     SymCryptRsakeyCalculatePrivateFields @ 0x1403FEE6C (SymCryptRsakeyCalculatePrivateFields.c)
 *     SymCryptEckeySetValue @ 0x140400318 (SymCryptEckeySetValue.c)
 *     SymCryptIntExtendedGcd @ 0x1404055F4 (SymCryptIntExtendedGcd.c)
 * Callees:
 *     SymCryptFdefIntDivMod @ 0x14040AB38 (SymCryptFdefIntDivMod.c)
 */

__int64 __fastcall SymCryptIntDivMod(int a1, int a2, int a3, int a4, __int64 a5, __int64 a6)
{
  return SymCryptFdefIntDivMod(a1, a2, a3, a4, a5, a6);
}
