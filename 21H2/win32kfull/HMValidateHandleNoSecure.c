/*
 * XREFs of HMValidateHandleNoSecure @ 0x1C008C3F8
 * Callers:
 *     xxxDestroyCorrespondingGhostWindow @ 0x1C0003648 (xxxDestroyCorrespondingGhostWindow.c)
 *     xxxRegisterGhostWindow @ 0x1C0003A40 (xxxRegisterGhostWindow.c)
 *     NtUserSetCoreWindowPartner @ 0x1C0004E60 (NtUserSetCoreWindowPartner.c)
 *     xxxHandleDestroyGhostWindow @ 0x1C00087E4 (xxxHandleDestroyGhostWindow.c)
 *     UserGetMiniWinInfo @ 0x1C0008C0C (UserGetMiniWinInfo.c)
 *     ?xxxClientShutdown2@@YAJPEAUtagBWL@@I_K@Z @ 0x1C000B354 (-xxxClientShutdown2@@YAJPEAUtagBWL@@I_K@Z.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C0012504 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     _SetDeferredDpiStateForWindowAndChildren @ 0x1C0013BBC (_SetDeferredDpiStateForWindowAndChildren.c)
 *     SfnPOWERBROADCAST @ 0x1C0022080 (SfnPOWERBROADCAST.c)
 *     SfnGETDBCSTEXTLENGTHS @ 0x1C0022C30 (SfnGETDBCSTEXTLENGTHS.c)
 *     xxxMinMaximizeEx @ 0x1C002B73C (xxxMinMaximizeEx.c)
 *     xxxShowOwnedWindows @ 0x1C002C1D4 (xxxShowOwnedWindows.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0034410 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     PWInsertAfter @ 0x1C0037514 (PWInsertAfter.c)
 *     xxxGetWindowSmIcon @ 0x1C0038D48 (xxxGetWindowSmIcon.c)
 *     _GhostWindowFromHungWindow @ 0x1C003B5B0 (_GhostWindowFromHungWindow.c)
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C003ED58 (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     xxxBroadcastMessageEx @ 0x1C003FE88 (xxxBroadcastMessageEx.c)
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C0040A20 (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 *     _HungWindowFromGhostWindow @ 0x1C0041508 (_HungWindowFromGhostWindow.c)
 *     NtUserQueryWindow @ 0x1C00415B0 (NtUserQueryWindow.c)
 *     xxxRealDefWindowProc @ 0x1C0049EC8 (xxxRealDefWindowProc.c)
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C004B3CC (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 *     xxxRealInternalGetMessage @ 0x1C0055720 (xxxRealInternalGetMessage.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0068330 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxInheritWindowMonitor @ 0x1C006C878 (xxxInheritWindowMonitor.c)
 *     ?xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z @ 0x1C006DB4C (-xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C006E030 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C006E958 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     ?BltValidInit@@YAHPEAUtagSMWP@@@Z @ 0x1C006EC64 (-BltValidInit@@YAHPEAUtagSMWP@@@Z.c)
 *     ?IsStillWindowC@@YAHPEAUHWND__@@@Z @ 0x1C006ED88 (-IsStillWindowC@@YAHPEAUHWND__@@@Z.c)
 *     xxxEndDeferWindowPosEx @ 0x1C006EDBC (xxxEndDeferWindowPosEx.c)
 *     ?ValidateSmwp@@YAHPEAUtagSMWP@@PEAH@Z @ 0x1C006F664 (-ValidateSmwp@@YAHPEAUtagSMWP@@PEAH@Z.c)
 *     ?ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C006F710 (-ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z.c)
 *     BuildWindowListWithDpiBoundaryInfo @ 0x1C006F994 (BuildWindowListWithDpiBoundaryInfo.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C00707F8 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     GreUpdateSpriteVisRgn @ 0x1C00731F0 (GreUpdateSpriteVisRgn.c)
 *     ?ValidateAndLockCursor@@YAHPEAPEAUtagCURSOR@@H@Z @ 0x1C007A5F0 (-ValidateAndLockCursor@@YAHPEAPEAUtagCURSOR@@H@Z.c)
 *     xxxWindowFromPoint @ 0x1C00C11CC (xxxWindowFromPoint.c)
 *     xxxProcessEventMessage @ 0x1C00C1918 (xxxProcessEventMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00C2120 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxSetCapture @ 0x1C00DAF80 (xxxSetCapture.c)
 *     xxxDWP_UpdateUIState @ 0x1C00E0EE4 (xxxDWP_UpdateUIState.c)
 *     ?DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z @ 0x1C00E9C98 (-DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z.c)
 *     UserIsWindowOnDesktopAndComposed @ 0x1C00EAD24 (UserIsWindowOnDesktopAndComposed.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C00F160C (UpdateMonitorForWindowAndChildren.c)
 *     UpdateWindowPositionsForDpiBoundaryChange @ 0x1C00F1754 (UpdateWindowPositionsForDpiBoundaryChange.c)
 *     UserDetachQueueFromInputWindow @ 0x1C00F2F58 (UserDetachQueueFromInputWindow.c)
 *     ?xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x1C00F7808 (-xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     xxxDesktopRecalc @ 0x1C00FFD6C (xxxDesktopRecalc.c)
 *     xxxDoHotKeyStuff @ 0x1C01052A0 (xxxDoHotKeyStuff.c)
 *     ?ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@PEAPEAUtagWND@@@Z @ 0x1C010AD38 (-ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@PEAPEAUtagWND@@@Z.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C010C1FC (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     AssociateInputContextEx @ 0x1C0118C60 (AssociateInputContextEx.c)
 *     UserIsWindowWithNoRedirectionBitmap @ 0x1C011919C (UserIsWindowWithNoRedirectionBitmap.c)
 *     UserVisrgnFromHwnd @ 0x1C011CE84 (UserVisrgnFromHwnd.c)
 *     ?_SfnINBOXSTRING@@YA_JJPEAUtagWND@@I_K_J1P6A_JXZKPEAUtagSMS@@@Z @ 0x1C011EE0C (-_SfnINBOXSTRING@@YA_JJPEAUtagWND@@I_K_J1P6A_JXZKPEAUtagSMS@@@Z.c)
 *     UserGetWindowRect @ 0x1C011F708 (UserGetWindowRect.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C0120404 (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     ?xxxKeyboardCorrectionCallout@@YAIPEBUtagMSG@@U_QMSG_POSTCHAR_FLAGS@@@Z @ 0x1C0121148 (-xxxKeyboardCorrectionCallout@@YAIPEBUtagMSG@@U_QMSG_POSTCHAR_FLAGS@@@Z.c)
 *     xxxProcessSetWindowPosEvent @ 0x1C0124A40 (xxxProcessSetWindowPosEvent.c)
 *     ?xxxSetActiveWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0124FE4 (-xxxSetActiveWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     xxxSetClipboardViewer @ 0x1C012CA20 (xxxSetClipboardViewer.c)
 *     xxxSysCommand @ 0x1C0130714 (xxxSysCommand.c)
 *     UserIsWindowDesktopComposed @ 0x1C0152F10 (UserIsWindowDesktopComposed.c)
 *     DestroyInputContext @ 0x1C015854C (DestroyInputContext.c)
 *     SfnOUTCBOXSTRING @ 0x1C015A250 (SfnOUTCBOXSTRING.c)
 *     SfnOUTLBOXSTRING @ 0x1C015A370 (SfnOUTLBOXSTRING.c)
 *     ?UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z @ 0x1C015CD28 (-UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z.c)
 *     xxxArrangeIconicWindows @ 0x1C015E5A0 (xxxArrangeIconicWindows.c)
 *     ?xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C0169284 (-xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     ?InternalRebuildHwndListForIMEClass@@YAPEAUtagBWL@@PEAU1@@Z @ 0x1C01D2280 (-InternalRebuildHwndListForIMEClass@@YAPEAUtagBWL@@PEAU1@@Z.c)
 *     xxxInternalEnumWindow @ 0x1C01D2394 (xxxInternalEnumWindow.c)
 *     ?FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z @ 0x1C01D6500 (-FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z.c)
 *     SnapshotWindowRects @ 0x1C01D7988 (SnapshotWindowRects.c)
 *     xxxMetricsRecalc @ 0x1C01D7C94 (xxxMetricsRecalc.c)
 *     xxxRestoreMonitorsAndWindowsRects @ 0x1C01D80BC (xxxRestoreMonitorsAndWindowsRects.c)
 *     _FreeTouchInputInfo @ 0x1C01DCB40 (_FreeTouchInputInfo.c)
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C01E1860 (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 *     ?xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z @ 0x1C01E2D64 (-xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z @ 0x1C01E2F00 (-xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z.c)
 *     ?xxxSendDpiChangedMessageToChildWindow@@YAHPEAUHWND__@@H@Z @ 0x1C01E4738 (-xxxSendDpiChangedMessageToChildWindow@@YAHPEAUHWND__@@H@Z.c)
 *     ?xxxSendGDIScaledDpiChangedMessage@@YAHPEAUHWND__@@@Z @ 0x1C01E482C (-xxxSendGDIScaledDpiChangedMessage@@YAHPEAUHWND__@@@Z.c)
 *     xxxForceUpdateProcessDpiAwarenessContext @ 0x1C01E646C (xxxForceUpdateProcessDpiAwarenessContext.c)
 *     xxxForceWindowToDpiForTest @ 0x1C01E669C (xxxForceWindowToDpiForTest.c)
 *     xxxUpdateWindowPositionsForDpiBoundaryChange @ 0x1C01E6824 (xxxUpdateWindowPositionsForDpiBoundaryChange.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01E6A44 (xxxCallJournalPlaybackHook.c)
 *     xxxCallJournalRecordHook @ 0x1C01E6E64 (xxxCallJournalRecordHook.c)
 *     ?NormalAPCInvalidateCOMPOSITEDWnd@@YAXPEAX00@Z @ 0x1C01E78C0 (-NormalAPCInvalidateCOMPOSITEDWnd@@YAXPEAX00@Z.c)
 *     ?zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z @ 0x1C01E7B44 (-zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z.c)
 *     DeleteFadeSprite @ 0x1C01E7D60 (DeleteFadeSprite.c)
 *     UserGetClientRgn @ 0x1C01E8B58 (UserGetClientRgn.c)
 *     _GetPointerDeviceType @ 0x1C01EF528 (_GetPointerDeviceType.c)
 *     PrepareSentPointerMessageForClient @ 0x1C01EFA60 (PrepareSentPointerMessageForClient.c)
 *     xxxRetrievePointerInputMessage @ 0x1C01F06C8 (xxxRetrievePointerInputMessage.c)
 *     ?MakePointerMessageWorker@@YAHPEBUtagPOINTER_INFO@@UtagPOINT@@HHHIPEAXPEA_KPEA_JPEAGPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01F11FC (-MakePointerMessageWorker@@YAHPEBUtagPOINTER_INFO@@UtagPOINT@@HHHIPEAXPEA_KPEA_JPEAGPEAKPEAHPEAP.c)
 *     ?MakeThreadPointerHookData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1C01F13E8 (-MakeThreadPointerHookData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@G@Z.c)
 *     PointerInfoCopyOutHelperInternal @ 0x1C01F24A0 (PointerInfoCopyOutHelperInternal.c)
 *     ?DrawIconCallBack@@YAXPEAUHWND__@@I_K_J@Z @ 0x1C01F2A80 (-DrawIconCallBack@@YAXPEAUHWND__@@I_K_J@Z.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01F2C38 (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     ?_RemoveNonTaskWindows@@YAHPEAUtagBWL@@PEAUtagWND@@PEAHPEAPEAPEAUHWND__@@@Z @ 0x1C01F30E8 (-_RemoveNonTaskWindows@@YAHPEAUtagBWL@@PEAUtagWND@@PEAHPEAPEAPEAUHWND__@@@Z.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01F3450 (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 *     _GetAltTabInfo @ 0x1C01F3D44 (_GetAltTabInfo.c)
 *     xxxNextWindow @ 0x1C01F412C (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01F4970 (xxxOldNextWindow.c)
 *     GetInputTransformList @ 0x1C01F5870 (GetInputTransformList.c)
 *     HasInputTransform @ 0x1C01F58E0 (HasInputTransform.c)
 *     ?DDEImpDecRefInitWorker@@YAXPEAUHWND__@@@Z @ 0x1C01F5E80 (-DDEImpDecRefInitWorker@@YAXPEAUHWND__@@@Z.c)
 *     ?_IsLegacyDevice@Edgy@@YAHPEAX@Z @ 0x1C0208620 (-_IsLegacyDevice@Edgy@@YAHPEAX@Z.c)
 *     ?_PostEdgyInertia@Edgy@@YAXPEAUHWND__@@W4tagEDGY_LOCATION@@K@Z @ 0x1C02088FC (-_PostEdgyInertia@Edgy@@YAXPEAUHWND__@@W4tagEDGY_LOCATION@@K@Z.c)
 *     xxxFrostCrashedWindow @ 0x1C020A1B4 (xxxFrostCrashedWindow.c)
 *     xxxRegisterSiblingFrostWindow @ 0x1C020A2E0 (xxxRegisterSiblingFrostWindow.c)
 *     ?SoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0213180 (-SoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?TopLevelTouchTarget@@YAPEAUtagWND@@PEAU1@PEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@2H@Z @ 0x1C02153C0 (-TopLevelTouchTarget@@YAPEAUtagWND@@PEAU1@PEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@2H@Z.c)
 *     EditionPointerWindowHitTest @ 0x1C0217110 (EditionPointerWindowHitTest.c)
 *     ValidatePointerOffset @ 0x1C0217630 (ValidatePointerOffset.c)
 *     _FreeGestureInfo @ 0x1C0227C40 (_FreeGestureInfo.c)
 *     xxxMNFindWindowFromPoint @ 0x1C02386D0 (xxxMNFindWindowFromPoint.c)
 *     xxxMNKeyDown @ 0x1C0238A98 (xxxMNKeyDown.c)
 *     xxxMenuWindowProc @ 0x1C023BBA0 (xxxMenuWindowProc.c)
 *     ?CanTransferForeground@CWindow@@QEBA_NXZ @ 0x1C024001C (-CanTransferForeground@CWindow@@QEBA_NXZ.c)
 *     ?GetWindowToForegroundActivate@CWindow@@QEBAPEAUtagWND@@XZ @ 0x1C0240560 (-GetWindowToForegroundActivate@CWindow@@QEBAPEAUtagWND@@XZ.c)
 *     ?TemplateWindow@CWindow@@QEAA_NPEAUtagWND@@W4TemplateWindowOptions@@@Z @ 0x1C0240AD8 (-TemplateWindow@CWindow@@QEAA_NPEAUtagWND@@W4TemplateWindowOptions@@@Z.c)
 *     ?_FreeWindow@CWindowGroup@@AEAAXPEAPEAVCWindow@@@Z @ 0x1C0240C3C (-_FreeWindow@CWindowGroup@@AEAAXPEAPEAVCWindow@@@Z.c)
 *     ?_TemplateWindow@CWindowGroup@@AEAA_NPEAVCWindow@@0W4TemplateWindowOptions@@@Z @ 0x1C0240DDC (-_TemplateWindow@CWindowGroup@@AEAA_NPEAVCWindow@@0W4TemplateWindowOptions@@@Z.c)
 *     xxxMessageEvent @ 0x1C0247038 (xxxMessageEvent.c)
 *     ?ChangeWindowTreeProtection@@YAHPEAUtagWND@@K@Z @ 0x1C0247E10 (-ChangeWindowTreeProtection@@YAHPEAUtagWND@@K@Z.c)
 *     xxxDragObject @ 0x1C0248694 (xxxDragObject.c)
 *     ?GetReportInfo@InteractiveControlManager@@QEAAJKKPEAUtagINTERACTIVECTRL_INFO@@@Z @ 0x1C0252360 (-GetReportInfo@InteractiveControlManager@@QEAAJKKPEAUtagINTERACTIVECTRL_INFO@@@Z.c)
 *     ?ValidatePointer@HideInkCursorProvider@@AEBAJI@Z @ 0x1C025467C (-ValidatePointer@HideInkCursorProvider@@AEBAJI@Z.c)
 *     ?GetDisplayScalingInfoAndCheckSupported@InkDevice@@AEBAJIPEAM@Z @ 0x1C0255278 (-GetDisplayScalingInfoAndCheckSupported@InkDevice@@AEBAJIPEAM@Z.c)
 *     ?ValidatePointer@InkDevice@@AEBAJI@Z @ 0x1C0256570 (-ValidatePointer@InkDevice@@AEBAJI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HMValidateHandleNoSecure(unsigned __int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rbx
  unsigned __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // r14
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v16; // rcx
  __int64 CurrentThreadProcess; // rax

  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(a1)
    || (CurrentProcess = PsGetCurrentProcess(v7, v6, v8),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v16),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    PsGetThreadWin32Thread(CurrentThread);
  }
  if ( (unsigned __int64)(unsigned __int16)a1 < *(_QWORD *)(gpsi + 8LL) )
  {
    v9 = gSharedInfo[1] + (unsigned int)(unsigned __int16)a1 * LODWORD(gSharedInfo[2]);
    v10 = a1 >> 16;
    v12 = HMPkheFromPhe(v9);
    if ( ((_WORD)v10 == *(_WORD *)(v9 + 26)
       || (_WORD)v10 == 0xFFFF
       || !(_WORD)v10 && PsGetCurrentProcessWow64Process(v11))
      && (*(_BYTE *)(v9 + 25) & 1) == 0
      && *(_BYTE *)(v9 + 24) == a2 )
    {
      return *(_QWORD *)v12;
    }
  }
  return v5;
}
