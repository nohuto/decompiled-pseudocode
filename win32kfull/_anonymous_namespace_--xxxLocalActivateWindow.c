/*
 * XREFs of _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C009E0E4
 * Callers:
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C002498C (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C003A028 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C009A3E0 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C00A126C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C00E6D24 (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     ?xxxTrackingActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x1C01AF5F8 (-xxxTrackingActivateWindow@@YA_NPEAUtagWND@@@Z.c)
 * Callees:
 *     GetNonChildAncestor @ 0x1C0027014 (GetNonChildAncestor.c)
 *     xxxSetWindowPos @ 0x1C0028F4C (xxxSetWindowPos.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C003E900 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     _GetDesktopWindow @ 0x1C0044670 (_GetDesktopWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     xxxWindowEvent @ 0x1C0062470 (xxxWindowEvent.c)
 *     xxxSendMessage @ 0x1C006E518 (xxxSendMessage.c)
 *     SetOrClrWF @ 0x1C0097844 (SetOrClrWF.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x1C009A850 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     ?TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z @ 0x1C009C1A4 (-TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z.c)
 *     ?xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z @ 0x1C009DAB4 (-xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z.c)
 *     ?xxxUpdateTray@@YAXPEAUtagWND@@@Z @ 0x1C009DE3C (-xxxUpdateTray@@YAXPEAUtagWND@@@Z.c)
 *     _anonymous_namespace_::RemoveEventMessage @ 0x1C009DFD4 (_anonymous_namespace_--RemoveEventMessage.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tagWND@@PEAX@Z @ 0x1C009E038 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tag.c)
 *     _anonymous_namespace_::xxxSendNCActivateMessage @ 0x1C009E068 (_anonymous_namespace_--xxxSendNCActivateMessage.c)
 *     WPP_RECORDER_AND_TRACE_SF_qs @ 0x1C009EB2C (WPP_RECORDER_AND_TRACE_SF_qs.c)
 *     LockW32Thread @ 0x1C00A1BCC (LockW32Thread.c)
 *     PushW32ThreadLock @ 0x1C00A1C30 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00A1CA0 (PopAndFreeW32ThreadLock.c)
 *     IsVisible @ 0x1C00A66A0 (IsVisible.c)
 *     xxxSendNotifyMessage @ 0x1C00D8320 (xxxSendNotifyMessage.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C01098A8 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

// write access to const memory has been detected, the output may be wrong!
bool __fastcall anonymous_namespace_::xxxLocalActivateWindow(struct tagWND *a1, int a2, char a3)
{
  unsigned __int64 v3; // rbx
  char v4; // r14
  int v6; // r15d
  int v7; // r8d
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rdx
  struct tagWND *v11; // r12
  __int64 v12; // rax
  tagQ *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct tagWND *v16; // r13
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rcx
  struct tagWND *v26; // rdx
  const struct tagWND *v27; // rdx
  __int64 v28; // rcx
  GroupedProcessForegroundBoost *v29; // rcx
  __int64 v30; // r12
  int v31; // r15d
  struct tagWND *i; // r9
  int v33; // ebx
  char v34; // r13
  __int64 v35; // rbx
  struct tagWND *j; // rdx
  __int64 v37; // r9
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rcx
  __int64 NonChildAncestor; // rax
  __int64 v44; // r9
  __int64 v45; // rbx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rcx
  __int64 v50; // rax
  struct tagWND *v51; // rdx
  bool v52; // bl
  bool v53; // zf
  const char *v54; // rax
  int v55; // edx
  PDEVICE_OBJECT v56; // rcx
  char v57; // dl
  char v58; // r8
  unsigned __int16 v59; // ax
  __int64 v60[2]; // [rsp+50h] [rbp-89h] BYREF
  int v61; // [rsp+60h] [rbp-79h]
  __int128 v62; // [rsp+68h] [rbp-71h] BYREF
  __int64 v63; // [rsp+78h] [rbp-61h]
  __int128 v64; // [rsp+80h] [rbp-59h] BYREF
  __int64 v65; // [rsp+90h] [rbp-49h]
  __int128 v66; // [rsp+98h] [rbp-41h] BYREF
  __int64 v67; // [rsp+A8h] [rbp-31h]
  _QWORD v68[3]; // [rsp+B0h] [rbp-29h] BYREF
  __int128 v69; // [rsp+C8h] [rbp-11h] BYREF
  __int64 v70; // [rsp+D8h] [rbp-1h]
  _QWORD v71[10]; // [rsp+E0h] [rbp+7h] BYREF
  int v72; // [rsp+140h] [rbp+67h]

  v3 = *(_QWORD *)a1;
  v70 = 0LL;
  v65 = 0LL;
  v63 = 0LL;
  v4 = 1;
  v69 = 0LL;
  v61 = a3 & 0x80;
  v6 = a3 & 2;
  v72 = a3 & 4;
  v64 = 0LL;
  v62 = 0LL;
  if ( a1 == (struct tagWND *)GetDesktopWindow((__int64)a1) )
    return 0;
  v9 = *((_QWORD *)a1 + 5);
  if ( *(char *)(v9 + 19) < 0 )
    return 0;
  v10 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL) != v10 )
    return 0;
  v11 = *(struct tagWND **)(v10 + 128);
  if ( a1 == v11 )
  {
    if ( (*(_BYTE *)(v9 + 18) & 0x10) == 0 )
    {
      v56 = WPP_GLOBAL_Control;
      v57 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && ((unsigned __int8)HIDWORD(WPP_GLOBAL_Control->Timer) & (unsigned __int8)v8) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      v58 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v57 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v59 = 14;
        goto LABEL_110;
      }
LABEL_111:
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 396LL) &= ~0x8000u;
      if ( (*(_DWORD *)(gpsi + 7004LL) & 1) != 0 && xxxSendMessage(a1, 0x30Fu) )
      {
        if ( !v3 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 848LL);
        xxxSendNotifyMessage(-1LL, 784LL, v3, 0LL, 1);
      }
      goto LABEL_83;
    }
LABEL_94:
    v56 = WPP_GLOBAL_Control;
    v57 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && ((unsigned __int8)HIDWORD(WPP_GLOBAL_Control->Timer) & (unsigned __int8)v8) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    v58 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v57 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v59 = 13;
LABEL_110:
      WPP_RECORDER_AND_TRACE_SF_q(
        (__int64)v56->AttachedDevice,
        v57,
        v58,
        v8,
        4u,
        v8,
        v59,
        (__int64)&WPP_1f5084c5bd003b11755bdb3c506305c0_Traceguids,
        v3);
      goto LABEL_111;
    }
    goto LABEL_111;
  }
  if ( (*(_BYTE *)(v9 + 18) & 0x10) != 0 )
    goto LABEL_94;
  v60[0] = (unsigned __int8)v7;
  v12 = *(_QWORD *)(gptiCurrent + 464LL);
  v60[1] = v3;
  if ( ((*(_BYTE *)(gptiCurrent + 680LL) | *(_BYTE *)(*(_QWORD *)v12 + 16LL)) & 0x40) != 0
    && (unsigned int)xxxCallHook(5, v3, (__int64)v60, 5) )
  {
    return 0;
  }
  *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 396LL) &= ~0x8000u;
  v13 = *(tagQ **)(gptiCurrent + 432LL);
  v14 = *((_QWORD *)v13 + 16);
  if ( v14 && *(char *)(*(_QWORD *)(v14 + 40) + 19LL) < 0 )
  {
    tagQ::SetActiveWindow(v13, 0LL);
  }
  else
  {
    v60[1] = *((_QWORD *)v13 + 16);
    v60[0] = (__int64)v13 + 136;
    HMAssignmentLock(v60, 0LL);
  }
  v15 = *(_QWORD *)(gptiCurrent + 432LL);
  v16 = *(struct tagWND **)(v15 + 128);
  if ( v16 )
  {
    if ( v15 == gpqForeground )
      gpqForegroundPrev = *(_QWORD *)(gptiCurrent + 432LL);
    ThreadLockAlways(v16, &v69);
    if ( !anonymous_namespace_::xxxSendNCActivateMessage(
            v16,
            (unsigned __int64)(*(_BYTE *)(*((_QWORD *)v16 + 5) + 31LL) & 0x20) << 16) )
    {
      ThreadUnlock1(v18, v17, v19);
      return 0;
    }
    SetOrClrWF(1, (__int64 *)a1, 0x210u, 1);
    PushW32ThreadLock(v3, &v62, lambda_8abff167ce1c52ae97425dcc78c2cc12_::_lambda_invoker_cdecl_);
    xxxSendMessage(v16, 6u);
    SetOrClrWF(0, (__int64 *)a1, 0x210u, 1);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v22 = v62;
    *(_QWORD *)(ThreadWin32Thread + 16) = v62;
    ThreadUnlock1(v22, v23, v24);
  }
  v25 = *(_QWORD *)(gptiCurrent + 432LL);
  v26 = *(struct tagWND **)(v25 + 128);
  if ( *(struct tagWND **)(v25 + 136) != v26
    || v11 != v26
    || *(char *)(*((_QWORD *)a1 + 5) + 19LL) < 0
    || *(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL) != v25 )
  {
    return 0;
  }
  if ( !v26 )
    *(_DWORD *)(v25 + 396) &= ~0x800u;
  tagQ::SetActiveWindow(*(tagQ **)(gptiCurrent + 432LL), a1);
  v28 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( v28 == gpqForeground )
  {
    v29 = *(GroupedProcessForegroundBoost **)(v28 + 136);
    if ( v29 )
      GroupedProcessForegroundBoost::ApplyDeBoost(v29, v27);
    GroupedProcessForegroundBoost::ApplyBoost(a1, v27);
  }
  SetOrClrWF(1, (__int64 *)a1, 0x210u, 1);
  PushW32ThreadLock(v3, &v62, lambda_8abff167ce1c52ae97425dcc78c2cc12_::_lambda_invoker_cdecl_);
  xxxWindowEvent(3u, a1, 0, 0, 1);
  anonymous_namespace_::RemoveEventMessage(*(_QWORD *)(gptiCurrent + 432LL), 6, 5);
  v30 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 136LL);
  *(_QWORD *)&v64 = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = &v64;
  *((_QWORD *)&v64 + 1) = v30;
  if ( v30 )
    HMLockObject(v30);
  if ( (*(_DWORD *)(gpsi + 7004LL) & 1) != 0 && xxxSendMessage(a1, 0x30Fu) )
    xxxSendNotifyMessage(-1LL, 784LL, v3, 0LL, 1);
  if ( v6 || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x40) != 0 )
  {
    v31 = 0;
  }
  else
  {
    v31 = 0;
    for ( i = *(struct tagWND **)(GetDesktopWindow((__int64)a1) + 112);
          i && (*(_BYTE *)(*((_QWORD *)i + 5) + 31LL) & 0x10) == 0;
          i = (struct tagWND *)*((_QWORD *)i + 11) )
    {
      ;
    }
    if ( (a1 != i || v30 && !(unsigned int)IsVisible(v30))
      && (!v72 || gpqForeground == *(_QWORD *)(gptiCurrent + 432LL)) )
    {
      v33 = 19;
      if ( a1 != i )
        v33 = 3;
      xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, v33);
      if ( (v33 & 0x10) == 0 )
        TraceLoggingProcessUsageDataAggregationHelper(a1);
    }
  }
  v34 = 0;
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 0x200) != 0 )
    goto LABEL_55;
  if ( !v30 )
    goto LABEL_54;
  if ( *(_QWORD *)(v30 + 16) != *((_QWORD *)a1 + 2) )
  {
    v35 = *(_QWORD *)(v30 + 16);
    v60[0] = v35;
    v66 = 0LL;
    v67 = 0LL;
    *(_DWORD *)(v35 + 488) |= 0x200u;
    v60[1] = (unsigned int)PsGetThreadId((PETHREAD)*gptiCurrent);
    LockW32Thread(v35, &v66);
    xxxSendActivateAppMessage((const struct tagAAS *)v60);
    *(_DWORD *)(v35 + 488) &= ~0x200u;
    PopAndFreeW32ThreadLock(&v66);
    v31 = HIDWORD(v60[1]);
LABEL_54:
    *(_DWORD *)(gptiCurrent + 488LL) |= 0x200u;
    v60[0] = *((_QWORD *)a1 + 2);
    v34 = 1;
    LODWORD(v60[1]) = a2;
    HIDWORD(v60[1]) = v31 & 0xFFFFFFFC | 1;
    xxxSendActivateAppMessage((const struct tagAAS *)v60);
  }
LABEL_55:
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL) & 0x40) != 0 )
    SetOrClrWF(1, (__int64 *)a1, 0x101u, 1);
  if ( *(char *)(*((_QWORD *)a1 + 5) + 19LL) >= 0 )
  {
    for ( j = a1; *((_QWORD *)j + 15); j = (struct tagWND *)*((_QWORD *)j + 15) )
      ;
    *(_OWORD *)v60 = *(_OWORD *)LockPointer(v71, (__int64)j + 200, (__int64)a1);
    HMAssignmentLock(v60, 0LL);
  }
  v37 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL) == gpqForeground;
  v38 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 128LL);
  if ( v38 )
    v37 |= (unsigned __int64)(*(_BYTE *)(*(_QWORD *)(v38 + 40) + 31LL) & 0x20) << 16;
  anonymous_namespace_::xxxSendNCActivateMessage(a1, v37);
  xxxSendMessage(a1, 6u);
  xxxUpdateTray(a1);
  ThreadUnlock1(v40, v39, v41);
  SetOrClrWF(0, (__int64 *)a1, 0x101u, 1);
  if ( v61 )
  {
    v42 = *(_QWORD *)(gptiCurrent + 432LL);
    if ( (*(_DWORD *)(v42 + 396) & 0x800) == 0 )
    {
      NonChildAncestor = GetNonChildAncestor(*(_QWORD *)(v42 + 120));
      if ( v44 != NonChildAncestor )
      {
        v45 = 0LL;
        if ( v44 && (*(_BYTE *)(*(_QWORD *)(v44 + 40) + 31LL) & 0x20) == 0 )
          v45 = v44;
        v68[0] = *(_QWORD *)(gptiCurrent + 416LL);
        *(_QWORD *)(gptiCurrent + 416LL) = v68;
        v68[2] = 0LL;
        v68[1] = v44;
        if ( v44 )
          HMLockObject(v44);
        anonymous_namespace_::xxxSendFocusMessages(gptiCurrent, v45);
        ThreadUnlock1(v47, v46, v48);
      }
    }
  }
  *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 396LL) |= 0x40u;
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
      v49 = *(_QWORD *)(gppiScreenSaver + 328LL);
      if ( v49 )
        ForegroundBoost::SetForegroundPriority(v49, 1LL);
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
  if ( v34 )
    *(_DWORD *)(gptiCurrent + 488LL) &= ~0x200u;
  SetOrClrWF(0, (__int64 *)a1, 0x210u, 1);
  v50 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)(v50 + 16) = v62;
LABEL_83:
  v51 = *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 128LL);
  v52 = v51 == a1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v4 = 0;
  }
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v53 = v51 == a1;
    v54 = "Activated";
    v55 = 15;
    if ( !v53 )
      v54 = "Not Active";
    LOBYTE(v55) = v4;
    LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_qs(
      WPP_GLOBAL_Control->AttachedDevice,
      v55,
      v7,
      (_DWORD)gFullLog,
      4,
      2,
      15,
      (__int64)&WPP_1f5084c5bd003b11755bdb3c506305c0_Traceguids,
      *(_QWORD *)a1,
      (__int64)v54);
  }
  return v52;
}
