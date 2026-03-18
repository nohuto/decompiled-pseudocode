/*
 * XREFs of IntersectRect @ 0x1C00D0330
 * Callers:
 *     ?FBitsTouch@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagSPB@@K@Z @ 0x1C000C07C (-FBitsTouch@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagSPB@@K@Z.c)
 *     CreateSpb @ 0x1C000DD04 (CreateSpb.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C00317F0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C00328E0 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     xxxInternalInvalidate @ 0x1C0032FD0 (xxxInternalInvalidate.c)
 *     xxxSystemParametersInfoWorker @ 0x1C0043D70 (xxxSystemParametersInfoWorker.c)
 *     ?xxxGetWorkAreasFromShell@@YA_NXZ @ 0x1C004A114 (-xxxGetWorkAreasFromShell@@YA_NXZ.c)
 *     xxxGetUpdateRect @ 0x1C008BB5C (xxxGetUpdateRect.c)
 *     IntersectWithParents @ 0x1C008BCA0 (IntersectWithParents.c)
 *     SpbCheckDce @ 0x1C008F1F0 (SpbCheckDce.c)
 *     ?IsCandidateTransformOwner@@YAHPEAUtagWND@@0@Z @ 0x1C00C1074 (-IsCandidateTransformOwner@@YAHPEAUtagWND@@0@Z.c)
 *     ?MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@PEBUtagWND@@UtagRECT@@@Z @ 0x1C00C3074 (-MonitorDataFromRect@CMonitorTopology@@QEBAPEBUMonitorData@1@PEBUtagWND@@UtagRECT@@@Z.c)
 *     ParkIcon @ 0x1C00C3A88 (ParkIcon.c)
 *     UT_GetParentDCClipBox @ 0x1C00C4178 (UT_GetParentDCClipBox.c)
 *     xxxBeginPaint @ 0x1C00CDA00 (xxxBeginPaint.c)
 *     _MonitorFromRect @ 0x1C00D0160 (_MonitorFromRect.c)
 *     OffsetChildren @ 0x1C00F147C (OffsetChildren.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00F58E4 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     GetInheritedMonitor @ 0x1C010E880 (GetInheritedMonitor.c)
 *     ?xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0156B26 (-xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     ?FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z @ 0x1C01A5DB4 (-FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z.c)
 *     ?PreventInterMonitorBlts@@YAXPEAUtagCVR@@@Z @ 0x1C01A5FF8 (-PreventInterMonitorBlts@@YAXPEAUtagCVR@@@Z.c)
 *     ?IsNewMonitorRectMostOccupied@@YAHPEBUtagRECT@@00@Z @ 0x1C01B92E4 (-IsNewMonitorRectMostOccupied@@YAHPEBUtagRECT@@00@Z.c)
 *     xxxPrintWindow @ 0x1C01BCFE4 (xxxPrintWindow.c)
 *     NtUserSetWindowShowState @ 0x1C01DD4C0 (NtUserSetWindowShowState.c)
 *     ?TTBetterTarget@@YAHPEAUtagWND@@IPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagRECT@@K@Z @ 0x1C01E4214 (-TTBetterTarget@@YAHPEAUtagWND@@IPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagRECT@@K@Z.c)
 *     ?_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@HU4@K@Z @ 0x1C01E4950 (-_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C01E5494 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHU.c)
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x1C01EC5FC (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 *     ?xxxGetArrangeRectFromShell@@YA_NPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4ShellNotificationWindowKind@@PEAUtagRECT@@@Z @ 0x1C01ED340 (-xxxGetArrangeRectFromShell@@YA_NPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4ShellNotificationWindowKind.c)
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x1C01ED858 (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1C01F0D8C (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 *     ?PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z @ 0x1C02150E8 (-PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z.c)
 *     xxxMNOpenHierarchy @ 0x1C0218BF0 (xxxMNOpenHierarchy.c)
 *     ?xxxMigrateWindowHandler@CallShell@@YA_NPEAUtagWND@@W4_SHELL_MIGRATE_WINDOW_REASON@@AEBUtagRECT@@2GU4@PEAUtagMONITOR@@PEAU4@PEAW4State@AdvancedWindowPos@@PEAK@Z @ 0x1C021E2F8 (-xxxMigrateWindowHandler@CallShell@@YA_NPEAUtagWND@@W4_SHELL_MIGRATE_WINDOW_REASON@@AEBUtagRECT@.c)
 *     ?SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z @ 0x1C02242FC (-SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z.c)
 *     xxxSnapWindow @ 0x1C02281E8 (xxxSnapWindow.c)
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C022E08C (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 *     xxxScrollWindowEx @ 0x1C022EE20 (xxxScrollWindowEx.c)
 *     ?TryRect@@YAHIHHHHPEAUtagRECT@@PEAUtagPOINT@@PEAUtagMONITOR@@@Z @ 0x1C02321BC (-TryRect@@YAHIHHHHPEAUtagRECT@@PEAUtagPOINT@@PEAUtagMONITOR@@@Z.c)
 *     FindBestPos @ 0x1C02322C4 (FindBestPos.c)
 *     ?RectInClipRegion@MOVESIZEDATA@@QEBA_NAEBUtagRECT@@@Z @ 0x1C023A4A0 (-RectInClipRegion@MOVESIZEDATA@@QEBA_NAEBUtagRECT@@@Z.c)
 *     SubtractRect @ 0x1C024B870 (SubtractRect.c)
 *     TouchTargetingClipContact @ 0x1C024DE58 (TouchTargetingClipContact.c)
 *     TouchTargetingCreateContact @ 0x1C024DF88 (TouchTargetingCreateContact.c)
 *     TouchTargetingRankForRect @ 0x1C024E46C (TouchTargetingRankForRect.c)
 *     TouchTargetingRankForRectDeep @ 0x1C024E9B8 (TouchTargetingRankForRectDeep.c)
 *     DxgkEngBltViaGDI @ 0x1C026F280 (DxgkEngBltViaGDI.c)
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
