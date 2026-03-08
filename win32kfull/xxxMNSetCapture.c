/*
 * XREFs of xxxMNSetCapture @ 0x1C021CCC4
 * Callers:
 *     xxxMNEndMenuStateInternal @ 0x1C02026A0 (xxxMNEndMenuStateInternal.c)
 *     xxxMNStartMenu @ 0x1C0202834 (xxxMNStartMenu.c)
 *     xxxMNKeyDown @ 0x1C021ABF8 (xxxMNKeyDown.c)
 *     xxxMenuWindowProc @ 0x1C021D3D0 (xxxMenuWindowProc.c)
 * Callees:
 *     xxxCapture @ 0x1C0010A5C (xxxCapture.c)
 *     xxxWindowEvent @ 0x1C0062470 (xxxWindowEvent.c)
 */

void __fastcall xxxMNSetCapture(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  struct tagWND *v7; // rdx
  __int128 v8; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+40h] [rbp-18h]

  v8 = 0LL;
  v9 = 0LL;
  ThreadLock(*(_QWORD *)(**(_QWORD **)a1 + 8LL), &v8);
  xxxCapture(gptiCurrent, *(struct tagWND **)(**(_QWORD **)a1 + 8LL), 4);
  ThreadUnlock1(v5, v4, v6);
  *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 396LL) |= 0x100000u;
  *(_DWORD *)(a2 + 8) |= 0x40000u;
  if ( gpqForeground )
  {
    v7 = *(struct tagWND **)(gpqForeground + 120LL);
    if ( v7 )
    {
      if ( *((_QWORD *)v7 + 2) == gptiCurrent )
        xxxWindowEvent(0x80000004, v7, 0, 1u, 33);
    }
  }
}
