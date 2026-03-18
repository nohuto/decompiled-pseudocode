/*
 * XREFs of IntersectRect @ 0x1C004CD28
 * Callers:
 *     ?SmartRectInRegion@@YAIPEAUHRGN__@@PEAUtagRECT@@@Z @ 0x1C00494A4 (-SmartRectInRegion@@YAIPEAUHRGN__@@PEAUtagRECT@@@Z.c)
 *     xxxInternalInvalidate @ 0x1C004A420 (xxxInternalInvalidate.c)
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C004B1E8 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     UT_GetParentDCClipBox @ 0x1C005F9E0 (UT_GetParentDCClipBox.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006E60C (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     GetInheritedMonitor @ 0x1C006F4F4 (GetInheritedMonitor.c)
 *     _MonitorFromRect @ 0x1C007B570 (_MonitorFromRect.c)
 *     ?IsCandidateTransformOwner@@YAHPEAUtagWND@@0@Z @ 0x1C007D1E4 (-IsCandidateTransformOwner@@YAHPEAUtagWND@@0@Z.c)
 *     OffsetChildren @ 0x1C00848F0 (OffsetChildren.c)
 *     xxxSystemParametersInfoWorker @ 0x1C009EBF8 (xxxSystemParametersInfoWorker.c)
 *     _anonymous_namespace_::FindPreviousMonitorIndex @ 0x1C00B0460 (_anonymous_namespace_--FindPreviousMonitorIndex.c)
 *     xxxScrollWindowEx @ 0x1C00BFE8C (xxxScrollWindowEx.c)
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C00C09C8 (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 *     SubtractRect @ 0x1C00C1550 (SubtractRect.c)
 *     CreateSpb @ 0x1C00C92A0 (CreateSpb.c)
 *     ParkIcon @ 0x1C00CBAB0 (ParkIcon.c)
 *     SpbCheckDce @ 0x1C00DC6F0 (SpbCheckDce.c)
 *     ?FBitsTouch@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagSPB@@K@Z @ 0x1C00DC928 (-FBitsTouch@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagSPB@@K@Z.c)
 *     xxxGetUpdateRect @ 0x1C01071D4 (xxxGetUpdateRect.c)
 *     ?xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0151FD0 (-xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1C015B0AC (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 *     ?xxxGetWorkAreasFromShell@@YA_NXZ @ 0x1C015B57C (-xxxGetWorkAreasFromShell@@YA_NXZ.c)
 *     ?FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z @ 0x1C01CC428 (-FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z.c)
 *     ?PreventInterMonitorBlts@@YAXPEAUtagCVR@@@Z @ 0x1C01CC668 (-PreventInterMonitorBlts@@YAXPEAUtagCVR@@@Z.c)
 *     ?IsNewMonitorRectMostOccupied@@YAHPEBUtagRECT@@00@Z @ 0x1C01DEE00 (-IsNewMonitorRectMostOccupied@@YAHPEBUtagRECT@@00@Z.c)
 *     xxxPrintWindow @ 0x1C01E297C (xxxPrintWindow.c)
 *     NtUserSetWindowShowState @ 0x1C01FE820 (NtUserSetWindowShowState.c)
 *     ?TTBetterTarget@@YAHPEAUtagWND@@IPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagRECT@@K@Z @ 0x1C0204A84 (-TTBetterTarget@@YAHPEAUtagWND@@IPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagRECT@@K@Z.c)
 *     ?_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@HU4@K@Z @ 0x1C02052C8 (-_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C0205E2C (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHU.c)
 *     ?MoveRect@@YAHPEAUMOVESIZEDATA@@KW4MOVERECT_STYLE@@@Z @ 0x1C020AB64 (-MoveRect@@YAHPEAUMOVESIZEDATA@@KW4MOVERECT_STYLE@@@Z.c)
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x1C020C464 (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 *     ?xxxGetArrangeRectFromShell@@YA_NPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@@Z @ 0x1C020CF7C (-xxxGetArrangeRectFromShell@@YA_NPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@.c)
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x1C020D6AC (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 *     ?PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z @ 0x1C022EA2C (-PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z.c)
 *     xxxMNOpenHierarchy @ 0x1C02325D0 (xxxMNOpenHierarchy.c)
 *     ?xxxMigrateWindowHandler@CallShell@@YA_NPEAUtagWND@@W4_SHELL_MIGRATE_WINDOW_REASON@@AEBUtagRECT@@2GU4@PEAUtagMONITOR@@PEAU4@PEAW4State@AdvancedWindowPos@@PEAK@Z @ 0x1C02371B0 (-xxxMigrateWindowHandler@CallShell@@YA_NPEAUtagWND@@W4_SHELL_MIGRATE_WINDOW_REASON@@AEBUtagRECT@.c)
 *     ?SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z @ 0x1C023D314 (-SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z.c)
 *     xxxSnapWindow @ 0x1C023F848 (xxxSnapWindow.c)
 *     ?TryRect@@YAHIHHHHPEAUtagRECT@@PEAUtagPOINT@@PEAUtagMONITOR@@@Z @ 0x1C0245B78 (-TryRect@@YAHIHHHHPEAUtagRECT@@PEAUtagPOINT@@PEAUtagMONITOR@@@Z.c)
 *     FindBestPos @ 0x1C0245C74 (FindBestPos.c)
 *     TouchTargetingClipContact @ 0x1C025C3FC (TouchTargetingClipContact.c)
 *     TouchTargetingCreateContact @ 0x1C025C52C (TouchTargetingCreateContact.c)
 *     TouchTargetingRankForRect @ 0x1C025CA20 (TouchTargetingRankForRect.c)
 *     TouchTargetingRankForRectDeep @ 0x1C025CF50 (TouchTargetingRankForRectDeep.c)
 *     DxgkEngBltViaGDI @ 0x1C02745B0 (DxgkEngBltViaGDI.c)
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
