/*
 * XREFs of ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0061584
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C000EF44 (xxxSetModernAppWindow.c)
 *     ?xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z @ 0x1C0013F78 (-xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z.c)
 *     xxxSystemParametersInfoWorker @ 0x1C0043D70 (xxxSystemParametersInfoWorker.c)
 *     ?xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00500BC (-xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C005E3E8 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     xxxSetThreadDesktop @ 0x1C006A6E4 (xxxSetThreadDesktop.c)
 *     xxxSwitchDesktop @ 0x1C006BB2C (xxxSwitchDesktop.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C00AE86C (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     EditionHandleAltTab @ 0x1C00BDAD0 (EditionHandleAltTab.c)
 *     ?xxxReportHotKeyToShell@@YAXPEAUtagWND@@_J_KPEAUHWND__@@W4ReportHotKeyHint@@@Z @ 0x1C013AB64 (-xxxReportHotKeyToShell@@YAXPEAUtagWND@@_J_KPEAUHWND__@@W4ReportHotKeyHint@@@Z.c)
 *     ?xxxTrackingActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x1C01AE408 (-xxxTrackingActivateWindow@@YA_NPEAUtagWND@@@Z.c)
 *     xxxNextWindow @ 0x1C01CA504 (xxxNextWindow.c)
 * Callees:
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C0028858 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     xxxSetWindowPos @ 0x1C0028898 (xxxSetWindowPos.c)
 *     ?xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z @ 0x1C0041E8C (-xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C004AD48 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     ?xxxApplyGlobalInputSettings@@YAXH@Z @ 0x1C004BBD8 (-xxxApplyGlobalInputSettings@@YAXH@Z.c)
 *     ?xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C004BD48 (-xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     zzzInputFocusReceivedWindowEvent @ 0x1C004C1E8 (zzzInputFocusReceivedWindowEvent.c)
 *     xxxCancelTracking @ 0x1C005DB7C (xxxCancelTracking.c)
 *     zzzLockWindowUpdate2 @ 0x1C005DC44 (zzzLockWindowUpdate2.c)
 *     SetNewForegroundQueue @ 0x1C005DEB0 (SetNewForegroundQueue.c)
 *     PtiKbdFromQ @ 0x1C0060CFC (PtiKbdFromQ.c)
 *     LockW32Thread @ 0x1C0061F84 (LockW32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C0062180 (PopAndFreeW32ThreadLock.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C0065F18 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     _anonymous_namespace_::xxxSendNCActivateMessage @ 0x1C0066A48 (_anonymous_namespace_--xxxSendNCActivateMessage.c)
 *     _anonymous_namespace_::RemoveEventMessage @ 0x1C0066AF4 (_anonymous_namespace_--RemoveEventMessage.c)
 *     ?xxxUpdateTray@@YAXPEAUtagWND@@@Z @ 0x1C0066B58 (-xxxUpdateTray@@YAXPEAUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qDD @ 0x1C0071024 (WPP_RECORDER_AND_TRACE_SF_qDD.c)
 *     ?IsHungWindow@@YA_NPEBUtagWND@@@Z @ 0x1C0092F94 (-IsHungWindow@@YA_NPEBUtagWND@@@Z.c)
 *     _anonymous_namespace_::UpdateKeyStateFlag @ 0x1C00A7EC4 (_anonymous_namespace_--UpdateKeyStateFlag.c)
 *     _GetTopLevelWindow @ 0x1C00CFFB0 (_GetTopLevelWindow.c)
 *     IsWindowUnderActiveLockScreen @ 0x1C00D0A00 (IsWindowUnderActiveLockScreen.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00E4884 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C00E5B60 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     SetWakeBit @ 0x1C0118350 (SetWakeBit.c)
 *     ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@W4_AllocQEntryPosition@@@Z @ 0x1C011E31C (-AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@W4_AllocQEntryPosition@@@Z.c)
 *     ?StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagUIPI_INFO@@@Z @ 0x1C011F1F0 (-StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagU.c)
 *     ?ResetForegroundQueue@@YAXW4SetFgQueueOption@@@Z @ 0x1C01397D0 (-ResetForegroundQueue@@YAXW4SetFgQueueOption@@@Z.c)
 *     ?SetNewForegroundQueue2@@YAXPEAUtagQ@@W4SetFgQueueOption@@@Z @ 0x1C01398C0 (-SetNewForegroundQueue2@@YAXPEAUtagQ@@W4SetFgQueueOption@@@Z.c)
 *     Feature_Servicing_HotKeyForegroundSwitchKbdFix__private_IsEnabledDeviceUsage @ 0x1C0139AA0 (Feature_Servicing_HotKeyForegroundSwitchKbdFix__private_IsEnabledDeviceUsage.c)
 *     ?zzzInputFocusLostWindowEventImpl@@YAXPEAUtagWND@@PEAUtagQ@@W4INPUTFOCUSEVENTSOURCE@@@Z @ 0x1C013A930 (-zzzInputFocusLostWindowEventImpl@@YAXPEAUtagWND@@PEAUtagQ@@W4INPUTFOCUSEVENTSOURCE@@@Z.c)
 *     zzzActiveCursorTracking @ 0x1C01B7390 (zzzActiveCursorTracking.c)
 *     ?ProcessHungWindow@@YAXPEAUtagWND@@@Z @ 0x1C01F3C68 (-ProcessHungWindow@@YAXPEAUtagWND@@@Z.c)
 *     ?IsHostThreadOf@CoreWindowProp@@SAHPEBUtagTHREADINFO@@PEBUtagWND@@@Z @ 0x1C02203C8 (-IsHostThreadOf@CoreWindowProp@@SAHPEBUtagTHREADINFO@@PEBUtagWND@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxSetForegroundWindow2(__int64 a1, PETHREAD *a2, unsigned int a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  PDEVICE_OBJECT v9; // rcx
  __int16 v10; // ax
  bool v12; // al
  int v13; // r8d
  int v14; // edx
  PDEVICE_OBJECT v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r14
  int IsEnabledDeviceUsage; // eax
  const struct tagWND *v21; // rdx
  __int64 v22; // rcx
  struct tagTHREADINFO *v23; // rcx
  struct tagWND *v24; // rdx
  __int64 v25; // r15
  const struct tagWND *v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  _QWORD *i; // rcx
  __int64 v30; // rax
  __m128i si128; // xmm0
  __int64 v32; // rcx
  PETHREAD *v33; // rdx
  __int64 v34; // r14
  PETHREAD v35; // rax
  _BOOL8 v36; // r15
  const struct tagWND *v37; // rax
  const struct tagWND *v38; // r15
  HANDLE v39; // rax
  struct tagQMSG *v40; // r15
  const struct tagWND *v41; // rcx
  __int64 v42; // r14
  PETHREAD v43; // r15
  PETHREAD *v44; // rdi
  int v45; // ecx
  bool v46; // zf
  char v47; // r15
  unsigned int v48; // r13d
  void *v49; // rdx
  unsigned int v50; // r12d
  unsigned __int64 v51; // r9
  unsigned int v52; // eax
  const struct tagWND *v53; // rcx
  struct _KTHREAD *v54; // rcx
  PETHREAD v55; // rax
  char v56; // r14
  const struct tagWND *TopLevelWindow; // rax
  const struct tagWND *v58; // r15
  int v59; // eax
  unsigned __int64 v60; // [rsp+40h] [rbp-89h]
  struct tagQMSG *v61; // [rsp+70h] [rbp-59h]
  __int64 v62; // [rsp+78h] [rbp-51h] BYREF
  __int64 v63; // [rsp+80h] [rbp-49h] BYREF
  __int64 v64; // [rsp+88h] [rbp-41h] BYREF
  struct tagQMSG *ThreadId; // [rsp+90h] [rbp-39h]
  __int128 v66; // [rsp+98h] [rbp-31h] BYREF
  __int64 v67; // [rsp+A8h] [rbp-21h]
  __int128 v68; // [rsp+B0h] [rbp-19h] BYREF
  __int64 v69; // [rsp+C0h] [rbp-9h]
  __int128 v70; // [rsp+C8h] [rbp-1h] BYREF
  __int64 v71; // [rsp+D8h] [rbp+Fh]
  bool v72; // [rsp+130h] [rbp+67h]
  unsigned int v73; // [rsp+130h] [rbp+67h]
  __int64 v74; // [rsp+130h] [rbp+67h]
  bool v77; // [rsp+148h] [rbp+7Fh]
  __int64 v78; // [rsp+148h] [rbp+7Fh]

  v69 = 0LL;
  v67 = 0LL;
  v71 = 0LL;
  v68 = 0LL;
  v5 = 1;
  v66 = 0LL;
  v64 = 0LL;
  v63 = 0LL;
  v62 = 0LL;
  v70 = 0LL;
  SetSystemInputSource(&v64);
  if ( a1 )
  {
    if ( *(_QWORD *)(a1 + 24) != grpdeskRitInput || *(char *)(*(_QWORD *)(a1 + 40) + 19LL) < 0 )
    {
      v9 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        LOBYTE(v5) = 0;
      }
      LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v5 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v10 = 87;
      goto LABEL_19;
    }
    if ( (unsigned int)IsWindowUnderActiveLockScreen(a1, v6, v7, v8) )
    {
      v9 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        LOBYTE(v5) = 0;
      }
      LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v5 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v10 = 88;
LABEL_19:
      LOBYTE(v6) = v5;
      WPP_RECORDER_AND_TRACE_SF_(
        v9->AttachedDevice,
        v6,
        v7,
        v8,
        4,
        2,
        v10,
        (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids);
      return 0LL;
    }
  }
  if ( a2 )
    LockW32Thread(a2, &v70);
  v12 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  v72 = v12;
  v77 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    ThreadId = (struct tagQMSG *)PsGetThreadId((PETHREAD)*gptiCurrent);
    if ( a2 )
      PsGetThreadId(*a2);
    v14 = 89;
    LOBYTE(v13) = v77;
    LOBYTE(v14) = v72;
    WPP_RECORDER_AND_TRACE_SF_qDD(WPP_GLOBAL_Control->AttachedDevice, v14, v13, (_DWORD)gFullLog);
  }
  LOBYTE(v6) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      v6,
      v7,
      (_DWORD)gFullLog,
      4,
      2,
      90,
      (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids,
      a3);
  }
  gppiLockSFW = 0LL;
  v15 = WPP_GLOBAL_Control;
  LOBYTE(v6) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v6,
      v7,
      v8,
      4,
      2,
      91,
      (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids);
  }
  v16 = gptiForeground;
  if ( !gptiForeground || (*(_DWORD *)(gptiForeground + 488LL) & 1) != 0 )
    v16 = 0LL;
  else
    LockW32Thread(gptiForeground, &v68);
  if ( !(unsigned int)Feature_Servicing_HotKeyForegroundSwitchKbdFix__private_IsEnabledDeviceUsage(v15, v6) )
  {
    v18 = gpqForeground;
    gpqForegroundPrev = gpqForeground;
  }
  if ( a1 )
  {
    v19 = *(_QWORD *)(a1 + 16);
    v78 = v19;
    IsEnabledDeviceUsage = Feature_Servicing_HotKeyForegroundSwitchKbdFix__private_IsEnabledDeviceUsage(v18, v17);
    v22 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 432LL);
    if ( IsEnabledDeviceUsage )
      SetNewForegroundQueue2(v22, (a3 & 0x200 | 0x100) >> 8);
    else
      SetNewForegroundQueue(v22, v21);
    LockW32Thread(v19, &v66);
    v23 = *(struct tagTHREADINFO **)(a1 + 16);
    v24 = (struct tagWND *)a1;
    v25 = v19;
  }
  else
  {
    v25 = 0LL;
    v78 = 0LL;
    if ( (unsigned int)Feature_Servicing_HotKeyForegroundSwitchKbdFix__private_IsEnabledDeviceUsage(v18, v17) )
      ResetForegroundQueue(1LL);
    else
      SetNewForegroundQueue(0LL, v26);
    v23 = 0LL;
    v24 = 0LL;
  }
  xxxSetForegroundThreadWithWindowHint(v23, v24);
  if ( (a3 & 0x20) == 0 )
  {
    if ( gpqForeground )
      v63 = *(_QWORD *)(gpqForeground + 432LL);
    if ( gpqForegroundPrev )
      v62 = *(_QWORD *)(gpqForegroundPrev + 432LL);
    if ( !(unsigned __int8)CheckAccess(&v63, &v62) )
    {
      ClearKeyboardToggleStates();
      if ( (unsigned int)Feature_Servicing_HotKeyForegroundSwitchKbdFix__private_IsEnabledDeviceUsage(v28, v27) )
      {
        if ( *(_QWORD *)(gptiCurrent + 456LL) == grpdeskRitInput )
        {
          for ( i = *(_QWORD **)(grpdeskRitInput + 176LL); i != (_QWORD *)(grpdeskRitInput + 176LL); i = (_QWORD *)*i )
          {
            v30 = *(i - 39);
            si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
            *(__m128i *)(v30 + 204) = si128;
            *(__m128i *)(v30 + 220) = si128;
            *(_DWORD *)(v30 + 396) |= 1u;
          }
        }
      }
      else
      {
        anonymous_namespace_::UpdateKeyStateFlag();
      }
    }
  }
  if ( gpqForeground
    && gpqForeground != gpqForegroundPrev
    && *(_QWORD *)(gpqForeground + 120LL)
    && (HIDWORD(gpdwCPUserPreferencesMask) & 0x80u) == 0 )
  {
    xxxApplyGlobalInputSettings();
  }
  if ( gpqForeground == gpqForegroundPrev )
    goto LABEL_124;
  if ( gpqForegroundPrev )
  {
    v32 = *(_QWORD *)(gpqForegroundPrev + 120LL);
    if ( v32 )
      zzzInputFocusLostWindowEventImpl(v32, gpqForeground, 1LL);
  }
  if ( gpqForeground && *(_QWORD *)(gpqForeground + 120LL) )
    zzzInputFocusReceivedWindowEvent(1u);
  v33 = a2;
  if ( a2 )
  {
    xxxCancelTracking();
    CCursorClip::ClearClip(gpCursorClip);
    zzzLockWindowUpdate2(0LL, 1);
    v33 = a2;
  }
  v34 = 0LL;
  if ( v16 && (*(_DWORD *)(v16 + 488) & 1) == 0 )
    v34 = *(_QWORD *)(v16 + 432);
  v35 = 0LL;
  if ( v33 )
    v35 = v33[54];
  v61 = 0LL;
  if ( !v34 || (PETHREAD)v34 == v35 )
  {
LABEL_114:
    v42 = 0LL;
    if ( v78 && (*(_DWORD *)(v78 + 488) & 1) == 0 )
      v42 = *(_QWORD *)(v78 + 432);
    v43 = 0LL;
    if ( v33 )
      v43 = v33[54];
    if ( v42 )
    {
      if ( (PETHREAD)v42 != v43 )
      {
        v61 = (struct tagQMSG *)AllocQEntryEx(v42 + 24, 0LL, 1LL);
        if ( !v61 )
        {
          v5 = 0;
LABEL_123:
          v25 = v78;
          goto LABEL_124;
        }
      }
      v45 = anonymous_namespace_::RemoveEventMessage(v42, 5LL);
      if ( (PETHREAD)v42 == v43 )
      {
        if ( a1 == *((_QWORD *)v43 + 16) )
        {
          anonymous_namespace_::xxxSendNCActivateMessage((struct tagWND *)a1);
          xxxUpdateTray((struct tagWND *)a1);
          v47 = a3;
          if ( (a3 & 4) == 0 )
            xxxSetWindowPos((struct tagWND *)a1, 0LL, 0LL, 0LL, 0, 0, 3);
        }
        else
        {
          v47 = a3;
          if ( (a3 & 1) == 0 )
          {
            if ( v16 )
              PsGetThreadId(*(PETHREAD *)v16);
            anonymous_namespace_::xxxLocalActivateWindow((struct tagWND *)a1);
            if ( ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0 )
              zzzActiveCursorTracking((struct tagWND *)a1);
            goto LABEL_123;
          }
        }
      }
      else
      {
        v46 = v43 == 0LL;
        v47 = a3;
        if ( (!v46 || (a3 & 2) != 0) && a1 )
          v74 = *(_QWORD *)a1;
        else
          v74 = 0LL;
        if ( v45 )
          *(_DWORD *)(v42 + 396) |= 0x8000u;
        v48 = (a3 >> 4) & 1 | 2;
        if ( (a3 & 4) == 0 )
          v48 = (a3 >> 4) & 1;
        v50 = *(_DWORD *)(*(_QWORD *)(PtiKbdFromQ(v42) + 424) + 280LL);
        if ( (a3 & 1) != 0 )
        {
          v51 = (unsigned __int64)v49;
        }
        else
        {
          if ( v16 )
          {
            v52 = (unsigned int)PsGetThreadId(*(PETHREAD *)v16);
            v49 = 0LL;
          }
          else
          {
            v52 = (unsigned int)v49;
          }
          v51 = v52;
        }
        StoreQMessage(
          v61,
          0LL,
          v48,
          v51,
          v74,
          (unsigned int)v49,
          (unsigned __int64)v49,
          6u,
          (unsigned __int64)v49,
          (unsigned int)v49,
          (struct tagINPUT_MESSAGE_SOURCE *)&v64,
          v50,
          v49,
          (struct tagUIPI_INFO *)v49);
        *((_QWORD *)v61 + 13) = v78;
        SetWakeBit(v78, 8256LL);
        v53 = *(const struct tagWND **)(v42 + 128);
        if ( v53 && IsHungWindow(v53) )
          ProcessHungWindow(*(struct tagWND **)(v42 + 128));
      }
      if ( (v47 & 0x40) == 0 )
        xxxDeliverRestoreFocusMessage((struct tagWND *)a1);
      v33 = a2;
    }
    v54 = 0LL;
    if ( v16 && (*(_DWORD *)(v16 + 488) & 1) == 0 )
      v54 = *(struct _KTHREAD **)(v16 + 432);
    v55 = 0LL;
    if ( v33 )
      v55 = v33[54];
    if ( v54 )
    {
      if ( v54 == v55 )
      {
        v56 = 0;
        if ( a1 )
        {
          TopLevelWindow = (const struct tagWND *)GetTopLevelWindow(a1);
          v58 = TopLevelWindow;
          if ( TopLevelWindow && (unsigned int)CoreWindowProp::IsComponent(TopLevelWindow) )
            v56 = CoreWindowProp::IsHostThreadOf((const struct tagTHREADINFO *)v16, v58) != 0;
          v59 = (unsigned int)PsGetThreadId(**(PETHREAD **)(a1 + 16));
        }
        else
        {
          v59 = 0;
        }
        v44 = a2;
        xxxDeactivate((__int64)a2, v59, v56);
      }
      else
      {
        v44 = a2;
      }
      v25 = v78;
      goto LABEL_125;
    }
    goto LABEL_123;
  }
  ThreadId = (struct tagQMSG *)AllocQEntryEx(v34 + 24, 0LL, 1LL);
  if ( ThreadId )
  {
    v36 = 0LL;
    if ( a1 )
    {
      v37 = (const struct tagWND *)GetTopLevelWindow(a1);
      v38 = v37;
      v36 = v37
         && (unsigned int)CoreWindowProp::IsComponent(v37)
         && CoreWindowProp::IsHostThreadOf((const struct tagTHREADINFO *)v16, v38) != 0;
    }
    v73 = *(_DWORD *)(*(_QWORD *)(PtiKbdFromQ(v34) + 424) + 280LL);
    if ( gptiForeground )
      v39 = PsGetThreadId((PETHREAD)*gptiForeground);
    else
      v39 = 0LL;
    v60 = v36;
    v40 = ThreadId;
    StoreQMessage(
      ThreadId,
      0LL,
      0,
      (unsigned __int64)v39,
      0LL,
      0,
      0LL,
      5u,
      v60,
      0,
      (struct tagINPUT_MESSAGE_SOURCE *)&v64,
      v73,
      0LL,
      0LL);
    if ( v16 )
    {
      *((_QWORD *)v40 + 13) = v16;
      SetWakeBit(v16, 8256LL);
    }
    v41 = *(const struct tagWND **)(v34 + 128);
    if ( v41 && IsHungWindow(v41) )
      ProcessHungWindow(*(struct tagWND **)(v34 + 128));
    v33 = a2;
    goto LABEL_114;
  }
  v5 = 0;
LABEL_124:
  v44 = a2;
LABEL_125:
  if ( v25 )
    PopAndFreeW32ThreadLock(&v66);
  if ( v16 )
    PopAndFreeW32ThreadLock(&v68);
  if ( v44 )
    PopAndFreeW32ThreadLock(&v70);
  return v5;
}
