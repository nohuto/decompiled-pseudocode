/*
 * XREFs of _PostMessage @ 0x1C00A5270
 * Callers:
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C00490FC (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0058FB0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxRealDefWindowProc @ 0x1C0067528 (xxxRealDefWindowProc.c)
 *     _SetMagnificationInputTransform @ 0x1C0098370 (_SetMagnificationInputTransform.c)
 *     xxxCancelMouseMoveTracking @ 0x1C00A184C (xxxCancelMouseMoveTracking.c)
 *     PostIAMShellHookMessageEx @ 0x1C00A5180 (PostIAMShellHookMessageEx.c)
 *     ?_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00A6180 (-_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     SetMouseTrails @ 0x1C00B537C (SetMouseTrails.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C00CA7B4 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C00DBE0C (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     ?xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x1C00DFE44 (-xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     ?xxxImmProcessKey@@YAKPEAUtagQ@@PEAUtagWND@@I_K_J@Z @ 0x1C00F5228 (-xxxImmProcessKey@@YAKPEAUtagQ@@PEAUtagWND@@I_K_J@Z.c)
 *     xxxDoHotKeyStuff @ 0x1C00F6330 (xxxDoHotKeyStuff.c)
 *     TrackMouseEvent @ 0x1C00F8E74 (TrackMouseEvent.c)
 *     PostDeviceNotification @ 0x1C0102FA4 (PostDeviceNotification.c)
 *     xxxSysCommand @ 0x1C011BA1C (xxxSysCommand.c)
 *     NtUserEndMenu @ 0x1C0120810 (NtUserEndMenu.c)
 *     ?xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C014664C (-xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     PowerOffGdi @ 0x1C0154F60 (PowerOffGdi.c)
 *     ?FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z @ 0x1C01D3E94 (-FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01DC5A0 (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     TryDetachShellFrame @ 0x1C01DD074 (TryDetachShellFrame.c)
 *     _PostMessageCheckIL @ 0x1C01DD244 (_PostMessageCheckIL.c)
 *     DestroyTask @ 0x1C01E5640 (DestroyTask.c)
 *     PostPointerEventMessage @ 0x1C01E8F50 (PostPointerEventMessage.c)
 *     xxxNextWindow @ 0x1C01EE910 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01EF0A8 (xxxOldNextWindow.c)
 *     ?_PostEdgyInertia@Edgy@@YAXPEAUHWND__@@W4tagEDGY_LOCATION@@K@Z @ 0x1C0208D0C (-_PostEdgyInertia@Edgy@@YAXPEAUHWND__@@W4tagEDGY_LOCATION@@K@Z.c)
 *     xxxCancelTrackingForThread @ 0x1C02104C0 (xxxCancelTrackingForThread.c)
 *     EditionPostInertiaMessage @ 0x1C0213180 (EditionPostInertiaMessage.c)
 *     ?AbnormalDDEPost@@YAKPEAUtagDDECONV@@K@Z @ 0x1C0214B7C (-AbnormalDDEPost@@YAKPEAUtagDDECONV@@K@Z.c)
 *     xxxDDETrackSendHook @ 0x1C0218378 (xxxDDETrackSendHook.c)
 *     xxxDDETrackWindowDying @ 0x1C0218544 (xxxDDETrackWindowDying.c)
 *     xxxFreeDdeConv @ 0x1C0218788 (xxxFreeDdeConv.c)
 *     xxxHandleMenuMessages @ 0x1C022D700 (xxxHandleMenuMessages.c)
 *     xxxMNLoop @ 0x1C022E038 (xxxMNLoop.c)
 *     xxxMenuWindowProc @ 0x1C0234200 (xxxMenuWindowProc.c)
 *     _anonymous_namespace_::SeverWindowManagementConnectionToShell @ 0x1C0236B90 (_anonymous_namespace_--SeverWindowManagementConnectionToShell.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C0238684 (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 *     ?xxxCloseApplication@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C023F3A8 (-xxxCloseApplication@@YAXPEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     _PostMessageExtended @ 0x1C00A5EEC (_PostMessageExtended.c)
 */

__int64 __fastcall PostMessage(int a1, int a2, int a3, int a4)
{
  unsigned int v4; // ebx
  unsigned __int64 v5; // rcx

  v4 = 0;
  v5 = PostMessageExtended(a1, a2, a3, a4, 0LL);
  if ( v5 < (unsigned __int64)MmSystemRangeStart )
    return (unsigned int)v5;
  LOBYTE(v4) = v5 != 0;
  return v4;
}
