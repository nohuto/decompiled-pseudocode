/*
 * XREFs of xxxResetTooltip @ 0x1C00164F0
 * Callers:
 *     xxxFreeWindow @ 0x1C0031C50 (xxxFreeWindow.c)
 *     xxxProcessEventMessage @ 0x1C006B460 (xxxProcessEventMessage.c)
 *     xxxTrackMouseMove @ 0x1C00BD950 (xxxTrackMouseMove.c)
 *     xxxCancelMouseMoveTracking @ 0x1C00EF010 (xxxCancelMouseMoveTracking.c)
 *     ?xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z @ 0x1C0228AA4 (-xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z.c)
 * Callees:
 *     ?KillTooltipTimer@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C0016540 (-KillTooltipTimer@@YAXPEAUtagTOOLTIPWND@@@Z.c)
 *     xxxSetWindowPosAndBand @ 0x1C0028FFC (xxxSetWindowPosAndBand.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C0036908 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 */

struct tagWND *__fastcall xxxResetTooltip(struct tagTOOLTIPWND *a1)
{
  struct tagWND *v2; // rcx
  struct tagWND *result; // rax
  struct tagWND *v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int128 v9; // [rsp+40h] [rbp-28h] BYREF
  __int64 v10; // [rsp+50h] [rbp-18h]

  KillTooltipTimer(a1);
  v2 = *(struct tagWND **)a1;
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 40LL) + 31LL) & 0x10) != 0 )
  {
    v4 = 0LL;
    v10 = 0LL;
    v9 = 0LL;
    xxxSetWindowPosAndBand(v2, 0, 0, 151, 1);
    v5 = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
    if ( v5 )
      v4 = *(struct tagWND **)(v5 + 104);
    ThreadLockAlways(v4, &v9);
    xxxSetParentWorker(*(struct tagWND **)a1, v4, 0LL, 0);
    ThreadUnlock1(v7, v6, v8);
  }
  *((_OWORD *)a1 + 2) = 0LL;
  *((_QWORD *)a1 + 6) = 0LL;
  result = *(struct tagWND **)a1;
  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 48LL) &= 0xFFFFFCFF;
  return result;
}
