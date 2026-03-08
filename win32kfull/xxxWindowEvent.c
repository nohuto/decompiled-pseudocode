/*
 * XREFs of xxxWindowEvent @ 0x1C0062470
 * Callers:
 *     zzzSetCaretPos @ 0x1C0005ED8 (zzzSetCaretPos.c)
 *     zzzInternalShowCaret @ 0x1C00061E4 (zzzInternalShowCaret.c)
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x1C000AEB8 (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
 *     xxxCreateCaret @ 0x1C000F3B4 (xxxCreateCaret.c)
 *     xxxCapture @ 0x1C0010A5C (xxxCapture.c)
 *     xxxSwitchDesktop @ 0x1C00205D4 (xxxSwitchDesktop.c)
 *     ?zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z @ 0x1C002E920 (-zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C0036908 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     ?xxxSetConsoleCaretInfo@@YAHPEAU_CONSOLE_CARET_INFO@@@Z @ 0x1C0039EBC (-xxxSetConsoleCaretInfo@@YAHPEAU_CONSOLE_CARET_INFO@@@Z.c)
 *     xxxDestroyWindow @ 0x1C004B7F0 (xxxDestroyWindow.c)
 *     zzzUpdateCursorImage @ 0x1C0061E20 (zzzUpdateCursorImage.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00669E0 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0068640 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00725D0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x1C009A850 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     zzzInputFocusReceivedWindowEvent @ 0x1C009B35C (zzzInputFocusReceivedWindowEvent.c)
 *     zzzInputFocusLostWindowEvent @ 0x1C009BA70 (zzzInputFocusLostWindowEvent.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C009E0E4 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     xxxSetScrollBar @ 0x1C00A60D8 (xxxSetScrollBar.c)
 *     xxxRealDefWindowProc @ 0x1C00A8800 (xxxRealDefWindowProc.c)
 *     xxxCalcClientRect @ 0x1C00AAA20 (xxxCalcClientRect.c)
 *     xxxCreateWindowEx @ 0x1C00AF050 (xxxCreateWindowEx.c)
 *     ?xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z @ 0x1C00D4D10 (-xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z.c)
 *     NtUserNotifyWinEvent @ 0x1C00D8CF0 (NtUserNotifyWinEvent.c)
 *     zzzInternalDestroyCaret @ 0x1C00E8694 (zzzInternalDestroyCaret.c)
 *     zzzInternalHideCaret @ 0x1C00E877C (zzzInternalHideCaret.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C00FFAF8 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     xxxSystemParametersInfoWorker @ 0x1C01032D0 (xxxSystemParametersInfoWorker.c)
 *     ?zzzInputFocusLostWindowEventImpl@@YAXPEAUtagWND@@PEAUtagQ@@W4INPUTFOCUSEVENTSOURCE@@@Z @ 0x1C012DF70 (-zzzInputFocusLostWindowEventImpl@@YAXPEAUtagWND@@PEAUtagQ@@W4INPUTFOCUSEVENTSOURCE@@@Z.c)
 *     ?zzzInputFocusReceivedWindowEventImpl@@YAXPEAUtagWND@@W4INPUTFOCUSEVENTSOURCE@@@Z @ 0x1C012DFD8 (-zzzInputFocusReceivedWindowEventImpl@@YAXPEAUtagWND@@W4INPUTFOCUSEVENTSOURCE@@@Z.c)
 *     xxxCancelCoolSwitch @ 0x1C0146A72 (xxxCancelCoolSwitch.c)
 *     xxxDCETrackCaptionButton @ 0x1C01BBA1C (xxxDCETrackCaptionButton.c)
 *     zzzUpdateLayeredWindow @ 0x1C01BE8C0 (zzzUpdateLayeredWindow.c)
 *     ?xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z @ 0x1C01CA71C (-xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C01CB01C (-xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1C01F0DC4 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01F5BBC (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01F687C (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxMNStartMenu @ 0x1C0202834 (xxxMNStartMenu.c)
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x1C0218A2C (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITE.c)
 *     xxxMNCancel @ 0x1C02199C4 (xxxMNCancel.c)
 *     xxxMNCloseHierarchy @ 0x1C021A0D0 (xxxMNCloseHierarchy.c)
 *     xxxMNOpenHierarchy @ 0x1C021B7B0 (xxxMNOpenHierarchy.c)
 *     xxxMNReleaseCapture @ 0x1C021C5E0 (xxxMNReleaseCapture.c)
 *     xxxMNSelectItem @ 0x1C021C660 (xxxMNSelectItem.c)
 *     xxxMNSetCapture @ 0x1C021CCC4 (xxxMNSetCapture.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C021D0B4 (xxxMNSwitchToAlternateMenu.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1C022C0E0 (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 *     ?xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z @ 0x1C022C2A0 (-xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C022C64C (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C022C83C (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     xxxEndScroll @ 0x1C022CE90 (xxxEndScroll.c)
 *     xxxSBWndProc @ 0x1C022D770 (xxxSBWndProc.c)
 *     xxxTrackCaptionButton @ 0x1C022F438 (xxxTrackCaptionButton.c)
 *     xxxDragObject @ 0x1C023257C (xxxDragObject.c)
 *     xxxTrackPopupMenuEx @ 0x1C02353CC (xxxTrackPopupMenuEx.c)
 *     xxxHelpLoop @ 0x1C023C17C (xxxHelpLoop.c)
 *     xxxSendMenuSelect @ 0x1C0242A9C (xxxSendMenuSelect.c)
 * Callees:
 *     CategoryMaskFromEvent @ 0x1C0062DE0 (CategoryMaskFromEvent.c)
 *     xxxProcessNotifyWinEvent @ 0x1C0063218 (xxxProcessNotifyWinEvent.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00A1CA0 (PopAndFreeW32ThreadLock.c)
 *     ?DoGlobalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z @ 0x1C00ECE14 (-DoGlobalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_HANDLEMANAGER@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1C012D328 (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_HANDLEMANAGER@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     ?xxxDoLocalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z @ 0x1C01C0FC8 (-xxxDoLocalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z.c)
 *     xxxProcessTSFEvent @ 0x1C01C1198 (xxxProcessTSFEvent.c)
 */

