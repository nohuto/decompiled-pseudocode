/*
 * XREFs of _GetProp @ 0x1C006B844
 * Callers:
 *     xxxRestoreWindowFromDeferredStateIfNeeded @ 0x1C0003D64 (xxxRestoreWindowFromDeferredStateIfNeeded.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C001F87C (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     SetRedirectedWindow @ 0x1C001F9FC (SetRedirectedWindow.c)
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C004B1E8 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     NtUserGetWindowCompositionAttribute @ 0x1C004D030 (NtUserGetWindowCompositionAttribute.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C004DF70 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     xxxSetWindowData @ 0x1C004F920 (xxxSetWindowData.c)
 *     xxxFreeWindow @ 0x1C005E458 (xxxFreeWindow.c)
 *     ?IsWindowGhosted@@YAHPEBUtagWND@@@Z @ 0x1C0062EF0 (-IsWindowGhosted@@YAHPEBUtagWND@@@Z.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C0063E00 (xxxInitSendValidateMinMaxInfoEx.c)
 *     ??$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCVisRgnTrackerProp@@@Z @ 0x1C006B80C (--$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCVisRgnTrackerProp@@@Z.c)
 *     GetInheritedMonitor @ 0x1C006F4F4 (GetInheritedMonitor.c)
 *     IsWindowContentProtected @ 0x1C0077D48 (IsWindowContentProtected.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C007B464 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     _GetWindowPlacement @ 0x1C007C658 (_GetWindowPlacement.c)
 *     CkptRestore @ 0x1C007C97C (CkptRestore.c)
 *     ?GetStore@Feedback@@YA?AUtagSTORE@1@PEAUtagWND@@W4tagFEEDBACK_TYPE@@@Z @ 0x1C0080AF8 (-GetStore@Feedback@@YA-AUtagSTORE@1@PEAUtagWND@@W4tagFEEDBACK_TYPE@@@Z.c)
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z @ 0x1C00821A8 (--$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z.c)
 *     ?GetRecalcProperty@CRecalcProp@@CAPEAV1@PEBUtagWND@@@Z @ 0x1C0082264 (-GetRecalcProperty@CRecalcProp@@CAPEAV1@PEBUtagWND@@@Z.c)
 *     ?SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C0082444 (-SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     GetRedirectionFlags @ 0x1C0090390 (GetRedirectionFlags.c)
 *     NtUserSetWindowBand @ 0x1C009D860 (NtUserSetWindowBand.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x1C00A94FC (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     _anonymous_namespace_::xxxMigrateWindowPosition @ 0x1C00B1A70 (_anonymous_namespace_--xxxMigrateWindowPosition.c)
 *     _anonymous_namespace_::xxxMigrateWindow @ 0x1C00B28A8 (_anonymous_namespace_--xxxMigrateWindow.c)
 *     ??$GetProp@VCSwapChainProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCSwapChainProp@@@Z @ 0x1C00B3444 (--$GetProp@VCSwapChainProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCSwapChainProp@@@Z.c)
 *     UnsetRedirectedWindow @ 0x1C00B40A4 (UnsetRedirectedWindow.c)
 *     GetOldRedirectionBitmap @ 0x1C00B41E0 (GetOldRedirectionBitmap.c)
 *     _GhostWindowFromHungWindow @ 0x1C00B4C0C (_GhostWindowFromHungWindow.c)
 *     SetOldRedirectionBitmap @ 0x1C00B4DA8 (SetOldRedirectionBitmap.c)
 *     ??$GetProp@VCHwndTargetProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndTargetProp@@@Z @ 0x1C00B52D0 (--$GetProp@VCHwndTargetProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndTargetProp@@@Z.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C00CA7B4 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     CitGetWindowInfo @ 0x1C00CB860 (CitGetWindowInfo.c)
 *     ParkIcon @ 0x1C00CBAB0 (ParkIcon.c)
 *     ?xxxOnWindowRestoreFromMinimized@DesktopRecalc@@YA_NPEAUtagWND@@_NPEA_NPEAKPEAUtagRECT@@@Z @ 0x1C00CD718 (-xxxOnWindowRestoreFromMinimized@DesktopRecalc@@YA_NPEAUtagWND@@_NPEA_NPEAKPEAUtagRECT@@@Z.c)
 *     ?ShouldProcessHungWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00E1344 (-ShouldProcessHungWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     NtUserSetBrokeredForeground @ 0x1C00F15F0 (NtUserSetBrokeredForeground.c)
 *     ??$GetProp@VCInputQueueProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInputQueueProp@@@Z @ 0x1C00FF5E0 (--$GetProp@VCInputQueueProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInputQueueProp@@@Z.c)
 *     _HungWindowFromGhostWindow @ 0x1C01043E4 (_HungWindowFromGhostWindow.c)
 *     ShouldHaveShadow @ 0x1C0107D18 (ShouldHaveShadow.c)
 *     xxxFlashWindow @ 0x1C010B918 (xxxFlashWindow.c)
 *     NtUserGetWindowMinimizeRect @ 0x1C010DBA0 (NtUserGetWindowMinimizeRect.c)
 *     ?s_GetRestoreRect@CRecalcState@@CA?AUtagRECT@@PEBUtagWND@@@Z @ 0x1C010DE70 (-s_GetRestoreRect@CRecalcState@@CA-AUtagRECT@@PEBUtagWND@@@Z.c)
 *     ?HasFullscreenState@AdvancedWindowPos@@YA_NPEBUtagWND@@PEBVCMonitorTopology@@@Z @ 0x1C0111DBC (-HasFullscreenState@AdvancedWindowPos@@YA_NPEBUtagWND@@PEBVCMonitorTopology@@@Z.c)
 *     NtUserShutdownBlockReasonQuery @ 0x1C0119FB0 (NtUserShutdownBlockReasonQuery.c)
 *     ??$GetProp@VCWindowMarginProp@WindowMargins@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCWindowMarginProp@WindowMargins@@@Z @ 0x1C0120334 (--$GetProp@VCWindowMarginProp@WindowMargins@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCWindowMarginPr.c)
 *     ?xxxHandleHealthyWindow@@YAHPEAUtagWND@@@Z @ 0x1C0144620 (-xxxHandleHealthyWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxRegisterGhostWindow @ 0x1C0144AD4 (xxxRegisterGhostWindow.c)
 *     ?SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C0144CE8 (-SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     ?_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z @ 0x1C01454C0 (-_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z.c)
 *     ?_ShouldGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C01456A8 (-_ShouldGhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxArrangeIconicWindows @ 0x1C014E0E4 (xxxArrangeIconicWindows.c)
 *     xxxMetricsRecalc @ 0x1C015823C (xxxMetricsRecalc.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1C015B0AC (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 *     FlushWEFCOMPOSITEDDCEBounds @ 0x1C016BA80 (FlushWEFCOMPOSITEDDCEBounds.c)
 *     ?_TTWindowPenalty@@YAIPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@I@Z @ 0x1C016D29E (-_TTWindowPenalty@@YAIPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@I@Z.c)
 *     ?GetOrUpdateCheckPointIfNotPresent@@YAPEAUtagCHECKPOINT@@PEAUMOVESIZEDATA@@@Z @ 0x1C016D756 (-GetOrUpdateCheckPointIfNotPresent@@YAPEAUtagCHECKPOINT@@PEAUMOVESIZEDATA@@@Z.c)
 *     SnapshotWindowRects @ 0x1C01D31E8 (SnapshotWindowRects.c)
 *     ?GetMiPWindowFlags@@YA_KPEAUtagWND@@@Z @ 0x1C01DBC6C (-GetMiPWindowFlags@@YA_KPEAUtagWND@@@Z.c)
 *     InvalidateGDIWindows @ 0x1C01E30E0 (InvalidateGDIWindows.c)
 *     UserGetHwnd @ 0x1C01E3288 (UserGetHwnd.c)
 *     ?DDEImpDecRefInitWorker@@YAXPEAUHWND__@@@Z @ 0x1C01F0590 (-DDEImpDecRefInitWorker@@YAXPEAUHWND__@@@Z.c)
 *     NtUserGetAppImeLevel @ 0x1C01F39C0 (NtUserGetAppImeLevel.c)
 *     NtUserIsTouchWindow @ 0x1C01F8A40 (NtUserIsTouchWindow.c)
 *     NtUserfnDDEINIT @ 0x1C0200C50 (NtUserfnDDEINIT.c)
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C02068EC (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 *     xxxPerformTargetingWithinPwnd @ 0x1C020760C (xxxPerformTargetingWithinPwnd.c)
 *     xxxTouchTargetWindow @ 0x1C020783C (xxxTouchTargetWindow.c)
 *     ??0CSaveRestoreCheckPoint@@QEAA@PEAUtagWND@@@Z @ 0x1C0209364 (--0CSaveRestoreCheckPoint@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1CSaveRestoreCheckPoint@@QEAA@XZ @ 0x1C02093B0 (--1CSaveRestoreCheckPoint@@QEAA@XZ.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z @ 0x1C020BFC8 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z.c)
 *     ?SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C02113D8 (-SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     ?_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z @ 0x1C0211548 (-_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxFrostCrashedWindow @ 0x1C0211758 (xxxFrostCrashedWindow.c)
 *     xxxRegisterSiblingFrostWindow @ 0x1C0211880 (xxxRegisterSiblingFrostWindow.c)
 *     ?AddConvProp@@YAHPEAUtagWND@@0KPEAUtagDDECONV@@1@Z @ 0x1C0214BD0 (-AddConvProp@@YAHPEAUtagWND@@0KPEAUtagDDECONV@@1@Z.c)
 *     ?FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z @ 0x1C0214F2C (-FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z.c)
 *     ?UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z @ 0x1C021553C (-UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z.c)
 *     ?xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z @ 0x1C0216060 (-xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z.c)
 *     xxxSendShutdownData @ 0x1C022D134 (xxxSendShutdownData.c)
 *     xxxCompositedPaint @ 0x1C0239C94 (xxxCompositedPaint.c)
 *     ?xxxRestore@CRecalcState@@QEAA?AW4ProcessRecalcResult@@PEAUtagWND@@@Z @ 0x1C023B694 (-xxxRestore@CRecalcState@@QEAA-AW4ProcessRecalcResult@@PEAUtagWND@@@Z.c)
 *     ?xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z @ 0x1C023DD00 (-xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z.c)
 *     GetDisplayAffinity @ 0x1C0243980 (GetDisplayAffinity.c)
 *     ??$GetProp@VCHwndBitmapProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndBitmapProp@@@Z @ 0x1C024A298 (--$GetProp@VCHwndBitmapProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndBitmapProp@@@Z.c)
 *     ?MigrateCheckpoint@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x1C024AC80 (-MigrateCheckpoint@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z.c)
 *     ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x1C024ADB8 (-xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z.c)
 * Callees:
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x1C007944C (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     GetSharedPropForFilteredProcesses @ 0x1C0235B4C (GetSharedPropForFilteredProcesses.c)
 */

