/*
 * XREFs of IntersectRect @ 0x1C00FEBD4
 * Callers:
 *     ?FBitsTouch@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagSPB@@K@Z @ 0x1C000B42C (-FBitsTouch@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagSPB@@K@Z.c)
 *     CreateSpb @ 0x1C000D094 (CreateSpb.c)
 *     OffsetChildren @ 0x1C004CB34 (OffsetChildren.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C00519F0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C0052B80 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     xxxInternalInvalidate @ 0x1C0053270 (xxxInternalInvalidate.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00669E0 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     SpbCheckDce @ 0x1C0097430 (SpbCheckDce.c)
 *     GetInheritedMonitor @ 0x1C00ACC90 (GetInheritedMonitor.c)
 *     _MonitorFromRect @ 0x1C00AEE80 (_MonitorFromRect.c)
 *     ?xxxGetWorkAreasFromShell@@YA_NXZ @ 0x1C00F7B94 (-xxxGetWorkAreasFromShell@@YA_NXZ.c)
 *     ?IsCandidateTransformOwner@@YAHPEAUtagWND@@0@Z @ 0x1C00FB120 (-IsCandidateTransformOwner@@YAHPEAUtagWND@@0@Z.c)
 *     UT_GetParentDCClipBox @ 0x1C00FC19C (UT_GetParentDCClipBox.c)
 *     xxxBeginPaint @ 0x1C00FD4C0 (xxxBeginPaint.c)
 *     xxxGetUpdateRect @ 0x1C00FE78C (xxxGetUpdateRect.c)
 *     ?MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@PEBUtagWND@@UtagRECT@@@Z @ 0x1C00FE8D0 (-MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@PEBUtagWND@@UtagRECT@@@Z.c)
 *     IntersectWithParents @ 0x1C00FEB48 (IntersectWithParents.c)
 *     ParkIcon @ 0x1C0101D68 (ParkIcon.c)
 *     xxxSystemParametersInfoWorker @ 0x1C01032D0 (xxxSystemParametersInfoWorker.c)
 *     ?xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0149E06 (-xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     ?FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z @ 0x1C01A6F6C (-FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z.c)
 *     ?PreventInterMonitorBlts@@YAXPEAUtagCVR@@@Z @ 0x1C01A71B0 (-PreventInterMonitorBlts@@YAXPEAUtagCVR@@@Z.c)
 *     ?IsNewMonitorRectMostOccupied@@YAHPEBUtagRECT@@00@Z @ 0x1C01BA484 (-IsNewMonitorRectMostOccupied@@YAHPEBUtagRECT@@00@Z.c)
 *     xxxPrintWindow @ 0x1C01BE184 (xxxPrintWindow.c)
 *     NtUserSetWindowShowState @ 0x1C01DE4F0 (NtUserSetWindowShowState.c)
 *     ?TTBetterTarget@@YAHPEAUtagWND@@IPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagRECT@@K@Z @ 0x1C01E52C4 (-TTBetterTarget@@YAHPEAUtagWND@@IPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagRECT@@K@Z.c)
 *     ?_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@HU4@K@Z @ 0x1C01E5A00 (-_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C01E6544 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHU.c)
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x1C01ED7C0 (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 *     ?xxxGetArrangeRectFromShell@@YA_NPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4ShellNotificationWindowKind@@PEAUtagRECT@@@Z @ 0x1C01EE504 (-xxxGetArrangeRectFromShell@@YA_NPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4ShellNotificationWindowKind.c)
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x1C01EEA1C (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1C01F1F6C (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 *     ?PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z @ 0x1C0217CA8 (-PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z.c)
 *     xxxMNOpenHierarchy @ 0x1C021B7B0 (xxxMNOpenHierarchy.c)
 *     ?xxxMigrateWindowHandler@CallShell@@YA_NPEAUtagWND@@W4_SHELL_MIGRATE_WINDOW_REASON@@AEBUtagRECT@@2GU4@PEAUtagMONITOR@@PEAU4@PEAW4State@AdvancedWindowPos@@PEAK@Z @ 0x1C0220F00 (-xxxMigrateWindowHandler@CallShell@@YA_NPEAUtagWND@@W4_SHELL_MIGRATE_WINDOW_REASON@@AEBUtagRECT@.c)
 *     ?SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z @ 0x1C022700C (-SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z.c)
 *     xxxSnapWindow @ 0x1C022AF08 (xxxSnapWindow.c)
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C0230DA0 (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 *     xxxScrollWindowEx @ 0x1C0231B34 (xxxScrollWindowEx.c)
 *     ?TryRect@@YAHIHHHHPEAUtagRECT@@PEAUtagPOINT@@PEAUtagMONITOR@@@Z @ 0x1C0234DEC (-TryRect@@YAHIHHHHPEAUtagRECT@@PEAUtagPOINT@@PEAUtagMONITOR@@@Z.c)
 *     FindBestPos @ 0x1C0234EF4 (FindBestPos.c)
 *     ?RectInClipRegion@MOVESIZEDATA@@QEBA_NAEBUtagRECT@@@Z @ 0x1C023D110 (-RectInClipRegion@MOVESIZEDATA@@QEBA_NAEBUtagRECT@@@Z.c)
 *     SubtractRect @ 0x1C024E530 (SubtractRect.c)
 *     TouchTargetingClipContact @ 0x1C0250B3C (TouchTargetingClipContact.c)
 *     TouchTargetingCreateContact @ 0x1C0250C6C (TouchTargetingCreateContact.c)
 *     TouchTargetingRankForRect @ 0x1C0251150 (TouchTargetingRankForRect.c)
 *     TouchTargetingRankForRectDeep @ 0x1C025169C (TouchTargetingRankForRectDeep.c)
 *     DxgkEngBltViaGDI @ 0x1C0271CF0 (DxgkEngBltViaGDI.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IntersectRect(_DWORD *a1, int *a2, int *a3)
{
  int v4; // r10d
  int v6; // r9d
  int v7; // edx
  int v8; // ecx
  __int64 result; // rax

  v4 = *a2;
  if ( *a2 <= *a3 )
    v4 = *a3;
  *a1 = v4;
  v6 = a2[2];
  if ( v6 >= a3[2] )
    v6 = a3[2];
  a1[2] = v6;
  if ( v4 < v6 )
  {
    v7 = a2[1];
    if ( v7 <= a3[1] )
      v7 = a3[1];
    a1[1] = v7;
    v8 = a2[3];
    if ( v8 >= a3[3] )
      v8 = a3[3];
    a1[3] = v8;
    if ( v7 < v8 )
      return 1LL;
  }
  result = 0LL;
  *(_OWORD *)a1 = 0LL;
  return result;
}
