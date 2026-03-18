/*
 * XREFs of _IsTopLevelWindow @ 0x1C006D904
 * Callers:
 *     xxxRestoreWindowFromDeferredStateIfNeeded @ 0x1C0003D64 (xxxRestoreWindowFromDeferredStateIfNeeded.c)
 *     ?xxxEnableNonClientDpiScaling@@YA_NPEAUtagWND@@@Z @ 0x1C0004974 (-xxxEnableNonClientDpiScaling@@YA_NPEAUtagWND@@@Z.c)
 *     SetRedirectedWindow @ 0x1C001F9FC (SetRedirectedWindow.c)
 *     FVisCountable @ 0x1C00201C0 (FVisCountable.c)
 *     InitializeMonitorInfo @ 0x1C0021474 (InitializeMonitorInfo.c)
 *     NtUserSetWindowCompositionAttribute @ 0x1C0022C50 (NtUserSetWindowCompositionAttribute.c)
 *     xxxCreateWindowEx @ 0x1C0043E80 (xxxCreateWindowEx.c)
 *     ?_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x1C0048C48 (-_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z.c)
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C004B1E8 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     xxxSetWindowStyle @ 0x1C0050020 (xxxSetWindowStyle.c)
 *     xxxDestroyWindow @ 0x1C0062330 (xxxDestroyWindow.c)
 *     ?GetTopLevelOrDpiBoundaryWindow@@YAPEBUtagWND@@PEBU1@@Z @ 0x1C0069908 (-GetTopLevelOrDpiBoundaryWindow@@YAPEBUtagWND@@PEBU1@@Z.c)
 *     ?BuildWindowListWithDpiBoundaryInfo@@YAPEAUtagWLDBI@@PEAUtagWND@@0PEAUtagBWL@@PEAH@Z @ 0x1C006A228 (-BuildWindowListWithDpiBoundaryInfo@@YAPEAUtagWLDBI@@PEAUtagWND@@0PEAUtagBWL@@PEAH@Z.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C006A424 (UpdateMonitorForWindowAndChildren.c)
 *     ?ShouldUseLogPixelsForWindowMetrics@@YA_NPEAUtagWND@@@Z @ 0x1C006A534 (-ShouldUseLogPixelsForWindowMetrics@@YA_NPEAUtagWND@@@Z.c)
 *     ?IsWindowBroadcastingDpiToChildrenX@@YA_NPEAUtagWND@@@Z @ 0x1C006A6D8 (-IsWindowBroadcastingDpiToChildrenX@@YA_NPEAUtagWND@@@Z.c)
 *     ?IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z @ 0x1C006B9F0 (-IsTrayWindow@@YA_NPEAUtagWND@@W4TrayCheckOption@@@Z.c)
 *     UpdateWindowMonitor @ 0x1C006BAD0 (UpdateWindowMonitor.c)
 *     CalcWindowFullScreen @ 0x1C006C0E8 (CalcWindowFullScreen.c)
 *     DirtyVisRgnTrackers @ 0x1C006C250 (DirtyVisRgnTrackers.c)
 *     ?GetWindowCloakState@@YAKPEBUtagWND@@@Z @ 0x1C006D740 (-GetWindowCloakState@@YAKPEBUtagWND@@@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006E60C (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     GetNewMonitor @ 0x1C006F304 (GetNewMonitor.c)
 *     xxxNotifyMonitorChanged @ 0x1C007563C (xxxNotifyMonitorChanged.c)
 *     ?xxxSendDpiChangedMsgs@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C0078980 (-xxxSendDpiChangedMsgs@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 *     xxxSetLayeredWindow @ 0x1C0082DD4 (xxxSetLayeredWindow.c)
 *     SelectWindowRgn @ 0x1C00847C0 (SelectWindowRgn.c)
 *     NtUserUpdateLayeredWindow @ 0x1C008FA50 (NtUserUpdateLayeredWindow.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x1C00903C4 (IsTopLevelOrLayeredChildWindow.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C0098A20 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C009C270 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     ?xxxUpdateTray@@YAXPEAUtagWND@@@Z @ 0x1C00A41CC (-xxxUpdateTray@@YAXPEAUtagWND@@@Z.c)
 *     ?IsWindowEligibleForRecalc@CRecalcProp@@CA_NPEBUtagWND@@@Z @ 0x1C00AE9B0 (-IsWindowEligibleForRecalc@CRecalcProp@@CA_NPEBUtagWND@@@Z.c)
 *     WindowMargins::_anonymous_namespace_::GetWindowMargins @ 0x1C00B2AB0 (WindowMargins--_anonymous_namespace_--GetWindowMargins.c)
 *     ?ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x1C00B33EC (-ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C00B7E98 (zzzUpdateWindowsAfterModeChange.c)
 *     ?xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z @ 0x1C00BA5DC (-xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C00CA7B4 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     NtUserSetBrokeredForeground @ 0x1C00F15F0 (NtUserSetBrokeredForeground.c)
 *     ?xxxConsiderPreferredDpiChange@@YAXPEAUtagWND@@@Z @ 0x1C00FE6DC (-xxxConsiderPreferredDpiChange@@YAXPEAUtagWND@@@Z.c)
 *     ShouldHaveShadow @ 0x1C0107D18 (ShouldHaveShadow.c)
 *     ?xxxEnableChildWindowDpiMessageX@@YA_NPEAUtagWND@@H@Z @ 0x1C010CC94 (-xxxEnableChildWindowDpiMessageX@@YA_NPEAUtagWND@@H@Z.c)
 *     NtUserSetWindowCompositionTransition @ 0x1C010EC60 (NtUserSetWindowCompositionTransition.c)
 *     NtUserBeginLayoutUpdate @ 0x1C01175B0 (NtUserBeginLayoutUpdate.c)
 *     ?IsChildWindowCoordinateSpaceBoundary@@YA_NPEBUtagWND@@@Z @ 0x1C0118D5C (-IsChildWindowCoordinateSpaceBoundary@@YA_NPEBUtagWND@@@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C014501C (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?_ShouldGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C01456A8 (-_ShouldGhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     FeedbackGetWindowSetting @ 0x1C01D54D0 (FeedbackGetWindowSetting.c)
 *     ?xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z @ 0x1C01DF164 (-xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z.c)
 *     ?TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z @ 0x1C01F10CC (-TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z.c)
 *     NtUserDisableImmersiveOwner @ 0x1C01F2550 (NtUserDisableImmersiveOwner.c)
 *     NtUserForceWindowToDpiForTest @ 0x1C01F3490 (NtUserForceWindowToDpiForTest.c)
 *     NtUserGetWindowDisplayAffinity @ 0x1C01F72A0 (NtUserGetWindowDisplayAffinity.c)
 *     NtUserSetBridgeWindowChild @ 0x1C01FC5D0 (NtUserSetBridgeWindowChild.c)
 *     NtUserSetFallbackForeground @ 0x1C01FD2F0 (NtUserSetFallbackForeground.c)
 *     NtUserSetWindowDisplayAffinity @ 0x1C01FE560 (NtUserSetWindowDisplayAffinity.c)
 *     NtUserShellMigrateWindow @ 0x1C01FEC10 (NtUserShellMigrateWindow.c)
 *     NtUserShellSetWindowPos @ 0x1C01FEFF0 (NtUserShellSetWindowPos.c)
 *     NtUserUpdateDefaultDesktopThumbnail @ 0x1C01FFFF0 (NtUserUpdateDefaultDesktopThumbnail.c)
 *     ?DoesQualifyForResizeOptimization@@YAHPEAUMOVESIZEDATA@@@Z @ 0x1C0209AA8 (-DoesQualifyForResizeOptimization@@YAHPEAUMOVESIZEDATA@@@Z.c)
 *     ?DoesRequireResizeLayoutSynchronization@@YAHPEAUtagWND@@@Z @ 0x1C0209B08 (-DoesRequireResizeLayoutSynchronization@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x1C020C464 (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 *     ?_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z @ 0x1C021144C (-_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?_LogLinkWindow@@YAXW4LogBeforeOrAfter@@PEAUtagWND@@11@Z @ 0x1C021C9CC (-_LogLinkWindow@@YAXW4LogBeforeOrAfter@@PEAUtagWND@@11@Z.c)
 *     GetGestureConfigSettings @ 0x1C0221144 (GetGestureConfigSettings.c)
 *     ?IsNonClientDpiScalingEnabledX@@YA_NPEAUtagWND@@@Z @ 0x1C02382B8 (-IsNonClientDpiScalingEnabledX@@YA_NPEAUtagWND@@@Z.c)
 *     GetDisplayAffinity @ 0x1C0243980 (GetDisplayAffinity.c)
 *     xxxTrackPopupMenuEx @ 0x1C024614C (xxxTrackPopupMenuEx.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsTopLevelWindow(__int64 a1)
{
  __int64 v1; // r8
  _BOOL8 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx

  v1 = *(_QWORD *)(a1 + 104);
  result = 0LL;
  if ( v1 )
  {
    v3 = *(_QWORD *)(a1 + 24);
    if ( v3 )
    {
      v4 = *(_QWORD *)(v3 + 8);
      if ( v4 )
        return v1 == *(_QWORD *)(v4 + 24);
    }
  }
  return result;
}
