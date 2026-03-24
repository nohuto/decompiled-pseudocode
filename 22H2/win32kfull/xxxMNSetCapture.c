/*
 * XREFs of xxxMNSetCapture @ 0x1C023AEB4
 * Callers:
 *     xxxMNEndMenuStateInternal @ 0x1C0221E30 (xxxMNEndMenuStateInternal.c)
 *     xxxMNStartMenu @ 0x1C0222080 (xxxMNStartMenu.c)
 *     xxxMNKeyDown @ 0x1C02384D8 (xxxMNKeyDown.c)
 *     xxxMenuWindowProc @ 0x1C023B5E0 (xxxMenuWindowProc.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C0081440 (xxxWindowEvent.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     xxxCapture @ 0x1C00C02CC (xxxCapture.c)
 */

void __fastcall xxxMNSetCapture(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  _QWORD v8[5]; // [rsp+30h] [rbp-28h] BYREF

  v8[2] = 0LL;
  v4 = *(_QWORD *)(**(_QWORD **)a1 + 8LL);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v8[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v8;
  v8[1] = v4;
  if ( v4 )
    HMLockObject(v4);
  xxxCapture(gptiCurrent, *(_QWORD *)(**(_QWORD **)a1 + 8LL), 4);
  ThreadUnlock1(v6);
  *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 388LL) |= 0x100000u;
  *(_DWORD *)(a2 + 8) |= 0x40000u;
  if ( gpqForeground )
  {
    v7 = *(_QWORD *)(gpqForeground + 112LL);
    if ( v7 )
    {
      if ( *(_QWORD *)(v7 + 16) == gptiCurrent )
        xxxWindowEvent(0x80000004, (struct tagWND *)v7, 0, 1u, 0x21u);
    }
  }
}
