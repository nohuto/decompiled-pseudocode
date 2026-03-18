/*
 * XREFs of xxxTrackMouseMove @ 0x1C007E59C
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0058FB0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     xxxSetWindowPos @ 0x1C0048A4C (xxxSetWindowPos.c)
 *     PopAndFreeW32ThreadLock @ 0x1C005BDE0 (PopAndFreeW32ThreadLock.c)
 *     ?HitTestPartUpdate@NotifyShell@@YAXAEBUtagDESKTOP@@PEAUtagWND@@H@Z @ 0x1C007E9B8 (-HitTestPartUpdate@NotifyShell@@YAXAEBUtagDESKTOP@@PEAUtagWND@@H@Z.c)
 *     PushW32ThreadLock @ 0x1C007F6F0 (PushW32ThreadLock.c)
 *     xxxCancelMouseMoveTracking @ 0x1C00A184C (xxxCancelMouseMoveTracking.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00AC3EC (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     _SetSystemTimer @ 0x1C00C2F28 (_SetSystemTimer.c)
 *     ?IsIndependentInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C00F1E88 (-IsIndependentInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     ThreadLockExchangeAlways @ 0x1C010150C (ThreadLockExchangeAlways.c)
 *     safe_cast_fnid_to_PTOOLTIPWND @ 0x1C010D388 (safe_cast_fnid_to_PTOOLTIPWND.c)
 *     ?SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z @ 0x1C0118B1C (-SetTooltipTimer@@YAXPEAUtagTOOLTIPWND@@II@Z.c)
 *     xxxResetTooltip @ 0x1C0118B6C (xxxResetTooltip.c)
 *     xxxHotTrack @ 0x1C011F23C (xxxHotTrack.c)
 *     ?IsTooltipHittest@@YAPEAGPEAUtagWND@@I@Z @ 0x1C01200F0 (-IsTooltipHittest@@YAPEAGPEAUtagWND@@I@Z.c)
 *     GetActiveTrackPwnd @ 0x1C01DCBDC (GetActiveTrackPwnd.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C023A8B0 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     ?xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z @ 0x1C023E738 (-xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z.c)
 */

__int64 __fastcall xxxTrackMouseMove(struct tagWND *a1, unsigned int a2, int a3)
{
  int v4; // r12d
  unsigned int v6; // r14d
  __int64 v7; // rdi
  __int64 ThreadWin32Thread; // rax
  unsigned int v9; // edx
  struct tagWND *v10; // r13
  int v11; // r9d
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v16; // r10
  struct tagQ *v17; // r11
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  _QWORD *v23; // rax
  _QWORD *v24; // rbx
  __int64 v25; // r14
  unsigned __int16 *v26; // rax
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int16 *v28; // r12
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rax
  struct tagWND *v34; // rcx
  struct tagWND *CompositionInputWindowUIOwner; // rax
  __int64 ActiveTrackPwnd; // rax
  int v38; // ebx
  _DWORD *v39; // rax
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
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
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
  v10 = *(struct tagWND **)(v7 + 184);
  if ( (v9 & 0x5C0) != 0 && v10 )
  {
    v16 = *((_QWORD *)v10 + 2);
    v17 = *(struct tagQ **)(v16 + 432);
    if ( *(struct tagQ **)(gptiCurrent + 432LL) == v17 )
    {
      v6 = 1024;
    }
    else if ( (v9 & 0x500) != 0 )
    {
      PostEventMessageEx((struct tagTHREADINFO *)v16, v17, 0xBu, v10, v9, *(int *)(v7 + 192), 1024LL, 0LL);
      *(_DWORD *)(v7 + 48) &= 0xFFFFFAFF;
    }
    if ( a2 == 1 || v4 != 512 )
      v6 |= 0x100u;
    if ( v10 != a1 || (a2 == 1) != (*(_DWORD *)(v7 + 192) == 1) )
      v6 |= 0xC0u;
    PushW32ThreadLock(v7, &v43, UserDereferenceObject);
    ObfReferenceObject((PVOID)v7);
    v18 = *(_QWORD *)(v7 + 184);
    v19 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v41 = *(_QWORD *)(v19 + 416);
    *(_QWORD *)(v19 + 416) = &v41;
    *((_QWORD *)&v41 + 1) = v18;
    HMLockObject(v18);
    xxxCancelMouseMoveTracking(*(unsigned int *)(v7 + 48), *(_QWORD *)(v7 + 184), *(unsigned int *)(v7 + 192), v6);
    ThreadUnlock1(v21, v20, v22);
    *(_DWORD *)(v7 + 48) &= ~v6;
  }
  else
  {
    PushW32ThreadLock(v7, &v43, UserDereferenceObject);
    ObfReferenceObject((PVOID)v7);
  }
  if ( a2 != 1 && v4 == 512 && ((unsigned int)gpdwCPUserPreferencesMask & 0x80000080) == 0x80000080 )
  {
    if ( (unsigned int)xxxHotTrack(a1, a2, 1LL) )
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
        if ( !v26 )
        {
          v29 = W32GetThreadWin32Thread((__int64)CurrentThread);
          *(_QWORD *)&v41 = *(_QWORD *)(v29 + 416);
          *(_QWORD *)(v29 + 416) = &v41;
          *((_QWORD *)&v41 + 1) = v25;
          HMLockObject(v25);
          xxxResetTooltip(v24);
LABEL_28:
          ThreadUnlock1(v31, v30, v32);
          v4 = a3;
          goto LABEL_5;
        }
        v33 = W32GetThreadWin32Thread((__int64)CurrentThread);
        *(_QWORD *)&v41 = *(_QWORD *)(v33 + 416);
        *(_QWORD *)(v33 + 416) = &v41;
        *((_QWORD *)&v41 + 1) = v25;
        HMLockObject(v25);
        v34 = (struct tagWND *)*v24;
        v24[6] = v28;
        if ( (*(_BYTE *)(*((_QWORD *)v34 + 5) + 31LL) & 0x10) != 0 )
        {
          xxxSetWindowPos(v34, 0LL, 0LL, 0LL, 0, 0, 1175);
          if ( !(unsigned int)xxxShowTooltip((struct tagTOOLTIPWND *)v24) )
            goto LABEL_28;
        }
        else
        {
          SetTooltipTimer((struct tagTOOLTIPWND *)v24, 1u, *((_DWORD *)v24 + 2));
        }
        *(_DWORD *)(v7 + 48) |= 0x300u;
        goto LABEL_28;
      }
    }
  }
LABEL_5:
  NotifyShell::HitTestPartUpdate((NotifyShell *)v7, a1, (struct tagWND *)a2, v11);
  if ( v10 != a1 )
  {
    v40[1] = a1;
    v40[0] = v7 + 184;
    HMAssignmentLock(v40, 1LL);
    if ( v4 == 512 && ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0 )
    {
      if ( *(_DWORD *)UPDWORDPointer(8194LL) )
      {
        ActiveTrackPwnd = GetActiveTrackPwnd(a1);
        v38 = ActiveTrackPwnd;
        if ( ActiveTrackPwnd )
        {
          v39 = (_DWORD *)UPDWORDPointer(8194LL);
          SetSystemTimer(v38, 65527, *v39, (unsigned int)xxxSystemTimerProc, 1);
        }
      }
      else
      {
        *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 388LL) |= 0x200000u;
      }
    }
  }
  *(_DWORD *)(v7 + 192) = a2;
  PopAndFreeW32ThreadLock((__int64)&v43);
  return ThreadUnlock1(v13, v12, v14);
}
