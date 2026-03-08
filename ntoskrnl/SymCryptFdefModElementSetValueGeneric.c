/*
 * XREFs of SymCryptFdefModElementSetValueGeneric @ 0x1403FE7A4
 * Callers:
 *     SymCryptModElementSetValue @ 0x1403F3B80 (SymCryptModElementSetValue.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1403023F0 (xHalTimerWatchdogStop.c)
 *     SymCryptFdefRawDivMod @ 0x1403FDD28 (SymCryptFdefRawDivMod.c)
 *     SymCryptFdefRawSetValue @ 0x1403FFF38 (SymCryptFdefRawSetValue.c)
 */

__int64 __fastcall SymCryptFdefModElementSetValueGeneric(int a1, int a2, int a3, __int64 a4, void *Src, _DWORD *a6)
{
  int v6; // r14d
  __int64 result; // rax

  v6 = *(_DWORD *)(a4 + 4);
  xHalTimerWatchdogStop();
  result = SymCryptFdefRawSetValue(a1, a2, a3, (_DWORD)Src, v6);
  if ( !(_DWORD)result )
  {
    SymCryptFdefRawDivMod(Src, v6, (_DWORD *)(a4 + 64), 0LL, Src, a6);
    return 0LL;
  }
  return result;
}
