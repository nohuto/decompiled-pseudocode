/*
 * XREFs of ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C005E3E8
 * Callers:
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C0008AF0 (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     xxxSwitchToThisWindow @ 0x1C0015B24 (xxxSwitchToThisWindow.c)
 *     xxxSysCommand @ 0x1C00A7BFC (xxxSysCommand.c)
 *     NtUserSetForegroundWindow @ 0x1C00ADAD0 (NtUserSetForegroundWindow.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C00C4E00 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C00E19D0 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     xxxRealDefWindowProc @ 0x1C0108B10 (xxxRealDefWindowProc.c)
 *     ?xxxReportHotKeyToShell@@YAXPEAUtagWND@@_J_KPEAUHWND__@@W4ReportHotKeyHint@@@Z @ 0x1C013AB64 (-xxxReportHotKeyToShell@@YAXPEAUtagWND@@_J_KPEAUHWND__@@W4ReportHotKeyHint@@@Z.c)
 *     ?xxxIVSyncForeground@IVContainerForegroundSync@@YAXXZ @ 0x1C01AE180 (-xxxIVSyncForeground@IVContainerForegroundSync@@YAXXZ.c)
 *     xxxOldNextWindow @ 0x1C01CACD8 (xxxOldNextWindow.c)
 *     NtUserSetForegroundWindowForApplication @ 0x1C01DBC10 (NtUserSetForegroundWindowForApplication.c)
 *     xxxMenuWindowProc @ 0x1C021A810 (xxxMenuWindowProc.c)
 *     ShellWindowPos::_anonymous_namespace_::xxxSnapArrangeWindow @ 0x1C021F0A8 (ShellWindowPos--_anonymous_namespace_--xxxSnapArrangeWindow.c)
 *     ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x1C023BA64 (-xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z.c)
 * Callees:
 *     xxxFlashWindow @ 0x1C0005C64 (xxxFlashWindow.c)
 *     WPP_RECORDER_AND_TRACE_SF_DqD @ 0x1C00166AC (WPP_RECORDER_AND_TRACE_SF_DqD.c)
 *     DSW_GetTopLevelCreatorWindow @ 0x1C00178A0 (DSW_GetTopLevelCreatorWindow.c)
 *     GetNonChildAncestor @ 0x1C00255E4 (GetNonChildAncestor.c)
 *     IAMThreadAccessGranted @ 0x1C002731C (IAMThreadAccessGranted.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0050C44 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     IsImmersiveBandOrShellManaged @ 0x1C005CF68 (IsImmersiveBandOrShellManaged.c)
 *     _anonymous_namespace_::RemoveForegroundActivate @ 0x1C005E09C (_anonymous_namespace_--RemoveForegroundActivate.c)
 *     ?_GhostWindowFromHungWindow@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C005F03C (-_GhostWindowFromHungWindow@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_DqDDD @ 0x1C005F0CC (WPP_RECORDER_AND_TRACE_SF_DqDDD.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1C005F1AC (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x1C005F270 (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0061584 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C0065F18 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     PostIAMShellHookMessage @ 0x1C00D34E8 (PostIAMShellHookMessage.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00E4884 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C00E4DF4 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     ?IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z @ 0x1C00EB4B8 (-IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z.c)
 *     Feature_Servicing_HotKeyForegroundSwitchKbdFix__private_IsEnabledDeviceUsage @ 0x1C0139AA0 (Feature_Servicing_HotKeyForegroundSwitchKbdFix__private_IsEnabledDeviceUsage.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

char __fastcall xxxSetForegroundWindowWithOptions(__int64 a1, unsigned int a2, __int16 a3, char a4)
{
  char v5; // si
  __int64 v6; // r8
  __int64 v7; // r14
  bool v8; // bp
  __int64 v9; // rdi
  int v10; // ebx
  char v11; // r15
  bool v12; // r12
  int v13; // r8d
  int v14; // edx
  struct tagWND *v15; // rax
  __int64 v16; // rdx
  PDEVICE_OBJECT *v17; // r8
  struct tagWND *v18; // r15
  __int64 v19; // rdi
  bool v20; // r15
  PDEVICE_OBJECT v21; // rcx
  const char *v22; // rax
  int v23; // edi
  int v24; // r8d
  const char *v25; // rax
  PDEVICE_OBJECT v26; // rcx
  int IsEnabledDeviceUsage; // eax
  __int64 v28; // rdx
  __int64 v29; // rax
  const struct tagTHREADINFO *v30; // r9
  int v31; // eax
  __int64 NonChildAncestor; // rax
  _QWORD *TopLevelCreatorWindow; // rax
  char v34; // r15
  char v35; // r12
  __int64 v36; // r13
  __int64 v37; // rax
  unsigned __int64 *v38; // rbx
  _DWORD *v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  unsigned int v44; // [rsp+20h] [rbp-E8h]
  int v45; // [rsp+28h] [rbp-E0h]
  int v46; // [rsp+30h] [rbp-D8h]
  int v47; // [rsp+38h] [rbp-D0h]
  char v48; // [rsp+70h] [rbp-98h]
  int CanSetForegroundWindow; // [rsp+74h] [rbp-94h]
  __int64 v50; // [rsp+80h] [rbp-88h]
  struct tagWND *v51; // [rsp+80h] [rbp-88h]
  __int128 v52; // [rsp+90h] [rbp-78h] BYREF
  __int64 v53; // [rsp+A0h] [rbp-68h]
  __int128 v54; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v55; // [rsp+B8h] [rbp-50h]
  bool v57; // [rsp+120h] [rbp+18h]

  v5 = 1;
  v6 = *(_QWORD *)(a1 + 16);
  v7 = a1;
  v48 = 1;
  v8 = 0;
  v50 = *(_QWORD *)(v6 + 432);
  v9 = v50;
  v57 = v50 == gpqForeground;
  v10 = a3 & 0x1000;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
    || (v11 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v11 = 0;
  }
  v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    PsGetThreadId(*(PETHREAD *)v6);
    PsGetThreadId((PETHREAD)*gptiCurrent);
    LOBYTE(v13) = v12;
    LOBYTE(v14) = v11;
    WPP_RECORDER_AND_TRACE_SF_DqDDD(WPP_GLOBAL_Control->AttachedDevice, v14, v13, (_DWORD)gFullLog);
    v10 = a3 & 0x1000;
    v9 = v50;
  }
  v53 = 0LL;
  v52 = 0LL;
  v15 = _GhostWindowFromHungWindow((const struct tagWND *)v7);
  v51 = v15;
  v18 = v15;
  if ( v15 )
  {
    ThreadLockAlways(v15, &v52);
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v16) = 0;
    }
    if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_qq(
        WPP_GLOBAL_Control->AttachedDevice,
        v16,
        (_DWORD)v17,
        (_DWORD)gFullLog,
        4,
        2,
        71,
        (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids,
        *(_QWORD *)v18,
        *(_QWORD *)v7);
    }
    v7 = (__int64)v18;
  }
  if ( v9 == gpqForeground )
  {
    v19 = *(_QWORD *)(gptiCurrent + 432LL);
    v20 = gpqForeground == v19;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v16) = 0;
    }
    if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v16,
        (_DWORD)v17,
        (unsigned int)&WPP_RECORDER_INITIALIZED,
        4,
        2,
        72,
        (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids);
    }
    v21 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v16) = 0;
    }
    LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v22 = "Synchronously";
      if ( gpqForeground != v19 )
        v22 = "Async";
      WPP_RECORDER_AND_TRACE_SF_s(
        WPP_GLOBAL_Control->AttachedDevice,
        v16,
        (_DWORD)v17,
        (_DWORD)gFullLog,
        4,
        2,
        73,
        (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids,
        (__int64)v22);
    }
  }
  else
  {
    v23 = 2;
    CanSetForegroundWindow = anonymous_namespace_::CanSetForegroundWindow(v7, a2);
    if ( CanSetForegroundWindow == 2 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v16) = 0;
      }
      if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v25 = "Remove";
        if ( v10 )
          v25 = "Preserve";
        LOBYTE(v24) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_s(
          WPP_GLOBAL_Control->AttachedDevice,
          v16,
          v24,
          (_DWORD)gFullLog,
          4,
          2,
          74,
          (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids,
          (__int64)v25);
      }
      if ( !v10 )
        anonymous_namespace_::RemoveForegroundActivate();
      v26 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v16) = 0;
      }
      if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v24) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v16,
          v24,
          (unsigned int)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids,
          4,
          2,
          75,
          (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids);
      }
      IsEnabledDeviceUsage = Feature_Servicing_HotKeyForegroundSwitchKbdFix__private_IsEnabledDeviceUsage(v26, v16);
      v28 = gptiCurrent;
      if ( IsEnabledDeviceUsage && (a3 & 0x400) != 0 )
        v28 = 0LL;
      if ( (unsigned int)xxxSetForegroundWindow2(v7, v28, a3 & 0x7FF) )
      {
        v8 = 1;
      }
      else
      {
        v8 = 0;
        v21 = (PDEVICE_OBJECT)grpdeskRitInput;
        if ( *(_QWORD *)(gptiCurrent + 456LL) != grpdeskRitInput )
        {
          v29 = *(_QWORD *)(v7 + 40);
          if ( *(char *)(v29 + 19) >= 0
            && *(_DWORD *)(v29 + 236) != 15
            && (unsigned int)IsImmersiveBandOrShellManaged(v7, v16) )
          {
            LOBYTE(v31) = IAMThreadAccessGranted(v30);
            if ( v31 )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2450LL);
            NonChildAncestor = GetNonChildAncestor(v7);
            TopLevelCreatorWindow = (_QWORD *)DSW_GetTopLevelCreatorWindow(NonChildAncestor);
            PostIAMShellHookMessage(34LL, *TopLevelCreatorWindow);
          }
        }
      }
      v20 = 0;
    }
    else
    {
      v48 = 0;
      v21 = WPP_GLOBAL_Control;
      v17 = &WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || (v34 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        v34 = 0;
      }
      v35 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v34 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v36 = gptiCurrent;
      }
      else
      {
        v36 = gptiCurrent;
        PsGetThreadId(**(PETHREAD **)(v7 + 16));
        PsGetThreadId((PETHREAD)*gptiCurrent);
        WPP_RECORDER_AND_TRACE_SF_DqD(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v34,
          v35,
          (__int64)gFullLog,
          v44,
          v45,
          v46,
          v47);
        v17 = &WPP_GLOBAL_Control;
        v23 = 2;
      }
      if ( (a4 & 1) != 0 )
      {
        LOBYTE(v16) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v16,
            (_DWORD)v17,
            (unsigned int)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids,
            4,
            2,
            77,
            (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids);
        }
        v37 = GetNonChildAncestor(v7);
        v38 = (unsigned __int64 *)DSW_GetTopLevelCreatorWindow(v37);
        if ( !(unsigned __int8)IsTrayWindow(v38, 1LL) )
        {
          v38 = (unsigned __int64 *)v7;
          v23 = 3;
        }
        if ( *(_DWORD *)(v38[5] + 236) != 15 )
        {
          if ( (unsigned int)IsImmersiveBandOrShellManaged((__int64)v38, v16) )
          {
            PostIAMShellHookMessage(34LL, *v38);
          }
          else
          {
            v54 = 0LL;
            v55 = 0LL;
            ThreadLockAlways(v38, &v54);
            v39 = (_DWORD *)UPDWORDPointer(8196LL);
            xxxFlashWindow(v38, v23 | ((unsigned __int16)*v39 << 16) | 0xC, 0);
            ThreadUnlock1(v41, v40, v42);
          }
        }
      }
      if ( CanSetForegroundWindow != 1 )
      {
        v20 = *(_QWORD *)(v36 + 432) == *(_QWORD *)(*(_QWORD *)(v7 + 16) + 432LL);
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
          || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v16) = 0;
        }
        if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v16,
            (_DWORD)v17,
            (unsigned int)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids,
            4,
            2,
            78,
            (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids);
        }
        goto LABEL_100;
      }
      v20 = 0;
    }
  }
  if ( !v57 )
    goto LABEL_135;
LABEL_100:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
    || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v16) = 0;
  }
  if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v16,
      (_DWORD)v17,
      (unsigned int)&WPP_GLOBAL_Control,
      4,
      2,
      79,
      (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids);
  }
  if ( v20 )
  {
    v21 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v16) = 0;
    }
    LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v16,
        (_DWORD)v17,
        (unsigned int)&WPP_GLOBAL_Control,
        4,
        2,
        80,
        (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids);
    LOBYTE(v21) = *(_BYTE *)(*(_QWORD *)(v7 + 40) + 31LL) & 0xC0;
    if ( (_BYTE)v21 == 64 || !(unsigned __int8)anonymous_namespace_::xxxLocalActivateWindow((struct tagWND *)v7) )
    {
      v8 = 0;
      goto LABEL_135;
    }
    goto LABEL_126;
  }
  if ( v7 == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 16) + 432LL) + 128LL) )
  {
    v21 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v16) = 0;
    }
    LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v16,
        (_DWORD)v17,
        (unsigned int)&WPP_GLOBAL_Control,
        4,
        2,
        81,
        (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids);
LABEL_126:
    v8 = 1;
    goto LABEL_135;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
    || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v16) = 0;
  }
  if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v16,
      (_DWORD)v17,
      (unsigned int)&WPP_GLOBAL_Control,
      4,
      2,
      82,
      (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids);
  }
  v8 = (unsigned int)PostEventMessageEx(
                       *(struct tagTHREADINFO **)(v7 + 16),
                       *(struct tagQ **)(*(_QWORD *)(v7 + 16) + 432LL),
                       6u,
                       0LL,
                       0,
                       0LL,
                       *(_QWORD *)v7,
                       0LL) != 0;
LABEL_135:
  if ( v51 )
    ThreadUnlock1(v21, v16, v17);
  if ( !v48 || !v8 )
    return 0;
  return v5;
}
