/*
 * XREFs of _PostMessage @ 0x1C00EF0A0
 * Callers:
 *     ?xxxReportWindowHotKey@@YAXPEBUtagHOTKEY@@PEAUtagWND@@_N@Z @ 0x1C000ED34 (-xxxReportWindowHotKey@@YAXPEBUtagHOTKEY@@PEAUtagWND@@_N@Z.c)
 *     SetMouseTrails @ 0x1C0020418 (SetMouseTrails.c)
 *     ?_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0045194 (-_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00725D0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     _SetMagnificationInputTransform @ 0x1C007F160 (_SetMagnificationInputTransform.c)
 *     ?xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0097FCC (-xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     xxxRealDefWindowProc @ 0x1C00A8800 (xxxRealDefWindowProc.c)
 *     ?xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x1C00C62B0 (-xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     PostDeviceNotification @ 0x1C00D6230 (PostDeviceNotification.c)
 *     ?xxxImmProcessKey@@YAKPEAUtagQ@@PEAUtagWND@@I_K_J@Z @ 0x1C00DA8CC (-xxxImmProcessKey@@YAKPEAUtagQ@@PEAUtagWND@@I_K_J@Z.c)
 *     xxxSysCommand @ 0x1C00DE67C (xxxSysCommand.c)
 *     TrackMouseEvent @ 0x1C00E01E4 (TrackMouseEvent.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C00E6D24 (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     xxxCancelMouseMoveTracking @ 0x1C00EF010 (xxxCancelMouseMoveTracking.c)
 *     NtUserEndMenu @ 0x1C00F5C70 (NtUserEndMenu.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C00FFAF8 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C0102024 (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     PowerOffGdi @ 0x1C01295B0 (PowerOffGdi.c)
 *     ?FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z @ 0x1C01ABEC0 (-FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01B6E20 (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     TryDetachShellFrame @ 0x1C01B7EFC (TryDetachShellFrame.c)
 *     _PostMessageCheckIL @ 0x1C01B81EC (_PostMessageCheckIL.c)
 *     PostPointerEventMessage @ 0x1C01C4440 (PostPointerEventMessage.c)
 *     xxxNextWindow @ 0x1C01CB604 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01CBDC8 (xxxOldNextWindow.c)
 *     ?_PostEdgyInertia@Edgy@@YAXPEAUHWND__@@W4tagEDGY_LOCATION@@K@Z @ 0x1C01E998C (-_PostEdgyInertia@Edgy@@YAXPEAUHWND__@@W4tagEDGY_LOCATION@@K@Z.c)
 *     xxxCancelTrackingForThread @ 0x1C01F3CF0 (xxxCancelTrackingForThread.c)
 *     EditionPostInertiaMessage @ 0x1C01F8900 (EditionPostInertiaMessage.c)
 *     ?AbnormalDDEPost@@YAKPEAUtagDDECONV@@K@Z @ 0x1C01FA7BC (-AbnormalDDEPost@@YAKPEAUtagDDECONV@@K@Z.c)
 *     xxxDDETrackSendHook @ 0x1C01FDFB0 (xxxDDETrackSendHook.c)
 *     xxxDDETrackWindowDying @ 0x1C01FE184 (xxxDDETrackWindowDying.c)
 *     xxxFreeDdeConv @ 0x1C01FE3AC (xxxFreeDdeConv.c)
 *     ?xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C01FF92C (-xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     PsW32ScreenSaver_Show @ 0x1C0203530 (PsW32ScreenSaver_Show.c)
 *     xxxHandleMenuMessages @ 0x1C0216988 (xxxHandleMenuMessages.c)
 *     xxxMNLoop @ 0x1C021726C (xxxMNLoop.c)
 *     xxxMenuWindowProc @ 0x1C021D3D0 (xxxMenuWindowProc.c)
 *     _anonymous_namespace_::SeverWindowManagementConnectionToShell @ 0x1C02206CC (_anonymous_namespace_--SeverWindowManagementConnectionToShell.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C02228BC (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 *     ?xxxCloseApplication@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C02251D8 (-xxxCloseApplication@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?DismissTooltips@TooltipDismiss@@YAXXZ @ 0x1C0230240 (-DismissTooltips@TooltipDismiss@@YAXXZ.c)
 * Callees:
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C0048220 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 */

__int64 __fastcall PostMessage(unsigned __int64 a1, unsigned int a2, unsigned __int64 a3, __int128 *a4)
{
  unsigned int v4; // ebx
  unsigned __int64 v5; // rcx

  v4 = 0;
  v5 = _PostTransformableMessageExtended(a1, a2, a3, a4, 0LL, 1);
  if ( v5 < (unsigned __int64)MmSystemRangeStart )
    return (unsigned int)v5;
  LOBYTE(v4) = v5 != 0;
  return v4;
}
