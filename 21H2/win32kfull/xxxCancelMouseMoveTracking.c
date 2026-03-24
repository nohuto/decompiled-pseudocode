/*
 * XREFs of xxxCancelMouseMoveTracking @ 0x1C002D9FC
 * Callers:
 *     xxxTrackMouseMove @ 0x1C002D5C0 (xxxTrackMouseMove.c)
 *     xxxCapture @ 0x1C00C062C (xxxCapture.c)
 *     xxxProcessEventMessage @ 0x1C00C1918 (xxxProcessEventMessage.c)
 * Callees:
 *     FindTimer @ 0x1C000B5AC (FindTimer.c)
 *     xxxResetTooltip @ 0x1C002B3FC (xxxResetTooltip.c)
 *     xxxHotTrack @ 0x1C002B484 (xxxHotTrack.c)
 *     _PostMessage @ 0x1C002DC40 (_PostMessage.c)
 *     safe_cast_fnid_to_PTOOLTIPWND @ 0x1C0030A88 (safe_cast_fnid_to_PTOOLTIPWND.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall xxxCancelMouseMoveTracking(__int16 a1, __int64 a2, int a3, __int16 a4)
{
  __int64 result; // rax
  char v9; // bl
  __int64 v10; // rax
  __int64 v11; // rcx
  struct tagTOOLTIPWND *v12; // r14
  __int64 v13; // r15
  __int64 ThreadWin32Thread; // rax
  __int64 v15; // rcx
  _QWORD v16[4]; // [rsp+30h] [rbp-38h] BYREF

  result = 1024LL;
  if ( (a1 & 0x400) != 0 && (a4 & 0x400) != 0 )
    result = xxxHotTrack((struct tagWND *)a2, a3, 0);
  if ( (a1 & 0x200) != 0 && (a4 & 0x300) != 0 )
  {
    v10 = *(_QWORD *)(a2 + 24);
    v11 = 0LL;
    if ( v10 )
      v11 = *(_QWORD *)(v10 + 112);
    result = safe_cast_fnid_to_PTOOLTIPWND(v11);
    v12 = (struct tagTOOLTIPWND *)result;
    if ( result )
    {
      v13 = *(_QWORD *)result;
      if ( *(_QWORD *)result )
      {
        v16[2] = 0LL;
        ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
        v16[0] = *(_QWORD *)(ThreadWin32Thread + 416);
        *(_QWORD *)(ThreadWin32Thread + 416) = v16;
        v16[1] = v13;
        HMLockObject(v13);
        xxxResetTooltip(v12);
        result = ThreadUnlock1(v15);
      }
    }
  }
  v9 = a4 & a1;
  if ( v9 < 0 )
    result = PostMessage(a2, 675 - (unsigned int)(a3 != 1), 0LL, 0LL);
  if ( (v9 & 0x40) != 0 )
    return FindTimer(a2, 65530LL, 2u, 1, 0LL);
  return result;
}
