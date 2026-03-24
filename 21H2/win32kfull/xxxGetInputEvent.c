/*
 * XREFs of xxxGetInputEvent @ 0x1C00530F0
 * Callers:
 *     NtUserMsgWaitForMultipleObjectsEx @ 0x1C0052BA0 (NtUserMsgWaitForMultipleObjectsEx.c)
 * Callees:
 *     xxxHandleHealthyThread @ 0x1C00034F0 (xxxHandleHealthyThread.c)
 *     ?CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z @ 0x1C0038F48 (-CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C005B900 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     zzzCalcStartCursorHide @ 0x1C007FC90 (zzzCalcStartCursorHide.c)
 */

__int64 __fastcall xxxGetInputEvent(unsigned int a1)
{
  unsigned __int16 v1; // di
  unsigned int v2; // edx
  __int64 v3; // rax
  __int16 v4; // r14
  __int16 v5; // cx
  int v6; // r8d
  __int64 v7; // rcx
  __int64 CurrentProcessWin32Process; // rsi
  __int64 v9; // rax
  struct _KEVENT *v10; // rcx
  int v11; // eax
  __int64 v12; // rax
  __int16 v13; // cx
  __int64 v14; // rsi
  __int64 v16; // rdx
  struct _KEVENT *v17; // rcx

  v1 = a1;
  v2 = HIWORD(a1);
  v3 = *(_QWORD *)(gptiCurrent + 448LL);
  v4 = BYTE2(a1) & 4;
  if ( (a1 & 0x40000) != 0 )
    v5 = *(_WORD *)(v3 + 6);
  else
    v5 = 0;
  if ( ((unsigned __int16)(v5 | *(_WORD *)(v3 + 4)) & v1) != 0
    || (v6 = *(_DWORD *)(gptiCurrent + 1232LL), (v6 & 0x400) != 0 || (v2 & 8) != 0) && (v6 & 0x200) != 0
    || (v7 = *(_QWORD *)(gptiCurrent + 432LL), *(_QWORD *)(v7 + 64) == gptiCurrent)
    && (*(_DWORD *)(v7 + 388) & 0x400) == 0
    && *(_QWORD *)(v7 + 72) == 1LL
    && *(_QWORD *)(gptiCurrent + 576LL) == 1LL
    && (v1 & 0x1C07) != 0 )
  {
LABEL_40:
    KeSetEvent(*(PRKEVENT *)(gptiCurrent + 736LL), 2, 0);
    goto LABEL_23;
  }
  if ( gptiCurrent == gptiForeground )
  {
    v7 = (unsigned int)(*(_DWORD *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL) | *(_DWORD *)(gptiCurrent + 680LL));
    if ( ((*(_WORD *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL) | *(_WORD *)(gptiCurrent + 680LL)) & 0x1000) != 0 )
      xxxCallHook(0, 0LL, 0LL, 11);
  }
  if ( (v1 & 0x1C0F) != 0 )
    *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 328LL) = gptiCurrent;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7);
  *(_DWORD *)(gptiCurrent + 488LL) &= ~0x2000u;
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x1000) != 0 )
  {
    if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 616LL) + 24LL) )
    {
      EtwTraceWakeInputIdle(0LL, gptiCurrent);
      v16 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 616LL) + 24LL);
      v17 = *(struct _KEVENT **)(v16 + 32);
      if ( v17 )
      {
        if ( v17 != (struct _KEVENT *)-1LL )
        {
          KeSetEvent(v17, 1, 0);
          ObfDereferenceObject(*(PVOID *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 616LL) + 24LL) + 32LL));
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 616LL) + 24LL) + 32LL) = -1LL;
        }
      }
      else
      {
        *(_QWORD *)(v16 + 32) = -1LL;
      }
    }
  }
  else
  {
    v9 = *(_QWORD *)(gptiCurrent + 424LL);
    if ( !*(_QWORD *)(v9 + 328) )
    {
      *(_QWORD *)(v9 + 328) = gptiCurrent;
      v9 = *(_QWORD *)(gptiCurrent + 424LL);
    }
    if ( *(_QWORD *)(v9 + 328) == gptiCurrent )
    {
      EtwTraceWakeInputIdle(0LL, gptiCurrent);
      v10 = *(struct _KEVENT **)(CurrentProcessWin32Process + 16);
      if ( v10 )
      {
        if ( v10 == (struct _KEVENT *)-1LL )
          goto LABEL_17;
        KeSetEvent(v10, 1, 0);
        ObfDereferenceObject(*(PVOID *)(CurrentProcessWin32Process + 16));
      }
      *(_QWORD *)(CurrentProcessWin32Process + 16) = -1LL;
    }
  }
LABEL_17:
  v11 = *(_DWORD *)(CurrentProcessWin32Process + 12);
  if ( (v11 & 4) != 0 )
  {
    *(_DWORD *)(CurrentProcessWin32Process + 12) = v11 & 0xFFFFFFFB;
    zzzCalcStartCursorHide(0LL, 0LL);
  }
  v12 = *(_QWORD *)(gptiCurrent + 448LL);
  if ( v4 )
    v13 = *(_WORD *)(v12 + 6);
  else
    v13 = 0;
  if ( ((unsigned __int16)(v13 | *(_WORD *)(v12 + 4)) & v1) != 0 )
    goto LABEL_40;
  *(_WORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 10LL) = v1 | 0x2000;
  KeClearEvent(*(PRKEVENT *)(gptiCurrent + 736LL));
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 480LL) + 8LL) = 0LL;
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x400) != 0 && (int)CheckProcessForeground(gptiCurrent) < 0 )
    return 0LL;
LABEL_23:
  v14 = *(_QWORD *)(gptiCurrent + 728LL);
  if ( v14 && ((v1 & 7) == 7 || (v1 & 6) != 0 && *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 104LL)) )
  {
    EtwTraceMessageCheckDelay(gptiCurrent);
    *(_DWORD *)(gptiCurrent + 1176LL) = 0;
    if ( *(int *)(gptiCurrent + 488LL) < 0 )
      xxxHandleHealthyThread(gptiCurrent);
    *(_QWORD *)(gptiCurrent + 1232LL) &= ~0x400000000uLL;
    EtwTraceProcessWindowInfo(gptiCurrent);
  }
  return v14;
}
