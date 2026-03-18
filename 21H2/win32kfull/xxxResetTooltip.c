/*
 * XREFs of xxxResetTooltip @ 0x1C0118B6C
 * Callers:
 *     xxxProcessEventMessage @ 0x1C005C220 (xxxProcessEventMessage.c)
 *     xxxFreeWindow @ 0x1C005E458 (xxxFreeWindow.c)
 *     xxxTrackMouseMove @ 0x1C007E59C (xxxTrackMouseMove.c)
 *     xxxCancelMouseMoveTracking @ 0x1C00A184C (xxxCancelMouseMoveTracking.c)
 *     ?xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z @ 0x1C023EA24 (-xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     xxxSetWindowPosAndBand @ 0x1C0048AFC (xxxSetWindowPosAndBand.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C009C270 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     ?KillTooltipTimer@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C0118BBC (-KillTooltipTimer@@YAXPEAUtagTOOLTIPWND@@@Z.c)
 */

struct tagWND *__fastcall xxxResetTooltip(struct tagTOOLTIPWND *a1)
{
  struct tagWND *v2; // rcx
  struct tagWND *result; // rax
  struct tagWND *v4; // rdi
  __int64 v5; // rcx
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  _QWORD v10[5]; // [rsp+40h] [rbp-28h] BYREF

  KillTooltipTimer(a1);
  v2 = *(struct tagWND **)a1;
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)a1 + 40LL) + 31LL) & 0x10) != 0 )
  {
    v4 = 0LL;
    v10[2] = 0LL;
    xxxSetWindowPosAndBand(v2, 0LL, 0, 0, 0, 0, 151, 1);
    v5 = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
    if ( v5 )
      v4 = *(struct tagWND **)(v5 + 104);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v10[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v10;
    v10[1] = v4;
    HMLockObject(v4);
    xxxSetParentWorker(*(struct tagWND **)a1, v4, 0LL, 0);
    ThreadUnlock1(v8, v7, v9);
  }
  *((_OWORD *)a1 + 2) = 0LL;
  *((_QWORD *)a1 + 6) = 0LL;
  result = *(struct tagWND **)a1;
  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 48LL) &= 0xFFFFFCFF;
  return result;
}
