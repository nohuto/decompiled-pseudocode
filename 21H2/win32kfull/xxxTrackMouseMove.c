/*
 * XREFs of xxxTrackMouseMove @ 0x1C002D5C0
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00C2120 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z @ 0x1C0029168 (-SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z.c)
 *     xxxResetTooltip @ 0x1C002B3FC (xxxResetTooltip.c)
 *     xxxHotTrack @ 0x1C002B484 (xxxHotTrack.c)
 *     _SetSystemTimer @ 0x1C002CAB8 (_SetSystemTimer.c)
 *     xxxCancelMouseMoveTracking @ 0x1C002D9FC (xxxCancelMouseMoveTracking.c)
 *     ?WindowBorderExitIfEntered@NotifyShell@@YAXPEAUtagWND@@@Z @ 0x1C002DB24 (-WindowBorderExitIfEntered@NotifyShell@@YAXPEAUtagWND@@@Z.c)
 *     ?IsTooltipHittest@@YAPEAGPEAUtagWND@@I@Z @ 0x1C00306C0 (-IsTooltipHittest@@YAPEAGPEAUtagWND@@I@Z.c)
 *     safe_cast_fnid_to_PTOOLTIPWND @ 0x1C0030A88 (safe_cast_fnid_to_PTOOLTIPWND.c)
 *     ?BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z @ 0x1C004B630 (-BehaviorEnabled@ShellWindowManagement@@YA_NPEBUtagDESKTOP@@K@Z.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C004FC70 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     xxxSetWindowPos @ 0x1C006BC54 (xxxSetWindowPos.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     PushW32ThreadLock @ 0x1C00BFD80 (PushW32ThreadLock.c)
 *     ?IsIndependentInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C00C0AD8 (-IsIndependentInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     ThreadLockExchangeAlways @ 0x1C00C135C (ThreadLockExchangeAlways.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00C1890 (PopAndFreeW32ThreadLock.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C01D24C8 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     GetActiveTrackPwnd @ 0x1C01E1C6C (GetActiveTrackPwnd.c)
 *     ?WindowBorderEnter@NotifyShell@@YAXPEAUtagWND@@H@Z @ 0x1C023D70C (-WindowBorderEnter@NotifyShell@@YAXPEAUtagWND@@H@Z.c)
 *     ?xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z @ 0x1C0242C3C (-xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z.c)
 */

