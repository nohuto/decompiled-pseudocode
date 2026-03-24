/*
 * XREFs of PopAndFreeAlwaysW32ThreadLock @ 0x1C00BFD00
 * Callers:
 *     EditionCreateWindowStationEntryPoint @ 0x1C000C1A0 (EditionCreateWindowStationEntryPoint.c)
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
 *     xxxSwitchDesktop @ 0x1C0029904 (xxxSwitchDesktop.c)
 *     xxxBroadcastMessageEx @ 0x1C003FE88 (xxxBroadcastMessageEx.c)
 *     xxxSendNotifyMessage @ 0x1C0040370 (xxxSendNotifyMessage.c)
 *     SfnINSTRINGNULL @ 0x1C004FE90 (SfnINSTRINGNULL.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C005BDB0 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     NtUserGetClassInfoEx @ 0x1C00BC210 (NtUserGetClassInfoEx.c)
 *     NtUserCreateWindowEx @ 0x1C00BF540 (NtUserCreateWindowEx.c)
 *     NtUserQueryInformationThread @ 0x1C00D81D0 (NtUserQueryInformationThread.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00DD338 (xxxSystemParametersInfoWorker.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C00E1F30 (xxxDrawMenuBarUnderlines.c)
 *     NtUserRegisterRawInputDevices @ 0x1C0107D50 (NtUserRegisterRawInputDevices.c)
 *     EditionHandleAndPostKeyEvent @ 0x1C010A160 (EditionHandleAndPostKeyEvent.c)
 *     NtUserfnPOWERBROADCAST @ 0x1C011ABB0 (NtUserfnPOWERBROADCAST.c)
 *     SfnINSTRING @ 0x1C011EEF0 (SfnINSTRING.c)
 *     NtUserfnINDEVICECHANGE @ 0x1C0120030 (NtUserfnINDEVICECHANGE.c)
 *     ?xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C0123E14 (-xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z.c)
 *     EditionFreeIMEKeyboardLayouts @ 0x1C012A550 (EditionFreeIMEKeyboardLayouts.c)
 *     xxxImmLoadLayout @ 0x1C012F13C (xxxImmLoadLayout.c)
 *     xxxAddShadow @ 0x1C013DECC (xxxAddShadow.c)
 *     xxxClientExtTextOutW @ 0x1C01594E8 (xxxClientExtTextOutW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C0159810 (xxxClientGetTextExtentPointW.c)
 *     ClientGetListboxString @ 0x1C015A484 (ClientGetListboxString.c)
 *     xxxRestoreDesktopsMonitorsAndWindowsRects @ 0x1C0163520 (xxxRestoreDesktopsMonitorsAndWindowsRects.c)
 *     xxxValidateClassAndSize @ 0x1C016824C (xxxValidateClassAndSize.c)
 *     xxxGetDeviceChangeInfo @ 0x1C01DE6E0 (xxxGetDeviceChangeInfo.c)
 *     NtUserCtxDisplayIOCtl @ 0x1C01F78F0 (NtUserCtxDisplayIOCtl.c)
 *     NtUserDrawCaptionTemp @ 0x1C01F82A0 (NtUserDrawCaptionTemp.c)
 *     NtUserResolveDesktopForWOW @ 0x1C02011F0 (NtUserResolveDesktopForWOW.c)
 *     NtUserfnIMECONTROL @ 0x1C0204E80 (NtUserfnIMECONTROL.c)
 *     NtUserfnINLPHLPSTRUCT @ 0x1C02056C0 (NtUserfnINLPHLPSTRUCT.c)
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1C020D62C (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C020DF30 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 *     xxxPointerWindowHitTest @ 0x1C0217CF4 (xxxPointerWindowHitTest.c)
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
 *     xxxClientFindMnemChar @ 0x1C02328B0 (xxxClientFindMnemChar.c)
 *     xxxClientLpkDrawTextEx @ 0x1C0232F9C (xxxClientLpkDrawTextEx.c)
 *     xxxClientPSMTextOut @ 0x1C0233404 (xxxClientPSMTextOut.c)
 *     xxxCsEvent @ 0x1C0246DA8 (xxxCsEvent.c)
 *     xxxMessageEvent @ 0x1C0247038 (xxxMessageEvent.c)
 *     xxxDragObject @ 0x1C0248694 (xxxDragObject.c)
 *     ?xxxDrawMenuItemText@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C024C1AC (-xxxDrawMenuItemText@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 *     xxxPSMGetTextExtent @ 0x1C02607E4 (xxxPSMGetTextExtent.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PopAndFreeAlwaysW32ThreadLock(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v11; // rcx
  __int64 CurrentThreadProcess; // rax

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(a1)
    || (CurrentProcess = PsGetCurrentProcess(v5, v4, v6),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v11),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v3 = *ThreadWin32Thread;
  }
  *(_QWORD *)(v3 + 16) = *(_QWORD *)a1;
  return (*(__int64 (__fastcall **)(_QWORD))(a1 + 16))(*(_QWORD *)(a1 + 8));
}
