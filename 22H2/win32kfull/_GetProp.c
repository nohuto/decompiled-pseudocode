/*
 * XREFs of _GetProp @ 0x1C00F21FC
 * Callers:
 *     xxxFlashWindow @ 0x1C0005C64 (xxxFlashWindow.c)
 *     _GetWindowPlacement @ 0x1C0006908 (_GetWindowPlacement.c)
 *     NtUserGetWindowMinimizeRect @ 0x1C000E010 (NtUserGetWindowMinimizeRect.c)
 *     xxxRestoreWindowFromDeferredStateIfNeeded @ 0x1C0013084 (xxxRestoreWindowFromDeferredStateIfNeeded.c)
 *     SetOldRedirectionBitmap @ 0x1C001406C (SetOldRedirectionBitmap.c)
 *     ?s_xxxOnWindowRestoreFromMinimized@CRecalcProp@@SA_NPEAUtagWND@@_NPEA_NPEAKPEAUtagRECT@@@Z @ 0x1C0015DA8 (-s_xxxOnWindowRestoreFromMinimized@CRecalcProp@@SA_NPEAUtagWND@@_NPEA_NPEAKPEAUtagRECT@@@Z.c)
 *     xxxCompositedPaint @ 0x1C0016544 (xxxCompositedPaint.c)
 *     GetDisplayAffinity @ 0x1C0016874 (GetDisplayAffinity.c)
 *     FlushWEFCOMPOSITEDDCEBounds @ 0x1C00176A0 (FlushWEFCOMPOSITEDDCEBounds.c)
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C00328E0 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     xxxCreateWindowEx @ 0x1C0035320 (xxxCreateWindowEx.c)
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z @ 0x1C00426F0 (--$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z.c)
 *     NtUserSetWindowBand @ 0x1C0042840 (NtUserSetWindowBand.c)
 *     ??$GetProp@VCSwapChainProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCSwapChainProp@@@Z @ 0x1C00590E4 (--$GetProp@VCSwapChainProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCSwapChainProp@@@Z.c)
 *     ??$GetProp@VCHwndTargetProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndTargetProp@@@Z @ 0x1C0059638 (--$GetProp@VCHwndTargetProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndTargetProp@@@Z.c)
 *     ??$GetProp@VCHwndBitmapProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndBitmapProp@@@Z @ 0x1C00596E4 (--$GetProp@VCHwndBitmapProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndBitmapProp@@@Z.c)
 *     ?IsWindowGhosted@@YA_NPEBUtagWND@@@Z @ 0x1C005EF60 (-IsWindowGhosted@@YA_NPEBUtagWND@@@Z.c)
 *     ?_GhostWindowFromHungWindow@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C005F03C (-_GhostWindowFromHungWindow@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x1C005F270 (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     GetRedirectionFlags @ 0x1C008EC3C (GetRedirectionFlags.c)
 *     ShouldHaveShadow @ 0x1C00ACE04 (ShouldHaveShadow.c)
 *     NtUserShutdownBlockReasonQuery @ 0x1C00B5E20 (NtUserShutdownBlockReasonQuery.c)
 *     NtUserSetBrokeredForeground @ 0x1C00BAFA0 (NtUserSetBrokeredForeground.c)
 *     ??1CSaveRestoreCheckPoint@@QEAA@XZ @ 0x1C00C1048 (--1CSaveRestoreCheckPoint@@QEAA@XZ.c)
 *     ?xxxMigrateWindow@AdvancedWindowPos@@YA?AW4MigrateWindowResult@@PEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@W4MigrateWindowOptions@@PEAK@Z @ 0x1C00C115C (-xxxMigrateWindow@AdvancedWindowPos@@YA-AW4MigrateWindowResult@@PEAUtagWND@@PEAUtagMONITOR@@AEBV.c)
 *     _anonymous_namespace_::xxxMigrateWindowPosition @ 0x1C00C1C88 (_anonymous_namespace_--xxxMigrateWindowPosition.c)
 *     ?GetRecalcProperty@CRecalcProp@@CAPEAV1@PEBUtagWND@@@Z @ 0x1C00C2A50 (-GetRecalcProperty@CRecalcProp@@CAPEAV1@PEBUtagWND@@@Z.c)
 *     ??0CRecalcState@@AEAA@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcOption@@@Z @ 0x1C00C2DDC (--0CRecalcState@@AEAA@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcOption@@@Z.c)
 *     ?HasFullscreenState@AdvancedWindowPos@@YA_NPEBUtagWND@@@Z @ 0x1C00C32E8 (-HasFullscreenState@AdvancedWindowPos@@YA_NPEBUtagWND@@@Z.c)
 *     ParkIcon @ 0x1C00C3A88 (ParkIcon.c)
 *     CitGetWindowInfo @ 0x1C00C3C30 (CitGetWindowInfo.c)
 *     ??$GetProp@VCWindowMarginProp@WindowMargins@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCWindowMarginProp@WindowMargins@@@Z @ 0x1C00C4B88 (--$GetProp@VCWindowMarginProp@WindowMargins@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCWindowMarginPr.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C00C4E00 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     ?SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C00C609C (-SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     ?GetStore@Feedback@@YA?AUtagSTORE@1@PEAUtagWND@@W4tagFEEDBACK_TYPE@@@Z @ 0x1C00C6350 (-GetStore@Feedback@@YA-AUtagSTORE@1@PEAUtagWND@@W4tagFEEDBACK_TYPE@@@Z.c)
 *     CkptRestore @ 0x1C00C7A4C (CkptRestore.c)
 *     DeleteOldRedirectionBitmap @ 0x1C00C87AC (DeleteOldRedirectionBitmap.c)
 *     UnsetRedirectedWindow @ 0x1C00C881C (UnsetRedirectedWindow.c)
 *     xxxSetWindowData @ 0x1C00CA930 (xxxSetWindowData.c)
 *     ??$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCVisRgnTrackerProp@@@Z @ 0x1C00CD17C (--$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCVisRgnTrackerProp@@@Z.c)
 *     IsWindowContentProtected @ 0x1C00CF0C0 (IsWindowContentProtected.c)
 *     ?_HungWindowFromGhostWindow@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C00CFB70 (-_HungWindowFromGhostWindow@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C00D003C (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     SetRedirectedWindow @ 0x1C00D36F4 (SetRedirectedWindow.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C00D54CC (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     UpdateSprite @ 0x1C00D5D64 (UpdateSprite.c)
 *     ??$GetProp@VCInputQueueProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInputQueueProp@@@Z @ 0x1C00E28B4 (--$GetProp@VCInputQueueProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInputQueueProp@@@Z.c)
 *     xxxFreeWindow @ 0x1C00E8F70 (xxxFreeWindow.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C00ED180 (xxxInitSendValidateMinMaxInfoEx.c)
 *     NtUserGetWindowCompositionAttribute @ 0x1C00EF6D0 (NtUserGetWindowCompositionAttribute.c)
 *     ?zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z @ 0x1C00F1010 (-zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z.c)
 *     LinkWindow @ 0x1C00F2760 (LinkWindow.c)
 *     DirtyVisRgnTrackers @ 0x1C00F319C (DirtyVisRgnTrackers.c)
 *     UnlinkWindow @ 0x1C010B5E0 (UnlinkWindow.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C0123FE0 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     ?GetMiPWindowFlags@@YA_KPEAUtagWND@@@Z @ 0x1C01503FA (-GetMiPWindowFlags@@YA_KPEAUtagWND@@@Z.c)
 *     ?_TTWindowPenalty@@YAIPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@I@Z @ 0x1C0155652 (-_TTWindowPenalty@@YAIPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@I@Z.c)
 *     GetOldRedirectionBitmap @ 0x1C01BCD18 (GetOldRedirectionBitmap.c)
 *     InvalidateGDIWindows @ 0x1C01BDC84 (InvalidateGDIWindows.c)
 *     UserGetHwnd @ 0x1C01BDE2C (UserGetHwnd.c)
 *     xxxMetricsRecalc @ 0x1C01C88FC (xxxMetricsRecalc.c)
 *     ?DDEImpDecRefInitWorker@@YAXPEAUHWND__@@@Z @ 0x1C01CBD60 (-DDEImpDecRefInitWorker@@YAXPEAUHWND__@@@Z.c)
 *     NtUserGetAppImeLevel @ 0x1C01CFE90 (NtUserGetAppImeLevel.c)
 *     NtUserIsTouchWindow @ 0x1C01D5D60 (NtUserIsTouchWindow.c)
 *     NtUserfnDDEINIT @ 0x1C01E0470 (NtUserfnDDEINIT.c)
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C01E5F80 (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 *     xxxPerformTargetingWithinPwnd @ 0x1C01E6F4C (xxxPerformTargetingWithinPwnd.c)
 *     xxxTouchTargetWindow @ 0x1C01E7188 (xxxTouchTargetWindow.c)
 *     ?RestoreSemimaximizedState@@YAXPEAUtagWND@@PEBUtagCHECKPOINT@@@Z @ 0x1C01EA664 (-RestoreSemimaximizedState@@YAXPEAUtagWND@@PEBUtagCHECKPOINT@@@Z.c)
 *     ?SizeRect@@YAHPEAUMOVESIZEDATA@@KPEAUtagMONITOR@@PEAK@Z @ 0x1C01EA944 (-SizeRect@@YAHPEAUMOVESIZEDATA@@KPEAUtagMONITOR@@PEAK@Z.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z @ 0x1C01EBC7C (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x1C01ED858 (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1C01F0D8C (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 *     ?xxxSizeOrMoveRect@@YA_NPEAUMOVESIZEDATA@@UtagPOINT@@PEAUtagRECT@@PEAI@Z @ 0x1C01F112C (-xxxSizeOrMoveRect@@YA_NPEAUMOVESIZEDATA@@UtagPOINT@@PEAUtagRECT@@PEAI@Z.c)
 *     ?SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C01F3D04 (-SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     ?SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C01F3DB8 (-SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     ?ShouldProcessHungWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C01F3E38 (-ShouldProcessHungWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z @ 0x1C01F3EB4 (-_CopyWindowCheckpoint@@YAHPEAUtagWND@@0@Z.c)
 *     ?_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F42A0 (-_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?_ShouldGhostWindow@@YA_NPEBUtagWND@@@Z @ 0x1C01F43FC (-_ShouldGhostWindow@@YA_NPEBUtagWND@@@Z.c)
 *     ?xxxFrostCrashedWindow@@YAPEAUHWND__@@PEAUtagWND@@PEAU1@@Z @ 0x1C01F4680 (-xxxFrostCrashedWindow@@YAPEAUHWND__@@PEAUtagWND@@PEAU1@@Z.c)
 *     ?xxxHandleHealthyWindow@@YA_NPEAUtagWND@@@Z @ 0x1C01F493C (-xxxHandleHealthyWindow@@YA_NPEAUtagWND@@@Z.c)
 *     ?xxxRegisterGhostWindow@@YAHPEAUHWND__@@0@Z @ 0x1C01F5128 (-xxxRegisterGhostWindow@@YAHPEAUHWND__@@0@Z.c)
 *     ?xxxRegisterSiblingFrostWindow@@YAHPEAUHWND__@@0@Z @ 0x1C01F53F8 (-xxxRegisterSiblingFrostWindow@@YAHPEAUHWND__@@0@Z.c)
 *     ?AddConvProp@@YAHPEAUtagWND@@0KPEAUtagDDECONV@@1@Z @ 0x1C01F9620 (-AddConvProp@@YAHPEAUtagWND@@0KPEAUtagDDECONV@@1@Z.c)
 *     ?FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z @ 0x1C01F997C (-FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z.c)
 *     ?UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z @ 0x1C01F9CC8 (-UnlinkConv@@YAPEAUtagDDECONV@@PEAU1@@Z.c)
 *     ?xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z @ 0x1C01FA218 (-xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z.c)
 *     xxxSendShutdownData @ 0x1C02137F8 (xxxSendShutdownData.c)
 *     ?xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z @ 0x1C0224FD4 (-xxxSetWindowShowState@@YA_NPEAUtagWND@@EPEAUtagRECT@@@Z.c)
 *     ?xxxFullscreenRestore@CRecalcState@@QEAAXPEAUtagWND@@AEBVCMonitorTopology@@PEAVCRecalcContext@@@Z @ 0x1C0226760 (-xxxFullscreenRestore@CRecalcState@@QEAAXPEAUtagWND@@AEBVCMonitorTopology@@PEAVCRecalcContext@@@.c)
 *     xxxArrangeIconicWindows @ 0x1C0239A1C (xxxArrangeIconicWindows.c)
 *     ?MigrateCheckpoint@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x1C023B904 (-MigrateCheckpoint@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z.c)
 *     ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x1C023BA64 (-xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z.c)
 *     ?xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4State@1@UtagRECT@@3W4ApplyOption@1@PEAK@Z @ 0x1C023D0DC (-xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4.c)
 * Callees:
 *     ??1?$ObjectLock@UtagObjLock@@@?$DomainExclusive@$$V@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@XZ @ 0x1C00BE880 (--1-$ObjectLock@UtagObjLock@@@-$DomainExclusive@$$V@-$DomainShared@$$V@SharedUserCritOnly@@QEAA@.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x1C00C6854 (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C011E0F8 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C0138C00 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 *     GetSharedPropForFilteredProcesses @ 0x1C021C5FC (GetSharedPropForFilteredProcesses.c)
 */