void __fastcall xxxWindowEvent(unsigned int a1, struct tagWND *a2, int a3, unsigned int a4, int a5)
{
  __int64 v5; // r13
  unsigned int DLT; // eax
  tagDomLock *DomainLockRef; // rax
  char *v9; // rbx
  int v10; // edi
  tagDomLock *v11; // rcx
  int v12; // edx
  unsigned int v13; // ebx
  int v14; // r12d
  int v15; // r15d
  _QWORD *ThreadWin32Thread; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  struct tagTHREADINFO **v19; // rax
  struct tagTHREADINFO *v20; // rcx
  int v21; // edi
  __int64 v22; // rdi
  __int64 *v23; // rax
  struct tagTHREADINFO *v24; // rdi
  unsigned int v25; // r12d
  __int64 v26; // rbx
  int v27; // ecx
  __int64 v28; // rdi
  __int64 *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r8
  struct tagTHREADINFO *v32; // rcx
  HANDLE v33; // rax
  int v34; // eax
  __int64 v35; // rcx
  unsigned int v36; // eax
  tagDomLock *v37; // rax
  char *v38; // r14
  int v39; // r15d
  tagDomLock *v40; // rcx
  char *v41; // r14
  __int64 v42; // rax
  char v43; // al
  _QWORD *v44; // rcx
  int v45; // eax
  struct tagWND *v46; // rax
  bool v47; // zf
  int v48; // edx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  unsigned int v52; // [rsp+20h] [rbp-E0h]
  unsigned int v53; // [rsp+28h] [rbp-D8h]
  unsigned int v54; // [rsp+40h] [rbp-C0h]
  struct tagTHREADINFO *v55; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v59; // [rsp+60h] [rbp-A0h]
  struct tagTHREADINFO *v60; // [rsp+68h] [rbp-98h]
  __int64 v61; // [rsp+70h] [rbp-90h] BYREF
  struct tagTHREADINFO *v62; // [rsp+78h] [rbp-88h]
  void (*v63)(void); // [rsp+80h] [rbp-80h]
  HANDLE ThreadProcessId; // [rsp+88h] [rbp-78h]
  __int64 v65; // [rsp+90h] [rbp-70h]
  HANDLE ThreadId; // [rsp+98h] [rbp-68h]
  _QWORD v67[2]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v68[3]; // [rsp+B0h] [rbp-50h] BYREF
  tagDomLock *v69; // [rsp+C8h] [rbp-38h]
  char v70; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v71; // [rsp+D8h] [rbp-28h]
  char v72; // [rsp+E0h] [rbp-20h]
  __int64 v73; // [rsp+E8h] [rbp-18h]
  char v74; // [rsp+F0h] [rbp-10h]
  tagDomLock *v75; // [rsp+F8h] [rbp-8h] BYREF
  char v76; // [rsp+100h] [rbp+0h] BYREF
  __int64 v77; // [rsp+108h] [rbp+8h]
  char v78; // [rsp+110h] [rbp+10h]
  __int64 v79; // [rsp+118h] [rbp+18h]
  char v80; // [rsp+120h] [rbp+20h]

  v5 = 0LL;
  v68[2] = 0LL;
  DLT = DLT_WINEVENT::getDLT();
  DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
  v76 = 1;
  v9 = &v76;
  v75 = DomainLockRef;
  v10 = 0;
  v77 = gDomainDummyLock;
  v79 = 0LL;
  v80 = 0;
  v78 = 0;
  do
  {
    v11 = (tagDomLock *)*((_QWORD *)v9 - 1);
    if ( v11 )
    {
      if ( *v9 )
        tagDomLock::LockExclusive(v11);
      else
        tagDomLock::LockShared(v11);
    }
    ++v10;
    v9 += 16;
  }
  while ( !v10 );
  v12 = 256;
  v80 = 1;
  if ( a1 < 0x7FFFFF10 )
    goto LABEL_7;
  if ( a1 == 2147483408 )
  {
    v13 = 1;
    goto LABEL_8;
  }
  if ( a1 - 2147483409 > 1 )
  {
LABEL_7:
    v13 = 0;
    if ( a1 < 0x7FFFFF00 )
      goto LABEL_8;
  }
  else
  {
    v13 = 2;
  }
  if ( a1 > 0x80000002 )
  {
    if ( a1 != -2147483645 )
    {
      if ( a1 != -2147483644 && a1 != -2147483643 )
        goto LABEL_8;
      v14 = 4096;
LABEL_130:
      v15 = 1;
      goto LABEL_9;
    }
LABEL_129:
    v14 = 512;
    goto LABEL_130;
  }
  switch ( a1 )
  {
    case 0x80000002:
      goto LABEL_129;
    case 0x80000000:
LABEL_113:
      v14 = 256;
      v15 = 1;
      goto LABEL_9;
    case 0x7FFFFF00u:
    case 0x7FFFFF01u:
      v14 = 1024;
      goto LABEL_130;
    case 0x80000001:
      goto LABEL_113;
  }
LABEL_8:
  v14 = 0;
  v15 = 0;
LABEL_9:
  if ( a1 < 0x8005 && a1 >= 0x4008 )
  {
LABEL_13:
    v12 = 0x8000;
    goto LABEL_14;
  }
  if ( a1 == 32780 )
  {
    v12 = 8;
    goto LABEL_14;
  }
  if ( a1 == 32779 )
  {
    v12 = 64;
    goto LABEL_14;
  }
  if ( a1 <= 0x800E )
  {
    if ( a1 == 32782 )
    {
      v12 = 16;
      goto LABEL_14;
    }
    if ( a1 <= 0x4001 )
    {
      if ( a1 == 16385 )
      {
LABEL_155:
        v12 = 2;
        goto LABEL_14;
      }
      if ( a1 == 4 || a1 == 5 || a1 - 6 <= 1 )
      {
        v12 = 1;
        goto LABEL_14;
      }
      goto LABEL_13;
    }
    if ( a1 > 0x8005 )
    {
      if ( a1 == 32778 )
      {
        v12 = 32;
        goto LABEL_14;
      }
      goto LABEL_13;
    }
    if ( a1 != 32773 )
    {
      switch ( a1 )
      {
        case 0x4002u:
        case 0x4003u:
        case 0x4004u:
        case 0x4005u:
        case 0x4006u:
        case 0x4007u:
          goto LABEL_155;
        default:
          goto LABEL_13;
      }
    }
    v12 = 4;
  }
  else if ( a1 > 0x80000001 )
  {
    switch ( a1 )
    {
      case 0x80000002:
      case 0x80000003:
      case 0x80000006:
      case 0x80000007:
        break;
      case 0x80000004:
      case 0x80000005:
        v12 = 512;
        break;
      default:
        goto LABEL_13;
    }
  }
  else
  {
    if ( a1 == -2147483647 )
      goto LABEL_14;
    if ( a1 > 0x7FFFFF20 )
    {
      if ( a1 == 2147483440 )
        goto LABEL_14;
      v47 = a1 == 0x80000000;
      goto LABEL_101;
    }
    if ( a1 != 2147483424 && a1 != 2147483408 && a1 != 2147483409 )
    {
      v47 = a1 == 2147483410;
LABEL_101:
      if ( v47 )
        goto LABEL_14;
      goto LABEL_13;
    }
  }
LABEL_14:
  if ( (v12 & *(_DWORD *)(gpsi + 1892LL)) == 0 && !v13 && !v15 )
    goto LABEL_17;
  ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( !ThreadWin32Thread || !*ThreadWin32Thread )
    goto LABEL_17;
  v18 = SGDGetUserSessionState(v17);
  if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v18 + 8)) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
  v60 = 0LL;
  v19 = (struct tagTHREADINFO **)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v19 )
  {
    v20 = *v19;
    v60 = *v19;
  }
  else
  {
    v20 = 0LL;
  }
  if ( (a5 & 0x11) != 0x11 && a2 && *(char *)(*((_QWORD *)a2 + 5) + 19LL) < 0 )
    goto LABEL_17;
  v21 = a5 | 2;
  if ( (*((_DWORD *)v20 + 122) & 0x10000001) == 0 )
    v21 = a5;
  v54 = v21;
  if ( (v21 & 1) != 0 && a2 )
  {
    v20 = (struct tagTHREADINFO *)*((_QWORD *)a2 + 2);
    v46 = 0LL;
    if ( (v21 & 0x10) == 0 )
      v46 = a2;
    a2 = v46;
  }
  v55 = v20;
  ThreadId = PsGetThreadId(*(PETHREAD *)v20);
  v65 = *((_QWORD *)v55 + 53);
  ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)v55);
  if ( (v21 & 0x20) != 0 )
    LODWORD(v59) = _InterlockedIncrement(&gcWinEvents);
  else
    v59 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v68[0] = *((_QWORD *)v60 + 52);
  *((_QWORD *)v60 + 52) = v68;
  v68[1] = a2;
  if ( a2 )
    HMLockObject(a2);
  v22 = 0LL;
  v23 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v23 )
    v22 = *v23;
  v61 = *(_QWORD *)(v22 + 16);
  *(_QWORD *)(v22 + 16) = &v61;
  v24 = v55;
  v62 = v55;
  v63 = (void (*)(void))DereferenceW32Thread;
  ReferenceW32Thread(v55);
  if ( (v54 & 2) == 0 )
  {
    if ( ExIsResourceAcquiredExclusiveLite((PERESOURCE)gDomainWinEventLock) != 1 )
      __int2c();
    PsGetCurrentThreadId();
    v24 = v55;
  }
  if ( v15 && (*(_DWORD *)(*((_QWORD *)v24 + 53) + 812LL) & 0x1000000) != 0 )
  {
    v53 = v14;
    v25 = v54;
    xxxDoLocalTSFWork(a1, a2, a3, a4, v54, v53, v24, v59);
  }
  else
  {
    v25 = v54;
  }
  if ( v13 )
    DoGlobalTSFWork(a1, a2, a3, a4, v52, v13, v24, v59);
  if ( ((unsigned int)CategoryMaskFromEvent(a1) & *(_DWORD *)(gpsi + 1892LL)) == 0 )
  {
    PopAndFreeW32ThreadLock(&v61);
    ThreadUnlock1(v50, v49, v51);
LABEL_17:
    DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>(&v75);
    return;
  }
  v26 = gpWinEventHooks;
  if ( !gpWinEventHooks )
    goto LABEL_49;
  while ( 1 )
  {
    v27 = *(_DWORD *)(v26 + 40);
    v28 = *(_QWORD *)(v26 + 24);
    if ( (v27 & 1) != 0 )
      goto LABEL_48;
    if ( *(_DWORD *)(v26 + 32) > a1 )
      goto LABEL_48;
    if ( a1 > *(_DWORD *)(v26 + 36) )
      goto LABEL_48;
    v33 = *(HANDLE *)(v26 + 48);
    if ( v33 )
    {
      if ( v33 != ThreadProcessId )
        goto LABEL_48;
    }
    if ( (v27 & 4) != 0 && v65 == *(_QWORD *)(*(_QWORD *)(v26 + 16) + 424LL) )
      goto LABEL_48;
    v34 = *(_DWORD *)(v26 + 56);
    if ( v34 )
    {
      if ( v34 != (_DWORD)ThreadId )
        goto LABEL_48;
    }
    if ( (v27 & 2) != 0 && v55 == *(struct tagTHREADINFO **)(v26 + 16) )
      goto LABEL_48;
    v35 = *(_QWORD *)(*(_QWORD *)(v26 + 16) + 456LL);
    if ( v35 != *((_QWORD *)v60 + 57) && a1 != 32 && (v35 != *((_QWORD *)v55 + 57) || a1 + 2147483646 > 1) )
      goto LABEL_48;
    v36 = DLT_HANDLEMANAGER::getDLT(v35, v55);
    v37 = (tagDomLock *)GetDomainLockRef(v36);
    v70 = 0;
    v38 = &v70;
    v69 = v37;
    v39 = 0;
    v71 = gDomainDummyLock;
    v73 = 0LL;
    v74 = 0;
    v72 = 0;
    do
    {
      v40 = (tagDomLock *)*((_QWORD *)v38 - 1);
      if ( v40 )
      {
        if ( *v38 )
          tagDomLock::LockExclusive(v40);
        else
          tagDomLock::LockShared(v40);
      }
      ++v39;
      v38 += 16;
    }
    while ( !v39 );
    v74 = 1;
    if ( (*(_BYTE *)(_HMPheFromObject(v26) + 25) & 1) != 0 )
      break;
    if ( v74 && v69 )
    {
      if ( v70 )
        tagDomLock::UnLockExclusive(v69);
      else
        tagDomLock::UnLockShared(v69);
    }
    if ( ExIsResourceAcquiredExclusiveLite((PERESOURCE)gDomainWinEventLock) != 1 )
      __int2c();
    if ( dword_1C0361138 )
    {
      v41 = (char *)Win32AllocPoolZInit(72LL, 2037281621LL);
      if ( !v41 )
        goto LABEL_49;
    }
    else
    {
      dword_1C0361138 = 1;
      v41 = (char *)&unk_1C03621B0;
    }
    *((_QWORD *)v41 + 2) = 0LL;
    v67[0] = v41 + 16;
    v67[1] = v26;
    HMAssignmentLock(v67, 0LL);
    if ( a2 )
      v42 = *(_QWORD *)a2;
    else
      v42 = 0LL;
    *((_QWORD *)v41 + 4) = v42;
    *((_DWORD *)v41 + 10) = a3;
    *((_DWORD *)v41 + 11) = a4;
    *((_DWORD *)v41 + 7) = a1;
    *((_DWORD *)v41 + 12) = (unsigned int)PsGetThreadId(*(PETHREAD *)v55);
    *(_QWORD *)(v41 + 52) = (unsigned int)v59;
    *((_DWORD *)v41 + 6) = 0;
    v43 = ~(unsigned __int8)(*(_DWORD *)(v26 + 40) >> 1);
    *((_QWORD *)v41 + 8) = 0LL;
    *((_DWORD *)v41 + 14) = v43 & 4;
    *((_QWORD *)v41 + 1) = v41;
    *(_QWORD *)v41 = v41;
    if ( (*(_DWORD *)(v26 + 40) & 8) != 0 && a1 + 2147483646 <= 3 )
    {
      v48 = *((_DWORD *)v41 + 14);
      if ( *(_QWORD *)(v26 + 16) != gptiCurrent )
        v48 = 4;
      *((_DWORD *)v41 + 14) = v48;
    }
    v44 = (_QWORD *)gPendingNotifiesList[1];
    if ( *v44 != gPendingNotifiesList[0] )
      __fastfail(3u);
    *(_QWORD *)v41 = gPendingNotifiesList[0];
    *((_QWORD *)v41 + 1) = v44;
    *v44 = v41;
    gPendingNotifiesList[1] = v41;
    v45 = *((_DWORD *)v41 + 14) | v25;
    *((_DWORD *)v41 + 14) = v45;
    if ( (v45 & 4) != 0 )
    {
      v45 &= ~2u;
      *((_DWORD *)v41 + 14) = v45;
    }
    if ( (v45 & 2) == 0 )
      v28 = xxxProcessNotifyWinEvent((__int64)v41);
LABEL_48:
    v26 = v28;
    if ( !v28 )
      goto LABEL_49;
  }
  if ( v74 && v69 )
  {
    if ( v70 )
      tagDomLock::UnLockExclusive(v69);
    else
      tagDomLock::UnLockShared(v69);
  }
LABEL_49:
  v29 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v29 )
    v5 = *v29;
  *(_QWORD *)(v5 + 16) = v61;
  v32 = v62;
  if ( v62 )
    v63();
  ThreadUnlock1(v32, v30, v31);
  if ( v80 && v75 )
  {
    if ( v76 )
      tagDomLock::UnLockExclusive(v75);
    else
      tagDomLock::UnLockShared(v75);
  }
}
