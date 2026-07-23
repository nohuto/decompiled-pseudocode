/*
 * XREFs of WdipStartEndScenario @ 0x14078972C
 * Callers:
 *     EtwWriteEndScenario @ 0x140788590 (EtwWriteEndScenario.c)
 *     EtwWriteStartScenario @ 0x140788650 (EtwWriteStartScenario.c)
 *     WdiDispatchControl @ 0x1407894A0 (WdiDispatchControl.c)
 * Callees:
 *     WdipSemDisableScenario @ 0x140789510 (WdipSemDisableScenario.c)
 *     WdipSemEnableScenario @ 0x14078979C (WdipSemEnableScenario.c)
 */

__int64 __fastcall WdipStartEndScenario(__int64 a1, __int64 a2, unsigned __int16 *a3, int a4)
{
  unsigned __int16 v4; // ax

  if ( !a1
    || !a2
    || !a3
    || !*(_DWORD *)a2
    && !*(_WORD *)(a2 + 4)
    && !*(_WORD *)(a2 + 6)
    && !*(_BYTE *)(a2 + 8)
    && !*(_BYTE *)(a2 + 9)
    && !*(_BYTE *)(a2 + 10)
    && !*(_BYTE *)(a2 + 11)
    && !*(_BYTE *)(a2 + 12)
    && !*(_BYTE *)(a2 + 13)
    && !*(_BYTE *)(a2 + 14)
    && !*(_BYTE *)(a2 + 15) )
  {
    return 3221225485LL;
  }
  v4 = *a3;
  if ( a4 == 10 )
  {
    if ( WdipSemEnabled )
      return WdipSemEnableScenario(a1, v4, a2);
  }
  else if ( WdipSemEnabled )
  {
    return WdipSemDisableScenario(a1, v4, a2);
  }
  return 3221225473LL;
}