__int64 __fastcall GetProp(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  LIST_ENTRY *v4; // rbx
  unsigned int v5; // r15d
  struct _LIST_ENTRY *Flink; // xmm1_8
  PERESOURCE *v9; // rax
  int v10; // esi
  tagObjLock **v11; // rbx
  __int64 Prop; // rbx
  __int64 v14; // rax
  __int64 v15; // [rsp+20h] [rbp-49h] BYREF
  char v16; // [rsp+28h] [rbp-41h]
  __int128 v17; // [rsp+30h] [rbp-39h] BYREF
  char v18; // [rsp+40h] [rbp-29h]
  char v19; // [rsp+48h] [rbp-21h]
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-19h] BYREF

  v4 = *(LIST_ENTRY **)(a1 + 144);
  v15 = gDomainDummyLock;
  v5 = a3;
  v16 = 0;
  v17 = 0LL;
  v18 = 0;
  Flink = v4[1].Flink;
  ApcState.ApcListHead[0] = *v4;
  v19 = 0;
  ApcState.ApcListHead[1].Flink = Flink;
  v9 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(a1, a2, a3, a4);
  if ( ExIsResourceAcquiredExclusiveLite(*v9) != 1 && IS_USERCRIT_OWNED_AT_ALL() )
  {
    v19 = 1;
    if ( v4 == (LIST_ENTRY *)gObjDummyLock )
      v4 = 0LL;
    *(_QWORD *)&v17 = v4;
    v10 = 0;
    v11 = (tagObjLock **)&v17;
    do
    {
      if ( *v11 )
        tagObjLock::LockExclusive(*v11);
      ++v10;
      ++v11;
    }
    while ( !v10 );
    v18 = 1;
  }
  Prop = RealGetProp(*(_QWORD *)(a1 + 144), a2, v5);
  if ( !Prop && !v5 && (*(_DWORD *)(a1 + 324) & 1) != 0 )
  {
    if ( (_WORD)a2 == 0xA914 )
    {
      SharedUserCritOnly::DomainShared<>::DomainExclusive<>::ObjectLock<tagObjLock>::~ObjectLock<tagObjLock>((__int64)&v15);
      return 0LL;
    }
    LockRefactorStagingAssertOwned(*(struct _KTHREAD ***)(a1 + 144));
    v14 = *(_QWORD *)(a1 + 16);
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(**(PRKPROCESS **)(v14 + 424), &ApcState);
    Prop = GetSharedPropForFilteredProcesses(a1, a2);
    KeUnstackDetachProcess(&ApcState);
  }
  if ( v19 && v18 )
  {
    if ( (_QWORD)v17 )
      tagObjLock::UnLockExclusive((tagObjLock *)v17);
  }
  return Prop;
}
