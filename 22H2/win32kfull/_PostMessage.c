/*
 * XREFs of _PostMessage @ 0x1C002DBA0
 * Callers:
 *     SetMouseTrails @ 0x1C0029694 (SetMouseTrails.c)
 *     xxxMinMaximizeEx @ 0x1C002B69C (xxxMinMaximizeEx.c)
 *     TrackMouseEvent @ 0x1C002C760 (TrackMouseEvent.c)
 *     ?xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C002D410 (-xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     xxxCancelMouseMoveTracking @ 0x1C002D95C (xxxCancelMouseMoveTracking.c)
 *     PostIAMShellHookMessageEx @ 0x1C002DAB0 (PostIAMShellHookMessageEx.c)
 *     ?_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00435B0 (-_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     xxxRealDefWindowProc @ 0x1C0049E28 (xxxRealDefWindowProc.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00C1DC0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     _SetMagnificationInputTransform @ 0x1C00EB340 (_SetMagnificationInputTransform.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C00F5250 (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     ?xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x1C00F74B8 (-xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     xxxDoHotKeyStuff @ 0x1C0104F50 (xxxDoHotKeyStuff.c)
 *     xxxImmProcessKey @ 0x1C01068C4 (xxxImmProcessKey.c)
 *     PostDeviceNotification @ 0x1C0108720 (PostDeviceNotification.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C0120084 (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     ?xxxKeyboardCorrectionCallout@@YAIPEBUtagMSG@@U_QMSG_POSTCHAR_FLAGS@@@Z @ 0x1C0120DC8 (-xxxKeyboardCorrectionCallout@@YAIPEBUtagMSG@@U_QMSG_POSTCHAR_FLAGS@@@Z.c)
 *     xxxSysCommand @ 0x1C0130364 (xxxSysCommand.c)
 *     NtUserEndMenu @ 0x1C01345E0 (NtUserEndMenu.c)
 *     PowerOffGdi @ 0x1C0163760 (PowerOffGdi.c)
 *     ?FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z @ 0x1C01D8170 (-FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01E0D5C (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     TryDetachShellFrame @ 0x1C01E1CA4 (TryDetachShellFrame.c)
 *     _PostMessageCheckIL @ 0x1C01E21F8 (_PostMessageCheckIL.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C01E3ECC (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 *     DestroyTask @ 0x1C01EA410 (DestroyTask.c)
 *     PostPointerEventMessage @ 0x1C01EE3D0 (PostPointerEventMessage.c)
 *     xxxNextWindow @ 0x1C01F3B6C (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01F43B0 (xxxOldNextWindow.c)
 *     _PostUIActions @ 0x1C0206B00 (_PostUIActions.c)
 *     ?_PostEdgyInertia@Edgy@@YAXPEAUHWND__@@W4tagEDGY_LOCATION@@K@Z @ 0x1C020833C (-_PostEdgyInertia@Edgy@@YAXPEAUHWND__@@W4tagEDGY_LOCATION@@K@Z.c)
 *     xxxCancelTrackingForThread @ 0x1C0210E30 (xxxCancelTrackingForThread.c)
 *     EditionPostInertiaMessage @ 0x1C0217CF0 (EditionPostInertiaMessage.c)
 *     ?AbnormalDDEPost@@YAKPEAUtagDDECONV@@K@Z @ 0x1C021A304 (-AbnormalDDEPost@@YAKPEAUtagDDECONV@@K@Z.c)
 *     xxxDDETrackSendHook @ 0x1C021CDFC (xxxDDETrackSendHook.c)
 *     xxxDDETrackWindowDying @ 0x1C021CF78 (xxxDDETrackWindowDying.c)
 *     xxxFreeDdeConv @ 0x1C021D188 (xxxFreeDdeConv.c)
 *     xxxHandleMenuMessages @ 0x1C02339B8 (xxxHandleMenuMessages.c)
 *     xxxMNLoop @ 0x1C0234488 (xxxMNLoop.c)
 *     xxxMenuWindowProc @ 0x1C023B5E0 (xxxMenuWindowProc.c)
 *     _anonymous_namespace_::SeverWindowManagementConnectionToShell @ 0x1C023D0D8 (_anonymous_namespace_--SeverWindowManagementConnectionToShell.c)
 *     ?xxxCloseApplication@WindowManagementExtended@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C0240A10 (-xxxCloseApplication@WindowManagementExtended@@YAXPEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     _PostMessageExtended @ 0x1C0054290 (_PostMessageExtended.c)
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
