/*
 * XREFs of xxxSetWindowPos @ 0x1C0028F4C
 * Callers:
 *     xxxSwitchToThisWindow @ 0x1C0014D74 (xxxSwitchToThisWindow.c)
 *     ?xxxEnableNonClientDpiScaling@@YA_NPEAUtagWND@@@Z @ 0x1C0015434 (-xxxEnableNonClientDpiScaling@@YA_NPEAUtagWND@@@Z.c)
 *     xxxSwitchDesktop @ 0x1C00205D4 (xxxSwitchDesktop.c)
 *     xxxMoveWindow @ 0x1C0025A90 (xxxMoveWindow.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1C002AE4C (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     xxxSetWindowStyle @ 0x1C002DD90 (xxxSetWindowStyle.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C0036908 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxDestroyWindow @ 0x1C004B7F0 (xxxDestroyWindow.c)
 *     xxxSetShellWindow @ 0x1C0092CAC (xxxSetShellWindow.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C0094CDC (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C009E0E4 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C00A126C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     xxxSetScrollBar @ 0x1C00A60D8 (xxxSetScrollBar.c)
 *     xxxCreateDesktopEx @ 0x1C00C03D4 (xxxCreateDesktopEx.c)
 *     xxxSysCommand @ 0x1C00DE67C (xxxSysCommand.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C00E6D24 (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     EditionHandleAltTab @ 0x1C00F54C0 (EditionHandleAltTab.c)
 *     _anonymous_namespace_::xxxMigrateWindowPosition @ 0x1C00FBCB8 (_anonymous_namespace_--xxxMigrateWindowPosition.c)
 *     xxxSetWindowPlacement @ 0x1C00FF7C8 (xxxSetWindowPlacement.c)
 *     ?CheckOnTop@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@I@Z @ 0x1C01B65B8 (-CheckOnTop@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@I@Z.c)
 *     ?xxxSendDpiChangedMessageToChildWindow@@YAHPEAUHWND__@@H@Z @ 0x1C01BA6CC (-xxxSendDpiChangedMessageToChildWindow@@YAHPEAUHWND__@@H@Z.c)
 *     ?xxxSendDpiChangedMessageToTopLevelWindow@@YAHPEAUtagWND@@PEAUtagRECT@@@Z @ 0x1C01BA7A0 (-xxxSendDpiChangedMessageToTopLevelWindow@@YAHPEAUtagWND@@PEAUtagRECT@@@Z.c)
 *     ?xxxSendGDIScaledDpiChangedMessage@@YAHPEAUHWND__@@@Z @ 0x1C01BA854 (-xxxSendGDIScaledDpiChangedMessage@@YAHPEAUHWND__@@@Z.c)
 *     xxxMetricsRecalc @ 0x1C01C9A5C (xxxMetricsRecalc.c)
 *     ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C01CB01C (-xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxNextWindow @ 0x1C01CB604 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01CBDC8 (xxxOldNextWindow.c)
 *     xxxSwitchWndProc @ 0x1C01CC6D0 (xxxSwitchWndProc.c)
 *     NtUserDrawMenuBar @ 0x1C01D0140 (NtUserDrawMenuBar.c)
 *     NtUserRedrawFrame @ 0x1C01D9EB0 (NtUserRedrawFrame.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z @ 0x1C01ECE40 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x1C01ED7C0 (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 *     xxxSetInternalWindowPos @ 0x1C01F416C (xxxSetInternalWindowPos.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01F5BBC (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01F687C (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxMNOpenHierarchy @ 0x1C021B7B0 (xxxMNOpenHierarchy.c)
 *     xxxMenuWindowProc @ 0x1C021D3D0 (xxxMenuWindowProc.c)
 *     ShellWindowPos::_anonymous_namespace_::xxxSnapArrangeWindow @ 0x1C0221CE0 (ShellWindowPos--_anonymous_namespace_--xxxSnapArrangeWindow.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C02228BC (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 *     ?xxxUpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z @ 0x1C0222AF0 (-xxxUpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z.c)
 *     xxxAddShadow @ 0x1C0224364 (xxxAddShadow.c)
 *     xxxUpdateShadowZorder @ 0x1C02246CC (xxxUpdateShadowZorder.c)
 *     xxxActivateEnabledPopup @ 0x1C0225928 (xxxActivateEnabledPopup.c)
 *     ?xxxCreateTooltip@@YAHPEAUtagTOOLTIPWND@@PEAG@Z @ 0x1C0228484 (-xxxCreateTooltip@@YAHPEAUtagTOOLTIPWND@@PEAG@Z.c)
 *     xxxRedrawFrameAndHook @ 0x1C022A73C (xxxRedrawFrameAndHook.c)
 *     xxxMNUpdateShownMenu @ 0x1C02341E4 (xxxMNUpdateShownMenu.c)
 *     xxxSetMenu @ 0x1C0234BF0 (xxxSetMenu.c)
 *     xxxShowScrollBar @ 0x1C0234CF4 (xxxShowScrollBar.c)
 *     xxxTrackPopupMenuEx @ 0x1C02353CC (xxxTrackPopupMenuEx.c)
 *     ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x1C023E6EC (-xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z.c)
 * Callees:
 *     xxxSetWindowPosAndBand @ 0x1C0028FFC (xxxSetWindowPosAndBand.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C00291D4 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     _GetTopLevelWindow @ 0x1C0035AF0 (_GetTopLevelWindow.c)
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0035B2C (-GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
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
