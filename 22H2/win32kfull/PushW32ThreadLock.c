/*
 * XREFs of PushW32ThreadLock @ 0x1C00BFA20
 * Callers:
 *     EditionCreateWindowStationEntryPoint @ 0x1C000C1A0 (EditionCreateWindowStationEntryPoint.c)
 *     xxxCreateWindowStation @ 0x1C000C6EC (xxxCreateWindowStation.c)
 *     xxxCreateDesktopEx @ 0x1C00101D4 (xxxCreateDesktopEx.c)
 *     fnHkINLPCBTCREATESTRUCT @ 0x1C001E5E0 (fnHkINLPCBTCREATESTRUCT.c)
 *     SfnINDEVICECHANGE @ 0x1C0020920 (SfnINDEVICECHANGE.c)
 *     ClientLoadLibrary @ 0x1C0020CF8 (ClientLoadLibrary.c)
 *     SfnINLPCREATESTRUCT @ 0x1C0020F50 (SfnINLPCREATESTRUCT.c)
 *     xxxClientAddFontResourceW @ 0x1C0021B2C (xxxClientAddFontResourceW.c)
 *     ?xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z @ 0x1C0021DB0 (-xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z.c)
 *     SfnPOWERBROADCAST @ 0x1C0021FE0 (SfnPOWERBROADCAST.c)
 *     xxxClientLoadImage @ 0x1C0022860 (xxxClientLoadImage.c)
 *     SfnGETDBCSTEXTLENGTHS @ 0x1C0022B90 (SfnGETDBCSTEXTLENGTHS.c)
 *     xxxClientLoadMenu @ 0x1C0023740 (xxxClientLoadMenu.c)
 *     SfnCOPYDATA @ 0x1C0023D80 (SfnCOPYDATA.c)
 *     xxxClientLoadStringW @ 0x1C002425C (xxxClientLoadStringW.c)
 *     xxxClientExpandStringW @ 0x1C00251BC (xxxClientExpandStringW.c)
 *     ?xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z @ 0x1C0025BA0 (-xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z.c)
 *     ?xxxLoadUserAndNetworkFonts@@YAXXZ @ 0x1C0025D38 (-xxxLoadUserAndNetworkFonts@@YAXXZ.c)
 *     ?xxxLoadPermanentFonts@@YAHXZ @ 0x1C0025E90 (-xxxLoadPermanentFonts@@YAHXZ.c)
 *     NtUserSwitchDesktop @ 0x1C00283B0 (NtUserSwitchDesktop.c)
 *     xxxSwitchDesktop @ 0x1C0029864 (xxxSwitchDesktop.c)
 *     NtUserGetClipboardData @ 0x1C002CAD0 (NtUserGetClipboardData.c)
 *     xxxTrackMouseMove @ 0x1C002D520 (xxxTrackMouseMove.c)
 *     xxxCloseClipboard @ 0x1C002FDB0 (xxxCloseClipboard.c)
 *     xxxCreateDefaultImeWindow @ 0x1C00335B8 (xxxCreateDefaultImeWindow.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C0039E68 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     LockW32Thread @ 0x1C003D9CC (LockW32Thread.c)
 *     xxxSendMessageBSM @ 0x1C003EB40 (xxxSendMessageBSM.c)
 *     xxxBroadcastMessageEx @ 0x1C003FDE8 (xxxBroadcastMessageEx.c)
 *     xxxSendNotifyMessage @ 0x1C00402D0 (xxxSendNotifyMessage.c)
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C0040980 (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 *     SfnINSTRINGNULL @ 0x1C004FDF0 (SfnINSTRINGNULL.c)
 *     xxxDoPaint @ 0x1C0053408 (xxxDoPaint.c)
 *     xxxReceiveMessage @ 0x1C0058F60 (xxxReceiveMessage.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C005BD10 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     xxxEndDeferWindowPosEx @ 0x1C006ED1C (xxxEndDeferWindowPosEx.c)
 *     xxxRemoveFullScreen @ 0x1C007C980 (xxxRemoveFullScreen.c)
 *     NtUserGetClassInfoEx @ 0x1C00BBEB0 (NtUserGetClassInfoEx.c)
 *     NtUserCreateWindowEx @ 0x1C00BF1E0 (NtUserCreateWindowEx.c)
 *     NtUserSendInput @ 0x1C00C00F0 (NtUserSendInput.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C00C1170 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     xxxSetShellWindow @ 0x1C00D6C50 (xxxSetShellWindow.c)
 *     NtUserQueryInformationThread @ 0x1C00D7E80 (NtUserQueryInformationThread.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00D84E8 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00DCFE8 (xxxSystemParametersInfoWorker.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C00E1BE0 (xxxDrawMenuBarUnderlines.c)
 *     xxxDesktopsRecalc @ 0x1C00FF9A0 (xxxDesktopsRecalc.c)
 *     xxxSetProcessWindowStation @ 0x1C0100210 (xxxSetProcessWindowStation.c)
 *     NtUserRegisterRawInputDevices @ 0x1C01079D0 (NtUserRegisterRawInputDevices.c)
 *     EditionHandleAndPostKeyEvent @ 0x1C0109DE0 (EditionHandleAndPostKeyEvent.c)
 *     NtUserfnPOWERBROADCAST @ 0x1C011A830 (NtUserfnPOWERBROADCAST.c)
 *     xxxSwitchDesktopWithFade @ 0x1C011D7D0 (xxxSwitchDesktopWithFade.c)
 *     SfnINSTRING @ 0x1C011EB70 (SfnINSTRING.c)
 *     NtUserfnINDEVICECHANGE @ 0x1C011FCB0 (NtUserfnINDEVICECHANGE.c)
 *     xxxAddFullScreen @ 0x1C0122F74 (xxxAddFullScreen.c)
 *     ?xxxDisownClipboard@@YAXPEAUtagWND@@@Z @ 0x1C0123548 (-xxxDisownClipboard@@YAXPEAUtagWND@@@Z.c)
 *     xxxEmptyClipboard @ 0x1C0123900 (xxxEmptyClipboard.c)
 *     ?xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C0123A94 (-xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z.c)
 *     xxxSendMinRectMessages @ 0x1C0124928 (xxxSendMinRectMessages.c)
 *     RemoteDisableScreen @ 0x1C01286A0 (RemoteDisableScreen.c)
 *     xxxSetClipboardViewer @ 0x1C012C670 (xxxSetClipboardViewer.c)
 *     xxxWaitForInputIdle @ 0x1C012C7C0 (xxxWaitForInputIdle.c)
 *     ?xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z @ 0x1C012C934 (-xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z.c)
 *     ?xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z @ 0x1C012D100 (-xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z.c)
 *     xxxImmLoadLayout @ 0x1C012ED8C (xxxImmLoadLayout.c)
 *     xxxConnectService @ 0x1C012F194 (xxxConnectService.c)
 *     xxxAddShadow @ 0x1C013D9EC (xxxAddShadow.c)
 *     xxxClientExtTextOutW @ 0x1C0158F28 (xxxClientExtTextOutW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C0159250 (xxxClientGetTextExtentPointW.c)
 *     ClientGetListboxString @ 0x1C0159EC4 (ClientGetListboxString.c)
 *     ?xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z @ 0x1C015C860 (-xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z.c)
 *     xxxChangeClipboardChain @ 0x1C015EC70 (xxxChangeClipboardChain.c)
 *     xxxSnapWindow @ 0x1C016040C (xxxSnapWindow.c)
 *     xxxRestoreDesktopsMonitorsAndWindowsRects @ 0x1C0162D50 (xxxRestoreDesktopsMonitorsAndWindowsRects.c)
 *     RemoteRedrawScreen @ 0x1C0162DB4 (RemoteRedrawScreen.c)
 *     xxxValidateClassAndSize @ 0x1C0167A7C (xxxValidateClassAndSize.c)
 *     ?xxxCallGenerateIAMKey@@YAJPEAUtagIAM_KKEY@@@Z @ 0x1C01D204C (-xxxCallGenerateIAMKey@@YAJPEAUtagIAM_KKEY@@@Z.c)
 *     xxxRestoreMonitorsAndWindowsRects @ 0x1C01D7AFC (xxxRestoreMonitorsAndWindowsRects.c)
 *     ?xxxSendLastFrameTouchUp@@YAXPEAUtagINJECTED_CONTACT@@PEAUDEVICEINFO@@IK@Z @ 0x1C01DBD5C (-xxxSendLastFrameTouchUp@@YAXPEAUtagINJECTED_CONTACT@@PEAUDEVICEINFO@@IK@Z.c)
 *     xxxGetDeviceChangeInfo @ 0x1C01DE120 (xxxGetDeviceChangeInfo.c)
 *     xxxForceUpdateProcessDpiAwarenessContext @ 0x1C01E5EAC (xxxForceUpdateProcessDpiAwarenessContext.c)
 *     ?xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z @ 0x1C01F10EC (-xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z.c)
 *     xxxNextWindow @ 0x1C01F3B6C (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01F43B0 (xxxOldNextWindow.c)
 *     ?DDEImpIncRefInit@@YAHPEAUtagWND@@PEAUtagDDEIMP@@PEAU_TL@@@Z @ 0x1C01F5990 (-DDEImpIncRefInit@@YAHPEAUtagWND@@PEAUtagDDEIMP@@PEAU_TL@@@Z.c)
 *     NtUserCtxDisplayIOCtl @ 0x1C01F7330 (NtUserCtxDisplayIOCtl.c)
 *     NtUserDrawCaptionTemp @ 0x1C01F7CE0 (NtUserDrawCaptionTemp.c)
 *     NtUserInjectTouchInput @ 0x1C01FD7E0 (NtUserInjectTouchInput.c)
 *     NtUserResolveDesktopForWOW @ 0x1C0200C30 (NtUserResolveDesktopForWOW.c)
 *     NtUserfnIMECONTROL @ 0x1C02048C0 (NtUserfnIMECONTROL.c)
 *     NtUserfnINLPHLPSTRUCT @ 0x1C0205100 (NtUserfnINLPHLPSTRUCT.c)
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1C020D06C (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C020D970 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 *     xxxPointerWindowHitTest @ 0x1C0217734 (xxxPointerWindowHitTest.c)
 *     ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x1C0218E30 (-xxxProcessMousePromotionQueue@@YAXXZ.c)
 *     ?xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C021BB88 (-xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     xxxDeferredDesktopRotation @ 0x1C021E100 (xxxDeferredDesktopRotation.c)
 *     ?xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C021EFBC (-xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z.c)
 *     ClientEventCallback @ 0x1C02282E8 (ClientEventCallback.c)
 *     SfnCOPYGLOBALDATA @ 0x1C02286E0 (SfnCOPYGLOBALDATA.c)
 *     SfnIMECONTROL @ 0x1C0229020 (SfnIMECONTROL.c)
 *     SfnINCNTOUTSTRING @ 0x1C0229BC0 (SfnINCNTOUTSTRING.c)
 *     SfnINCNTOUTSTRINGNULL @ 0x1C022A1E0 (SfnINCNTOUTSTRINGNULL.c)
 *     SfnINLPHELPINFOSTRUCT @ 0x1C022AE50 (SfnINLPHELPINFOSTRUCT.c)
 *     SfnINLPHLPSTRUCT @ 0x1C022B2C0 (SfnINLPHLPSTRUCT.c)
 *     SfnINLPKDRAWSWITCHWND @ 0x1C022B720 (SfnINLPKDRAWSWITCHWND.c)
 *     SfnINLPMDICREATESTRUCT @ 0x1C022BC60 (SfnINLPMDICREATESTRUCT.c)
 *     SfnINPGESTURENOTIFYSTRUCT @ 0x1C022DA90 (SfnINPGESTURENOTIFYSTRUCT.c)
 *     SfnPOPTINLPUINT @ 0x1C022F200 (SfnPOPTINLPUINT.c)
 *     SfnPOUTLPINT @ 0x1C022F6C0 (SfnPOUTLPINT.c)
 *     SfnTOUCHHITTESTING @ 0x1C02303B0 (SfnTOUCHHITTESTING.c)
 *     xxxClientCopyDDEIn1 @ 0x1C0231A70 (xxxClientCopyDDEIn1.c)
 *     xxxClientFindMnemChar @ 0x1C02322F0 (xxxClientFindMnemChar.c)
 *     xxxClientLpkDrawTextEx @ 0x1C02329DC (xxxClientLpkDrawTextEx.c)
 *     xxxClientPSMTextOut @ 0x1C0232E44 (xxxClientPSMTextOut.c)
 *     xxxHardErrorControl @ 0x1C02418AC (xxxHardErrorControl.c)
 *     xxxCsEvent @ 0x1C02467E8 (xxxCsEvent.c)
 *     xxxMessageEvent @ 0x1C0246A78 (xxxMessageEvent.c)
 *     xxxDragObject @ 0x1C02480D4 (xxxDragObject.c)
 *     ?xxxDrawMenuItemText@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C024BBEC (-xxxDrawMenuItemText@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 *     ?AddEllipsisAndDrawLine@@YAHPEAUHDC__@@HPEAGHKPEAUDRAWTEXTDATA@@H@Z @ 0x1C025DCE0 (-AddEllipsisAndDrawLine@@YAHPEAUHDC__@@HPEAGHKPEAUDRAWTEXTDATA@@H@Z.c)
 *     xxxPSMGetTextExtent @ 0x1C0260224 (xxxPSMGetTextExtent.c)
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
