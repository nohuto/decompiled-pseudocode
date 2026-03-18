/*
 * XREFs of xxxSwitchDesktop @ 0x1C00B0E54
 * Callers:
 *     RawInputThread @ 0x1C005CC60 (RawInputThread.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C0099B78 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     NtUserSwitchDesktop @ 0x1C0113670 (NtUserSwitchDesktop.c)
 *     xxxSwitchDesktopWithFade @ 0x1C01137BC (xxxSwitchDesktopWithFade.c)
 *     RemoteDisableScreen @ 0x1C012368C (RemoteDisableScreen.c)
 *     RemoteRedrawScreen @ 0x1C015359C (RemoteRedrawScreen.c)
 * Callees:
 *     xxxSetWindowPos @ 0x1C0048A4C (xxxSetWindowPos.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0050D70 (xxxSendTransformableMessageTimeout.c)
 *     PopAndFreeW32ThreadLock @ 0x1C005BDE0 (PopAndFreeW32ThreadLock.c)
 *     zzzSetDesktop @ 0x1C005DB40 (zzzSetDesktop.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0061D10 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?GetWindowCloakState@@YAKPEBUtagWND@@@Z @ 0x1C006D740 (-GetWindowCloakState@@YAKPEBUtagWND@@@Z.c)
 *     xxxWindowEvent @ 0x1C0073AB0 (xxxWindowEvent.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0077CC4 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C007D36C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     PushW32ThreadLock @ 0x1C007F6F0 (PushW32ThreadLock.c)
 *     zzzEnableDwmPointerSupport @ 0x1C0097F94 (zzzEnableDwmPointerSupport.c)
 *     WPP_RECORDER_AND_TRACE_SF_S @ 0x1C009A694 (WPP_RECORDER_AND_TRACE_SF_S.c)
 *     WPP_RECORDER_AND_TRACE_SF_SL @ 0x1C009A7C0 (WPP_RECORDER_AND_TRACE_SF_SL.c)
 *     ?zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z @ 0x1C00A898C (-zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z.c)
 *     IPostQuitMessage @ 0x1C00AD668 (IPostQuitMessage.c)
 *     IsNonImmersiveBand @ 0x1C00AEDA4 (IsNonImmersiveBand.c)
 *     SetPointer @ 0x1C00B2D10 (SetPointer.c)
 *     ComposeWindow @ 0x1C00B37D8 (ComposeWindow.c)
 *     DwmSyncDesktopSwitch @ 0x1C00CA504 (DwmSyncDesktopSwitch.c)
 *     FreeAllSpbs @ 0x1C00F0F80 (FreeAllSpbs.c)
 *     xxxBroadcastDisplaySettingsChange @ 0x1C00F2460 (xxxBroadcastDisplaySettingsChange.c)
 *     ResetPointerDevices @ 0x1C00FD4D4 (ResetPointerDevices.c)
 *     SetTimerCoalescingTolerance @ 0x1C00FEF70 (SetTimerCoalescingTolerance.c)
 *     ClearKeyboardStates @ 0x1C010ACBC (ClearKeyboardStates.c)
 *     bSetDevDragRect @ 0x1C010FE70 (bSetDevDragRect.c)
 *     GreLddmProcessDesktopSwitch @ 0x1C011768C (GreLddmProcessDesktopSwitch.c)
 *     zzzCancelJournalling @ 0x1C011886C (zzzCancelJournalling.c)
 *     GreDesktopSwitch @ 0x1C0118A54 (GreDesktopSwitch.c)
 *     EraseBitmap @ 0x1C011C584 (EraseBitmap.c)
 *     DrvOcclusionStateChangeNotify @ 0x1C011E478 (DrvOcclusionStateChangeNotify.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     StopFade @ 0x1C01E26E0 (StopFade.c)
 *     ?FreeEdgyFrameData@Edgy@@YAXPEAUtagEDGY_DATA@@@Z @ 0x1C0207C84 (-FreeEdgyFrameData@Edgy@@YAXPEAUtagEDGY_DATA@@@Z.c)
 */

