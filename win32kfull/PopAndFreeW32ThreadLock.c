/*
 * XREFs of PopAndFreeW32ThreadLock @ 0x1C00A1CA0
 * Callers:
 *     xxxSendMinRectMessages @ 0x1C000D518 (xxxSendMinRectMessages.c)
 *     xxxCloseClipboard @ 0x1C0010580 (xxxCloseClipboard.c)
 *     xxxSwitchDesktop @ 0x1C00205D4 (xxxSwitchDesktop.c)
 *     xxxFreeWindow @ 0x1C0031C50 (xxxFreeWindow.c)
 *     xxxRemoveFullScreen @ 0x1C0033708 (xxxRemoveFullScreen.c)
 *     xxxWindowEvent @ 0x1C0062470 (xxxWindowEvent.c)
 *     xxxReceiveMessage @ 0x1C006DB60 (xxxReceiveMessage.c)
 *     xxxQueryInformationThread @ 0x1C0093274 (xxxQueryInformationThread.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C0094CDC (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     ?xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z @ 0x1C0095CF4 (-xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z.c)
 *     xxxWaitForInputIdle @ 0x1C009604C (xxxWaitForInputIdle.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x1C009A850 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C009BD38 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C009E0E4 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z @ 0x1C009FB24 (-xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z.c)
 *     ?xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z @ 0x1C00A0450 (-xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C00A126C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     xxxSendMessageBSM @ 0x1C00A48F0 (xxxSendMessageBSM.c)
 *     xxxTrackMouseMove @ 0x1C00BD950 (xxxTrackMouseMove.c)
 *     xxxDoPaint @ 0x1C00C3298 (xxxDoPaint.c)
 *     xxxCancelTracking @ 0x1C00D22FC (xxxCancelTracking.c)
 *     CleanupW32ThreadLocks @ 0x1C00DBD90 (CleanupW32ThreadLocks.c)
 *     xxxAddFullScreen @ 0x1C00E6AF8 (xxxAddFullScreen.c)
 *     ?xxxImmUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@K@Z @ 0x1C00E9D08 (-xxxImmUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@K@Z.c)
 *     NtUserSwitchDesktop @ 0x1C00EA5E0 (NtUserSwitchDesktop.c)
 *     xxxEmptyClipboard @ 0x1C00F130C (xxxEmptyClipboard.c)
 *     RemoteDisableScreen @ 0x1C00F7460 (RemoteDisableScreen.c)
 *     RemoteRedrawScreen @ 0x1C0126610 (RemoteRedrawScreen.c)
 *     ?xxxCallGenerateIAMKey@@YAJPEAUtagIAM_KKEY@@@Z @ 0x1C01AF1AC (-xxxCallGenerateIAMKey@@YAJPEAUtagIAM_KKEY@@@Z.c)
 *     xxxGetDeviceChangeInfo @ 0x1C01B3C0C (xxxGetDeviceChangeInfo.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01B6E20 (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     TryDetachShellFrame @ 0x1C01B7EFC (TryDetachShellFrame.c)
 *     ?xxxImmActivateAndUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@PEAUtagKL@@K@Z @ 0x1C01B8CF4 (-xxxImmActivateAndUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@PEAUtagKL@@K@Z.c)
 *     ?xxxImmActivateThreadsLayout@@YAHPEAUtagTHREADINFO@@PEAUtagTLBLOCK@@PEAUtagKL@@@Z @ 0x1C01B90D4 (-xxxImmActivateThreadsLayout@@YAHPEAUtagTHREADINFO@@PEAUtagTLBLOCK@@PEAUtagKL@@@Z.c)
 *     ?xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z @ 0x1C01B9654 (-xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z.c)
 *     NtUserGetClipboardData @ 0x1C01D13A0 (NtUserGetClipboardData.c)
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x1C01ED7C0 (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 *     xxxDeferredDesktopRotation @ 0x1C01F7030 (xxxDeferredDesktopRotation.c)
 *     ?xxxDisownClipboard@@YAXPEAUtagWND@@@Z @ 0x1C01FF7D8 (-xxxDisownClipboard@@YAXPEAUtagWND@@@Z.c)
 *     xxxChangeClipboardChain @ 0x1C0200878 (xxxChangeClipboardChain.c)
 *     xxxSetClipboardViewer @ 0x1C0200B44 (xxxSetClipboardViewer.c)
 *     ?xxxForceUpdateProcessDpiAwarenessContext@@YAXPEAUtagWND@@K@Z @ 0x1C0222698 (-xxxForceUpdateProcessDpiAwarenessContext@@YAXPEAUtagWND@@K@Z.c)
 *     xxxHardErrorControl @ 0x1C0226A64 (xxxHardErrorControl.c)
 *     xxxSnapWindow @ 0x1C022AF08 (xxxSnapWindow.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PopAndFreeW32ThreadLock(__int64 a1)
{
  __int64 v2; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 result; // rax

  v2 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v2 = *ThreadWin32Thread;
  result = *(_QWORD *)a1;
  *(_QWORD *)(v2 + 16) = *(_QWORD *)a1;
  if ( *(_QWORD *)(a1 + 8) )
    return (*(__int64 (**)(void))(a1 + 16))();
  return result;
}
