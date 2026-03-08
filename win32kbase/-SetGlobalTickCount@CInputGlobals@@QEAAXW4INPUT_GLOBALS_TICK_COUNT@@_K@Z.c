/*
 * XREFs of ?SetGlobalTickCount@CInputGlobals@@QEAAXW4INPUT_GLOBALS_TICK_COUNT@@_K@Z @ 0x1C020B780
 * Callers:
 *     <none>
 * Callees:
 *     RIMLockExclusive @ 0x1C00399D0 (RIMLockExclusive.c)
 */

void __fastcall CInputGlobals::SetGlobalTickCount(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // rbx

  v4 = a2;
  RIMLockExclusive(a1);
  *(_QWORD *)(a1 + 8 * v4 + 24) = a3;
  *(_QWORD *)(a1 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(a1, 0LL);
  KeLeaveCriticalRegion();
}
