/*
 * XREFs of xxxCancelMouseMoveTracking @ 0x1C00EF010
 * Callers:
 *     xxxCapture @ 0x1C0010A5C (xxxCapture.c)
 *     xxxProcessEventMessage @ 0x1C006B460 (xxxProcessEventMessage.c)
 *     xxxTrackMouseMove @ 0x1C00BD950 (xxxTrackMouseMove.c)
 * Callees:
 *     xxxResetTooltip @ 0x1C00164F0 (xxxResetTooltip.c)
 *     xxxHotTrack @ 0x1C0016E10 (xxxHotTrack.c)
 *     FindTimer @ 0x1C00DEEDC (FindTimer.c)
 *     _PostMessage @ 0x1C00EF0A0 (_PostMessage.c)
 *     safe_cast_fnid_to_PTOOLTIPWND @ 0x1C00F9CD8 (safe_cast_fnid_to_PTOOLTIPWND.c)
 */

__int64 __fastcall xxxCancelMouseMoveTracking(unsigned int a1, struct tagWND *a2, int a3, int a4)
{
  __int64 result; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  struct tagTOOLTIPWND *v11; // rax
  struct tagTOOLTIPWND *v12; // r14
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int128 v17; // [rsp+30h] [rbp-28h] BYREF
  __int64 v18; // [rsp+40h] [rbp-18h]

  if ( (a1 & 0x400) != 0 && (a4 & 0x400) != 0 )
    xxxHotTrack(a2, a3, 0);
  if ( (a1 & 0x200) != 0 && (a4 & 0x300) != 0 )
  {
    v9 = *((_QWORD *)a2 + 3);
    v10 = 0LL;
    if ( v9 )
      v10 = *(_QWORD *)(v9 + 112);
    v11 = (struct tagTOOLTIPWND *)safe_cast_fnid_to_PTOOLTIPWND(v10);
    v12 = v11;
    if ( v11 )
    {
      v13 = *(_QWORD *)v11;
      if ( *(_QWORD *)v11 )
      {
        v17 = 0LL;
        v18 = 0LL;
        ThreadLockAlways(v13, &v17);
        xxxResetTooltip(v12);
        ThreadUnlock1(v15, v14, v16);
      }
    }
  }
  result = a4 & a1;
  if ( (a4 & a1 & 0x80u) != 0 )
    result = PostMessage(a2, 675 - (unsigned int)(a3 != 1), 0LL, 0LL);
  if ( (a1 & 0x40) != 0 && (a4 & 0x40) != 0 )
    return FindTimer(a2, (void *)0xFFFA, 2u, 1, 0LL);
  return result;
}