__int64 __fastcall xxxTrackMouseMove(struct tagWND *a1, unsigned int a2, int a3)
{
  int v4; // ebx
  unsigned int v6; // r15d
  __int64 v7; // rdi
  __int64 ThreadWin32Thread; // rax
  unsigned int v9; // edx
  NotifyShell **v10; // r12
  __int64 v11; // r13
  unsigned int v12; // r8d
  struct tagWND *v13; // rdx
  unsigned int v14; // r8d
  __int64 v15; // rcx
  __int64 v17; // r10
  struct tagQ *v18; // r11
  NotifyShell *v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rcx
  NotifyShell *v22; // rcx
  _QWORD *v23; // rax
  _QWORD *v24; // rbx
  __int64 v25; // r15
  unsigned __int16 *v26; // rax
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int16 *v28; // r12
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rcx
  int v33; // eax
  struct tagWND *CompositionInputWindowUIOwner; // rax
  int v37; // r8d
  __int64 ActiveTrackPwnd; // rbx
  int *v39; // rax
  _QWORD v40[2]; // [rsp+48h] [rbp-29h] BYREF
  __int128 v41; // [rsp+58h] [rbp-19h] BYREF
  __int64 v42; // [rsp+68h] [rbp-9h]
  __int128 v43; // [rsp+70h] [rbp-1h] BYREF
  __int64 v44; // [rsp+80h] [rbp+Fh]
  _QWORD v45[4]; // [rsp+88h] [rbp+17h] BYREF

  v45[2] = 0LL;
  v42 = 0LL;
  v44 = 0LL;
  v4 = a3;
  v41 = 0LL;
  v6 = 0;
  v43 = 0LL;
  v7 = *(_QWORD *)(gptiCurrent + 456LL);
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v45[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v45;
  v45[1] = a1;
  HMLockObject(a1);
  if ( v4 == 512 && ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0 )
  {
    if ( (unsigned int)IsIndependentInputWindow(a1) )
    {
      CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(a1);
      if ( CompositionInputWindowUIOwner )
      {
        a1 = CompositionInputWindowUIOwner;
        ThreadLockExchangeAlways(CompositionInputWindowUIOwner, v45);
      }
    }
  }
  v9 = *(_DWORD *)(v7 + 48);
  v10 = (NotifyShell **)(v7 + 184);
  v11 = *(_QWORD *)(v7 + 184);
  if ( (v9 & 0x5C0) != 0 && v11 )
  {
    v17 = *(_QWORD *)(v11 + 16);
    v18 = *(struct tagQ **)(v17 + 432);
    if ( *(struct tagQ **)(gptiCurrent + 432LL) == v18 )
    {
      v6 = 1024;
    }
    else if ( (v9 & 0x500) != 0 )
    {
      PostEventMessageEx(
        (struct tagTHREADINFO *)v17,
        v18,
        0xBu,
        (struct tagWND *)v11,
        v9,
        *(int *)(v7 + 192),
        1024LL,
        0LL);
      *(_DWORD *)(v7 + 48) &= 0xFFFFFAFF;
    }
    if ( a2 == 1 || v4 != 512 )
      v6 |= 0x100u;
    if ( (struct tagWND *)v11 != a1 || (a2 == 1) != (*(_DWORD *)(v7 + 192) == 1) )
      v6 |= 0xC0u;
    PushW32ThreadLock(v7, &v43, UserDereferenceObject);
    ObfReferenceObject((PVOID)v7);
    v19 = *v10;
    v20 = W32GetThreadWin32Thread(KeGetCurrentThread());
    *(_QWORD *)&v41 = *(_QWORD *)(v20 + 416);
    *(_QWORD *)(v20 + 416) = &v41;
    *((_QWORD *)&v41 + 1) = v19;
    HMLockObject(v19);
    xxxCancelMouseMoveTracking(*(unsigned int *)(v7 + 48), *v10, *(unsigned int *)(v7 + 192), v6);
    ThreadUnlock1(v21);
    v4 = a3;
    *(_DWORD *)(v7 + 48) &= ~v6;
  }
  else
  {
    PushW32ThreadLock(v7, &v43, UserDereferenceObject);
    ObfReferenceObject((PVOID)v7);
  }
  if ( a2 != 1 && v4 == 512 && ((unsigned int)gpdwCPUserPreferencesMask & 0x80000080) == 0x80000080 )
  {
    if ( (unsigned int)xxxHotTrack(a1, a2, 1) )
      *(_DWORD *)(v7 + 48) |= 0x400u;
    v23 = (_QWORD *)safe_cast_fnid_to_PTOOLTIPWND(*(_QWORD *)(v7 + 112));
    v24 = v23;
    if ( v23 )
    {
      v25 = *v23;
      if ( *v23 )
      {
        v26 = IsTooltipHittest(a1, (unsigned __int16)a2);
        CurrentThread = KeGetCurrentThread();
        v28 = v26;
        if ( v26 )
        {
          v31 = W32GetThreadWin32Thread(CurrentThread);
          *(_QWORD *)&v41 = *(_QWORD *)(v31 + 416);
          *(_QWORD *)(v31 + 416) = &v41;
          *((_QWORD *)&v41 + 1) = v25;
          HMLockObject(v25);
          v32 = *v24;
          v24[6] = v28;
          if ( (*(_BYTE *)(*(_QWORD *)(v32 + 40) + 31LL) & 0x10) != 0 )
          {
            xxxSetWindowPos((struct tagWND *)v32, 0, 0, 1175);
            v33 = xxxShowTooltip((struct tagTOOLTIPWND *)v24);
          }
          else
          {
            SetTooltipTimer((struct tagTOOLTIPWND *)v24, 1, *((_DWORD *)v24 + 2));
            v33 = 1;
          }
          if ( v33 )
            *(_DWORD *)(v7 + 48) |= 0x300u;
        }
        else
        {
          v29 = W32GetThreadWin32Thread(CurrentThread);
          *(_QWORD *)&v41 = *(_QWORD *)(v29 + 416);
          *(_QWORD *)(v29 + 416) = &v41;
          *((_QWORD *)&v41 + 1) = v25;
          HMLockObject(v25);
          xxxResetTooltip((struct tagTOOLTIPWND *)v24);
        }
        ThreadUnlock1(v30);
        v10 = (NotifyShell **)(v7 + 184);
      }
    }
  }
  if ( ShellWindowManagement::BehaviorEnabled((ShellWindowManagement *)v7, (const struct tagDESKTOP *)0x40, v12) )
  {
    if ( (struct tagWND *)v11 == a1 )
    {
      if ( *(_DWORD *)(v7 + 192) == a2 )
        goto LABEL_8;
      v22 = a1;
    }
    else
    {
      v22 = *v10;
      if ( !*v10 )
      {
LABEL_25:
        if ( a2 - 10 <= 1
          && !ShellWindowManagement::BehaviorEnabled(
                *((ShellWindowManagement **)a1 + 3),
                (const struct tagDESKTOP *)8,
                v14) )
        {
          NotifyShell::WindowBorderEnter(a1, (struct tagWND *)a2, v37);
        }
        goto LABEL_8;
      }
    }
    NotifyShell::WindowBorderExitIfEntered(v22, v13);
    goto LABEL_25;
  }
LABEL_8:
  if ( (struct tagWND *)v11 != a1 )
  {
    v40[0] = v10;
    v40[1] = a1;
    HMAssignmentLock(v40);
    if ( a3 == 512 && ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0 )
    {
      if ( *(_DWORD *)UPDWORDPointer(8194LL) )
      {
        ActiveTrackPwnd = GetActiveTrackPwnd(a1);
        if ( ActiveTrackPwnd )
        {
          v39 = (int *)UPDWORDPointer(8194LL);
          SetSystemTimer(ActiveTrackPwnd, 65527, *v39, (int)xxxSystemTimerProc, 1);
        }
      }
      else
      {
        *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 388LL) |= 0x200000u;
      }
    }
  }
  *(_DWORD *)(v7 + 192) = a2;
  PopAndFreeW32ThreadLock(&v43);
  return ThreadUnlock1(v15);
}
