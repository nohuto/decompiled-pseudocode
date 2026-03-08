/*
 * XREFs of SymCryptFdefIntSetValue @ 0x1403FFD9C
 * Callers:
 *     SymCryptIntSetValue @ 0x1403F391C (SymCryptIntSetValue.c)
 * Callees:
 *     SymCryptFdefRawSetValue @ 0x1403FFF38 (SymCryptFdefRawSetValue.c)
 */

__int64 __fastcall SymCryptFdefIntSetValue(int a1, int a2, int a3, __int64 a4)
{
  return SymCryptFdefRawSetValue(a1, a2, a3, (int)a4 + 32, *(_DWORD *)(a4 + 4));
}
