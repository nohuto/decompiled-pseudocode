/*
 * XREFs of _GetDesktopWindow @ 0x1C006FF60
 * Callers:
 *     ?_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z @ 0x1C002536C (-_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z.c)
 *     xxxCreateWindowEx @ 0x1C0043E80 (xxxCreateWindowEx.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C0047DD4 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0049764 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     xxxRedrawWindow @ 0x1C004A1EC (xxxRedrawWindow.c)
 *     InternalInvalidate3 @ 0x1C004C894 (InternalInvalidate3.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C004DF70 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     xxxSetWindowData @ 0x1C004F920 (xxxSetWindowData.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C0063E00 (xxxInitSendValidateMinMaxInfoEx.c)
 *     SetTiledRect @ 0x1C006458C (SetTiledRect.c)
 *     xxxRealDefWindowProc @ 0x1C0067528 (xxxRealDefWindowProc.c)
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C00692F0 (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 *     ?RestoreLogicalPoint@@YAXPEAUtagWND@@PEAUtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C006995C (-RestoreLogicalPoint@@YAXPEAUtagWND@@PEAUtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1C00699A0 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     DirtyVisRgnTrackers @ 0x1C006C250 (DirtyVisRgnTrackers.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006E60C (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     GetInheritedMonitor @ 0x1C006F4F4 (GetInheritedMonitor.c)
 *     LinkWindow @ 0x1C006F9A0 (LinkWindow.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C006FF18 (IsToplevelWindowDesktopComposed.c)
 *     UnlinkWindow @ 0x1C0072CAC (UnlinkWindow.c)
 *     _GetWindowPlacement @ 0x1C007C658 (_GetWindowPlacement.c)
 *     CkptUpdate @ 0x1C007CA54 (CkptUpdate.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C007DC84 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x1C0081210 (-ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z.c)
 *     ?ImeCanDestroyDefIMEforChild@@YAHPEAUtagWND@@0@Z @ 0x1C0082AF4 (-ImeCanDestroyDefIMEforChild@@YAHPEAUtagWND@@0@Z.c)
 *     GetLastTopMostWindow @ 0x1C0085494 (GetLastTopMostWindow.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C0098A20 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C009C270 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxScrollWindowEx @ 0x1C00BFE8C (xxxScrollWindowEx.c)
 *     xxxPaintRect @ 0x1C00C1B34 (xxxPaintRect.c)
 *     CreateSpb @ 0x1C00C92A0 (CreateSpb.c)
 *     ?DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z @ 0x1C00C97C0 (-DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C00CA7B4 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     xxxShowOwnedWindows @ 0x1C00CB710 (xxxShowOwnedWindows.c)
 *     ?NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z @ 0x1C00CDD98 (-NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z.c)
 *     zzzLockWindowUpdate2 @ 0x1C00DBFA8 (zzzLockWindowUpdate2.c)
 *     NtUserGetAncestor @ 0x1C00DE610 (NtUserGetAncestor.c)
 *     ?GetLastTopMostWindowNoIME@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00E9604 (-GetLastTopMostWindowNoIME@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x1C00F1A94 (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 *     xxxMoveWindow @ 0x1C00FA07C (xxxMoveWindow.c)
 *     _GetAncestor @ 0x1C00FF684 (_GetAncestor.c)
 *     xxxSetWindowPlacement @ 0x1C01045D8 (xxxSetWindowPlacement.c)
 *     NtUserSetParent @ 0x1C0105390 (NtUserSetParent.c)
 *     xxxGetUpdateRect @ 0x1C01071D4 (xxxGetUpdateRect.c)
 *     SetHungFlag @ 0x1C0110FEC (SetHungFlag.c)
 *     xxxSoundSentry @ 0x1C011B3AC (xxxSoundSentry.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C013F388 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     ?_ShouldGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C01456A8 (-_ShouldGhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxGetUpdateRgn @ 0x1C0149BA0 (xxxGetUpdateRgn.c)
 *     ?xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0151FD0 (-xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     xxxMetricsRecalc @ 0x1C015823C (xxxMetricsRecalc.c)
 *     _ChildWindowFromPointEx @ 0x1C016D33A (_ChildWindowFromPointEx.c)
 *     GetTopMostInsertAfter @ 0x1C01CC97C (GetTopMostInsertAfter.c)
 *     _anonymous_namespace_::xxxSetForegroundCheckNoActivate @ 0x1C01CEBA0 (_anonymous_namespace_--xxxSetForegroundCheckNoActivate.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01EC438 (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     EditionPointerParentNotify @ 0x1C01ECA90 (EditionPointerParentNotify.c)
 *     ?EvaluateArrangeState@@YA?AW4_WARR_STATES@@PEAUtagWND@@@Z @ 0x1C0209F8C (-EvaluateArrangeState@@YA-AW4_WARR_STATES@@PEAUtagWND@@@Z.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z @ 0x1C020BFC8 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x1C020C464 (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x1C020D6AC (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x1C020E1A8 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     xxxSetInternalWindowPos @ 0x1C02108F0 (xxxSetInternalWindowPos.c)
 *     ?_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z @ 0x1C021144C (-_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z @ 0x1C0211548 (-_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxBroadcastPaletteChanged @ 0x1C022E790 (xxxBroadcastPaletteChanged.c)
 *     xxxDrawAnimatedRects @ 0x1C023DA38 (xxxDrawAnimatedRects.c)
 *     xxxMinimizeHungWindow @ 0x1C023DBB8 (xxxMinimizeHungWindow.c)
 *     ?xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z @ 0x1C023EA24 (-xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z.c)
 *     xxxActivateEnabledPopup @ 0x1C023F4F4 (xxxActivateEnabledPopup.c)
 *     xxxSnapWindow @ 0x1C023F848 (xxxSnapWindow.c)
 *     _RealChildWindowFromPoint @ 0x1C0244DD4 (_RealChildWindowFromPoint.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetDesktopWindow(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax
  __int64 v3; // rcx

  v1 = *(_QWORD *)(a1 + 24);
  result = 0LL;
  if ( v1 )
  {
    v3 = *(_QWORD *)(v1 + 8);
    if ( v3 )
      return *(_QWORD *)(v3 + 24);
  }
  return result;
}
