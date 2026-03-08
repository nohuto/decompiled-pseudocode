/*
 * XREFs of xxxTrackMouseMove @ 0x1C00BD950
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00725D0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     _SetSystemTimer @ 0x1C0006384 (_SetSystemTimer.c)
 *     ?IsIndependentInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C000FFD0 (-IsIndependentInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     xxxResetTooltip @ 0x1C00164F0 (xxxResetTooltip.c)
 *     ?IsTooltipHittest@@YAPEAGPEAUtagWND@@I@Z @ 0x1C0016D40 (-IsTooltipHittest@@YAPEAGPEAUtagWND@@I@Z.c)
 *     xxxHotTrack @ 0x1C0016E10 (xxxHotTrack.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0044D58 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     PushW32ThreadLock @ 0x1C00A1C30 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00A1CA0 (PopAndFreeW32ThreadLock.c)
 *     ?HitTestPartUpdate@NotifyShell@@YAXAEBUtagDESKTOP@@PEAUtagWND@@H@Z @ 0x1C00BDB5C (-HitTestPartUpdate@NotifyShell@@YAXAEBUtagDESKTOP@@PEAUtagWND@@H@Z.c)
 *     ThreadLockExchangeAlways @ 0x1C00DEE6C (ThreadLockExchangeAlways.c)
 *     xxxCancelMouseMoveTracking @ 0x1C00EF010 (xxxCancelMouseMoveTracking.c)
 *     safe_cast_fnid_to_PTOOLTIPWND @ 0x1C00F9CD8 (safe_cast_fnid_to_PTOOLTIPWND.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C014A6E4 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     GetActiveTrackPwnd @ 0x1C01B7A4C (GetActiveTrackPwnd.c)
 *     ?xxxCreateTooltip@@YAHPEAUtagTOOLTIPWND@@PEAG@Z @ 0x1C0228484 (-xxxCreateTooltip@@YAHPEAUtagTOOLTIPWND@@PEAG@Z.c)
 */

__int64 __fastcall xxxTrackMouseMove(struct tagWND *a1, unsigned int a2, int a3)
{
  const struct tagWND *v3; // rdi
  unsigned int v6; // esi
  __int64 v7; // rbx
  unsigned int v8; // edx
  struct tagWND *v9; // r13
  int v10; // r9d
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  struct tagTOOLTIPWND *v15; // rax
  unsigned int v16; // r8d
  struct tagTOOLTIPWND *v17; // rsi
  __int64 v18; // r10
  unsigned __int16 *v19; // r14
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  struct tagWND *CompositionInputWindowUIOwner; // rax
  struct tagTHREADINFO *v24; // r10
  struct tagQ *v25; // r11
  _DWORD *v26; // r14
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 ActiveTrackPwnd; // rdi
  int *v31; // rax
  _QWORD v32[2]; // [rsp+48h] [rbp-29h] BYREF
  __int128 v33; // [rsp+58h] [rbp-19h] BYREF
  __int64 v34; // [rsp+68h] [rbp-9h]
  __int128 v35; // [rsp+70h] [rbp-1h] BYREF
  __int64 v36; // [rsp+80h] [rbp+Fh]
  __int128 v37; // [rsp+88h] [rbp+17h] BYREF
  __int64 v38; // [rsp+98h] [rbp+27h]

  v3 = a1;
  v36 = 0LL;
  v34 = 0LL;
  v38 = 0LL;
  v35 = 0LL;
  v6 = 0;
  v33 = 0LL;
  v37 = 0LL;
  v7 = *(_QWORD *)(gptiCurrent + 456LL);
  ThreadLockAlways(a1, &v37);
  if ( a3 == 512 && ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0 )
  {
    if ( (unsigned int)IsIndependentInputWindow(v3) )
    {
      CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(v3);
      if ( CompositionInputWindowUIOwner )
      {
        v3 = CompositionInputWindowUIOwner;
        ThreadLockExchangeAlways(CompositionInputWindowUIOwner, &v37);
      }
    }
  }
  v8 = *(_DWORD *)(v7 + 48);
  v9 = *(struct tagWND **)(v7 + 184);
  if ( (v8 & 0x5C0) != 0 && v9 )
  {
    v24 = (struct tagTHREADINFO *)*((_QWORD *)v9 + 2);
    v25 = (struct tagQ *)*((_QWORD *)v24 + 54);
    if ( *(struct tagQ **)(gptiCurrent + 432LL) == v25 )
    {
      v6 = 1024;
    }
    else if ( (v8 & 0x500) != 0 )
    {
      PostEventMessageEx(v24, v25, 0xBu, v9, v8, *(int *)(v7 + 192), 1024LL, 0LL);
      *(_DWORD *)(v7 + 48) &= 0xFFFFFAFF;
    }
    if ( a2 == 1 || a3 != 512 )
      v6 |= 0x100u;
    v26 = (_DWORD *)(v7 + 192);
    if ( v9 != v3 || (a2 == 1) != (*v26 == 1) )
      v6 |= 0xC0u;
    PushW32ThreadLock(v7, &v33, UserDereferenceObject);
    ObfReferenceObject((PVOID)v7);
    ThreadLockAlways(*(_QWORD *)(v7 + 184), &v35);
    xxxCancelMouseMoveTracking(*(unsigned int *)(v7 + 48), *(_QWORD *)(v7 + 184), (unsigned int)*v26, v6);
    ThreadUnlock1(v28, v27, v29);
    *(_DWORD *)(v7 + 48) &= ~v6;
  }
  else
  {
    PushW32ThreadLock(v7, &v33, UserDereferenceObject);
    ObfReferenceObject((PVOID)v7);
  }
  if ( a2 != 1 && a3 == 512 && ((unsigned int)gpdwCPUserPreferencesMask & 0x80000080) == 0x80000080 )
  {
    if ( (unsigned int)xxxHotTrack(v3, a2, 1) )
      *(_DWORD *)(v7 + 48) |= 0x400u;
    v15 = (struct tagTOOLTIPWND *)safe_cast_fnid_to_PTOOLTIPWND(*(_QWORD *)(v7 + 112));
    v17 = v15;
    if ( v15 && *(_QWORD *)v15 )
    {
      v19 = IsTooltipHittest(v3, (unsigned __int16)a2, v16);
      if ( v19 )
      {
        ThreadLockAlways(v18, &v35);
        if ( (unsigned int)xxxCreateTooltip(v17, v19) )
          *(_DWORD *)(v7 + 48) |= 0x300u;
      }
      else
      {
        ThreadLockAlways(v18, &v35);
        xxxResetTooltip(v17);
      }
      ThreadUnlock1(v21, v20, v22);
    }
  }
  NotifyShell::HitTestPartUpdate((NotifyShell *)v7, v3, (struct tagWND *)a2, v10);
  if ( v9 != v3 )
  {
    v32[1] = v3;
    v32[0] = v7 + 184;
    HMAssignmentLock(v32, 1LL);
    if ( a3 == 512 && ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0 )
    {
      if ( *(_DWORD *)UPDWORDPointer(8194LL) )
      {
        ActiveTrackPwnd = GetActiveTrackPwnd(v3);
        if ( ActiveTrackPwnd )
        {
          v31 = (int *)UPDWORDPointer(8194LL);
          SetSystemTimer(ActiveTrackPwnd, 65527, *v31, (int)xxxSystemTimerProc, 1);
        }
      }
      else
      {
        *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 396LL) |= 0x200000u;
      }
    }
  }
  *(_DWORD *)(v7 + 192) = a2;
  PopAndFreeW32ThreadLock((__int64)&v33);
  return ThreadUnlock1(v12, v11, v13);
}
