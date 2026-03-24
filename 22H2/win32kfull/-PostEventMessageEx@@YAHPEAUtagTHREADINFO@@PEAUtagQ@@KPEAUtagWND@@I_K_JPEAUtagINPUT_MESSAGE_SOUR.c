/*
 * XREFs of ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C004FBD0
 * Callers:
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0003FD4 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?CreateAndPostTSFNotify@@YAXKPEAUtagWND@@JJPEAUtagTHREADINFO@@1K@Z @ 0x1C0006AAC (-CreateAndPostTSFNotify@@YAXKPEAUtagWND@@JJPEAUtagTHREADINFO@@1K@Z.c)
 *     NtUserSendEventMessage @ 0x1C00072B0 (NtUserSendEventMessage.c)
 *     xxxSwitchToThisWindow @ 0x1C0007AA0 (xxxSwitchToThisWindow.c)
 *     zzzReattachThreads @ 0x1C001194C (zzzReattachThreads.c)
 *     xxxMinMaximizeEx @ 0x1C002B69C (xxxMinMaximizeEx.c)
 *     xxxTrackMouseMove @ 0x1C002D520 (xxxTrackMouseMove.c)
 *     xxxApplyGlobalInputSettings @ 0x1C0034ACC (xxxApplyGlobalInputSettings.c)
 *     SetWindowExtendedBoundsMargin @ 0x1C003807C (SetWindowExtendedBoundsMargin.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C003AFFC (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     xxxBroadcastMessageEx @ 0x1C003FDE8 (xxxBroadcastMessageEx.c)
 *     xxxProcessNotifyWinEvent @ 0x1C0050EC0 (xxxProcessNotifyWinEvent.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C007BEF0 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x1C00C07B8 (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 *     xxxProcessEventMessage @ 0x1C00C15B8 (xxxProcessEventMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00C1DC0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     zzzDecomposeDesktop @ 0x1C00EAA3C (zzzDecomposeDesktop.c)
 *     zzzComposeDesktop @ 0x1C00EC528 (zzzComposeDesktop.c)
 *     ?PostThreadRecalc@@YAHPEAUtagTHREADINFO@@PEAUtagMONITORRECTS@@PEAUtagWINDOWANDRECT@@HK@Z @ 0x1C00FFC08 (-PostThreadRecalc@@YAHPEAUtagTHREADINFO@@PEAUtagMONITORRECTS@@PEAUtagWINDOWANDRECT@@HK@Z.c)
 *     EditionHandleAndPostKeyEvent @ 0x1C0109DE0 (EditionHandleAndPostKeyEvent.c)
 *     ?AsyncWindowPos@@YAXPEAUtagSMWP@@@Z @ 0x1C011132C (-AsyncWindowPos@@YAXPEAUtagSMWP@@@Z.c)
 *     xxxSetWindowPlacement @ 0x1C011A0A8 (xxxSetWindowPlacement.c)
 *     ?BeginGetWidnowTrackInfoAsync@@YA_NPEAUtagWND@@@Z @ 0x1C0122A20 (-BeginGetWidnowTrackInfoAsync@@YA_NPEAUtagWND@@@Z.c)
 *     ?xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z @ 0x1C0125E1C (-xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z.c)
 *     NtUserDisableThreadIme @ 0x1C0125FD0 (NtUserDisableThreadIme.c)
 *     EditionPostInputEvent @ 0x1C01277F0 (EditionPostInputEvent.c)
 *     EditionPostUpdateKeyStateEvent @ 0x1C012A3C0 (EditionPostUpdateKeyStateEvent.c)
 *     NtUserBroadcastThemeChangeEvent @ 0x1C012C070 (NtUserBroadcastThemeChangeEvent.c)
 *     NtUserShowWindowAsync @ 0x1C012F870 (NtUserShowWindowAsync.c)
 *     NtUserRegisterBSDRWindow @ 0x1C01338C0 (NtUserRegisterBSDRWindow.c)
 *     ?CloneWindowPosAndArrangementAsync@@YA_NPEAUtagWND@@PEBU1@1W4CloneWindowPosOptions@@@Z @ 0x1C01CF5C8 (-CloneWindowPosAndArrangementAsync@@YA_NPEAUtagWND@@PEBU1@1W4CloneWindowPosOptions@@@Z.c)
 *     QueueShutdownData @ 0x1C01D2C28 (QueueShutdownData.c)
 *     EditionPostThreadInputEvent @ 0x1C01E1650 (EditionPostThreadInputEvent.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C01E3ECC (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01F1438 (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     ?BeginSetWindowArrangement@@YA_NPEAUtagWND@@QEBUtagRECT@@1K@Z @ 0x1C020A2F0 (-BeginSetWindowArrangement@@YA_NPEAUtagWND@@QEBUtagRECT@@1K@Z.c)
 *     ?WindowArrangementHotKeyCallback@@YAX_K_J@Z @ 0x1C020C820 (-WindowArrangementHotKeyCallback@@YAX_K_J@Z.c)
 *     EditionPostAccessibility @ 0x1C0212D70 (EditionPostAccessibility.c)
 *     EditionPostRitSound @ 0x1C0212DD0 (EditionPostRitSound.c)
 *     xxxMinimizeHungWindow @ 0x1C023EBD0 (xxxMinimizeHungWindow.c)
 *     ?ForceForeground@CWindow@@QEAA_NXZ @ 0x1C023FE68 (-ForceForeground@CWindow@@QEAA_NXZ.c)
 *     ?CreateAndPostRequest@CMoveSizeRequest@@CA_NPEAUtagWND@@W4MOVESIZE_OPERATION@@AEBUtagPOINT@@@Z @ 0x1C024134C (-CreateAndPostRequest@CMoveSizeRequest@@CA_NPEAUtagWND@@W4MOVESIZE_OPERATION@@AEBUtagPOINT@@@Z.c)
 *     ?xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z @ 0x1C0241E7C (-xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z.c)
 * Callees:
 *     PtiKbdFromQ @ 0x1C004FB88 (PtiKbdFromQ.c)
 *     ?vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C004FBA4 (-vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ??0?$CLockExclusiveInUserCrit@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C004FD74 (--0-$CLockExclusiveInUserCrit@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z.c)
 *     SetWakeBit @ 0x1C0051880 (SetWakeBit.c)
 *     ?StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagUIPI_INFO@@@Z @ 0x1C00551A0 (-StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagU.c)
 *     ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z @ 0x1C0100F54 (-AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z.c)
 *     ProcessSuspendedEventMessage @ 0x1C0126488 (ProcessSuspendedEventMessage.c)
 */

