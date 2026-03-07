__int64 __fastcall xxxGetInputEvent(unsigned int a1)
{
  unsigned __int16 v1; // si
  unsigned int v2; // eax
  __int64 v3; // rdx
  __int16 v4; // r14
  __int16 v5; // cx
  int v6; // edx
  __int64 v7; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v9; // rdi
  __int64 v10; // rax
  struct _KEVENT *v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  __int16 v14; // ax
  __int64 v15; // rdi

  v1 = a1;
  v2 = HIWORD(a1);
  v3 = *(_QWORD *)(gptiCurrent + 448LL);
  v4 = BYTE2(a1) & 4;
  if ( (a1 & 0x40000) != 0 )
    v5 = *(_WORD *)(v3 + 8);
  else
    v5 = 0;
  if ( ((unsigned __int16)(*(_WORD *)(v3 + 4) | v5) & v1) != 0
    || (v6 = *(_DWORD *)(gptiCurrent + 1272LL), (v6 & 0x400) != 0 || (v2 & 8) != 0) && (v6 & 0x200) != 0
    || (v7 = *(_QWORD *)(gptiCurrent + 432LL), *(_QWORD *)(v7 + 72) == gptiCurrent)
    && (*(_DWORD *)(v7 + 396) & 0x400) == 0
    && *(_QWORD *)(v7 + 80) == 1LL
    && *(_QWORD *)(gptiCurrent + 576LL) == 1LL
    && (v1 & 0x1C07) != 0 )
  {
LABEL_46:
    KeSetEvent(*(PRKEVENT *)(gptiCurrent + 736LL), 2, 0);
    goto LABEL_25;
  }
  if ( gptiCurrent == gptiForeground )
  {
    v7 = **(_QWORD **)(gptiCurrent + 464LL);
    if ( ((*(_DWORD *)(gptiCurrent + 680LL) | *(_DWORD *)(v7 + 16)) & 0x1000) != 0 )
      xxxCallHook(0, 0LL, 0LL, 11);
  }
  if ( (v1 & 0x1C0F) != 0 )
    *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 328LL) = gptiCurrent;
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v7);
  v9 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process && !*CurrentProcessWin32Process )
    v9 = 0LL;
  v10 = *(_QWORD *)(gptiCurrent + 424LL);
  if ( !*(_QWORD *)(v10 + 328) )
    *(_QWORD *)(v10 + 328) = gptiCurrent;
  if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 328LL) == gptiCurrent )
  {
    EtwTraceWakeInputIdle(0LL, gptiCurrent);
    v11 = (struct _KEVENT *)v9[2];
    if ( v11 )
    {
      if ( v11 == (struct _KEVENT *)-1LL )
        goto LABEL_19;
      KeSetEvent(v11, 1, 0);
      ObfDereferenceObject((PVOID)v9[2]);
    }
    v9[2] = -1LL;
  }
LABEL_19:
  v12 = *((_DWORD *)v9 + 3);
  if ( (v12 & 4) != 0 )
  {
    *((_DWORD *)v9 + 3) = v12 & 0xFFFFFFFB;
    zzzCalcStartCursorHide(0LL, 0LL);
  }
  v13 = *(_QWORD *)(gptiCurrent + 448LL);
  if ( v4 )
    v14 = *(_WORD *)(v13 + 8);
  else
    v14 = 0;
  if ( ((unsigned __int16)(*(_WORD *)(v13 + 4) | v14) & v1) != 0 )
    goto LABEL_46;
  _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(gptiCurrent + 448LL) + 16LL), v1 | 0x2000);
  KeClearEvent(*(PRKEVENT *)(gptiCurrent + 736LL));
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 480LL) + 8LL) = 0LL;
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x400) != 0 && (int)CheckProcessForeground(gptiCurrent) < 0 )
    return 0LL;
LABEL_25:
  v15 = *(_QWORD *)(gptiCurrent + 728LL);
  if ( v15 && ((v1 & 7) == 7 || (v1 & 6) != 0 && *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 112LL)) )
  {
    EtwTraceMessageCheckDelay(gptiCurrent);
    *(_DWORD *)(gptiCurrent + 1216LL) = 0;
    if ( *(int *)(gptiCurrent + 488LL) < 0 )
      xxxHandleHealthyThread(gptiCurrent);
    *(_QWORD *)(gptiCurrent + 1272LL) &= ~0x200000000uLL;
    EtwTraceProcessWindowInfo(gptiCurrent);
  }
  return v15;
}
