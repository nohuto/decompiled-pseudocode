/*
 * XREFs of GetDpiDependentMetric @ 0x1C0061430
 * Callers:
 *     xxxCreateClassSmIcon @ 0x1C0023628 (xxxCreateClassSmIcon.c)
 *     xxxCreateWindowSmIcon @ 0x1C00250E0 (xxxCreateWindowSmIcon.c)
 *     xxxUpdateSystemIconsFromRegistry @ 0x1C0025790 (xxxUpdateSystemIconsFromRegistry.c)
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C003E8DC (xxxDeferWindowPosAndCheckPoint.c)
 *     ?ComputeMaxTrackSize@@YA?AUtagSIZE@@UtagRECT@@G@Z @ 0x1C0042484 (-ComputeMaxTrackSize@@YA-AUtagSIZE@@UtagRECT@@G@Z.c)
 *     _DrawIconEx @ 0x1C0043EF4 (_DrawIconEx.c)
 *     ?CreateDPIBitmapStrip@@YAHI@Z @ 0x1C0045924 (-CreateDPIBitmapStrip@@YAHI@Z.c)
 *     GetCaptionHeight @ 0x1C0047254 (GetCaptionHeight.c)
 *     xxxMNCompute @ 0x1C0047BA4 (xxxMNCompute.c)
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C0048148 (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     xxxCalcClientRect @ 0x1C004A800 (xxxCalcClientRect.c)
 *     GetWindowBordersWithDpiAwareness @ 0x1C004AE0C (GetWindowBordersWithDpiAwareness.c)
 *     ?GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z @ 0x1C004B9B8 (-GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z.c)
 *     _AdjustWindowRectExForDpi @ 0x1C004E6DC (_AdjustWindowRectExForDpi.c)
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C0060FB4 (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     CalcSBStuff2 @ 0x1C0063AB4 (CalcSBStuff2.c)
 *     CalcSBStuff @ 0x1C0063D00 (CalcSBStuff.c)
 *     GetWindowNCMetricsForDpi @ 0x1C00640E0 (GetWindowNCMetricsForDpi.c)
 *     SetTiledRect @ 0x1C0064334 (SetTiledRect.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C0064CA0 (xxxInitSendValidateMinMaxInfoEx.c)
 *     ?_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z @ 0x1C0065454 (-_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z.c)
 *     xxxCheckFullScreen @ 0x1C007C55C (xxxCheckFullScreen.c)
 *     xxxGetMenuBarInfo @ 0x1C008AA48 (xxxGetMenuBarInfo.c)
 *     xxxDrawCaptionBar @ 0x1C00DCAB8 (xxxDrawCaptionBar.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00DCFE8 (xxxSystemParametersInfoWorker.c)
 *     GetWindowNCMetrics @ 0x1C00E0960 (GetWindowNCMetrics.c)
 *     ?GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z @ 0x1C00E0F70 (-GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z.c)
 *     ?UpdateFrameControlMetricsSize@@YAFPEAUOEMBITMAPSET@@I@Z @ 0x1C010741C (-UpdateFrameControlMetricsSize@@YAFPEAUOEMBITMAPSET@@I@Z.c)
 *     _SystemParametersInfoForDpi @ 0x1C010F5AC (_SystemParametersInfoForDpi.c)
 *     InternalGetRealClientRect @ 0x1C0111200 (InternalGetRealClientRect.c)
 *     FindNCHit @ 0x1C0122188 (FindNCHit.c)
 *     MNPositionSysMenu @ 0x1C0155548 (MNPositionSysMenu.c)
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C0157A04 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     ?xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z @ 0x1C01D6CF4 (-xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01EA020 (_ScaleSystemMetricForDPIWithoutCache.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01F2678 (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     ?xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATES@@W4_WINDOW_ARRANGEMENT_SCENARIO@@PEAU_MOVESIZEDATA@@PEAJ@Z @ 0x1C020E724 (-xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATE.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C020E968 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0235D70 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     xxxMNFindWindowFromPoint @ 0x1C0238110 (xxxMNFindWindowFromPoint.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C023E3AC (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 *     ?CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C0243B98 (-CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C0244C54 (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     DrawSize @ 0x1C0244F00 (DrawSize.c)
 *     xxxSBWndProc @ 0x1C0245BA0 (xxxSBWndProc.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C0246EAC (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     xxxCalcCaptionButton @ 0x1C0247188 (xxxCalcCaptionButton.c)
 *     xxxMNInvertItem @ 0x1C024C7C0 (xxxMNInvertItem.c)
 *     xxxRealDrawMenuItem @ 0x1C024D2E4 (xxxRealDrawMenuItem.c)
 * Callees:
 *     GetDpiCacheSlot @ 0x1C006148C (GetDpiCacheSlot.c)
 *     _EnsureDpiDepSysMetCacheForPlateau @ 0x1C01E9FA0 (_EnsureDpiDepSysMetCacheForPlateau.c)
 */

__int64 __fastcall GetDpiDependentMetric(__int64 a1, unsigned int a2)
{
  int DpiCacheSlot; // eax
  __int64 v4; // r11
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 result; // rax

  DpiCacheSlot = GetDpiCacheSlot(a2);
  v5 = v4;
  v6 = 30LL * DpiCacheSlot;
  result = *(unsigned int *)(gpsi + 4 * (v6 + v4) + 2284);
  if ( (_DWORD)result == -1 )
  {
    EnsureDpiDepSysMetCacheForPlateau(a2);
    result = *(unsigned int *)(gpsi + 4 * (v5 + v6) + 2284);
    if ( (_DWORD)result == -1 )
      return 0LL;
  }
  return result;
}
