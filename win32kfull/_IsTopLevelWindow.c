/*
 * XREFs of _IsTopLevelWindow @ 0x1C004A140
 * Callers:
 *     xxxRestoreWindowFromDeferredStateIfNeeded @ 0x1C0012344 (xxxRestoreWindowFromDeferredStateIfNeeded.c)
 *     ?xxxEnableNonClientDpiScaling@@YA_NPEAUtagWND@@@Z @ 0x1C0015434 (-xxxEnableNonClientDpiScaling@@YA_NPEAUtagWND@@@Z.c)
 *     NtUserGetWindowDisplayAffinity @ 0x1C0015A20 (NtUserGetWindowDisplayAffinity.c)
 *     GetDisplayAffinity @ 0x1C0015AC4 (GetDisplayAffinity.c)
 *     ?IsChildWindowCoordinateSpaceBoundary@@YA_NPEBUtagWND@@@Z @ 0x1C0016AA8 (-IsChildWindowCoordinateSpaceBoundary@@YA_NPEBUtagWND@@@Z.c)
 *     SelectWindowRgn @ 0x1C00275FC (SelectWindowRgn.c)
 *     xxxSetLayeredWindow @ 0x1C0028C1C (xxxSetLayeredWindow.c)
 *     SetRedirectedWindow @ 0x1C002BE1C (SetRedirectedWindow.c)
 *     InitializeMonitorInfo @ 0x1C002D4E8 (InitializeMonitorInfo.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C002D900 (IsToplevelWindowDesktopComposed.c)
 *     xxxSetWindowStyle @ 0x1C002DD90 (xxxSetWindowStyle.c)
 *     ?VisWindow@@YAHPEAUtagWND@@K@Z @ 0x1C002E44C (-VisWindow@@YAHPEAUtagWND@@K@Z.c)
 *     FVisCountable @ 0x1C002E5C0 (FVisCountable.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C0036908 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     NtUserSetWindowCompositionAttribute @ 0x1C0041D90 (NtUserSetWindowCompositionAttribute.c)
 *     ?GetWindowCloakState@@YAKPEBUtagWND@@@Z @ 0x1C0048F7C (-GetWindowCloakState@@YAKPEBUtagWND@@@Z.c)
 *     ?xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C00490C0 (-xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_.c)
 *     ?IsWindowHolographicForHitTest@@YAHQEAUtagWND@@@Z @ 0x1C0049F70 (-IsWindowHolographicForHitTest@@YAHQEAUtagWND@@@Z.c)
 *     xxxDestroyWindow @ 0x1C004B7F0 (xxxDestroyWindow.c)
 *     NtUserIsNonClientDpiScalingEnabled @ 0x1C004C410 (NtUserIsNonClientDpiScalingEnabled.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00669E0 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     ?_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x1C0067EB8 (-_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z.c)
 *     ?xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z @ 0x1C006A4D8 (-xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z.c)
 *     ?ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x1C007D680 (-ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C007E644 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     NtUserSetBrokeredForeground @ 0x1C00961D0 (NtUserSetBrokeredForeground.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C0097D18 (zzzUpdateWindowsAfterModeChange.c)
 *     ?xxxEnableChildWindowDpiMessageX@@YA_NPEAUtagWND@@H@Z @ 0x1C0099104 (-xxxEnableChildWindowDpiMessageX@@YA_NPEAUtagWND@@H@Z.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C00991CC (UpdateMonitorForWindowAndChildren.c)
 *     ?BuildWindowListWithDpiBoundaryInfo@@YAPEAUtagWLDBI@@PEAUtagWND@@0PEAUtagBWL@@PEAH@Z @ 0x1C00992CC (-BuildWindowListWithDpiBoundaryInfo@@YAPEAUtagWLDBI@@PEAUtagWND@@0PEAUtagBWL@@PEAH@Z.c)
 *     ?xxxSendDpiChangedMsgs@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C00994C4 (-xxxSendDpiChangedMsgs@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 *     xxxNotifyMonitorChanged @ 0x1C0099554 (xxxNotifyMonitorChanged.c)
 *     ?xxxUpdateTray@@YAXPEAUtagWND@@@Z @ 0x1C009DE3C (-xxxUpdateTray@@YAXPEAUtagWND@@@Z.c)
 *     EditionPostDwmSpeedHitTest @ 0x1C00A2AE0 (EditionPostDwmSpeedHitTest.c)
 *     GetNewMonitor @ 0x1C00AB0FC (GetNewMonitor.c)
 *     xxxInheritWindowMonitor @ 0x1C00ADDA0 (xxxInheritWindowMonitor.c)
 *     xxxCreateWindowEx @ 0x1C00AF050 (xxxCreateWindowEx.c)
 *     ?IsWindowBroadcastingDpiToChildrenX@@YA_NPEAUtagWND@@@Z @ 0x1C00DE17C (-IsWindowBroadcastingDpiToChildrenX@@YA_NPEAUtagWND@@@Z.c)
 *     ShouldHaveShadow @ 0x1C00E512C (ShouldHaveShadow.c)
 *     NtUserSetWindowCompositionTransition @ 0x1C00EC250 (NtUserSetWindowCompositionTransition.c)
 *     IsTopLevelOrLayeredChildWindow @ 0x1C00EC5C8 (IsTopLevelOrLayeredChildWindow.c)
 *     NtUserBeginLayoutUpdate @ 0x1C00EEB80 (NtUserBeginLayoutUpdate.c)
 *     ?IsWindowEligibleForRecalc@CRecalcProp@@CA_NPEBUtagWND@@@Z @ 0x1C00FC7DC (-IsWindowEligibleForRecalc@CRecalcProp@@CA_NPEBUtagWND@@@Z.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C00FFAF8 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     ?OnBecomingMinMaximized@WindowMargins@@YAXPEAUtagWND@@@Z @ 0x1C0101384 (-OnBecomingMinMaximized@WindowMargins@@YAXPEAUtagWND@@@Z.c)
 *     WindowMargins::_anonymous_namespace_::GetWindowMargins @ 0x1C01015A4 (WindowMargins--_anonymous_namespace_--GetWindowMargins.c)
 *     FeedbackGetWindowSetting @ 0x1C01AEDEC (FeedbackGetWindowSetting.c)
 *     ?xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z @ 0x1C01BA8EC (-xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z.c)
 *     ?TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z @ 0x1C01CD768 (-TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z.c)
 *     NtUserDisableImmersiveOwner @ 0x1C01CF6A0 (NtUserDisableImmersiveOwner.c)
 *     NtUserForceWindowToDpiForTest @ 0x1C01D0A00 (NtUserForceWindowToDpiForTest.c)
 *     NtUserSetBridgeWindowChild @ 0x1C01DB5C0 (NtUserSetBridgeWindowChild.c)
 *     NtUserSetFallbackForeground @ 0x1C01DCB60 (NtUserSetFallbackForeground.c)
 *     NtUserSetWindowDisplayAffinity @ 0x1C01DE220 (NtUserSetWindowDisplayAffinity.c)
 *     NtUserShellMigrateWindow @ 0x1C01DED60 (NtUserShellMigrateWindow.c)
 *     NtUserShellSetWindowPos @ 0x1C01DF140 (NtUserShellSetWindowPos.c)
 *     NtUserUpdateDefaultDesktopThumbnail @ 0x1C01E0500 (NtUserUpdateDefaultDesktopThumbnail.c)
 *     NtUserUpdateLayeredWindow @ 0x1C01E0780 (NtUserUpdateLayeredWindow.c)
 *     ?DoesQualifyForResizeOptimization@@YAHPEAUMOVESIZEDATA@@@Z @ 0x1C01EA548 (-DoesQualifyForResizeOptimization@@YAHPEAUMOVESIZEDATA@@@Z.c)
 *     ?DoesRequireResizeLayoutSynchronization@@YAHPEAUtagWND@@@Z @ 0x1C01EA5A4 (-DoesRequireResizeLayoutSynchronization@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x1C01ED7C0 (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 *     ?_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F53A4 (-_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?_ShouldGhostWindow@@YA_NPEBUtagWND@@@Z @ 0x1C01F55FC (-_ShouldGhostWindow@@YA_NPEBUtagWND@@@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01F5BBC (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     GetGestureConfigSettings @ 0x1C02071A8 (GetGestureConfigSettings.c)
 *     ?IsNonClientDpiScalingEnabledX@@YA_NPEAUtagWND@@@Z @ 0x1C02223D4 (-IsNonClientDpiScalingEnabledX@@YA_NPEAUtagWND@@@Z.c)
 *     ?xxxConsiderPreferredDpiChange@@YAXPEAUtagWND@@@Z @ 0x1C0222570 (-xxxConsiderPreferredDpiChange@@YAXPEAUtagWND@@@Z.c)
 *     xxxTrackPopupMenuEx @ 0x1C02353CC (xxxTrackPopupMenuEx.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsTopLevelWindow(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rax
  _BOOL8 result; // rax

  v1 = *(_QWORD *)(a1 + 104);
  result = 0;
  if ( v1 )
  {
    v2 = *(_QWORD *)(a1 + 24);
    if ( v2 )
    {
      v3 = *(_QWORD *)(v2 + 8);
      if ( v3 )
      {
        if ( v1 == *(_QWORD *)(v3 + 24) )
          return 1;
      }
    }
  }
  return result;
}
