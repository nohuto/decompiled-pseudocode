/*
 * XREFs of _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C007DC84
 * Callers:
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C007BCDC (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C007CC00 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C007D36C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00A79AC (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C00DBE0C (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     ?xxxTrackingActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x1C01CEC88 (-xxxTrackingActivateWindow@@YA_NPEAUtagWND@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     xxxSetWindowPos @ 0x1C0048A4C (xxxSetWindowPos.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C004DAF8 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxSendMessage @ 0x1C0050D34 (xxxSendMessage.c)
 *     PopAndFreeW32ThreadLock @ 0x1C005BDE0 (PopAndFreeW32ThreadLock.c)
 *     SetOrClrWF @ 0x1C0069680 (SetOrClrWF.c)
 *     IsVisible @ 0x1C006C350 (IsVisible.c)
 *     _GetDesktopWindow @ 0x1C006FF60 (_GetDesktopWindow.c)
 *     xxxWindowEvent @ 0x1C0073AB0 (xxxWindowEvent.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00788F8 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     LockW32Thread @ 0x1C007EAAC (LockW32Thread.c)
 *     PushW32ThreadLock @ 0x1C007F6F0 (PushW32ThreadLock.c)
 *     _anonymous_namespace_::xxxSendNCActivateMessage @ 0x1C007FC50 (_anonymous_namespace_--xxxSendNCActivateMessage.c)
 *     WPP_RECORDER_AND_TRACE_SF_qs @ 0x1C007FDB0 (WPP_RECORDER_AND_TRACE_SF_qs.c)
 *     GetNonChildAncestor @ 0x1C00825AC (GetNonChildAncestor.c)
 *     ?xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z @ 0x1C00A25A8 (-xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z.c)
 *     ?xxxUpdateTray@@YAXPEAUtagWND@@@Z @ 0x1C00A41CC (-xxxUpdateTray@@YAXPEAUtagWND@@@Z.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x1C00A7DFC (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     xxxSendNotifyMessage @ 0x1C00ACBA0 (xxxSendNotifyMessage.c)
 *     ?TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z @ 0x1C00FD77C (-TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tagWND@@PEAX@Z @ 0x1C00FDE78 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tag.c)
 *     _anonymous_namespace_::RemoveEventMessage @ 0x1C01095EC (_anonymous_namespace_--RemoveEventMessage.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

// write access to const memory has been detected, the output may be wrong!
bool __fastcall anonymous_namespace_::xxxLocalActivateWindow(struct tagWND *a1, unsigned int a2, char a3)
{
  unsigned __int64 v3; // rbx
  char v4; // r14
  int v6; // r13d
  unsigned int v7; // r8d
  int v8; // r9d
  __int64 v9; // rcx
  __int64 v10; // rdx
  struct tagWND *v11; // r12
  PDEVICE_OBJECT *v12; // rdx
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rcx
  struct tagWND *v17; // r15
  struct tagWND *v18; // rdx
  unsigned int v19; // r15d
  const struct tagWND *v20; // rdx
  __int64 v21; // r12
  struct tagWND *i; // r9
  int v23; // ebx
  char v24; // r13
  __int64 v25; // rcx
  struct tagWND *j; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rcx
  __int64 NonChildAncestor; // rax
  __int64 v32; // r9
  __int64 v33; // rax
  struct tagWND *v34; // rdx
  bool v35; // bl
  bool v36; // zf
  const char *v37; // r9
  void *v38; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // r8
  struct tagWND *v48; // rbx
  __int64 v49; // rbx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  PDEVICE_OBJECT v53; // rcx
  __int16 v54; // ax
  int v55; // eax
  __int64 v56; // rcx
  __int64 v58; // rcx
  int v59; // [rsp+20h] [rbp-E0h]
  __int64 v60[2]; // [rsp+50h] [rbp-B0h] BYREF
  struct tagWND *v61; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int ThreadId; // [rsp+68h] [rbp-98h]
  unsigned int v63; // [rsp+6Ch] [rbp-94h]
  __int128 v64; // [rsp+70h] [rbp-90h] BYREF
  __int64 v65; // [rsp+80h] [rbp-80h]
  __int128 v66; // [rsp+88h] [rbp-78h] BYREF
  __int64 v67; // [rsp+98h] [rbp-68h]
  __int128 v68; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v69; // [rsp+B0h] [rbp-50h]
  __int128 v70; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v71; // [rsp+C8h] [rbp-38h]
  _QWORD v72[3]; // [rsp+D0h] [rbp-30h] BYREF
  char v73[88]; // [rsp+E8h] [rbp-18h] BYREF
  int v75; // [rsp+160h] [rbp+60h]
  int v76; // [rsp+168h] [rbp+68h]

  v3 = *(_QWORD *)a1;
  v67 = 0LL;
  v69 = 0LL;
  v65 = 0LL;
  v4 = 1;
  v66 = 0LL;
  v76 = a3 & 0x80;
  v6 = a3 & 2;
  v75 = a3 & 4;
  v68 = 0LL;
  v64 = 0LL;
  if ( a1 == (struct tagWND *)GetDesktopWindow((__int64)a1) )
    return 0;
  v9 = *((_QWORD *)a1 + 5);
  if ( *(char *)(v9 + 19) < 0 )
    return 0;
  v10 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL) != v10 )
    return 0;
  v11 = *(struct tagWND **)(v10 + 120);
  v61 = v11;
  v12 = &WPP_GLOBAL_Control;
  if ( a1 == v11 )
  {
    if ( (*(_BYTE *)(v9 + 18) & 0x10) == 0 )
    {
      v53 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || ((unsigned __int8)HIDWORD(WPP_GLOBAL_Control->Timer) & (unsigned __int8)v8) == 0
        || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v12) = 0;
      }
      LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v12 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_86;
      v54 = 13;
      goto LABEL_85;
    }
LABEL_100:
    v53 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || ((unsigned __int8)HIDWORD(WPP_GLOBAL_Control->Timer) & (unsigned __int8)v8) == 0
      || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v12) = 0;
    }
    LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v12 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_86;
    v54 = 12;
LABEL_85:
    WPP_RECORDER_AND_TRACE_SF_q(
      v53->AttachedDevice,
      (_DWORD)v12,
      v7,
      v8,
      4,
      v8,
      v54,
      (__int64)&WPP_76ccfc4204be37e1ff60c5115401253e_Traceguids,
      (char)a1);
LABEL_86:
    *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 388LL) &= ~0x8000u;
    if ( (*(_DWORD *)(gpsi + 7004LL) & 1) != 0 )
    {
      if ( xxxSendMessage((ULONG_PTR)a1) )
      {
        if ( !v3 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v58);
        xxxSendNotifyMessage(-1LL, 784LL, v3, 0LL, 1);
      }
    }
    goto LABEL_52;
  }
  if ( (*(_BYTE *)(v9 + 18) & 0x10) != 0 )
    goto LABEL_100;
  v13 = *(_QWORD *)(gptiCurrent + 464LL);
  v60[0] = v7;
  v60[1] = v3;
  if ( ((*(_BYTE *)(gptiCurrent + 680LL) | *(_BYTE *)(*(_QWORD *)v13 + 16LL)) & 0x40) != 0
    && (unsigned int)xxxCallHook(5, v3, (__int64)v60, 5) )
  {
    return 0;
  }
  *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 388LL) &= ~0x8000u;
  v14 = *(_QWORD *)(gptiCurrent + 432LL);
  v15 = *(_QWORD *)(v14 + 120);
  if ( v15 && *(char *)(*(_QWORD *)(v15 + 40) + 19LL) < 0 )
  {
    v60[0] = v14 + 120;
    v60[1] = 0LL;
  }
  else
  {
    v60[1] = *(_QWORD *)(v14 + 120);
    v60[0] = v14 + 128;
  }
  HMAssignmentLock(v60, 0LL);
  v16 = *(_QWORD *)(gptiCurrent + 432LL);
  v17 = *(struct tagWND **)(v16 + 120);
  if ( v17 )
  {
    if ( v16 == gpqForeground )
      gpqForegroundPrev = *(_QWORD *)(gptiCurrent + 432LL);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v66 = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = &v66;
    *((_QWORD *)&v66 + 1) = v17;
    HMLockObject(v17);
    if ( !(unsigned __int8)anonymous_namespace_::xxxSendNCActivateMessage(v17) )
    {
      ThreadUnlock1(v42, v41, v43);
      return 0;
    }
    SetOrClrWF(1, a1, 0x210u, 1);
    PushW32ThreadLock(v3, &v64, lambda_8abff167ce1c52ae97425dcc78c2cc12_::_lambda_invoker_cdecl_);
    xxxSendMessage((ULONG_PTR)v17);
    SetOrClrWF(0, a1, 0x210u, 1);
    v44 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v45 = v64;
    *(_QWORD *)(v44 + 16) = v64;
    ThreadUnlock1(v45, v46, v47);
    v16 = *(_QWORD *)(gptiCurrent + 432LL);
    v11 = v61;
  }
  v18 = *(struct tagWND **)(v16 + 120);
  if ( *(struct tagWND **)(v16 + 128) != v18 )
    return 0;
  if ( v11 != v18 )
    return 0;
  v19 = 0;
  if ( *(char *)(*((_QWORD *)a1 + 5) + 19LL) < 0 || *(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL) != v16 )
    return 0;
  if ( !v18 )
  {
    *(_DWORD *)(v16 + 388) &= ~0x800u;
    v16 = *(_QWORD *)(gptiCurrent + 432LL);
  }
  v60[1] = (__int64)a1;
  v60[0] = v16 + 120;
  HMAssignmentLock(v60, 0LL);
  if ( *(_QWORD *)(gptiCurrent + 432LL) == gpqForeground )
    GroupedProcessForegroundBoost::ApplyBoost(a1, v20);
  SetOrClrWF(1, a1, 0x210u, 1);
  PushW32ThreadLock(v3, &v64, lambda_8abff167ce1c52ae97425dcc78c2cc12_::_lambda_invoker_cdecl_);
  xxxWindowEvent(3u, a1, 0, 0, 1);
  anonymous_namespace_::RemoveEventMessage(*(_QWORD *)(gptiCurrent + 432LL), 6LL);
  v21 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 128LL);
  *(_QWORD *)&v68 = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = &v68;
  *((_QWORD *)&v68 + 1) = v21;
  if ( v21 )
    HMLockObject(v21);
  if ( (*(_DWORD *)(gpsi + 7004LL) & 1) != 0 && xxxSendMessage((ULONG_PTR)a1) )
    xxxSendNotifyMessage(-1LL, 784LL, v3, 0LL, 1);
  if ( !v6 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x40) == 0 )
  {
    for ( i = *(struct tagWND **)(GetDesktopWindow((__int64)a1) + 112);
          i && (*(_BYTE *)(*((_QWORD *)i + 5) + 31LL) & 0x10) == 0;
          i = (struct tagWND *)*((_QWORD *)i + 11) )
    {
      ;
    }
    if ( (a1 != i || v21 && (v55 = IsVisible(v21)) == 0) && (!v75 || gpqForeground == *(_QWORD *)(gptiCurrent + 432LL)) )
    {
      v23 = 19;
      if ( a1 != i )
        v23 = 3;
      xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, v23);
      if ( (v23 & 0x10) == 0 )
        TraceLoggingProcessUsageDataAggregationHelper(a1);
    }
  }
  v24 = 0;
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x200) != 0 )
    goto LABEL_36;
  if ( v21 )
  {
    if ( *(_QWORD *)(v21 + 16) == *((_QWORD *)a1 + 2) )
      goto LABEL_36;
    v48 = *(struct tagWND **)(v21 + 16);
    v61 = v48;
    v70 = 0LL;
    v71 = 0LL;
    *((_DWORD *)v48 + 122) |= 0x200u;
    ThreadId = (unsigned int)PsGetThreadId((PETHREAD)*gptiCurrent);
    v63 = 0;
    LockW32Thread(v48, &v70);
    xxxSendActivateAppMessage((const struct tagAAS *)&v61);
    *((_DWORD *)v48 + 122) &= ~0x200u;
    PopAndFreeW32ThreadLock((__int64)&v70);
    v19 = v63;
  }
  *(_DWORD *)(gptiCurrent + 488LL) |= 0x200u;
  v61 = (struct tagWND *)*((_QWORD *)a1 + 2);
  v24 = 1;
  ThreadId = a2;
  v63 = v19 & 0xFFFFFFFC | 1;
  xxxSendActivateAppMessage((const struct tagAAS *)&v61);
LABEL_36:
  v25 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v25 + 16) & 0x40) != 0 )
  {
    SetOrClrWF(1, a1, 0x101u, 1);
    v25 = *((_QWORD *)a1 + 5);
  }
  if ( *(char *)(v25 + 19) >= 0 )
  {
    for ( j = a1; *((_QWORD *)j + 15); j = (struct tagWND *)*((_QWORD *)j + 15) )
      ;
    *(_OWORD *)v60 = *(_OWORD *)LockPointer(v73, (char *)j + 200, a1);
    HMAssignmentLock(v60, 0LL);
  }
  anonymous_namespace_::xxxSendNCActivateMessage(a1);
  xxxSendMessage((ULONG_PTR)a1);
  xxxUpdateTray(a1);
  ThreadUnlock1(v28, v27, v29);
  SetOrClrWF(0, a1, 0x101u, 1);
  if ( v76 )
  {
    v30 = *(_QWORD *)(gptiCurrent + 432LL);
    if ( (*(_DWORD *)(v30 + 388) & 0x800) == 0 )
    {
      NonChildAncestor = GetNonChildAncestor(*(_QWORD *)(v30 + 112));
      if ( v32 != NonChildAncestor )
      {
        v49 = 0LL;
        if ( v32 && (*(_BYTE *)(*(_QWORD *)(v32 + 40) + 31LL) & 0x20) == 0 )
          v49 = v32;
        v72[0] = *(_QWORD *)(gptiCurrent + 416LL);
        *(_QWORD *)(gptiCurrent + 416LL) = v72;
        v72[2] = 0LL;
        v72[1] = v32;
        if ( v32 )
          HMLockObject(v32);
        anonymous_namespace_::xxxSendFocusMessages(gptiCurrent, v49);
        ThreadUnlock1(v51, v50, v52);
      }
    }
  }
  *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 388LL) |= 0x40u;
  if ( gppiScreenSaver )
  {
    if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) != gppiScreenSaver )
    {
      CInputGlobals::UpdateLastInputTime(
        gpInputGlobals,
        (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
        8LL);
      *(_DWORD *)(gppiScreenSaver + 12LL) &= ~0x400000u;
      v56 = *(_QWORD *)(gppiScreenSaver + 328LL);
      if ( v56 )
        ForegroundBoost::SetForegroundPriority(v56, 1LL);
    }
  }
  else if ( *(_QWORD *)(gptiCurrent + 456LL) == grpdeskRitInput && !gbBlockSendInputResets )
  {
    CInputGlobals::UpdateLastInputTime(
      gpInputGlobals,
      (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
     * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
      8LL);
  }
  if ( v24 )
    *(_DWORD *)(gptiCurrent + 488LL) &= ~0x200u;
  SetOrClrWF(0, a1, 0x210u, 1);
  v33 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)(v33 + 16) = v64;
LABEL_52:
  v34 = *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL);
  v35 = v34 == a1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v4 = 0;
  }
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v36 = v34 == a1;
    v37 = "Activated";
    v38 = &WPP_76ccfc4204be37e1ff60c5115401253e_Traceguids;
    if ( !v36 )
      v37 = "Not Active";
    LOBYTE(v38) = v4;
    LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_qs(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)v38,
      v7,
      (_DWORD)v37,
      v59,
      2,
      14,
      (__int64)&WPP_76ccfc4204be37e1ff60c5115401253e_Traceguids,
      (char)a1,
      (__int64)v37);
  }
  return v35;
}
