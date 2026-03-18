/*
 * XREFs of SymCryptFdefIntSetValue @ 0x14040D310
 * Callers:
 *     SymCryptIntSetValue @ 0x140400D10 (SymCryptIntSetValue.c)
 * Callees:
 *     SymCryptFdefRawSetValue @ 0x14040D4B0 (SymCryptFdefRawSetValue.c)
 */

__int64 __fastcall SymCryptFdefIntSetValue(int a1, int a2, int a3, __int64 a4)
{
  return SymCryptFdefRawSetValue(a1, a2, a3, (int)a4 + 32, *(_DWORD *)(a4 + 4));
}
