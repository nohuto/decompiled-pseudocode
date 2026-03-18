/*
 * XREFs of ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C007D36C
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C0002004 (xxxSetModernAppWindow.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C007BCDC (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     xxxSystemParametersInfoWorker @ 0x1C009EBF8 (xxxSystemParametersInfoWorker.c)
 *     xxxSetThreadDesktop @ 0x1C00A9A4C (xxxSetThreadDesktop.c)
 *     xxxSwitchDesktop @ 0x1C00B0E54 (xxxSwitchDesktop.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C00DBE0C (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     xxxDoHotKeyStuff @ 0x1C00F6330 (xxxDoHotKeyStuff.c)
 *     ?xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z @ 0x1C011E5AC (-xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z.c)
 *     EditionHandleAltTab @ 0x1C0121AA0 (EditionHandleAltTab.c)
 *     ?xxxTrackingActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x1C01CEC88 (-xxxTrackingActivateWindow@@YA_NPEAUtagWND@@@Z.c)
 *     xxxNextWindow @ 0x1C01EE910 (xxxNextWindow.c)
 * Callees:
 *     xxxSetWindowPos @ 0x1C0048A4C (xxxSetWindowPos.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C0048EF8 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagUIPI_INFO@@@Z @ 0x1C0058160 (-StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagU.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqq @ 0x1C005BAB8 (WPP_RECORDER_AND_TRACE_SF_qqq.c)
 *     ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z @ 0x1C005BB70 (-AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z.c)
 *     PopAndFreeW32ThreadLock @ 0x1C005BDE0 (PopAndFreeW32ThreadLock.c)
 *     ClearHungFlag @ 0x1C005F8F0 (ClearHungFlag.c)
 *     _GetTopLevelWindow @ 0x1C0075BF0 (_GetTopLevelWindow.c)
 *     IsWindowUnderActiveLockScreen @ 0x1C00779AC (IsWindowUnderActiveLockScreen.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0077CC4 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C007DC84 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     LockW32Thread @ 0x1C007EAAC (LockW32Thread.c)
 *     _anonymous_namespace_::xxxSendNCActivateMessage @ 0x1C007FC50 (_anonymous_namespace_--xxxSendNCActivateMessage.c)
 *     SetNewForegroundQueue @ 0x1C007FCD0 (SetNewForegroundQueue.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C00A22D8 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     ?xxxUpdateTray@@YAXPEAUtagWND@@@Z @ 0x1C00A41CC (-xxxUpdateTray@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxApplyGlobalInputSettings@@YAXH@Z @ 0x1C00A81DC (-xxxApplyGlobalInputSettings@@YAXH@Z.c)
 *     ?xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C00A8268 (-xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     zzzInputFocusReceivedWindowEvent @ 0x1C00A86E4 (zzzInputFocusReceivedWindowEvent.c)
 *     zzzInputFocusLostWindowEvent @ 0x1C00A8748 (zzzInputFocusLostWindowEvent.c)
 *     ?IsThreadHung@@YAHPEBUtagTHREADINFO@@K@Z @ 0x1C00A93A4 (-IsThreadHung@@YAHPEBUtagTHREADINFO@@K@Z.c)
 *     SetWakeBit @ 0x1C00ABE30 (SetWakeBit.c)
 *     PtiKbdFromQ @ 0x1C00AC810 (PtiKbdFromQ.c)
 *     _anonymous_namespace_::UpdateKeyStateFlag @ 0x1C00B1A10 (_anonymous_namespace_--UpdateKeyStateFlag.c)
 *     zzzLockWindowUpdate2 @ 0x1C00DBFA8 (zzzLockWindowUpdate2.c)
 *     xxxCancelTracking @ 0x1C00DCB94 (xxxCancelTracking.c)
 *     _anonymous_namespace_::RemoveEventMessage @ 0x1C01095EC (_anonymous_namespace_--RemoveEventMessage.c)
 *     ?xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z @ 0x1C010C53C (-xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z.c)
 *     SetHungFlag @ 0x1C0110FEC (SetHungFlag.c)
 *     ?ProcessHungWindow@@YAHPEAUtagWND@@@Z @ 0x1C0144840 (-ProcessHungWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?IsHostThreadOf@CoreWindowProp@@SAHPEBUtagTHREADINFO@@PEBUtagWND@@@Z @ 0x1C01513C0 (-IsHostThreadOf@CoreWindowProp@@SAHPEBUtagTHREADINFO@@PEBUtagWND@@@Z.c)
 *     zzzActiveCursorTracking @ 0x1C01DD5E8 (zzzActiveCursorTracking.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxSetForegroundWindow2(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v6; // esi
  int v7; // edx
  int v8; // r8d
  int v9; // r9d
  char v10; // dl
  __int64 v11; // r14
  struct tagTHREADINFO *v12; // rcx
  struct tagWND *v13; // rdx
  struct tagTHREADINFO *v14; // r15
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rbx
  __int64 v18; // rax
  _BOOL8 v19; // r15
  const struct tagWND *TopLevelWindow; // rax
  const struct tagWND *v21; // r15
  HANDLE ThreadId; // rax
  struct tagQMSG *v23; // r15
  __int64 v24; // rbx
  __int64 v25; // r15
  int v26; // eax
  __int64 v27; // r15
  int v28; // edx
  int v29; // edx
  void *v30; // r8
  unsigned int v31; // r12d
  unsigned int v32; // eax
  __int64 v33; // r9
  struct tagQMSG *v34; // r12
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rbx
  PDEVICE_OBJECT v39; // rcx
  __int16 v40; // ax
  BOOL v41; // ebx
  const struct tagWND *v42; // rax
  const struct tagWND *v43; // r15
  unsigned int v44; // eax
  _BOOL8 v45; // r8
  int v46; // ecx
  int v47; // eax
  struct tagWND *v48; // rcx
  struct tagWND *v49; // rcx
  struct tagWND *v50; // rbx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  struct tagWND *v54; // rbx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  unsigned __int64 v58; // [rsp+40h] [rbp-99h]
  unsigned int v59; // [rsp+58h] [rbp-81h]
  __int64 v60; // [rsp+70h] [rbp-69h] BYREF
  __int64 v61; // [rsp+78h] [rbp-61h] BYREF
  __int64 v62; // [rsp+80h] [rbp-59h] BYREF
  __int64 v63; // [rsp+88h] [rbp-51h]
  struct tagQMSG *v64; // [rsp+90h] [rbp-49h]
  __int64 v65; // [rsp+98h] [rbp-41h] BYREF
  struct tagWND *v66; // [rsp+A0h] [rbp-39h]
  __int64 v67; // [rsp+A8h] [rbp-31h]
  struct tagQMSG *v68; // [rsp+B0h] [rbp-29h]
  __int128 v69; // [rsp+B8h] [rbp-21h] BYREF
  __int64 v70; // [rsp+C8h] [rbp-11h]
  __int128 v71; // [rsp+D0h] [rbp-9h] BYREF
  __int64 v72; // [rsp+E0h] [rbp+7h]
  __int128 v73; // [rsp+E8h] [rbp+Fh] BYREF
  __int64 v74; // [rsp+F8h] [rbp+1Fh]
  unsigned int v75; // [rsp+140h] [rbp+67h]
  unsigned int v76; // [rsp+140h] [rbp+67h]
  struct tagTHREADINFO *v78; // [rsp+158h] [rbp+7Fh]

  v72 = 0LL;
  v70 = 0LL;
  v74 = 0LL;
  v62 = 0LL;
  v61 = 0LL;
  v71 = 0LL;
  v6 = 1;
  v63 = gptiCurrent;
  v69 = 0LL;
  v60 = 0LL;
  v73 = 0LL;
  SetSystemInputSource(&v62);
  if ( a1 )
  {
    if ( *(_QWORD *)(a1 + 24) == grpdeskRitInput && *(char *)(*(_QWORD *)(a1 + 40) + 19LL) >= 0 )
    {
      if ( !(unsigned int)IsWindowUnderActiveLockScreen(a1) )
        goto LABEL_5;
      v39 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        LOBYTE(v6) = 0;
      }
      LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v6 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v40 = 68;
    }
    else
    {
      v39 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        LOBYTE(v6) = 0;
      }
      LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v6 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v40 = 67;
    }
    LOBYTE(v7) = v6;
    WPP_RECORDER_AND_TRACE_SF_(
      v39->AttachedDevice,
      v7,
      v8,
      v9,
      4,
      2,
      v40,
      (__int64)&WPP_76ccfc4204be37e1ff60c5115401253e_Traceguids);
    return 0LL;
  }
LABEL_5:
  if ( a2 )
    LockW32Thread(a2, &v73);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
    || (v10 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v10 = 0;
  }
  if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_qqq(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v10,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
      4u,
      2u,
      0x45u,
      (__int64)&WPP_76ccfc4204be37e1ff60c5115401253e_Traceguids,
      a1,
      a2,
      v63);
  LOBYTE(v7) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      v7,
      v8,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      2,
      70,
      (__int64)&WPP_76ccfc4204be37e1ff60c5115401253e_Traceguids,
      a3);
  }
  gppiLockSFW = 0LL;
  v11 = gptiForeground;
  if ( !gptiForeground || (*(_DWORD *)(gptiForeground + 488LL) & 1) != 0 )
    v11 = 0LL;
  else
    LockW32Thread(gptiForeground, &v71);
  gpqForegroundPrev = gpqForeground;
  if ( a1 )
  {
    v78 = *(struct tagTHREADINFO **)(a1 + 16);
    SetNewForegroundQueue(*((_QWORD *)v78 + 54));
    LockW32Thread(v78, &v69);
    v12 = *(struct tagTHREADINFO **)(a1 + 16);
    v13 = (struct tagWND *)a1;
    v14 = v78;
  }
  else
  {
    v14 = 0LL;
    v78 = 0LL;
    SetNewForegroundQueue(0LL);
    v12 = 0LL;
    v13 = 0LL;
  }
  xxxSetForegroundThreadWithWindowHint(v12, v13);
  if ( (a3 & 0x20) == 0 )
  {
    if ( gpqForeground )
      v61 = *(_QWORD *)(gpqForeground + 424LL);
    if ( gpqForegroundPrev )
      v60 = *(_QWORD *)(gpqForegroundPrev + 424LL);
    if ( !(unsigned __int8)CheckAccess(&v61, &v60) )
    {
      ClearKeyboardToggleStates();
      anonymous_namespace_::UpdateKeyStateFlag();
    }
  }
  if ( gpqForeground )
  {
    if ( gpqForeground != gpqForegroundPrev )
    {
      if ( *(_QWORD *)(gpqForeground + 112LL) )
      {
        v46 = HIDWORD(gpdwCPUserPreferencesMask);
        if ( (v46 & 0x80u) == 0 )
          xxxApplyGlobalInputSettings(v46);
      }
    }
  }
  if ( gpqForeground == gpqForegroundPrev )
    goto LABEL_111;
  if ( gpqForegroundPrev )
  {
    v15 = *(_QWORD *)(gpqForegroundPrev + 112LL);
    if ( v15 )
      zzzInputFocusLostWindowEvent(v15, 1LL);
  }
  if ( gpqForeground && *(_QWORD *)(gpqForeground + 112LL) )
    zzzInputFocusReceivedWindowEvent(1LL);
  v16 = a2;
  if ( a2 )
  {
    xxxCancelTracking();
    CCursorClip::ClearClip(gpCursorClip);
    zzzLockWindowUpdate2(0LL, 1LL);
    v16 = a2;
  }
  v17 = 0LL;
  if ( v11 && (*(_DWORD *)(v11 + 488) & 1) == 0 )
    v17 = *(_QWORD *)(v11 + 432);
  v18 = 0LL;
  if ( v16 )
    v18 = *(_QWORD *)(v16 + 432);
  v64 = 0LL;
  if ( v17 && v17 != v18 )
  {
    v68 = AllocQEntryEx((struct tagMLIST *)(v17 + 24), 0LL, 0);
    if ( !v68 )
    {
      v6 = 0;
      goto LABEL_111;
    }
    v19 = 0LL;
    if ( a1 )
    {
      TopLevelWindow = (const struct tagWND *)GetTopLevelWindow(a1);
      v21 = TopLevelWindow;
      v19 = TopLevelWindow
         && (unsigned int)CoreWindowProp::IsComponent(TopLevelWindow)
         && CoreWindowProp::IsHostThreadOf((const struct tagTHREADINFO *)v11, v21) != 0;
    }
    v75 = *(_DWORD *)(*(_QWORD *)(PtiKbdFromQ(v17) + 424) + 280LL);
    if ( gptiForeground )
      ThreadId = PsGetThreadId((PETHREAD)*gptiForeground);
    else
      ThreadId = 0LL;
    v58 = v19;
    v23 = v68;
    StoreQMessage(
      v68,
      0LL,
      0,
      (__int64)ThreadId,
      0LL,
      0,
      0LL,
      5u,
      v58,
      0,
      (struct tagINPUT_MESSAGE_SOURCE *)&v62,
      v75,
      0LL,
      0LL);
    if ( v11 )
    {
      *((_QWORD *)v23 + 13) = v11;
      SetWakeBit(v11, 8256LL);
    }
    if ( *(_QWORD *)(v17 + 120) )
    {
      if ( v11 && (unsigned int)IsThreadHung((const struct tagTHREADINFO *)v11, 0) )
      {
        v49 = *(struct tagWND **)(v17 + 120);
        v67 = 0LL;
        v66 = v49;
        v65 = *(_QWORD *)(v63 + 416);
        *(_QWORD *)(v63 + 416) = &v65;
        HMLockObject(v49);
        v50 = *(struct tagWND **)(v17 + 120);
        ClearHungFlag(v50, 0x310u);
        ProcessHungWindow(v50);
        ThreadUnlock1(v52, v51, v53);
      }
      else
      {
        SetHungFlag(*(struct tagWND **)(v17 + 120));
      }
    }
    v16 = a2;
  }
  v24 = 0LL;
  if ( v78 && (*((_DWORD *)v78 + 122) & 1) == 0 )
    v24 = *((_QWORD *)v78 + 54);
  v25 = 0LL;
  if ( v16 )
    v25 = *(_QWORD *)(v16 + 432);
  if ( !v24 )
    goto LABEL_88;
  if ( v24 == v25 || (v64 = AllocQEntryEx((struct tagMLIST *)(v24 + 24), 0LL, 0)) != 0LL )
  {
    v26 = anonymous_namespace_::RemoveEventMessage(v24, 5LL);
    if ( v24 != v25 )
    {
      if ( v25 || (a3 & 2) != 0 )
      {
        v27 = 0LL;
        if ( a1 )
          v27 = *(_QWORD *)a1;
      }
      else
      {
        v27 = 0LL;
      }
      if ( v26 )
        *(_DWORD *)(v24 + 388) |= 0x8000u;
      v28 = (a3 >> 4) & 1 | 2;
      if ( (a3 & 4) == 0 )
        v28 = (a3 >> 4) & 1;
      v76 = v28;
      v31 = *(_DWORD *)(*(_QWORD *)(PtiKbdFromQ(v24) + 424) + 280LL);
      if ( (a3 & 1) != 0 )
      {
        v33 = (__int64)v30;
      }
      else
      {
        if ( v11 )
        {
          v32 = (unsigned int)PsGetThreadId(*(PETHREAD *)v11);
          v29 = v76;
          v30 = 0LL;
        }
        else
        {
          v32 = (unsigned int)v30;
        }
        v33 = v32;
      }
      v59 = v31;
      v34 = v64;
      StoreQMessage(
        v64,
        0LL,
        v29,
        v33,
        v27,
        (unsigned int)v30,
        (unsigned __int64)v30,
        6u,
        (unsigned __int64)v30,
        (char)v30,
        (struct tagINPUT_MESSAGE_SOURCE *)&v62,
        v59,
        v30,
        (struct tagUIPI_INFO *)v30);
      *((_QWORD *)v34 + 13) = v78;
      SetWakeBit(v78, 8256LL);
      if ( *(_QWORD *)(v24 + 120) )
      {
        v47 = IsThreadHung(v78, 0);
        v48 = *(struct tagWND **)(v24 + 120);
        if ( v47 )
        {
          v67 = 0LL;
          v66 = v48;
          v65 = *(_QWORD *)(v63 + 416);
          *(_QWORD *)(v63 + 416) = &v65;
          HMLockObject(v48);
          v54 = *(struct tagWND **)(v24 + 120);
          ClearHungFlag(v54, 0x310u);
          ProcessHungWindow(v54);
          ThreadUnlock1(v56, v55, v57);
        }
        else
        {
          SetHungFlag(v48);
        }
      }
      goto LABEL_85;
    }
    if ( a1 == *(_QWORD *)(v25 + 120) )
    {
      anonymous_namespace_::xxxSendNCActivateMessage((struct tagWND *)a1);
      xxxUpdateTray((struct tagWND *)a1);
      if ( (a3 & 4) == 0 )
        xxxSetWindowPos((struct tagWND *)a1, 0LL, 0LL, 0LL, 0, 0, 3);
      goto LABEL_85;
    }
    if ( (a3 & 1) != 0 )
    {
LABEL_85:
      if ( (a3 & 0x40) == 0 )
        xxxDeliverRestoreFocusMessage((struct tagWND *)a1);
      v16 = a2;
LABEL_88:
      v35 = 0LL;
      if ( v11 && (*(_DWORD *)(v11 + 488) & 1) == 0 )
        v35 = *(_QWORD *)(v11 + 432);
      v36 = 0LL;
      if ( v16 )
        v36 = *(_QWORD *)(v16 + 432);
      if ( v35 )
      {
        if ( v35 == v36 )
        {
          v41 = 0;
          if ( a1 )
          {
            v42 = (const struct tagWND *)GetTopLevelWindow(a1);
            v43 = v42;
            if ( v42 && (unsigned int)CoreWindowProp::IsComponent(v42) )
              v41 = CoreWindowProp::IsHostThreadOf((const struct tagTHREADINFO *)v11, v43) != 0;
            v44 = (unsigned int)PsGetThreadId(**(PETHREAD **)(a1 + 16));
          }
          else
          {
            v44 = 0;
          }
          v45 = v41;
          v37 = a2;
          xxxDeactivate(a2, v44, v45);
        }
        else
        {
          v37 = a2;
        }
        v14 = v78;
        goto LABEL_97;
      }
      goto LABEL_110;
    }
    if ( v11 )
      PsGetThreadId(*(PETHREAD *)v11);
    anonymous_namespace_::xxxLocalActivateWindow((struct tagWND *)a1);
    if ( ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0 )
      zzzActiveCursorTracking((struct tagWND *)a1);
  }
  else
  {
    v6 = 0;
  }
LABEL_110:
  v14 = v78;
LABEL_111:
  v37 = a2;
LABEL_97:
  if ( v14 )
    PopAndFreeW32ThreadLock((__int64)&v69);
  if ( v11 )
    PopAndFreeW32ThreadLock((__int64)&v71);
  if ( v37 )
    PopAndFreeW32ThreadLock((__int64)&v73);
  return v6;
}
