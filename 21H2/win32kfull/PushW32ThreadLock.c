/*
 * XREFs of PushW32ThreadLock @ 0x1C00BFD80
 * Callers:
 *     EditionCreateWindowStationEntryPoint @ 0x1C000C1A0 (EditionCreateWindowStationEntryPoint.c)
 *     xxxCreateWindowStation @ 0x1C000C6EC (xxxCreateWindowStation.c)
 *     xxxCreateDesktopEx @ 0x1C00101D4 (xxxCreateDesktopEx.c)
 *     fnHkINLPCBTCREATESTRUCT @ 0x1C001E680 (fnHkINLPCBTCREATESTRUCT.c)
 *     SfnINDEVICECHANGE @ 0x1C00209C0 (SfnINDEVICECHANGE.c)
 *     ClientLoadLibrary @ 0x1C0020D98 (ClientLoadLibrary.c)
 *     SfnINLPCREATESTRUCT @ 0x1C0020FF0 (SfnINLPCREATESTRUCT.c)
 *     xxxClientAddFontResourceW @ 0x1C0021BCC (xxxClientAddFontResourceW.c)
 *     ?xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z @ 0x1C0021E50 (-xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z.c)
 *     SfnPOWERBROADCAST @ 0x1C0022080 (SfnPOWERBROADCAST.c)
 *     xxxClientLoadImage @ 0x1C0022900 (xxxClientLoadImage.c)
 *     SfnGETDBCSTEXTLENGTHS @ 0x1C0022C30 (SfnGETDBCSTEXTLENGTHS.c)
 *     xxxClientLoadMenu @ 0x1C00237E0 (xxxClientLoadMenu.c)
 *     SfnCOPYDATA @ 0x1C0023E20 (SfnCOPYDATA.c)
 *     xxxClientLoadStringW @ 0x1C00242FC (xxxClientLoadStringW.c)
 *     xxxClientExpandStringW @ 0x1C002525C (xxxClientExpandStringW.c)
 *     ?xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z @ 0x1C0025C40 (-xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z.c)
 *     ?xxxLoadUserAndNetworkFonts@@YAXXZ @ 0x1C0025DD8 (-xxxLoadUserAndNetworkFonts@@YAXXZ.c)
 *     ?xxxLoadPermanentFonts@@YAHXZ @ 0x1C0025F30 (-xxxLoadPermanentFonts@@YAHXZ.c)
 *     NtUserSwitchDesktop @ 0x1C0028450 (NtUserSwitchDesktop.c)
 *     xxxSwitchDesktop @ 0x1C0029904 (xxxSwitchDesktop.c)
 *     NtUserGetClipboardData @ 0x1C002CB70 (NtUserGetClipboardData.c)
 *     xxxTrackMouseMove @ 0x1C002D5C0 (xxxTrackMouseMove.c)
 *     xxxCloseClipboard @ 0x1C002FE50 (xxxCloseClipboard.c)
 *     xxxCreateDefaultImeWindow @ 0x1C0033658 (xxxCreateDefaultImeWindow.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C0039F08 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     LockW32Thread @ 0x1C003DA6C (LockW32Thread.c)
 *     xxxSendMessageBSM @ 0x1C003EBE0 (xxxSendMessageBSM.c)
 *     xxxBroadcastMessageEx @ 0x1C003FE88 (xxxBroadcastMessageEx.c)
 *     xxxSendNotifyMessage @ 0x1C0040370 (xxxSendNotifyMessage.c)
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C0040A20 (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 *     SfnINSTRINGNULL @ 0x1C004FE90 (SfnINSTRINGNULL.c)
 *     xxxDoPaint @ 0x1C00534A8 (xxxDoPaint.c)
 *     xxxReceiveMessage @ 0x1C0059000 (xxxReceiveMessage.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C005BDB0 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     xxxEndDeferWindowPosEx @ 0x1C006EDBC (xxxEndDeferWindowPosEx.c)
 *     xxxRemoveFullScreen @ 0x1C007CA20 (xxxRemoveFullScreen.c)
 *     NtUserGetClassInfoEx @ 0x1C00BC210 (NtUserGetClassInfoEx.c)
 *     NtUserCreateWindowEx @ 0x1C00BF540 (NtUserCreateWindowEx.c)
 *     NtUserSendInput @ 0x1C00C0450 (NtUserSendInput.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C00C14D0 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     xxxSetShellWindow @ 0x1C00D6FA0 (xxxSetShellWindow.c)
 *     NtUserQueryInformationThread @ 0x1C00D81D0 (NtUserQueryInformationThread.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00D8838 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00DD338 (xxxSystemParametersInfoWorker.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C00E1F30 (xxxDrawMenuBarUnderlines.c)
 *     xxxDesktopsRecalc @ 0x1C00FFCF0 (xxxDesktopsRecalc.c)
 *     xxxSetProcessWindowStation @ 0x1C0100560 (xxxSetProcessWindowStation.c)
 *     NtUserRegisterRawInputDevices @ 0x1C0107D50 (NtUserRegisterRawInputDevices.c)
 *     EditionHandleAndPostKeyEvent @ 0x1C010A160 (EditionHandleAndPostKeyEvent.c)
 *     NtUserfnPOWERBROADCAST @ 0x1C011ABB0 (NtUserfnPOWERBROADCAST.c)
 *     xxxSwitchDesktopWithFade @ 0x1C011DB50 (xxxSwitchDesktopWithFade.c)
 *     SfnINSTRING @ 0x1C011EEF0 (SfnINSTRING.c)
 *     NtUserfnINDEVICECHANGE @ 0x1C0120030 (NtUserfnINDEVICECHANGE.c)
 *     xxxAddFullScreen @ 0x1C01232F4 (xxxAddFullScreen.c)
 *     ?xxxDisownClipboard@@YAXPEAUtagWND@@@Z @ 0x1C01238C8 (-xxxDisownClipboard@@YAXPEAUtagWND@@@Z.c)
 *     xxxEmptyClipboard @ 0x1C0123C80 (xxxEmptyClipboard.c)
 *     ?xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C0123E14 (-xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z.c)
 *     xxxSendMinRectMessages @ 0x1C0124CA8 (xxxSendMinRectMessages.c)
 *     RemoteDisableScreen @ 0x1C0128A20 (RemoteDisableScreen.c)
 *     xxxSetClipboardViewer @ 0x1C012CA20 (xxxSetClipboardViewer.c)
 *     xxxWaitForInputIdle @ 0x1C012CB70 (xxxWaitForInputIdle.c)
 *     ?xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z @ 0x1C012CCE4 (-xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z.c)
 *     ?xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z @ 0x1C012D4B0 (-xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z.c)
 *     xxxImmLoadLayout @ 0x1C012F13C (xxxImmLoadLayout.c)
 *     xxxConnectService @ 0x1C012F544 (xxxConnectService.c)
 *     xxxAddShadow @ 0x1C013DECC (xxxAddShadow.c)
 *     xxxClientExtTextOutW @ 0x1C01594E8 (xxxClientExtTextOutW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C0159810 (xxxClientGetTextExtentPointW.c)
 *     ClientGetListboxString @ 0x1C015A484 (ClientGetListboxString.c)
 *     ?xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z @ 0x1C015CE20 (-xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z.c)
 *     xxxChangeClipboardChain @ 0x1C015F420 (xxxChangeClipboardChain.c)
 *     xxxSnapWindow @ 0x1C0160BBC (xxxSnapWindow.c)
 *     xxxRestoreDesktopsMonitorsAndWindowsRects @ 0x1C0163520 (xxxRestoreDesktopsMonitorsAndWindowsRects.c)
 *     RemoteRedrawScreen @ 0x1C0163584 (RemoteRedrawScreen.c)
 *     xxxValidateClassAndSize @ 0x1C016824C (xxxValidateClassAndSize.c)
 *     ?xxxCallGenerateIAMKey@@YAJPEAUtagIAM_KKEY@@@Z @ 0x1C01D260C (-xxxCallGenerateIAMKey@@YAJPEAUtagIAM_KKEY@@@Z.c)
 *     xxxRestoreMonitorsAndWindowsRects @ 0x1C01D80BC (xxxRestoreMonitorsAndWindowsRects.c)
 *     ?xxxSendLastFrameTouchUp@@YAXPEAUtagINJECTED_CONTACT@@PEAUDEVICEINFO@@IK@Z @ 0x1C01DC31C (-xxxSendLastFrameTouchUp@@YAXPEAUtagINJECTED_CONTACT@@PEAUDEVICEINFO@@IK@Z.c)
 *     xxxGetDeviceChangeInfo @ 0x1C01DE6E0 (xxxGetDeviceChangeInfo.c)
 *     xxxForceUpdateProcessDpiAwarenessContext @ 0x1C01E646C (xxxForceUpdateProcessDpiAwarenessContext.c)
 *     ?xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z @ 0x1C01F16AC (-xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z.c)
 *     xxxNextWindow @ 0x1C01F412C (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01F4970 (xxxOldNextWindow.c)
 *     ?DDEImpIncRefInit@@YAHPEAUtagWND@@PEAUtagDDEIMP@@PEAU_TL@@@Z @ 0x1C01F5F50 (-DDEImpIncRefInit@@YAHPEAUtagWND@@PEAUtagDDEIMP@@PEAU_TL@@@Z.c)
 *     NtUserCtxDisplayIOCtl @ 0x1C01F78F0 (NtUserCtxDisplayIOCtl.c)
 *     NtUserDrawCaptionTemp @ 0x1C01F82A0 (NtUserDrawCaptionTemp.c)
 *     NtUserInjectTouchInput @ 0x1C01FDDA0 (NtUserInjectTouchInput.c)
 *     NtUserResolveDesktopForWOW @ 0x1C02011F0 (NtUserResolveDesktopForWOW.c)
 *     NtUserfnIMECONTROL @ 0x1C0204E80 (NtUserfnIMECONTROL.c)
 *     NtUserfnINLPHLPSTRUCT @ 0x1C02056C0 (NtUserfnINLPHLPSTRUCT.c)
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1C020D62C (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C020DF30 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 *     xxxPointerWindowHitTest @ 0x1C0217CF4 (xxxPointerWindowHitTest.c)
 *     ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x1C02193F0 (-xxxProcessMousePromotionQueue@@YAXXZ.c)
 *     ?xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C021C148 (-xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     xxxDeferredDesktopRotation @ 0x1C021E6C0 (xxxDeferredDesktopRotation.c)
 *     ?xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C021F57C (-xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z.c)
 *     ClientEventCallback @ 0x1C02288A8 (ClientEventCallback.c)
 *     SfnCOPYGLOBALDATA @ 0x1C0228CA0 (SfnCOPYGLOBALDATA.c)
 *     SfnIMECONTROL @ 0x1C02295E0 (SfnIMECONTROL.c)
 *     SfnINCNTOUTSTRING @ 0x1C022A180 (SfnINCNTOUTSTRING.c)
 *     SfnINCNTOUTSTRINGNULL @ 0x1C022A7A0 (SfnINCNTOUTSTRINGNULL.c)
 *     SfnINLPHELPINFOSTRUCT @ 0x1C022B410 (SfnINLPHELPINFOSTRUCT.c)
 *     SfnINLPHLPSTRUCT @ 0x1C022B880 (SfnINLPHLPSTRUCT.c)
 *     SfnINLPKDRAWSWITCHWND @ 0x1C022BCE0 (SfnINLPKDRAWSWITCHWND.c)
 *     SfnINLPMDICREATESTRUCT @ 0x1C022C220 (SfnINLPMDICREATESTRUCT.c)
 *     SfnINPGESTURENOTIFYSTRUCT @ 0x1C022E050 (SfnINPGESTURENOTIFYSTRUCT.c)
 *     SfnPOPTINLPUINT @ 0x1C022F7C0 (SfnPOPTINLPUINT.c)
 *     SfnPOUTLPINT @ 0x1C022FC80 (SfnPOUTLPINT.c)
 *     SfnTOUCHHITTESTING @ 0x1C0230970 (SfnTOUCHHITTESTING.c)
 *     xxxClientCopyDDEIn1 @ 0x1C0232030 (xxxClientCopyDDEIn1.c)
 *     xxxClientFindMnemChar @ 0x1C02328B0 (xxxClientFindMnemChar.c)
 *     xxxClientLpkDrawTextEx @ 0x1C0232F9C (xxxClientLpkDrawTextEx.c)
 *     xxxClientPSMTextOut @ 0x1C0233404 (xxxClientPSMTextOut.c)
 *     xxxHardErrorControl @ 0x1C0241E6C (xxxHardErrorControl.c)
 *     xxxCsEvent @ 0x1C0246DA8 (xxxCsEvent.c)
 *     xxxMessageEvent @ 0x1C0247038 (xxxMessageEvent.c)
 *     xxxDragObject @ 0x1C0248694 (xxxDragObject.c)
 *     ?xxxDrawMenuItemText@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C024C1AC (-xxxDrawMenuItemText@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 *     ?AddEllipsisAndDrawLine@@YAHPEAUHDC__@@HPEAGHKPEAUDRAWTEXTDATA@@H@Z @ 0x1C025E2A0 (-AddEllipsisAndDrawLine@@YAHPEAUHDC__@@HPEAGHKPEAUDRAWTEXTDATA@@H@Z.c)
 *     xxxPSMGetTextExtent @ 0x1C02607E4 (xxxPSMGetTextExtent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PushW32ThreadLock(__int64 a1, _QWORD *a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 result; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v15; // rcx
  __int64 CurrentThreadProcess; // rax

  CurrentThread = KeGetCurrentThread();
  v7 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(a1)
    || (CurrentProcess = PsGetCurrentProcess(v9, v8, v10),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v15),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v7 = *ThreadWin32Thread;
  }
  result = *(_QWORD *)(v7 + 16);
  *a2 = result;
  *(_QWORD *)(v7 + 16) = a2;
  a2[2] = a3;
  a2[1] = a1;
  return result;
}