__int64 __fastcall PostEventMessageEx(
        struct tagTHREADINFO *a1,
        struct tagQ *a2,
        unsigned int a3,
        struct tagWND *a4,
        unsigned int a5,
        unsigned __int64 a6,
        __int64 a7,
        struct tagINPUT_MESSAGE_SOURCE *a8)
{
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned int v14; // ebx
  struct tagQMSG *v15; // r14
  unsigned int v16; // ecx
  tagDomLock *v18[2]; // [rsp+70h] [rbp-38h] BYREF

  CLockExclusiveInUserCrit<DLT_QUEUE>::CLockExclusiveInUserCrit<DLT_QUEUE>(v18);
  v14 = 0;
  if ( !a1
    || (*((_DWORD *)a1 + 122) & 1) == 0
    && ((vAdjustDelegatePriority(a1, v12, v13), (*((_DWORD *)a1 + 308) & 0x20) == 0)
     || (unsigned int)ProcessSuspendedEventMessage(a1, a3, a4, a5, a6, a7)) )
  {
    v15 = AllocQEntryEx((struct tagQ *)((char *)a2 + 24), 0LL, 0);
    if ( v15 )
    {
      if ( a4 )
        v16 = *(_DWORD *)(*((_QWORD *)a4 + 5) + 288LL);
      else
        v16 = *(_DWORD *)(*(_QWORD *)(PtiKbdFromQ((__int64)a2) + 424) + 280LL);
      StoreQMessage(v15, a4, a5, a6, a7, 0, 0LL, a3, 0LL, 0, a8, v16, 0LL, 0LL);
      *((_QWORD *)v15 + 13) = a1;
      if ( a3 == 20 )
        CTouchProcessor::ReferenceMsgDataExternal(gpTouchProcessor, a7, 3LL, v15);
      if ( !a1 )
      {
        SetWakeBit(*((_QWORD *)a2 + 11), 8256LL);
        a1 = (struct tagTHREADINFO *)*((_QWORD *)a2 + 12);
      }
      SetWakeBit(a1, 8256LL);
      v14 = 1;
    }
  }
  tagObjLock::UnLockExclusive(v18[1]);
  tagDomLock::UnLockShared(v18[0]);
  return v14;
}
