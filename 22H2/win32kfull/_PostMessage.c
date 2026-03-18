/*
 * XREFs of _PostMessage @ 0x1C00B6CD0
 * Callers:
 *     _SetMagnificationInputTransform @ 0x1C005AE40 (_SetMagnificationInputTransform.c)
 *     SetMouseTrails @ 0x1C005B9A8 (SetMouseTrails.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C008B690 (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     ?xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x1C00903C0 (-xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     PostDeviceNotification @ 0x1C009FAD0 (PostDeviceNotification.c)
 *     ?xxxImmProcessKey@@YAKPEAUtagQ@@PEAUtagWND@@I_K_J@Z @ 0x1C00A398C (-xxxImmProcessKey@@YAKPEAUtagQ@@PEAUtagWND@@I_K_J@Z.c)
 *     xxxSysCommand @ 0x1C00A7BFC (xxxSysCommand.c)
 *     TrackMouseEvent @ 0x1C00A9264 (TrackMouseEvent.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C00AE86C (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     xxxCancelMouseMoveTracking @ 0x1C00B6B88 (xxxCancelMouseMoveTracking.c)
 *     NtUserEndMenu @ 0x1C00BE140 (NtUserEndMenu.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C00C4E00 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     ?_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00D33C8 (-_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     xxxRealDefWindowProc @ 0x1C0108B10 (xxxRealDefWindowProc.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C012B430 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     PowerOffGdi @ 0x1C01356C0 (PowerOffGdi.c)
 *     ?xxxReportWindowHotKey@@YAXPEBUtagHOTKEY@@PEAUtagWND@@W4ReportHotKeyHint@@@Z @ 0x1C013ACF8 (-xxxReportWindowHotKey@@YAXPEBUtagHOTKEY@@PEAUtagWND@@W4ReportHotKeyHint@@@Z.c)
 *     ?FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z @ 0x1C01AACF4 (-FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01B5C70 (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     TryDetachShellFrame @ 0x1C01B6D5C (TryDetachShellFrame.c)
 *     _PostMessageCheckIL @ 0x1C01B704C (_PostMessageCheckIL.c)
 *     PostPointerEventMessage @ 0x1C01C32E0 (PostPointerEventMessage.c)
 *     xxxNextWindow @ 0x1C01CA504 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01CACD8 (xxxOldNextWindow.c)
 *     ?_PostEdgyInertia@Edgy@@YAXPEAUHWND__@@W4tagEDGY_LOCATION@@K@Z @ 0x1C01E889C (-_PostEdgyInertia@Edgy@@YAXPEAUHWND__@@W4tagEDGY_LOCATION@@K@Z.c)
 *     xxxCancelTrackingForThread @ 0x1C01F2B00 (xxxCancelTrackingForThread.c)
 *     EditionPostInertiaMessage @ 0x1C01F7730 (EditionPostInertiaMessage.c)
 *     ?AbnormalDDEPost@@YAKPEAUtagDDECONV@@K@Z @ 0x1C01F95CC (-AbnormalDDEPost@@YAKPEAUtagDDECONV@@K@Z.c)
 *     xxxDDETrackSendHook @ 0x1C01FB5C4 (xxxDDETrackSendHook.c)
 *     xxxDDETrackWindowDying @ 0x1C01FB710 (xxxDDETrackWindowDying.c)
 *     xxxFreeDdeConv @ 0x1C01FB8A0 (xxxFreeDdeConv.c)
 *     ?xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C01FCDAC (-xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     PsW32ScreenSaver_Show @ 0x1C0200990 (PsW32ScreenSaver_Show.c)
 *     xxxHandleMenuMessages @ 0x1C0213DC8 (xxxHandleMenuMessages.c)
 *     xxxMNLoop @ 0x1C02146AC (xxxMNLoop.c)
 *     xxxMenuWindowProc @ 0x1C021A810 (xxxMenuWindowProc.c)
 *     _anonymous_namespace_::SeverWindowManagementConnectionToShell @ 0x1C021DAC4 (_anonymous_namespace_--SeverWindowManagementConnectionToShell.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C021FB04 (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 *     ?xxxCloseApplication@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C02224C8 (-xxxCloseApplication@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?DismissTooltips@TooltipDismiss@@YAXXZ @ 0x1C022D52C (-DismissTooltips@TooltipDismiss@@YAXXZ.c)
 * Callees:
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C011E780 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 */

__int64 __fastcall PostMessage(struct tagWND *a1, unsigned int a2, unsigned __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  struct tagQMSG *v5; // rcx

  v4 = 0;
  v5 = _PostTransformableMessageExtended(a1, a2, a3, a4, 0LL, 1);
  if ( v5 < MmSystemRangeStart )
    return (unsigned int)v5;
  LOBYTE(v4) = v5 != 0LL;
  return v4;
}
