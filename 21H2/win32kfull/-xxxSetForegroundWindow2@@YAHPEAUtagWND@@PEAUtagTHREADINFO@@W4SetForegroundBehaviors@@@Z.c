/*
 * XREFs of ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C003D28C
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C00058B0 (xxxSetModernAppWindow.c)
 *     xxxSwitchDesktop @ 0x1C0029904 (xxxSwitchDesktop.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C003B09C (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     xxxSetThreadDesktop @ 0x1C00D95C0 (xxxSetThreadDesktop.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00DD338 (xxxSystemParametersInfoWorker.c)
 *     xxxDoHotKeyStuff @ 0x1C01052A0 (xxxDoHotKeyStuff.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C0120404 (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     EditionHandleAltTab @ 0x1C0131FC0 (EditionHandleAltTab.c)
 *     ?xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z @ 0x1C0132650 (-xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z.c)
 *     ?xxxTrackingActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x1C01D28E0 (-xxxTrackingActivateWindow@@YA_NPEAUtagWND@@@Z.c)
 *     xxxNextWindow @ 0x1C01F412C (xxxNextWindow.c)
 * Callees:
 *     ProcessHungWindow @ 0x1C00037AC (ProcessHungWindow.c)
 *     _anonymous_namespace_::UpdateKeyStateFlag @ 0x1C002A440 (_anonymous_namespace_--UpdateKeyStateFlag.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C0031A40 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     xxxApplyGlobalInputSettings @ 0x1C0034B6C (xxxApplyGlobalInputSettings.c)
 *     ?xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C0034BF4 (-xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     zzzInputFocusLostWindowEvent @ 0x1C003501C (zzzInputFocusLostWindowEvent.c)
 *     zzzInputFocusReceivedWindowEvent @ 0x1C003508C (zzzInputFocusReceivedWindowEvent.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C0039F08 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     _anonymous_namespace_::xxxSendNCActivateMessage @ 0x1C003A730 (_anonymous_namespace_--xxxSendNCActivateMessage.c)
 *     ?xxxUpdateTray@@YAXPEAUtagWND@@@Z @ 0x1C003A884 (-xxxUpdateTray@@YAXPEAUtagWND@@@Z.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C003AA88 (xxxMakeWindowForegroundWithState.c)
 *     _anonymous_namespace_::RemoveEventMessage @ 0x1C003ADE8 (_anonymous_namespace_--RemoveEventMessage.c)
 *     LockW32Thread @ 0x1C003DA6C (LockW32Thread.c)
 *     SetNewForegroundQueue @ 0x1C003DC10 (SetNewForegroundQueue.c)
 *     zzzLockWindowUpdate2 @ 0x1C003DDFC (zzzLockWindowUpdate2.c)
 *     xxxCancelTracking @ 0x1C003DE90 (xxxCancelTracking.c)
 *     IsThreadHung @ 0x1C003E194 (IsThreadHung.c)
 *     IsWindowUnderActiveLockScreen @ 0x1C004DEE4 (IsWindowUnderActiveLockScreen.c)
 *     PtiKbdFromQ @ 0x1C004FC28 (PtiKbdFromQ.c)
 *     SetWakeBit @ 0x1C0051920 (SetWakeBit.c)
 *     ?StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagUIPI_INFO@@@Z @ 0x1C0055240 (-StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagU.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C006B740 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     xxxSetWindowPos @ 0x1C006BC54 (xxxSetWindowPos.c)
 *     _GetTopLevelWindow @ 0x1C006FCC0 (_GetTopLevelWindow.c)
 *     ClearHungFlag @ 0x1C007BEC8 (ClearHungFlag.c)
 *     ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C00C1800 (--0-$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00C1890 (PopAndFreeW32ThreadLock.c)
 *     ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z @ 0x1C01012A4 (-AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z.c)
 *     ?IsHostThreadOf@CoreWindowProp@@SAHPEBUtagTHREADINFO@@PEBUtagWND@@@Z @ 0x1C01228B0 (-IsHostThreadOf@CoreWindowProp@@SAHPEBUtagTHREADINFO@@PEBUtagWND@@@Z.c)
 *     SetHungFlag @ 0x1C0125700 (SetHungFlag.c)
 *     ?xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z @ 0x1C012619C (-xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z.c)
 *     zzzActiveCursorTracking @ 0x1C01E2B98 (zzzActiveCursorTracking.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxSetForegroundWindow2(__int64 a1, __int64 a2, char a3)
{
  unsigned int v6; // r14d
  __int64 v7; // rsi
  struct tagWND *v8; // r8
  struct tagTHREADINFO *v9; // rcx
  struct tagWND *v10; // rdx
  __int64 v11; // r12
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rax
  _BOOL8 v15; // r12
  const struct tagWND *TopLevelWindow; // rax
  const struct tagWND *v17; // r12
  __int64 v18; // rax
  struct tagQMSG *v19; // r12
  unsigned __int64 v20; // r9
  __int64 v21; // rbx
  __int64 v22; // r12
  int v23; // eax
  __int64 v24; // r12
  __int64 v25; // rax
  unsigned int v26; // edx
  void *v27; // r8
  unsigned __int64 v28; // r9
  __int64 v29; // rcx
  __int64 v30; // rax
  char v32; // r15
  unsigned int v33; // eax
  int v34; // eax
  struct tagWND *v35; // rcx
  char v36; // bl
  const struct tagWND *v37; // rax
  const struct tagWND *v38; // r15
  unsigned int ThreadId; // eax
  __int64 v40; // r8
  struct tagWND *v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rcx
  unsigned __int64 v44; // [rsp+40h] [rbp-99h]
  __int64 v45; // [rsp+70h] [rbp-69h] BYREF
  __int64 v46; // [rsp+78h] [rbp-61h] BYREF
  __int64 v47; // [rsp+80h] [rbp-59h] BYREF
  struct tagQMSG *v48; // [rsp+88h] [rbp-51h]
  __int64 v49; // [rsp+90h] [rbp-49h] BYREF
  struct tagWND *v50; // [rsp+98h] [rbp-41h]
  __int64 v51; // [rsp+A0h] [rbp-39h]
  __int64 v52; // [rsp+A8h] [rbp-31h]
  struct tagQMSG *v53; // [rsp+B0h] [rbp-29h]
  __int128 v54; // [rsp+B8h] [rbp-21h] BYREF
  __int64 v55; // [rsp+C8h] [rbp-11h]
  __int128 v56; // [rsp+D0h] [rbp-9h] BYREF
  __int64 v57; // [rsp+E0h] [rbp+7h]
  __int128 v58; // [rsp+E8h] [rbp+Fh] BYREF
  __int64 v59; // [rsp+F8h] [rbp+1Fh]
  __int64 v60; // [rsp+158h] [rbp+7Fh]

  v47 = 0LL;
  v46 = 0LL;
  v45 = 0LL;
  v57 = 0LL;
  v55 = 0LL;
  v59 = 0LL;
  v56 = 0LL;
  v6 = 1;
  v54 = 0LL;
  v52 = gptiCurrent;
  v58 = 0LL;
  SetSystemInputSource(&v47);
  if ( a1
    && (*(_QWORD *)(a1 + 24) != grpdeskRitInput
     || *(char *)(*(_QWORD *)(a1 + 40) + 19LL) < 0
     || (unsigned int)IsWindowUnderActiveLockScreen(a1)) )
  {
    return 0LL;
  }
  if ( a2 )
    LockW32Thread(a2, &v58);
  gppiLockSFW = 0LL;
  v7 = gptiForeground;
  if ( !gptiForeground || (*(_DWORD *)(gptiForeground + 488LL) & 1) != 0 )
    v7 = 0LL;
  else
    LockW32Thread(gptiForeground, &v56);
  gpqForegroundPrev = gpqForeground;
  if ( a1 )
  {
    v60 = *(_QWORD *)(a1 + 16);
    SetNewForegroundQueue(*(_QWORD *)(v60 + 432));
    LockW32Thread(v60, &v54);
    v9 = *(struct tagTHREADINFO **)(a1 + 16);
    v10 = (struct tagWND *)a1;
    v11 = v60;
  }
  else
  {
    v11 = 0LL;
    v60 = 0LL;
    SetNewForegroundQueue(0LL);
    v9 = 0LL;
    v10 = 0LL;
  }
  xxxSetForegroundThreadWithWindowHint(v9, v10, v8);
  if ( (a3 & 0x20) == 0 )
  {
    if ( gpqForeground )
      v46 = *(_QWORD *)(gpqForeground + 428LL);
    if ( gpqForegroundPrev )
      v45 = *(_QWORD *)(gpqForegroundPrev + 428LL);
    if ( !(unsigned __int8)CheckAccess(&v46, &v45) )
    {
      ClearKeyboardToggleStates();
      anonymous_namespace_::UpdateKeyStateFlag();
    }
  }
  if ( gpqForeground
    && gpqForeground != gpqForegroundPrev
    && *(_QWORD *)(gpqForeground + 112LL)
    && (HIDWORD(gpdwCPUserPreferencesMask) & 0x80u) == 0 )
  {
    xxxApplyGlobalInputSettings();
  }
  if ( gpqForeground != gpqForegroundPrev )
  {
    if ( gpqForegroundPrev )
    {
      v12 = *(_QWORD *)(gpqForegroundPrev + 112LL);
      if ( v12 )
        zzzInputFocusLostWindowEvent(v12);
    }
    if ( gpqForeground && *(_QWORD *)(gpqForeground + 112LL) )
      zzzInputFocusReceivedWindowEvent();
    if ( a2 )
    {
      xxxCancelTracking();
      CCursorClip::ClearClip(gpCursorClip);
      zzzLockWindowUpdate2(0LL);
      xxxMakeWindowForegroundWithState(0LL, 0);
    }
    v13 = 0LL;
    if ( v7 && (*(_DWORD *)(v7 + 488) & 1) == 0 )
      v13 = *(_QWORD *)(v7 + 432);
    v14 = 0LL;
    if ( a2 )
      v14 = *(_QWORD *)(a2 + 432);
    v48 = 0LL;
    if ( v13 && v13 != v14 )
    {
      CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>(&v49, v13);
      v53 = AllocQEntryEx((struct tagMLIST *)(v13 + 24), 0LL, 0);
      if ( !v53 )
      {
        v6 = 0;
        goto LABEL_78;
      }
      v15 = 0LL;
      if ( a1 )
      {
        TopLevelWindow = (const struct tagWND *)GetTopLevelWindow(a1);
        v17 = TopLevelWindow;
        v15 = TopLevelWindow
           && (unsigned int)CoreWindowProp::IsComponent(TopLevelWindow)
           && CoreWindowProp::IsHostThreadOf((const struct tagTHREADINFO *)v7, v17) != 0;
      }
      if ( gptiForeground )
        PsGetThreadId((PETHREAD)*gptiForeground);
      v18 = PtiKbdFromQ(v13);
      v44 = v15;
      v19 = v53;
      StoreQMessage(
        v53,
        0LL,
        0,
        v20,
        0LL,
        0,
        0LL,
        5u,
        v44,
        0,
        (struct tagINPUT_MESSAGE_SOURCE *)&v47,
        *(_DWORD *)(*(_QWORD *)(v18 + 424) + 280LL),
        0LL,
        0LL);
      if ( v7 )
      {
        *((_QWORD *)v19 + 13) = v7;
        SetWakeBit(v7, 8256LL);
      }
      if ( *(_QWORD *)(v13 + 120) )
      {
        if ( v7 && (unsigned int)IsThreadHung(v7, 0LL) )
        {
          v41 = *(struct tagWND **)(v13 + 120);
          v51 = 0LL;
          v50 = v41;
          v49 = *(_QWORD *)(v52 + 416);
          *(_QWORD *)(v52 + 416) = &v49;
          HMLockObject(v41);
          ClearHungFlag(*(struct tagWND **)(v13 + 120));
          ProcessHungWindow();
          ThreadUnlock1(v42);
        }
        else
        {
          SetHungFlag(*(struct tagWND **)(v13 + 120));
        }
      }
    }
    v21 = 0LL;
    if ( v60 && (*(_DWORD *)(v60 + 488) & 1) == 0 )
      v21 = *(_QWORD *)(v60 + 432);
    v22 = 0LL;
    if ( a2 )
      v22 = *(_QWORD *)(a2 + 432);
    if ( !v21 )
    {
      v11 = v60;
LABEL_71:
      v29 = 0LL;
      if ( v7 && (*(_DWORD *)(v7 + 488) & 1) == 0 )
        v29 = *(_QWORD *)(v7 + 432);
      v30 = 0LL;
      if ( a2 )
        v30 = *(_QWORD *)(a2 + 432);
      if ( v29 && v29 == v30 )
      {
        v36 = 0;
        if ( a1 )
        {
          v37 = (const struct tagWND *)GetTopLevelWindow(a1);
          v38 = v37;
          if ( v37 && (unsigned int)CoreWindowProp::IsComponent(v37) )
            v36 = CoreWindowProp::IsHostThreadOf((const struct tagTHREADINFO *)v7, v38) != 0;
          ThreadId = (unsigned int)PsGetThreadId(**(PETHREAD **)(a1 + 16));
        }
        else
        {
          ThreadId = 0;
        }
        xxxDeactivate(a2, ThreadId, v36);
      }
      goto LABEL_78;
    }
    if ( v21 == v22
      || (CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>(&v49, v21),
          (v48 = AllocQEntryEx((struct tagMLIST *)(v21 + 24), 0LL, 0)) != 0LL) )
    {
      v23 = anonymous_namespace_::RemoveEventMessage(v21, 5, -1);
      if ( v21 != v22 )
      {
        if ( v22 || (a3 & 2) != 0 )
        {
          v24 = 0LL;
          if ( a1 )
            v24 = *(_QWORD *)a1;
        }
        else
        {
          v24 = 0LL;
        }
        if ( v23 )
          *(_DWORD *)(v21 + 388) |= 0x8000u;
        if ( (a3 & 1) == 0 && v7 )
          PsGetThreadId(*(PETHREAD *)v7);
        v25 = PtiKbdFromQ(v21);
        StoreQMessage(
          v48,
          0LL,
          v26,
          v28,
          v24,
          (unsigned int)v27,
          (unsigned __int64)v27,
          6u,
          (unsigned __int64)v27,
          (unsigned int)v27,
          (struct tagINPUT_MESSAGE_SOURCE *)&v47,
          *(_DWORD *)(*(_QWORD *)(v25 + 424) + 280LL),
          v27,
          (struct tagUIPI_INFO *)v27);
        v11 = v60;
        *((_QWORD *)v48 + 13) = v60;
        SetWakeBit(v60, 8256LL);
        if ( *(_QWORD *)(v21 + 120) )
        {
          v34 = IsThreadHung(v60, 0LL);
          v35 = *(struct tagWND **)(v21 + 120);
          if ( v34 )
          {
            v51 = 0LL;
            v50 = v35;
            v49 = *(_QWORD *)(v52 + 416);
            *(_QWORD *)(v52 + 416) = &v49;
            HMLockObject(v35);
            ClearHungFlag(*(struct tagWND **)(v21 + 120));
            ProcessHungWindow();
            ThreadUnlock1(v43);
          }
          else
          {
            SetHungFlag(v35);
          }
        }
        goto LABEL_69;
      }
      if ( a1 == *(_QWORD *)(v22 + 120) )
      {
        if ( a1 )
          v40 = *(_QWORD *)a1;
        else
          v40 = 0LL;
        anonymous_namespace_::xxxSendNCActivateMessage((struct tagWND *)a1, 1LL, v40);
        xxxUpdateTray((struct tagWND *)a1);
        if ( (a3 & 4) == 0 )
          xxxSetWindowPos((struct tagWND *)a1, 0, 0, 3);
      }
      else if ( (a3 & 1) == 0 )
      {
        v32 = ~(16 * a3) & 0x80;
        if ( v7 )
          v33 = (unsigned int)PsGetThreadId(*(PETHREAD *)v7);
        else
          v33 = 0;
        anonymous_namespace_::xxxLocalActivateWindow((struct tagWND *)a1, v33, v32);
        if ( ((unsigned __int8)gpdwCPUserPreferencesMask & 1) != 0 )
          zzzActiveCursorTracking(a1);
        goto LABEL_91;
      }
      v11 = v60;
LABEL_69:
      if ( (a3 & 0x40) == 0 )
        xxxDeliverRestoreFocusMessage((struct tagWND *)a1);
      goto LABEL_71;
    }
    v6 = 0;
LABEL_91:
    v11 = v60;
  }
LABEL_78:
  if ( v11 )
    PopAndFreeW32ThreadLock(&v54);
  if ( v7 )
    PopAndFreeW32ThreadLock(&v56);
  if ( a2 )
    PopAndFreeW32ThreadLock(&v58);
  return v6;
}
