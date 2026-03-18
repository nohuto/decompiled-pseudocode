/*
 * XREFs of ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C007BCDC
 * Callers:
 *     xxxSwitchToThisWindow @ 0x1C00038F4 (xxxSwitchToThisWindow.c)
 *     xxxRealDefWindowProc @ 0x1C0067528 (xxxRealDefWindowProc.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C007CC00 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C00CA7B4 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C00CDA30 (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     NtUserSetForegroundWindow @ 0x1C0109FF0 (NtUserSetForegroundWindow.c)
 *     NtUserSetForegroundWindowForApplication @ 0x1C010C450 (NtUserSetForegroundWindowForApplication.c)
 *     xxxSysCommand @ 0x1C011BA1C (xxxSysCommand.c)
 *     ?xxxIVSyncForeground@IVContainerForegroundSync@@YAXXZ @ 0x1C01CE9BC (-xxxIVSyncForeground@IVContainerForegroundSync@@YAXXZ.c)
 *     xxxOldNextWindow @ 0x1C01EF0A8 (xxxOldNextWindow.c)
 *     xxxMenuWindowProc @ 0x1C0234200 (xxxMenuWindowProc.c)
 *     ShellWindowPos::_anonymous_namespace_::xxxSnapArrangeWindow @ 0x1C0237BB4 (ShellWindowPos--_anonymous_namespace_--xxxSnapArrangeWindow.c)
 *     ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x1C024ADB8 (-xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z.c)
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C0023254 (IAMThreadAccessGranted.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqq @ 0x1C005BAB8 (WPP_RECORDER_AND_TRACE_SF_qqq.c)
 *     ?IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z @ 0x1C006B9F0 (-IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C0078850 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1C007BAF4 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C007D36C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C007DC84 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     GetNonChildAncestor @ 0x1C00825AC (GetNonChildAncestor.c)
 *     PostIAMShellHookMessage @ 0x1C00A5150 (PostIAMShellHookMessage.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x1C00A94FC (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00AC3EC (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     _GhostWindowFromHungWindow @ 0x1C00B4C0C (_GhostWindowFromHungWindow.c)
 *     _anonymous_namespace_::RemoveForegroundActivate @ 0x1C00FFDF4 (_anonymous_namespace_--RemoveForegroundActivate.c)
 *     IsImmersiveBandOrShellManaged @ 0x1C01000F4 (IsImmersiveBandOrShellManaged.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqqdd @ 0x1C0108C2C (WPP_RECORDER_AND_TRACE_SF_qqqdd.c)
 *     xxxFlashWindow @ 0x1C010B918 (xxxFlashWindow.c)
 *     DSW_GetTopLevelCreatorWindow @ 0x1C01215FC (DSW_GetTopLevelCreatorWindow.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall xxxSetForegroundWindowWithOptions(_QWORD *a1, __int64 a2, __int64 a3, char a4)
{
  bool v4; // bp
  __int64 v5; // r9
  unsigned int v6; // r14d
  _QWORD *v7; // rdi
  char v8; // bl
  __int64 v9; // r15
  int v10; // esi
  __int64 v11; // rdx
  __int64 v12; // r8
  int v13; // r9d
  int CanSetForegroundWindow; // r15d
  const char *v15; // rax
  PDEVICE_OBJECT v16; // rcx
  PDEVICE_OBJECT *v17; // r9
  bool v18; // r15
  char v19; // r12
  __int64 v21; // r10
  __int64 v22; // r14
  const char *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 NonChildAncestor; // rax
  _QWORD *TopLevelCreatorWindow; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  _QWORD *v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 ThreadWin32Thread; // rax
  _QWORD *v36; // [rsp+48h] [rbp-A0h]
  __int64 v37; // [rsp+50h] [rbp-98h]
  int v38; // [rsp+58h] [rbp-90h]
  int v39; // [rsp+60h] [rbp-88h]
  __int64 v40; // [rsp+78h] [rbp-70h]
  __int128 v41; // [rsp+80h] [rbp-68h] BYREF
  __int64 v42; // [rsp+90h] [rbp-58h]
  _QWORD v43[10]; // [rsp+98h] [rbp-50h] BYREF
  bool v44; // [rsp+F0h] [rbp+8h]
  unsigned __int8 v45; // [rsp+100h] [rbp+18h]

  v45 = a3;
  v4 = 0;
  v5 = (unsigned int)a3;
  v6 = a2;
  v7 = a1;
  v8 = 1;
  v9 = *(_QWORD *)(a1[2] + 432LL);
  v44 = v9 == gpqForeground;
  v10 = a3 & 0x1000;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v39 = v5;
    v38 = v6;
    v37 = a1[2];
    WPP_RECORDER_AND_TRACE_SF_qqqdd(WPP_GLOBAL_Control->AttachedDevice, a2, a3, v5);
  }
  v42 = 0LL;
  v41 = 0LL;
  v40 = GhostWindowFromHungWindow(v7, a2, a3, v5);
  if ( v40 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v41 = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = &v41;
    *((_QWORD *)&v41 + 1) = v40;
    HMLockObject(v40);
    LOBYTE(v11) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v36 = v7;
      v7 = (_QWORD *)v40;
      LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_qq(
        WPP_GLOBAL_Control->AttachedDevice,
        v11,
        v12,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        2,
        53,
        (__int64)&WPP_76ccfc4204be37e1ff60c5115401253e_Traceguids,
        v40,
        v36,
        v37,
        v38,
        v39);
    }
    else
    {
      v7 = (_QWORD *)v40;
    }
  }
  if ( v9 == gpqForeground )
  {
    v22 = *(_QWORD *)(gptiCurrent + 432LL);
    v18 = gpqForeground == v22;
    LOBYTE(v11) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    v17 = (PDEVICE_OBJECT *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v11,
        v12,
        (unsigned int)&WPP_RECORDER_INITIALIZED,
        4,
        2,
        54,
        (__int64)&WPP_76ccfc4204be37e1ff60c5115401253e_Traceguids);
      v17 = (PDEVICE_OBJECT *)&WPP_RECORDER_INITIALIZED;
    }
    v16 = WPP_GLOBAL_Control;
    LOBYTE(v11) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v23 = "Synchronously";
      if ( gpqForeground != v22 )
        v23 = "Async";
      WPP_RECORDER_AND_TRACE_SF_s(
        WPP_GLOBAL_Control->AttachedDevice,
        v11,
        v12,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        2,
        55,
        (__int64)&WPP_76ccfc4204be37e1ff60c5115401253e_Traceguids,
        (__int64)v23);
    }
    v19 = 1;
  }
  else
  {
    CanSetForegroundWindow = anonymous_namespace_::CanSetForegroundWindow(v7, v6);
    if ( CanSetForegroundWindow == 2 )
    {
      LOBYTE(v11) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v15 = "Remove";
        if ( v10 )
          v15 = "Preserve";
        LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_s(
          WPP_GLOBAL_Control->AttachedDevice,
          v11,
          v12,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          2,
          56,
          (__int64)&WPP_76ccfc4204be37e1ff60c5115401253e_Traceguids,
          (__int64)v15);
      }
      if ( !v10 )
        anonymous_namespace_::RemoveForegroundActivate();
      LOBYTE(v11) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v11,
          v12,
          v13,
          4,
          2,
          57,
          (__int64)&WPP_76ccfc4204be37e1ff60c5115401253e_Traceguids);
      }
      if ( (unsigned int)xxxSetForegroundWindow2(v7, gptiCurrent, v45) )
      {
        v4 = 1;
      }
      else
      {
        v4 = 0;
        v16 = (PDEVICE_OBJECT)grpdeskRitInput;
        if ( *(_QWORD *)(gptiCurrent + 456LL) != grpdeskRitInput )
        {
          v24 = v7[5];
          if ( *(char *)(v24 + 19) >= 0
            && *(_DWORD *)(v24 + 236) != 15
            && (unsigned int)IsImmersiveBandOrShellManaged(v7) )
          {
            if ( IAMThreadAccessGranted(gptiCurrent) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v25);
            NonChildAncestor = GetNonChildAncestor(v7);
            TopLevelCreatorWindow = (_QWORD *)DSW_GetTopLevelCreatorWindow(NonChildAncestor);
            PostIAMShellHookMessage(34LL, *TopLevelCreatorWindow);
          }
        }
      }
      v18 = 0;
      v19 = 1;
    }
    else
    {
      v19 = 0;
      v16 = WPP_GLOBAL_Control;
      v17 = &WPP_GLOBAL_Control;
      LOBYTE(v11) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( v7 )
          v28 = v7[2];
        else
          v28 = 0LL;
        WPP_RECORDER_AND_TRACE_SF_qqq(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v11,
          v12,
          (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
          4u,
          2u,
          0x3Au,
          (__int64)&WPP_76ccfc4204be37e1ff60c5115401253e_Traceguids,
          gptiCurrent,
          v7,
          v28);
        v17 = &WPP_GLOBAL_Control;
      }
      if ( (a4 & 1) != 0 )
      {
        LOBYTE(v11) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v11,
            v12,
            (unsigned int)&WPP_GLOBAL_Control,
            4,
            2,
            59,
            (__int64)&WPP_76ccfc4204be37e1ff60c5115401253e_Traceguids);
        }
        v29 = GetNonChildAncestor(v7);
        v30 = (_QWORD *)DSW_GetTopLevelCreatorWindow(v29);
        if ( !IsTrayWindow((__int64)v30, 1) )
          v30 = v7;
        if ( *(_DWORD *)(v30[5] + 236LL) != 15 )
        {
          if ( (unsigned int)IsImmersiveBandOrShellManaged(v30) )
          {
            PostIAMShellHookMessage(34LL, *v30);
          }
          else
          {
            v43[2] = 0LL;
            v31 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
            v43[0] = *(_QWORD *)(v31 + 416);
            *(_QWORD *)(v31 + 416) = v43;
            v43[1] = v30;
            HMLockObject(v30);
            UPDWORDPointer(8196LL);
            xxxFlashWindow((ULONG_PTR)v30);
            ThreadUnlock1(v33, v32, v34);
          }
        }
      }
      if ( CanSetForegroundWindow != 1 )
      {
        v18 = *(_QWORD *)(gptiCurrent + 432LL) == *(_QWORD *)(v7[2] + 432LL);
        LOBYTE(v11) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v11,
            v12,
            (_DWORD)v17,
            4,
            2,
            60,
            (__int64)&WPP_76ccfc4204be37e1ff60c5115401253e_Traceguids);
        }
        goto LABEL_35;
      }
      v18 = 0;
    }
  }
  if ( !v44 )
    goto LABEL_30;
LABEL_35:
  LOBYTE(v11) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v11,
      v12,
      (_DWORD)v17,
      4,
      2,
      61,
      (__int64)&WPP_76ccfc4204be37e1ff60c5115401253e_Traceguids);
  }
  if ( v18 )
  {
    v16 = WPP_GLOBAL_Control;
    LOBYTE(v11) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v11,
        v12,
        (_DWORD)v17,
        4,
        2,
        62,
        (__int64)&WPP_76ccfc4204be37e1ff60c5115401253e_Traceguids);
    LOBYTE(v16) = *(_BYTE *)(v7[5] + 31LL) & 0xC0;
    if ( (_BYTE)v16 != 64 && (unsigned __int8)anonymous_namespace_::xxxLocalActivateWindow((struct tagWND *)v7) )
      goto LABEL_49;
    v4 = 0;
  }
  else
  {
    v21 = v7[2];
    if ( v7 == *(_QWORD **)(*(_QWORD *)(v21 + 432) + 120LL) )
    {
      v16 = WPP_GLOBAL_Control;
      LOBYTE(v11) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v11,
          v12,
          (_DWORD)v17,
          4,
          2,
          63,
          (__int64)&WPP_76ccfc4204be37e1ff60c5115401253e_Traceguids);
LABEL_49:
      v4 = 1;
      goto LABEL_30;
    }
    LOBYTE(v11) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v11,
        v12,
        (_DWORD)v17,
        4,
        2,
        64,
        (__int64)&WPP_76ccfc4204be37e1ff60c5115401253e_Traceguids);
      v21 = v7[2];
    }
    v4 = (unsigned int)PostEventMessageEx(
                         (struct tagTHREADINFO *)v21,
                         *(struct tagQ **)(v21 + 432),
                         6u,
                         0LL,
                         0,
                         0LL,
                         *v7,
                         0LL) != 0;
  }
LABEL_30:
  if ( v40 )
    ThreadUnlock1(v16, v11, v12);
  if ( !v19 || !v4 )
    return 0;
  return v8;
}
