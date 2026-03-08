/*
 * XREFs of ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C00A126C
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C000E204 (xxxSetModernAppWindow.c)
 *     ?xxxReportHotKeyToShell@@YAXPEAUtagWND@@_J_KPEAUHWND__@@_N@Z @ 0x1C000EE5C (-xxxReportHotKeyToShell@@YAXPEAUtagWND@@_J_KPEAUHWND__@@_N@Z.c)
 *     ?xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z @ 0x1C0013228 (-xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z.c)
 *     xxxSwitchDesktop @ 0x1C00205D4 (xxxSwitchDesktop.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C002498C (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     xxxSetThreadDesktop @ 0x1C00361B8 (xxxSetThreadDesktop.c)
 *     ?xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0097FCC (-xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C00E6D24 (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     EditionHandleAltTab @ 0x1C00F54C0 (EditionHandleAltTab.c)
 *     xxxSystemParametersInfoWorker @ 0x1C01032D0 (xxxSystemParametersInfoWorker.c)
 *     ?xxxTrackingActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x1C01AF5F8 (-xxxTrackingActivateWindow@@YA_NPEAUtagWND@@@Z.c)
 *     xxxNextWindow @ 0x1C01CB604 (xxxNextWindow.c)
 * Callees:
 *     xxxSetWindowPos @ 0x1C0028F4C (xxxSetWindowPos.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C00291D4 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     _GetTopLevelWindow @ 0x1C0035AF0 (_GetTopLevelWindow.c)
 *     SetWakeBit @ 0x1C0038B60 (SetWakeBit.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C003E064 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C003F908 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@W4_AllocQEntryPosition@@@Z @ 0x1C0047DBC (-AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@W4_AllocQEntryPosition@@@Z.c)
 *     ?StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagUIPI_INFO@@@Z @ 0x1C0048A50 (-StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagU.c)
 *     ?xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z @ 0x1C0099940 (-xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxApplyGlobalInputSettings@@YAXH@Z @ 0x1C009AD2C (-xxxApplyGlobalInputSettings@@YAXH@Z.c)
 *     ?xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C009AEB4 (-xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     zzzInputFocusReceivedWindowEvent @ 0x1C009B35C (zzzInputFocusReceivedWindowEvent.c)
 *     zzzInputFocusLostWindowEvent @ 0x1C009BA70 (zzzInputFocusLostWindowEvent.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C009BD38 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qDD @ 0x1C009D664 (WPP_RECORDER_AND_TRACE_SF_qDD.c)
 *     ?xxxUpdateTray@@YAXPEAUtagWND@@@Z @ 0x1C009DE3C (-xxxUpdateTray@@YAXPEAUtagWND@@@Z.c)
 *     _anonymous_namespace_::RemoveEventMessage @ 0x1C009DFD4 (_anonymous_namespace_--RemoveEventMessage.c)
 *     _anonymous_namespace_::xxxSendNCActivateMessage @ 0x1C009E068 (_anonymous_namespace_--xxxSendNCActivateMessage.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C009E0E4 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     PtiKbdFromQ @ 0x1C009FA48 (PtiKbdFromQ.c)
 *     ?IsHungWindow@@YA_NPEBUtagWND@@@Z @ 0x1C009FF14 (-IsHungWindow@@YA_NPEBUtagWND@@@Z.c)
 *     LockW32Thread @ 0x1C00A1BCC (LockW32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00A1CA0 (PopAndFreeW32ThreadLock.c)
 *     IsWindowUnderActiveLockScreen @ 0x1C00A2F70 (IsWindowUnderActiveLockScreen.c)
 *     SetNewForegroundQueue @ 0x1C00CE270 (SetNewForegroundQueue.c)
 *     xxxCancelTracking @ 0x1C00D22FC (xxxCancelTracking.c)
 *     _anonymous_namespace_::UpdateKeyStateFlag @ 0x1C00DE944 (_anonymous_namespace_--UpdateKeyStateFlag.c)
 *     zzzLockWindowUpdate2 @ 0x1C00E51C8 (zzzLockWindowUpdate2.c)
 *     zzzActiveCursorTracking @ 0x1C01B8530 (zzzActiveCursorTracking.c)
 *     ?ProcessHungWindow@@YAXPEAUtagWND@@@Z @ 0x1C01F4E68 (-ProcessHungWindow@@YAXPEAUtagWND@@@Z.c)
 *     ?IsHostThreadOf@CoreWindowProp@@SAHPEBUtagTHREADINFO@@PEBUtagWND@@@Z @ 0x1C02230D8 (-IsHostThreadOf@CoreWindowProp@@SAHPEBUtagTHREADINFO@@PEBUtagWND@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxSetForegroundWindow2(__int64 a1, PETHREAD *a2, unsigned int a3)
{
  unsigned int v5; // ebx
  int v6; // edx
  int v7; // r8d
  int v8; // r9d
  PDEVICE_OBJECT v9; // rcx
  __int16 v10; // ax
  bool v12; // al
  char v13; // dl
  __int64 v14; // rsi
  struct tagTHREADINFO *v15; // rcx
  struct tagWND *v16; // rdx
  __int64 v17; // r12
  struct tagWND *v18; // rcx
  PETHREAD *v19; // rdx
  __int64 v20; // r14
  PETHREAD v21; // rax
  _BOOL8 v22; // r12
  const struct tagWND *v23; // rax
  const struct tagWND *v24; // r12
  HANDLE v25; // rax
  struct tagQMSG *v26; // r12
  const struct tagTHREADINFO **v27; // rcx
  __int64 v28; // r14
  PETHREAD v29; // r12
  PETHREAD *v30; // rdi
  int v31; // ecx
  bool v32; // zf
  char v33; // r12
  int v34; // r13d
  void *v35; // rdx
  unsigned int v36; // r15d
  __int64 v37; // r9
  unsigned int v38; // eax
  const struct tagTHREADINFO **v39; // rcx
  int ThreadId; // eax
  struct _KTHREAD *v41; // rcx
  PETHREAD v42; // rax
  char v43; // r14
  const struct tagWND *TopLevelWindow; // rax
  const struct tagWND *v45; // r15
  int v46; // eax
  __int64 v47; // [rsp+20h] [rbp-A9h]
  unsigned __int64 v48; // [rsp+40h] [rbp-89h]
  unsigned __int64 v49; // [rsp+40h] [rbp-89h]
  struct tagQMSG *v50; // [rsp+70h] [rbp-59h]
  __int64 v51; // [rsp+78h] [rbp-51h] BYREF
  __int64 v52; // [rsp+80h] [rbp-49h] BYREF
  __int64 v53; // [rsp+88h] [rbp-41h] BYREF
  struct tagQMSG *v54; // [rsp+90h] [rbp-39h]
  __int128 v55; // [rsp+98h] [rbp-31h] BYREF
  __int64 v56; // [rsp+A8h] [rbp-21h]
  __int128 v57; // [rsp+B0h] [rbp-19h] BYREF
  __int64 v58; // [rsp+C0h] [rbp-9h]
  __int128 v59; // [rsp+C8h] [rbp-1h] BYREF
  __int64 v60; // [rsp+D8h] [rbp+Fh]
  char v61; // [rsp+130h] [rbp+67h]
  unsigned int v62; // [rsp+130h] [rbp+67h]
  __int64 v63; // [rsp+130h] [rbp+67h]
  char v66; // [rsp+148h] [rbp+7Fh]
  __int64 v67; // [rsp+148h] [rbp+7Fh]

  v58 = 0LL;
  v56 = 0LL;
  v60 = 0LL;
  v57 = 0LL;
  v5 = 1;
  v55 = 0LL;
  v53 = 0LL;
  v52 = 0LL;
  v51 = 0LL;
  v59 = 0LL;
  SetSystemInputSource(&v53);
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
      v10 = 86;
      goto LABEL_19;
    }
    if ( (unsigned int)IsWindowUnderActiveLockScreen(a1) )
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
        (__int64)&WPP_1f5084c5bd003b11755bdb3c506305c0_Traceguids);
      return 0LL;
    }
  }
  if ( a2 )
    LockW32Thread(a2, &v59);
  v12 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  v61 = v12;
  v66 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    PsGetThreadId((PETHREAD)*gptiCurrent);
    if ( a2 )
      PsGetThreadId(*a2);
    HIDWORD(v48) = HIDWORD(a1);
    WPP_RECORDER_AND_TRACE_SF_qDD(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v61,
      v66,
      (__int64)gFullLog,
      v47,
      2u,
      0x58u,
      (__int64)&WPP_1f5084c5bd003b11755bdb3c506305c0_Traceguids);
  }
  v13 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v48) = a3;
    WPP_RECORDER_AND_TRACE_SF_D(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v13,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gFullLog,
      4u,
      2u,
      0x59u,
      (__int64)&WPP_1f5084c5bd003b11755bdb3c506305c0_Traceguids,
      v48);
  }
  gppiLockSFW = 0LL;
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
      90,
      (__int64)&WPP_1f5084c5bd003b11755bdb3c506305c0_Traceguids);
  }
  v14 = gptiForeground;
  if ( !gptiForeground || (*(_DWORD *)(gptiForeground + 488LL) & 1) != 0 )
    v14 = 0LL;
  else
    LockW32Thread(gptiForeground, &v57);
  gpqForegroundPrev = gpqForeground;
  if ( a1 )
  {
    v67 = *(_QWORD *)(a1 + 16);
    SetNewForegroundQueue(*(_QWORD *)(v67 + 432));
    LockW32Thread(v67, &v55);
    v15 = *(struct tagTHREADINFO **)(a1 + 16);
    v16 = (struct tagWND *)a1;
    v17 = v67;
  }
  else
  {
    v17 = 0LL;
    v67 = 0LL;
    SetNewForegroundQueue(0LL);
    v15 = 0LL;
    v16 = 0LL;
  }
  xxxSetForegroundThreadWithWindowHint(v15, v16);
  if ( (a3 & 0x20) == 0 )
  {
    if ( gpqForeground )
      v52 = *(_QWORD *)(gpqForeground + 432LL);
    if ( gpqForegroundPrev )
      v51 = *(_QWORD *)(gpqForegroundPrev + 432LL);
    if ( !(unsigned __int8)CheckAccess(&v52, &v51) )
    {
      ClearKeyboardToggleStates();
      anonymous_namespace_::UpdateKeyStateFlag();
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
    goto LABEL_110;
  if ( gpqForegroundPrev )
  {
    v18 = *(struct tagWND **)(gpqForegroundPrev + 120LL);
    if ( v18 )
      zzzInputFocusLostWindowEvent(v18, 1u);
  }
  if ( gpqForeground && *(_QWORD *)(gpqForeground + 120LL) )
    zzzInputFocusReceivedWindowEvent(1u);
  v19 = a2;
  if ( a2 )
  {
    xxxCancelTracking();
    CCursorClip::ClearClip(gpCursorClip);
    zzzLockWindowUpdate2(0LL, 1LL);
    v19 = a2;
  }
  v20 = 0LL;
  if ( v14 && (*(_DWORD *)(v14 + 488) & 1) == 0 )
    v20 = *(_QWORD *)(v14 + 432);
  v21 = 0LL;
  if ( v19 )
    v21 = v19[54];
  v50 = 0LL;
  if ( !v20 || (PETHREAD)v20 == v21 )
  {
LABEL_100:
    v28 = 0LL;
    if ( v67 && (*(_DWORD *)(v67 + 488) & 1) == 0 )
      v28 = *(_QWORD *)(v67 + 432);
    v29 = 0LL;
    if ( v19 )
      v29 = v19[54];
    if ( v28 )
    {
      if ( (PETHREAD)v28 != v29 )
      {
        v50 = (struct tagQMSG *)AllocQEntryEx(v28 + 24, 0LL, 1);
        if ( !v50 )
        {
          v5 = 0;
LABEL_109:
          v17 = v67;
          goto LABEL_110;
        }
      }
      v31 = anonymous_namespace_::RemoveEventMessage(v28, 5, -1);
      if ( (PETHREAD)v28 == v29 )
      {
        if ( a1 == *((_QWORD *)v29 + 16) )
        {
          anonymous_namespace_::xxxSendNCActivateMessage((struct tagWND *)a1, 1LL);
          xxxUpdateTray((struct tagWND *)a1);
          v33 = a3;
          if ( (a3 & 4) == 0 )
            xxxSetWindowPos((struct tagWND *)a1, 0LL, 0LL, 0LL, 0, 0, 3);
        }
        else
        {
          v33 = a3;
          if ( (a3 & 1) == 0 )
          {
            if ( v14 )
              ThreadId = (unsigned int)PsGetThreadId(*(PETHREAD *)v14);
            else
              ThreadId = 0;
            anonymous_namespace_::xxxLocalActivateWindow((struct tagWND *)a1, ThreadId, ~(16 * a3) & 0x80);
            if ( ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0 )
              zzzActiveCursorTracking((struct tagWND *)a1);
            goto LABEL_109;
          }
        }
      }
      else
      {
        v32 = v29 == 0LL;
        v33 = a3;
        if ( (!v32 || (a3 & 2) != 0) && a1 )
          v63 = *(_QWORD *)a1;
        else
          v63 = 0LL;
        if ( v31 )
          *(_DWORD *)(v28 + 396) |= 0x8000u;
        v34 = (a3 >> 4) & 1 | 2;
        if ( (a3 & 4) == 0 )
          v34 = (a3 >> 4) & 1;
        v36 = *(_DWORD *)(*(_QWORD *)(PtiKbdFromQ(v28) + 424) + 280LL);
        if ( (a3 & 1) != 0 )
        {
          v37 = (__int64)v35;
        }
        else
        {
          if ( v14 )
          {
            v38 = (unsigned int)PsGetThreadId(*(PETHREAD *)v14);
            v35 = 0LL;
          }
          else
          {
            v38 = (unsigned int)v35;
          }
          v37 = v38;
        }
        StoreQMessage(
          v50,
          0LL,
          v34,
          v37,
          v63,
          (unsigned int)v35,
          (unsigned __int64)v35,
          6u,
          (unsigned __int64)v35,
          (char)v35,
          (struct tagINPUT_MESSAGE_SOURCE *)&v53,
          v36,
          v35,
          (struct tagUIPI_INFO *)v35);
        *((_QWORD *)v50 + 13) = v67;
        SetWakeBit(v67, 0x2040u);
        v39 = *(const struct tagTHREADINFO ***)(v28 + 128);
        if ( v39 && IsHungWindow(v39) )
          ProcessHungWindow(*(struct tagWND **)(v28 + 128));
      }
      if ( (v33 & 0x40) == 0 )
        xxxDeliverRestoreFocusMessage((struct tagWND *)a1);
      v19 = a2;
    }
    v41 = 0LL;
    if ( v14 && (*(_DWORD *)(v14 + 488) & 1) == 0 )
      v41 = *(struct _KTHREAD **)(v14 + 432);
    v42 = 0LL;
    if ( v19 )
      v42 = v19[54];
    if ( v41 )
    {
      if ( v41 == v42 )
      {
        v43 = 0;
        if ( a1 )
        {
          TopLevelWindow = (const struct tagWND *)GetTopLevelWindow(a1);
          v45 = TopLevelWindow;
          if ( TopLevelWindow && (unsigned int)CoreWindowProp::IsComponent(TopLevelWindow) )
            v43 = CoreWindowProp::IsHostThreadOf((const struct tagTHREADINFO *)v14, v45) != 0;
          v46 = (unsigned int)PsGetThreadId(**(PETHREAD **)(a1 + 16));
        }
        else
        {
          v46 = 0;
        }
        v30 = a2;
        xxxDeactivate((__int64)a2, v46, v43);
      }
      else
      {
        v30 = a2;
      }
      v17 = v67;
      goto LABEL_111;
    }
    goto LABEL_109;
  }
  v54 = (struct tagQMSG *)AllocQEntryEx(v20 + 24, 0LL, 1);
  if ( v54 )
  {
    v22 = 0LL;
    if ( a1 )
    {
      v23 = (const struct tagWND *)GetTopLevelWindow(a1);
      v24 = v23;
      v22 = v23
         && (unsigned int)CoreWindowProp::IsComponent(v23)
         && CoreWindowProp::IsHostThreadOf((const struct tagTHREADINFO *)v14, v24) != 0;
    }
    v62 = *(_DWORD *)(*(_QWORD *)(PtiKbdFromQ(v20) + 424) + 280LL);
    if ( gptiForeground )
      v25 = PsGetThreadId((PETHREAD)*gptiForeground);
    else
      v25 = 0LL;
    v49 = v22;
    v26 = v54;
    StoreQMessage(
      v54,
      0LL,
      0,
      (__int64)v25,
      0LL,
      0,
      0LL,
      5u,
      v49,
      0,
      (struct tagINPUT_MESSAGE_SOURCE *)&v53,
      v62,
      0LL,
      0LL);
    if ( v14 )
    {
      *((_QWORD *)v26 + 13) = v14;
      SetWakeBit(v14, 0x2040u);
    }
    v27 = *(const struct tagTHREADINFO ***)(v20 + 128);
    if ( v27 && IsHungWindow(v27) )
      ProcessHungWindow(*(struct tagWND **)(v20 + 128));
    v19 = a2;
    goto LABEL_100;
  }
  v5 = 0;
LABEL_110:
  v30 = a2;
LABEL_111:
  if ( v17 )
    PopAndFreeW32ThreadLock(&v55);
  if ( v14 )
    PopAndFreeW32ThreadLock(&v57);
  if ( v30 )
    PopAndFreeW32ThreadLock(&v59);
  return v5;
}