__int64 __fastcall xxxSwitchDesktop(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // r13
  __int64 v5; // rdi
  PDEVICE_OBJECT *v6; // r8
  char v7; // si
  char v8; // bl
  _UNKNOWN **v9; // r9
  char v10; // r15
  __int64 v11; // r9
  __int64 NameInfo; // rax
  const char *v13; // rcx
  __int64 v14; // r15
  char v15; // bl
  char v16; // r14
  __int64 v17; // r9
  __int64 v18; // rax
  const char *v19; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  struct tagEDGY_DATA *v21; // rdx
  __int64 v22; // r14
  ULONG_PTR v23; // rcx
  _QWORD *v24; // r15
  _QWORD *v25; // rbx
  __int64 v26; // r14
  __int64 v27; // rbx
  Edgy *v28; // rcx
  struct tagWND **v29; // rcx
  int v30; // r13d
  __int64 v31; // rbx
  struct tagTHREADINFO *v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rcx
  void *v36; // rax
  int v37; // r8d
  __int64 v38; // rcx
  int v39; // ebx
  unsigned int v40; // ebx
  __int64 v41; // rcx
  const struct tagWND *v42; // rbx
  __int64 v43; // r14
  __int64 v44; // r15
  BOOL v45; // r8d
  int WindowCloakState; // eax
  int v47; // edx
  int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  _QWORD *i; // rbx
  __int64 v53; // rcx
  int v54; // eax
  __m128i si128; // xmm0
  int v56; // eax
  int v57; // r8d
  void *v58; // rdx
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // rcx
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  int ObjectType; // [rsp+20h] [rbp-B9h]
  int ObjectTypea; // [rsp+20h] [rbp-B9h]
  int AccessMode; // [rsp+28h] [rbp-B1h]
  int Handle; // [rsp+30h] [rbp-A9h]
  int v71; // [rsp+38h] [rbp-A1h]
  void *v72; // [rsp+58h] [rbp-81h] BYREF
  __int64 v73; // [rsp+60h] [rbp-79h]
  PETHREAD Thread; // [rsp+68h] [rbp-71h]
  __int128 v75; // [rsp+70h] [rbp-69h] BYREF
  __int64 v76; // [rsp+80h] [rbp-59h]
  __int128 v77; // [rsp+88h] [rbp-51h] BYREF
  __int64 v78; // [rsp+98h] [rbp-41h]
  _QWORD v79[2]; // [rsp+A0h] [rbp-39h] BYREF
  _QWORD v80[3]; // [rsp+B0h] [rbp-29h] BYREF
  __int128 v81; // [rsp+C8h] [rbp-11h] BYREF
  __int64 v82; // [rsp+D8h] [rbp-1h]
  __int128 v83; // [rsp+E0h] [rbp+7h] BYREF
  __int64 v84; // [rsp+F0h] [rbp+17h]
  int v85; // [rsp+148h] [rbp+6Fh]

  v78 = 0LL;
  v3 = a1;
  v76 = 0LL;
  v84 = 0LL;
  v5 = a2;
  v77 = 0LL;
  v75 = 0LL;
  v72 = 0LL;
  v85 = 0;
  v82 = 0LL;
  v83 = 0LL;
  v81 = 0LL;
  if ( !a2 )
    return 3221225473LL;
  if ( a2 == grpdeskRitInput )
    return 0LL;
  if ( (*(_DWORD *)(a2 + 48) & 8) != 0 )
    return 3221225485LL;
  if ( !a1 )
    v3 = *(_QWORD *)(a2 + 40);
  if ( (*(_DWORD *)(v3 + 64) & 4) != 0 )
    return 3221225485LL;
  v73 = *(_QWORD *)(v3 + 56);
  v6 = &WPP_GLOBAL_Control;
  v7 = 1;
  v8 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  v9 = &WPP_RECORDER_INITIALIZED;
  v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( !ObQueryNameInfo(a2) || ObQueryNameInfo(v5) == -8 )
    {
      v13 = 0LL;
    }
    else
    {
      NameInfo = ObQueryNameInfo(v5);
      if ( NameInfo )
        NameInfo = ObQueryNameInfo(v5) + 8;
      v13 = *(const char **)(NameInfo + 8);
    }
    WPP_RECORDER_AND_TRACE_SF_SL(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v8,
      v10,
      v11,
      ObjectType,
      AccessMode,
      Handle,
      v71,
      v13);
    v6 = &WPP_GLOBAL_Control;
    v9 = &WPP_RECORDER_INITIALIZED;
  }
  v14 = 0LL;
  if ( grpdeskRitInput )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) == 0
      || (v15 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      v15 = 0;
    }
    v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( !ObQueryNameInfo(v5) || ObQueryNameInfo(v5) == -8 )
      {
        v19 = 0LL;
      }
      else
      {
        if ( ObQueryNameInfo(v5) )
          v18 = ObQueryNameInfo(v5) + 8;
        else
          v18 = 0LL;
        v19 = *(const char **)(v18 + 8);
      }
      WPP_RECORDER_AND_TRACE_SF_S(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v15,
        v16,
        v17,
        4u,
        3u,
        0x1Bu,
        (__int64)&WPP_d78c2f93cefb39adad771009d44421f9_Traceguids,
        v19);
    }
  }
  CurrentThread = KeGetCurrentThread();
  Thread = CurrentThread;
  if ( (PVOID)v5 != gspdeskDisconnect
    && !PsIsSystemThread(CurrentThread)
    && (PVOID)v5 != grpdeskLogon
    && (*(_BYTE *)(v3 + 64) & 1) != 0
    && (a3 & 2) == 0
    && PsGetThreadProcessId(CurrentThread) != (HANDLE)gpidLogon )
  {
    return 3221225506LL;
  }
  if ( gbDesktopLocked && (!gspdeskDisconnect || (PVOID)v5 != gspdeskDisconnect) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v7 = 0;
    }
    if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = v7;
      LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        a2,
        (_DWORD)v6,
        (_DWORD)v9,
        4,
        8,
        28,
        (__int64)&WPP_d78c2f93cefb39adad771009d44421f9_Traceguids);
    }
    LockObjectAssignment(gspdeskShouldBeForeground, v5);
    return 0LL;
  }
  PushW32ThreadLock(v5, &v83, UserDereferenceObject);
  ObfReferenceObject((PVOID)v5);
  ObOpenObjectByPointer((PVOID)v5, 0x200u, 0LL, 0x1F0003u, (POBJECT_TYPE)ExDesktopObjectType, 0, &v72);
  PushW32ThreadLock((__int64)v72, &v81, (__int64)AllowDesktopDestruction);
  v22 = gptiCurrent;
  if ( *(_QWORD *)(gptiCurrent + 456LL) )
  {
    zzzCancelJournalling();
    ResetPointerDevices();
  }
  v23 = gspwndAltTab;
  if ( gspwndAltTab )
  {
    v80[0] = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = v80;
    v80[2] = 0LL;
    v80[1] = v23;
    HMLockObject(v23);
    _InterlockedAdd(&glSendMessage, 1u);
    xxxSendTransformableMessageTimeout((unsigned __int64 *)gspwndAltTab, 0x10u, 0LL, 0LL, 0, 0, 0LL, 1, 1);
    ThreadUnlock1(v65, v64, v66);
  }
  if ( grpdeskRitInput )
  {
    if ( *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL) )
    {
      v21 = (struct tagEDGY_DATA *)gpqForeground;
      if ( gpqForeground )
      {
        v79[0] = grpdeskRitInput + 88LL;
        v79[1] = *(_QWORD *)(gpqForeground + 120LL);
        HMAssignmentLock(v79, 0LL);
        xxxSetForegroundWindow2(0LL, gptiCurrent, 0x20u);
      }
    }
    v14 = grpdeskRitInput;
    if ( grpdeskRitInput )
    {
      v24 = (_QWORD *)(grpdeskRitInput + 168LL);
      v25 = *(_QWORD **)(grpdeskRitInput + 168LL);
      if ( (_QWORD *)*v24 != v24 )
      {
        do
        {
          v26 = *(v25 - 39);
          if ( (*(_DWORD *)(v26 + 388) & 1) != 0 )
            PostUpdateKeyStateEvent(*(v25 - 39));
          *(_DWORD *)(v26 + 388) &= ~0x100u;
          v25 = (_QWORD *)*v25;
        }
        while ( v25 != v24 );
        v22 = gptiCurrent;
      }
      v14 = 0LL;
      if ( grpdeskRitInput )
      {
        if ( (*(_DWORD *)(**(_QWORD **)(grpdeskRitInput + 8LL) + 64LL) & 1) != 0 )
        {
          if ( gfade[2] )
            StopFade();
          bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL));
          ComposeWindow(*(struct tagWND **)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL));
          v27 = *(_QWORD *)(gpDispInfo + 40LL);
          GreLockDynamicModeChange(v27);
          GreUnlockDynamicModeChange(v27);
          if ( *(_QWORD *)(v3 + 120) )
            EraseBitmap();
          v85 = 1;
        }
        if ( grpdeskRitInput )
        {
          v28 = *(Edgy **)(grpdeskRitInput + 240LL);
          if ( v28 )
            Edgy::FreeEdgyFrameData(v28, v21);
        }
      }
    }
  }
  LockObjectAssignment(grpdeskRitInput, v5);
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = ***(PVOID ***)(grpdeskRitInput + 8LL);
  SynchronizeContext();
  CitDesktopSwitch();
  v29 = *(struct tagWND ***)(v5 + 8);
  if ( (*((_DWORD *)*v29 + 16) & 1) != 0 )
    ComposeWindow(v29[3]);
  FreeAllSpbs();
  v30 = zzzSetDesktop(gptiRit, v5, 0LL);
  if ( v30 >= 0 )
  {
    v31 = v73;
    v32 = *(struct tagTHREADINFO **)(v73 + 16);
    v33 = *(_QWORD *)(v73 + 24);
    if ( *((_QWORD *)v32 + 54) != v33 )
    {
      AllocQueue(0LL, v33);
      tagQ::zzzAttachToQueue(*(tagQ **)(v31 + 24), *(struct tagTHREADINFO **)(v31 + 16), 0LL);
      v32 = *(struct tagTHREADINFO **)(v31 + 16);
    }
    v30 = zzzSetDesktop(v32, v5, 0LL);
    if ( v30 >= 0 )
    {
      v34 = grpdeskRitInput;
      if ( *(_QWORD *)(*(_QWORD *)(v31 + 16) + 456LL) != grpdeskRitInput )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(grpdeskRitInput);
      if ( v5 != grpdeskRitInput )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v34);
      v35 = **(_QWORD **)(v5 + 8);
      if ( (*(_DWORD *)(v35 + 64) & 1) != 0 )
      {
        UserSessionSwitchLeaveCrit(v35);
        v36 = (void *)UserReferenceDwmApiPort(**(_QWORD **)(v5 + 8));
        DwmSyncDesktopSwitch(v36);
        EnterCrit(1LL, 0LL);
      }
      if ( v5 != grpdeskRitInput )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v35);
      if ( !v85 || (v37 = 1, (*(_DWORD *)(**(_QWORD **)(grpdeskRitInput + 8LL) + 64LL) & 1) == 0) )
        v37 = v14;
      GreDesktopSwitch(
        *(_QWORD *)(gpDispInfo + 40LL),
        *(_DWORD *)(**(_QWORD **)(v5 + 8) + 64LL) & 1,
        v37,
        ***(_QWORD ***)(v5 + 8),
        ObjectTypea);
      if ( v85 == (*(_DWORD *)(**(_QWORD **)(grpdeskRitInput + 8LL) + 64LL) & 1) )
      {
        SetPointer(0LL);
        SetPointer(1LL);
      }
      else
      {
        zzzEnableDwmPointerSupport(*(_DWORD *)(**(_QWORD **)(v5 + 8) + 64LL) & 1, 0);
      }
      v38 = *(_QWORD *)(*(_QWORD *)(v5 + 8) + 24LL);
      *(_QWORD *)&v75 = *(_QWORD *)(v22 + 416);
      *(_QWORD *)(v22 + 416) = &v75;
      *((_QWORD *)&v75 + 1) = v38;
      if ( v38 )
        HMLockObject(v38);
      GreLddmProcessDesktopSwitch();
      if ( !v85 || (v39 = 9, (*(_DWORD *)(**(_QWORD **)(grpdeskRitInput + 8LL) + 64LL) & 1) == 0) )
        v39 = 1;
      v40 = (4 * (*(_DWORD *)(**(_QWORD **)(v5 + 8) + 64LL) & 1)) | v39;
      GreSuspendDirectDraw(*(_QWORD *)(gpDispInfo + 40LL), v40);
      xxxSetWindowPos(*(struct tagWND **)(*(_QWORD *)(v5 + 8) + 24LL), 0LL, 0LL, 0LL, v14, v14, 323);
      if ( v5 != grpdeskRitInput )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v41);
      GreResumeDirectDraw(*(_QWORD *)(gpDispInfo + 40LL), v40);
      v42 = *(const struct tagWND **)(v5 + 88);
      if ( !v42
        || (*(_BYTE *)(_HMPheFromObject(*(_QWORD *)(v5 + 88)) + 25) & 1) != 0
        || (*(_BYTE *)(*((_QWORD *)v42 + 5) + 232LL) & 0x40) != 0 && (GetWindowCloakState(v42) & 2) != 0
        || *(_QWORD *)(*(_QWORD *)(v5 + 8) + 176LL) == *(_QWORD *)(*((_QWORD *)v42 + 2) + 424LL)
        && (GetWindowCloakState(v42) & 1) != 0 )
      {
        v42 = *(const struct tagWND **)(*(_QWORD *)(*(_QWORD *)(v5 + 8) + 24LL) + 112LL);
        if ( v42 )
        {
          do
          {
            v43 = *(_QWORD *)(*(_QWORD *)(v5 + 8) + 176LL);
            v44 = *(_QWORD *)(*((_QWORD *)v42 + 2) + 424LL);
            if ( !IsNonImmersiveBand((__int64)v42)
              || v43 == v44
              || (*(_BYTE *)(*((_QWORD *)v42 + 5) + 232LL) & 0x40) != 0 )
            {
              WindowCloakState = GetWindowCloakState(v42);
              if ( v43 == v44 && (WindowCloakState & 1) != 0 )
              {
                v47 = 1;
                v14 = 0LL;
              }
              else
              {
                v14 = 0LL;
                v47 = 0;
              }
              if ( WindowCloakState || (v48 = 0, (*(_BYTE *)(*((_QWORD *)v42 + 5) + 27LL) & 8) != 0) )
                v48 = 1;
              v45 = v47 || v48;
            }
            else
            {
              v14 = 0LL;
            }
            if ( (*(_BYTE *)(*((_QWORD *)v42 + 5) + 31LL) & 0x18) == 0x10 && !v45 )
              break;
            v42 = (const struct tagWND *)*((_QWORD *)v42 + 11);
          }
          while ( v42 );
          v22 = gptiCurrent;
        }
      }
      HMAssignmentUnlock(v5 + 88);
      if ( v42 )
      {
        *(_QWORD *)&v77 = *(_QWORD *)(v22 + 416);
        *(_QWORD *)(v22 + 416) = &v77;
        *((_QWORD *)&v77 + 1) = v42;
        HMLockObject(v42);
        xxxSetForegroundWindow2((__int64)v42, v22, 0x20u);
        ThreadUnlock1(v61, v60, v62);
      }
      else
      {
        xxxSetForegroundWindow2(0LL, 0LL, 0x20u);
      }
      ThreadUnlock1(v50, v49, v51);
      ClearKeyboardStates();
      for ( i = *(_QWORD **)(grpdeskRitInput + 168LL); i != (_QWORD *)(grpdeskRitInput + 168LL); i = (_QWORD *)*i )
      {
        v53 = *(i - 39);
        v54 = *(_DWORD *)(v53 + 388);
        if ( (v54 & 0x100) == 0 )
        {
          si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
          *(_DWORD *)(v53 + 388) = v54 | 0x101;
          *(__m128i *)(v53 + 196) = si128;
          *(__m128i *)(v53 + 212) = si128;
          PostUpdateKeyStateEvent(v53);
        }
      }
      if ( gHardErrorHandler )
        IPostQuitMessage(gHardErrorHandler, 0);
      KePulseEvent((PRKEVENT)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc, 1, 0);
      xxxWindowEvent(0x20u, 0LL, 0, 0, 6);
      if ( (PVOID)v5 == grpdeskLogon
        && PsGetThreadProcessId(Thread) == (HANDLE)gpidLogon
        && (*(_DWORD *)(*(_QWORD *)(v5 + 40) + 64LL) & 1) != 0 )
      {
        SetTimerCoalescingTolerance(3LL);
      }
      v56 = *(_DWORD *)(v5 + 48);
      if ( (v56 & 0x20) != 0 )
      {
        v63 = *(_QWORD *)(v5 + 8);
        if ( v63 )
        {
          if ( *(_QWORD *)(v63 + 24) != v14 )
          {
            *(_DWORD *)(v5 + 48) = v56 & 0xFFFFFFDF;
            xxxBroadcastDisplaySettingsChange(v5, 1LL, 0LL);
          }
        }
      }
      DrvOcclusionStateChangeNotify();
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)qword_1C0335C70 + 8LL))(qword_1C0335C70);
    }
  }
  PopAndFreeAlwaysW32ThreadLock((__int64)&v81);
  PopAndFreeW32ThreadLock((__int64)&v83);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v7 = v14;
  }
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v58 = &WPP_d78c2f93cefb39adad771009d44421f9_Traceguids;
    LOBYTE(v58) = v7;
    LOBYTE(v57) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)v58,
      v57,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      3,
      29,
      (__int64)&WPP_d78c2f93cefb39adad771009d44421f9_Traceguids,
      v30);
  }
  return (unsigned int)v30;
}
