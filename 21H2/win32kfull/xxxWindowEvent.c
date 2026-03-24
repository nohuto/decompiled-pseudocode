/*
 * XREFs of xxxWindowEvent @ 0x1C00814D0
 * Callers:
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0003D2C (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0003FD4 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00134E8 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxSwitchDesktop @ 0x1C0029904 (xxxSwitchDesktop.c)
 *     zzzSetCaretPos @ 0x1C002B4F0 (zzzSetCaretPos.c)
 *     xxxMinMaximizeEx @ 0x1C002B73C (xxxMinMaximizeEx.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x1C0034774 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     zzzInputFocusLostWindowEvent @ 0x1C003501C (zzzInputFocusLostWindowEvent.c)
 *     zzzInputFocusReceivedWindowEvent @ 0x1C003508C (zzzInputFocusReceivedWindowEvent.c)
 *     zzzSetWindowCompositionCloak @ 0x1C0036D90 (zzzSetWindowCompositionCloak.c)
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x1C003727C (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C0039F08 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?xxxSetConsoleCaretInfo@@YAHPEAU_CONSOLE_CARET_INFO@@@Z @ 0x1C003C664 (-xxxSetConsoleCaretInfo@@YAHPEAU_CONSOLE_CARET_INFO@@@Z.c)
 *     xxxRealDefWindowProc @ 0x1C0049EC8 (xxxRealDefWindowProc.c)
 *     xxxCalcClientRect @ 0x1C004A8A0 (xxxCalcClientRect.c)
 *     zzzInternalHideCaret @ 0x1C0067540 (zzzInternalHideCaret.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0068330 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     zzzInternalShowCaret @ 0x1C006A12C (zzzInternalShowCaret.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C006E958 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     xxxCreateWindowEx @ 0x1C00751E0 (xxxCreateWindowEx.c)
 *     xxxDestroyWindow @ 0x1C007DCA0 (xxxDestroyWindow.c)
 *     zzzUpdateCursorImage @ 0x1C0080F20 (zzzUpdateCursorImage.c)
 *     NtUserNotifyWinEvent @ 0x1C0081440 (NtUserNotifyWinEvent.c)
 *     xxxCapture @ 0x1C00C062C (xxxCapture.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00C2120 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxDCETrackCaptionButton @ 0x1C00D7CFC (xxxDCETrackCaptionButton.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00DD338 (xxxSystemParametersInfoWorker.c)
 *     zzzUpdateLayeredWindow @ 0x1C00F1FE4 (zzzUpdateLayeredWindow.c)
 *     xxxSetScrollBar @ 0x1C00F6058 (xxxSetScrollBar.c)
 *     ?xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z @ 0x1C00F6740 (-xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z.c)
 *     xxxCreateCaret @ 0x1C0113DC4 (xxxCreateCaret.c)
 *     zzzInternalDestroyCaret @ 0x1C0113F30 (zzzInternalDestroyCaret.c)
 *     xxxCancelCoolSwitch @ 0x1C0125DE4 (xxxCancelCoolSwitch.c)
 *     ?xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z @ 0x1C01F321C (-xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F3B40 (-xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxMoveSize @ 0x1C0212874 (xxxMoveSize.c)
 *     xxxMNStartMenu @ 0x1C0222640 (xxxMNStartMenu.c)
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x1C02360A8 (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITE.c)
 *     xxxMNCancel @ 0x1C0237494 (xxxMNCancel.c)
 *     xxxMNCloseHierarchy @ 0x1C0237D20 (xxxMNCloseHierarchy.c)
 *     xxxMNOpenHierarchy @ 0x1C0239AB8 (xxxMNOpenHierarchy.c)
 *     xxxMNReleaseCapture @ 0x1C023AAFC (xxxMNReleaseCapture.c)
 *     xxxMNSelectItem @ 0x1C023AB7C (xxxMNSelectItem.c)
 *     xxxMNSetCapture @ 0x1C023B474 (xxxMNSetCapture.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C023B8F4 (xxxMNSwitchToAlternateMenu.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1C0244A80 (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 *     ?xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z @ 0x1C0244C5C (-xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C0245024 (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C0245214 (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     xxxEndScroll @ 0x1C0245904 (xxxEndScroll.c)
 *     xxxSBWndProc @ 0x1C0246160 (xxxSBWndProc.c)
 *     xxxTrackCaptionButton @ 0x1C0247A10 (xxxTrackCaptionButton.c)
 *     xxxDragObject @ 0x1C0248694 (xxxDragObject.c)
 *     xxxTrackPopupMenuEx @ 0x1C024ABB0 (xxxTrackPopupMenuEx.c)
 *     xxxHelpLoop @ 0x1C025019C (xxxHelpLoop.c)
 *     xxxSendMenuSelect @ 0x1C025140C (xxxSendMenuSelect.c)
 * Callees:
 *     ?xxxDoLocalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z @ 0x1C00065F8 (-xxxDoLocalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z.c)
 *     xxxProcessTSFEvent @ 0x1C0006794 (xxxProcessTSFEvent.c)
 *     xxxProcessNotifyWinEvent @ 0x1C0050F60 (xxxProcessNotifyWinEvent.c)
 *     CategoryMaskFromEvent @ 0x1C0081D64 (CategoryMaskFromEvent.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00C1890 (PopAndFreeW32ThreadLock.c)
 *     ?CreateNotify@@YAPEAUtagNOTIFY@@PEAUtagEVENTHOOK@@KPEAUtagWND@@JJPEAUtagTHREADINFO@@KE@Z @ 0x1C010142C (-CreateNotify@@YAPEAUtagNOTIFY@@PEAUtagEVENTHOOK@@KPEAUtagWND@@JJPEAUtagTHREADINFO@@KE@Z.c)
 *     ?DoGlobalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z @ 0x1C012C2C8 (-DoGlobalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016E324 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall xxxWindowEvent(unsigned int a1, struct tagWND *a2, int a3, unsigned int a4, unsigned int a5)
{
  struct tagWND *v6; // r14
  int v8; // r10d
  unsigned int v9; // r12d
  int v10; // r13d
  int v11; // r15d
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  _QWORD *ThreadWin32Thread; // rax
  __int64 v17; // rcx
  struct _KTHREAD *v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 *v22; // rax
  __int64 v23; // rdi
  unsigned int DLT; // eax
  unsigned int v25; // eax
  unsigned int v26; // eax
  tagDomLock *v27; // rbx
  int v28; // eax
  unsigned int v29; // edi
  PETHREAD *v30; // rax
  __int64 v31; // rsi
  unsigned __int64 v32; // rcx
  struct _KTHREAD *v33; // r14
  __int64 v34; // rsi
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 *v38; // rax
  int v39; // edi
  struct tagWND *v40; // r13
  int v41; // eax
  __int64 v42; // rcx
  __int64 v43; // rdi
  HANDLE v44; // rbx
  __int64 v45; // rsi
  struct _KTHREAD *v46; // rsi
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 *v50; // rax
  __int64 v51; // rcx
  unsigned int v52; // eax
  HANDLE v53; // rax
  int v54; // eax
  struct tagNOTIFY *Notify; // rax
  __int64 v56; // rax
  int v57; // ebx
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v62; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v64; // rax
  __int64 v65; // rcx
  __int64 v66; // rax
  bool v67; // zf
  __int64 v68; // rax
  int v69; // edi
  __int64 v70; // rcx
  __int64 v71; // rax
  unsigned int v72; // [rsp+20h] [rbp-E8h]
  char v73; // [rsp+20h] [rbp-E8h]
  unsigned int v74; // [rsp+28h] [rbp-E0h]
  unsigned int v75; // [rsp+40h] [rbp-C8h]
  __int64 v76; // [rsp+48h] [rbp-C0h]
  struct tagTHREADINFO *v77; // [rsp+50h] [rbp-B8h]
  __int128 v78; // [rsp+58h] [rbp-B0h] BYREF
  void (*v79)(void); // [rsp+68h] [rbp-A0h]
  __int64 v80; // [rsp+70h] [rbp-98h]
  tagDomLock *DomainLockRef; // [rsp+78h] [rbp-90h]
  HANDLE ThreadProcessId; // [rsp+80h] [rbp-88h]
  __int64 v83; // [rsp+88h] [rbp-80h]
  HANDLE ThreadId; // [rsp+90h] [rbp-78h]
  tagDomLock *v85; // [rsp+98h] [rbp-70h]
  tagObjLock *v86; // [rsp+A0h] [rbp-68h]
  __int128 v87; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v88; // [rsp+B8h] [rbp-50h]
  unsigned int v89; // [rsp+110h] [rbp+8h]
  struct tagWND *v90; // [rsp+118h] [rbp+10h]

  v90 = a2;
  v6 = 0LL;
  v88 = 0LL;
  v79 = 0LL;
  v80 = 0LL;
  v8 = 256;
  v87 = 0LL;
  v78 = 0LL;
  if ( a1 < 0x7FFFFF10 )
    goto LABEL_2;
  if ( a1 == 2147483408 )
  {
    v9 = 1;
    goto LABEL_4;
  }
  if ( a1 - 2147483409 > 1 )
LABEL_2:
    v9 = 0;
  else
    v9 = 2;
  if ( a1 >= 0x7FFFFF00 )
  {
    if ( a1 > 0x80000003 )
    {
      if ( a1 > 0x80000005 )
        goto LABEL_4;
      v10 = 4096;
    }
    else if ( a1 < 0x80000002 )
    {
      if ( a1 > 0x7FFFFF01 )
      {
        if ( a1 > 0x7FFFFFFF )
        {
          v10 = 256;
          v11 = 1;
          goto LABEL_5;
        }
        goto LABEL_4;
      }
      v10 = 1024;
    }
    else
    {
      v10 = 512;
    }
    v11 = 1;
    goto LABEL_5;
  }
LABEL_4:
  v10 = 0;
  v11 = 0;
LABEL_5:
  if ( a1 < 0x8005 && a1 >= 0x4008 )
    goto LABEL_7;
  if ( a1 == 32780 )
  {
    v8 = 8;
    goto LABEL_8;
  }
  if ( a1 == 32779 )
  {
    v8 = 64;
    goto LABEL_8;
  }
  if ( a1 >= 0x800F && a1 < 0x7FFFFF10 || a1 < 0x4001 && a1 >= 8 )
    goto LABEL_7;
  if ( a1 > 0x7FFFFF12 )
  {
    if ( a1 <= 0x80000003 )
    {
      if ( a1 >= 0x80000000 || a1 == 2147483424 || a1 == 2147483440 )
        goto LABEL_8;
      goto LABEL_7;
    }
    if ( a1 <= 0x80000005 )
    {
      v8 = 512;
    }
    else if ( a1 > 0x80000007 )
    {
      goto LABEL_7;
    }
  }
  else
  {
    if ( a1 >= 0x7FFFFF10 )
      goto LABEL_8;
    if ( a1 > 0x8005 )
    {
      if ( a1 == 32778 )
      {
        v8 = 32;
        goto LABEL_8;
      }
      if ( a1 == 32782 )
      {
        v8 = 16;
        goto LABEL_8;
      }
LABEL_7:
      v8 = 0x8000;
      goto LABEL_8;
    }
    if ( a1 == 32773 )
    {
      v8 = 4;
      goto LABEL_8;
    }
    if ( a1 < 4 )
      goto LABEL_7;
    if ( a1 <= 7 )
    {
      v8 = 1;
      goto LABEL_8;
    }
    if ( a1 - 16385 > 6 )
      goto LABEL_7;
    v8 = 2;
  }
LABEL_8:
  if ( (v8 & *(_DWORD *)(gpsi + 1892LL)) != 0 || v9 || v11 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( !(unsigned __int8)KeIsAttachedProcess(gpsi)
      || (v56 = PsGetCurrentProcess(v14, v13, v15),
          v57 = PsGetProcessSessionIdEx(v56),
          v59 = PsGetCurrentThreadProcess(v58),
          v57 == (unsigned int)PsGetProcessSessionIdEx(v59)) )
    {
      ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
      {
        if ( *ThreadWin32Thread )
        {
          v18 = KeGetCurrentThread();
          v76 = 0LL;
          if ( (!(unsigned __int8)KeIsAttachedProcess(v17)
             || (CurrentProcess = PsGetCurrentProcess(v20, v19, v21),
                 ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
                 CurrentThreadProcess = PsGetCurrentThreadProcess(v62),
                 ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)))
            && (v22 = (__int64 *)PsGetThreadWin32Thread(v18)) != 0LL )
          {
            v23 = *v22;
            v76 = *v22;
          }
          else
          {
            v23 = 0LL;
          }
          v86 = (tagObjLock *)(v23 + 392);
          DLT = DLT_THREADINFO::getDLT();
          DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
          if ( v23 + 392 == gObjDummyLock )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 328LL);
          v25 = DLT_THREADINFO::getDLT();
          ptiSetDomainLockBit(v25);
          tagDomLock::LockShared(DomainLockRef);
          tagObjLock::LockExclusive((tagObjLock *)(v23 + 392));
          v26 = DLT_WINEVENT::getDLT();
          v27 = (tagDomLock *)GetDomainLockRef(v26);
          v85 = v27;
          if ( v27 == (tagDomLock *)gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 408LL);
          tagDomLock::LockExclusive(v27);
          if ( (a5 & 0x11) == 0x11 || !v90 || *(char *)(*((_QWORD *)v90 + 5) + 19LL) >= 0 )
          {
            v28 = *(_DWORD *)(v23 + 488);
            v29 = a5 | 2;
            if ( (v28 & 0x10000001) == 0 )
              v29 = a5;
            v89 = v29;
            if ( (v29 & 1) != 0 && v90 )
            {
              v30 = (PETHREAD *)*((_QWORD *)v90 + 2);
              if ( (v29 & 0x10) == 0 )
                v6 = a2;
              v31 = v76;
              v90 = v6;
            }
            else
            {
              v31 = v76;
              v6 = v90;
              v30 = (PETHREAD *)v76;
            }
            v77 = (struct tagTHREADINFO *)v30;
            ThreadId = PsGetThreadId(*v30);
            v83 = *((_QWORD *)v77 + 53);
            ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)v77);
            if ( (v29 & 0x20) != 0 )
            {
              v75 = _InterlockedIncrement(&gcWinEvents);
            }
            else
            {
              v32 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
              v75 = v32;
            }
            *(_QWORD *)&v87 = *(_QWORD *)(v31 + 416);
            *(_QWORD *)(v31 + 416) = &v87;
            *((_QWORD *)&v87 + 1) = v6;
            if ( v6 )
              HMLockObject(v6);
            v33 = KeGetCurrentThread();
            v34 = 0LL;
            if ( !(unsigned __int8)KeIsAttachedProcess(v32)
              || (v64 = PsGetCurrentProcess(v36, v35, v37),
                  v29 = PsGetProcessSessionIdEx(v64),
                  v66 = PsGetCurrentThreadProcess(v65),
                  v67 = v29 == (unsigned int)PsGetProcessSessionIdEx(v66),
                  LOBYTE(v29) = v89,
                  v67) )
            {
              v38 = (__int64 *)PsGetThreadWin32Thread(v33);
              if ( v38 )
                v34 = *v38;
            }
            *(_QWORD *)&v78 = *(_QWORD *)(v34 + 16);
            *(_QWORD *)(v34 + 16) = &v78;
            *((_QWORD *)&v78 + 1) = v77;
            v79 = (void (*)(void))DereferenceW32Thread;
            ObfReferenceObject(*(PVOID *)v77);
            _InterlockedIncrement((volatile signed __int32 *)v77 + 2);
            if ( (v29 & 2) == 0 )
            {
              PsGetCurrentThreadId();
              LOBYTE(v29) = v89;
            }
            if ( v11 && (*(_DWORD *)(*((_QWORD *)v77 + 53) + 820LL) & 0x1000000) != 0 )
            {
              v74 = v10;
              v40 = v90;
              v73 = v29;
              v39 = a4;
              xxxDoLocalTSFWork(a1, v90, a3, a4, v73, v74, v77, v75);
            }
            else
            {
              v39 = a4;
              v40 = v90;
            }
            if ( v9 )
              DoGlobalTSFWork(a1, v40, a3, v39, v72, v9, v77, v75);
            v41 = CategoryMaskFromEvent(a1);
            v42 = gpsi;
            if ( (v41 & *(_DWORD *)(gpsi + 1892LL)) != 0 )
            {
              v43 = gpWinEventHooks;
              if ( gpWinEventHooks )
              {
                v44 = ThreadProcessId;
                while ( 1 )
                {
                  v42 = *(unsigned int *)(v43 + 40);
                  v45 = *(_QWORD *)(v43 + 24);
                  if ( (v42 & 1) == 0 && *(_DWORD *)(v43 + 32) <= a1 && a1 <= *(_DWORD *)(v43 + 36) )
                  {
                    v53 = *(HANDLE *)(v43 + 48);
                    if ( (!v53 || v53 == v44) && ((v42 & 4) == 0 || v83 != *(_QWORD *)(*(_QWORD *)(v43 + 16) + 424LL)) )
                    {
                      v54 = *(_DWORD *)(v43 + 56);
                      if ( (!v54 || v54 == (_DWORD)ThreadId)
                        && ((v42 & 2) == 0 || v77 != *(struct tagTHREADINFO **)(v43 + 16)) )
                      {
                        v42 = *(_QWORD *)(*(_QWORD *)(v43 + 16) + 456LL);
                        if ( v42 == *(_QWORD *)(v76 + 456)
                          || a1 == 32
                          || v42 == *((_QWORD *)v77 + 57) && a1 + 2147483646 <= 1 )
                        {
                          if ( (*(_BYTE *)(_HMPheFromObject(v43) + 25) & 1) != 0
                            || (Notify = CreateNotify((struct tagEVENTHOOK *)v43, a1, v40, a3, a4, v77, v75, 0)) == 0LL )
                          {
LABEL_61:
                            v27 = v85;
                            break;
                          }
                          v42 = v89 | *((_DWORD *)Notify + 14);
                          *((_DWORD *)Notify + 14) = v42;
                          if ( (v42 & 4) != 0 )
                          {
                            v42 = (unsigned int)v42 & 0xFFFFFFFD;
                            *((_DWORD *)Notify + 14) = v42;
                          }
                          if ( (v42 & 2) == 0 )
                            v45 = xxxProcessNotifyWinEvent((__int64)Notify);
                        }
                      }
                    }
                  }
                  v43 = v45;
                  if ( !v45 )
                    goto LABEL_61;
                }
              }
              v46 = KeGetCurrentThread();
              if ( !(unsigned __int8)KeIsAttachedProcess(v42)
                || (v68 = PsGetCurrentProcess(v48, v47, v49),
                    v69 = PsGetProcessSessionIdEx(v68),
                    v71 = PsGetCurrentThreadProcess(v70),
                    v69 == (unsigned int)PsGetProcessSessionIdEx(v71)) )
              {
                v50 = (__int64 *)PsGetThreadWin32Thread(v46);
                if ( v50 )
                  v80 = *v50;
              }
              *(_QWORD *)(v80 + 16) = v78;
              v51 = *((_QWORD *)&v78 + 1);
              if ( *((_QWORD *)&v78 + 1) )
                v79();
            }
            else
            {
              PopAndFreeW32ThreadLock(&v78);
            }
            ThreadUnlock1(v51);
          }
          tagDomLock::UnLockExclusive(v27);
          v52 = DLT_THREADINFO::getDLT();
          ptiUnSetDomainLockBit(v52);
          tagObjLock::UnLockExclusive(v86);
          tagDomLock::UnLockShared(DomainLockRef);
        }
      }
    }
  }
}