__int64 __fastcall GetProp(__int64 a1, __int64 a2, unsigned int a3)
{
  LIST_ENTRY *v3; // rbx
  struct _LIST_ENTRY *Flink; // xmm1_8
  __int64 Prop; // rbx
  int v10; // edi
  tagObjLock **v11; // rbx
  __int64 v12; // rax
  __int128 v13; // [rsp+30h] [rbp-39h] BYREF
  char v14; // [rsp+40h] [rbp-29h]
  char v15; // [rsp+48h] [rbp-21h]
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-19h] BYREF

  v3 = *(LIST_ENTRY **)(a1 + 144);
  v13 = 0LL;
  v14 = 0;
  Flink = v3[1].Flink;
  ApcState.ApcListHead[0] = *v3;
  v15 = 0;
  ApcState.ApcListHead[1].Flink = Flink;
  if ( !ExIsResourceAcquiredExclusiveLite(gpresUser) && ExIsResourceAcquiredSharedLite(gpresUser) )
  {
    v15 = 1;
    if ( v3 == (LIST_ENTRY *)gObjDummyLock )
      v3 = 0LL;
    *(_QWORD *)&v13 = v3;
    v10 = 0;
    v11 = (tagObjLock **)&v13;
    do
    {
      if ( *v11 )
        tagObjLock::LockExclusive(*v11);
      ++v10;
      ++v11;
    }
    while ( !v10 );
    v14 = 1;
  }
  Prop = RealGetProp(*(_QWORD *)(a1 + 144), a2, a3);
  if ( !Prop && !a3 && (*(_DWORD *)(a1 + 324) & 1) != 0 )
  {
    if ( (_WORD)a2 == 0xA914 )
    {
      Prop = 0LL;
    }
    else
    {
      LockRefactorStagingAssertOwned(*(const struct tagObjLock **)(a1 + 144));
      v12 = *(_QWORD *)(a1 + 16);
      memset(&ApcState, 0, sizeof(ApcState));
      KeStackAttachProcess(**(PRKPROCESS **)(v12 + 424), &ApcState);
      Prop = GetSharedPropForFilteredProcesses(a1, a2);
      KeUnstackDetachProcess(&ApcState);
    }
  }
  if ( v15 && v14 && (_QWORD)v13 )
    tagObjLock::UnLockExclusive((tagObjLock *)v13);
  return Prop;
}
