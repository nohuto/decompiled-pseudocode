/*
 * XREFs of xxxSetWindowPos @ 0x1C0048A4C
 * Callers:
 *     xxxSwitchToThisWindow @ 0x1C00038F4 (xxxSwitchToThisWindow.c)
 *     ?xxxEnableNonClientDpiScaling@@YA_NPEAUtagWND@@@Z @ 0x1C0004974 (-xxxEnableNonClientDpiScaling@@YA_NPEAUtagWND@@@Z.c)
 *     NtUserSetWindowPos @ 0x1C0025580 (NtUserSetWindowPos.c)
 *     xxxSetWindowStyle @ 0x1C0050020 (xxxSetWindowStyle.c)
 *     xxxDestroyWindow @ 0x1C0062330 (xxxDestroyWindow.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1C00699A0 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C007D36C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C007DC84 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     xxxTrackMouseMove @ 0x1C007E59C (xxxTrackMouseMove.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C0099B78 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C009C270 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxSwitchDesktop @ 0x1C00B0E54 (xxxSwitchDesktop.c)
 *     _anonymous_namespace_::xxxMigrateWindowPosition @ 0x1C00B1A70 (_anonymous_namespace_--xxxMigrateWindowPosition.c)
 *     xxxSetScrollBar @ 0x1C00C64F8 (xxxSetScrollBar.c)
 *     xxxCreateDesktopEx @ 0x1C00CFDF4 (xxxCreateDesktopEx.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C00DBE0C (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     xxxSetShellWindow @ 0x1C00F1340 (xxxSetShellWindow.c)
 *     xxxMoveWindow @ 0x1C00FA07C (xxxMoveWindow.c)
 *     xxxSetWindowPlacement @ 0x1C01045D8 (xxxSetWindowPlacement.c)
 *     xxxSysCommand @ 0x1C011BA1C (xxxSysCommand.c)
 *     EditionHandleAltTab @ 0x1C0121AA0 (EditionHandleAltTab.c)
 *     xxxAddShadow @ 0x1C012DDE0 (xxxAddShadow.c)
 *     xxxShowScrollBar @ 0x1C0142434 (xxxShowScrollBar.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0144D6C (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C014501C (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxSetMenu @ 0x1C0147E00 (xxxSetMenu.c)
 *     NtUserDrawMenuBar @ 0x1C01499D0 (NtUserDrawMenuBar.c)
 *     xxxRedrawFrameAndHook @ 0x1C0150974 (xxxRedrawFrameAndHook.c)
 *     NtUserRedrawFrame @ 0x1C01512F0 (NtUserRedrawFrame.c)
 *     ?xxxSendDpiChangedMessageToTopLevelWindow@@YAHPEAUtagWND@@PEAUtagRECT@@@Z @ 0x1C0151DB0 (-xxxSendDpiChangedMessageToTopLevelWindow@@YAHPEAUtagWND@@PEAUtagRECT@@@Z.c)
 *     xxxMetricsRecalc @ 0x1C015823C (xxxMetricsRecalc.c)
 *     ?CheckOnTop@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@I@Z @ 0x1C01DBB94 (-CheckOnTop@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@I@Z.c)
 *     ?xxxSendDpiChangedMessageToChildWindow@@YAHPEAUHWND__@@H@Z @ 0x1C01DEFB0 (-xxxSendDpiChangedMessageToChildWindow@@YAHPEAUHWND__@@H@Z.c)
 *     ?xxxSendGDIScaledDpiChangedMessage@@YAHPEAUHWND__@@@Z @ 0x1C01DF0A8 (-xxxSendGDIScaledDpiChangedMessage@@YAHPEAUHWND__@@@Z.c)
 *     ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C01EE340 (-xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxNextWindow @ 0x1C01EE910 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01EF0A8 (xxxOldNextWindow.c)
 *     xxxSwitchWndProc @ 0x1C01EF940 (xxxSwitchWndProc.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z @ 0x1C020BFC8 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x1C020C464 (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 *     xxxSetInternalWindowPos @ 0x1C02108F0 (xxxSetInternalWindowPos.c)
 *     xxxMNOpenHierarchy @ 0x1C02325D0 (xxxMNOpenHierarchy.c)
 *     xxxMenuWindowProc @ 0x1C0234200 (xxxMenuWindowProc.c)
 *     ShellWindowPos::_anonymous_namespace_::xxxSnapArrangeWindow @ 0x1C0237BB4 (ShellWindowPos--_anonymous_namespace_--xxxSnapArrangeWindow.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C0238684 (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 *     ?xxxUpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z @ 0x1C02388A8 (-xxxUpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z.c)
 *     xxxUpdateShadowZorder @ 0x1C0239848 (xxxUpdateShadowZorder.c)
 *     xxxActivateEnabledPopup @ 0x1C023F4F4 (xxxActivateEnabledPopup.c)
 *     xxxMNUpdateShownMenu @ 0x1C02451B0 (xxxMNUpdateShownMenu.c)
 *     xxxTrackPopupMenuEx @ 0x1C024614C (xxxTrackPopupMenuEx.c)
 *     ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x1C024ADB8 (-xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z.c)
 * Callees:
 *     xxxSetWindowPosAndBand @ 0x1C0048AFC (xxxSetWindowPosAndBand.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C0048EF8 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     _GetTopLevelWindow @ 0x1C0075BF0 (_GetTopLevelWindow.c)
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0077064 (-GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 */

__int64 __fastcall xxxSetWindowPos(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6, int a7)
{
  bool v8; // di
  char v9; // al
  unsigned int v10; // ebp
  struct tagWND *TopLevelHostForComponent; // rax
  struct tagWND *TopLevelWindow; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int128 v17; // [rsp+40h] [rbp-38h] BYREF
  __int64 v18; // [rsp+50h] [rbp-28h]

  v8 = !a2 && (unsigned int)CoreWindowProp::IsComponent(a1) && (a7 & 0xFFFFFFEF) == 3;
  v9 = a7;
  if ( !v8 )
    v9 = a7;
  v10 = xxxSetWindowPosAndBand(a1, a5, a6, v9, 0);
  if ( v10 )
  {
    if ( v8 && *(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL) == gpqForeground )
    {
      TopLevelHostForComponent = CoreWindowProp::GetTopLevelHostForComponent(a1);
      TopLevelWindow = (struct tagWND *)GetTopLevelWindow(TopLevelHostForComponent);
      if ( TopLevelWindow )
      {
        v17 = 0LL;
        v18 = 0LL;
        ThreadLock(TopLevelWindow, &v17);
        xxxSetWindowPosAndBand(TopLevelWindow, 0, 0, 19, 0);
        ThreadUnlock1(v15, v14, v16);
      }
    }
  }
  return v10;
}
