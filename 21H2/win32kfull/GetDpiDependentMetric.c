/*
 * XREFs of GetDpiDependentMetric @ 0x1C006718C
 * Callers:
 *     ?_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z @ 0x1C0026768 (-_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z.c)
 *     ?GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z @ 0x1C004CE04 (-GetWindowBordersWithDpiAwareness@@YAHPEBUtagWND@@_N1I@Z.c)
 *     xxxCheckFullScreen @ 0x1C0061F88 (xxxCheckFullScreen.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C0063E00 (xxxInitSendValidateMinMaxInfoEx.c)
 *     SetTiledRect @ 0x1C006458C (SetTiledRect.c)
 *     GetWindowNCMetrics @ 0x1C006492C (GetWindowNCMetrics.c)
 *     CalcSBStuff @ 0x1C0065248 (CalcSBStuff.c)
 *     CalcSBStuff2 @ 0x1C0065364 (CalcSBStuff2.c)
 *     GetWindowNCMetricsForDpi @ 0x1C00654D8 (GetWindowNCMetricsForDpi.c)
 *     xxxCalcClientRect @ 0x1C0066538 (xxxCalcClientRect.c)
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C0066D38 (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     _AdjustWindowRectExForDpi @ 0x1C006DA8C (_AdjustWindowRectExForDpi.c)
 *     xxxSystemParametersInfoWorker @ 0x1C009EBF8 (xxxSystemParametersInfoWorker.c)
 *     xxxCreateWindowSmIcon @ 0x1C00A1774 (xxxCreateWindowSmIcon.c)
 *     xxxCreateClassSmIcon @ 0x1C00A2E38 (xxxCreateClassSmIcon.c)
 *     InternalGetRealClientRect @ 0x1C00B0758 (InternalGetRealClientRect.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C00B967C (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     xxxUpdateSystemIconsFromRegistry @ 0x1C00BA6DC (xxxUpdateSystemIconsFromRegistry.c)
 *     xxxDrawCaptionBar @ 0x1C00BAE5C (xxxDrawCaptionBar.c)
 *     xxxGetMenuBarInfo @ 0x1C00BB868 (xxxGetMenuBarInfo.c)
 *     ?GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z @ 0x1C00BBD38 (-GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z.c)
 *     ?GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z @ 0x1C00BBD80 (-GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z.c)
 *     GetCaptionHeight @ 0x1C00BBE0C (GetCaptionHeight.c)
 *     _DrawIconEx @ 0x1C00BDD48 (_DrawIconEx.c)
 *     xxxMNCompute @ 0x1C00BEB88 (xxxMNCompute.c)
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C00BF15C (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     ?CreateDPIBitmapStrip@@YAHI@Z @ 0x1C00BF48C (-CreateDPIBitmapStrip@@YAHI@Z.c)
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C00C3E78 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     ?UpdateFrameControlMetricsSize@@YAFPEAUOEMBITMAPSET@@I@Z @ 0x1C00C5E6C (-UpdateFrameControlMetricsSize@@YAFPEAUOEMBITMAPSET@@I@Z.c)
 *     _SystemParametersInfoForDpi @ 0x1C00F8C8C (_SystemParametersInfoForDpi.c)
 *     ?ComputeMaxTrackSize@@YA?AUtagSIZE@@UtagRECT@@G@Z @ 0x1C00F9288 (-ComputeMaxTrackSize@@YA-AUtagSIZE@@UtagRECT@@G@Z.c)
 *     FindNCHit @ 0x1C010C5EC (FindNCHit.c)
 *     MNPositionSysMenu @ 0x1C0146938 (MNPositionSysMenu.c)
 *     ?_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z @ 0x1C01505FC (-_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z.c)
 *     ?xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z @ 0x1C0157CE0 (-xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01E4D60 (_ScaleSystemMetricForDPIWithoutCache.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01ED4B8 (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x1C020E1A8 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C022F9FC (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     xxxMNFindWindowFromPoint @ 0x1C0231654 (xxxMNFindWindowFromPoint.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C023D3F4 (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 *     ?CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C02400B0 (-CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C0241180 (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     DrawSize @ 0x1C0241420 (DrawSize.c)
 *     xxxSBWndProc @ 0x1C02420E0 (xxxSBWndProc.c)
 *     xxxCalcCaptionButton @ 0x1C0242FA8 (xxxCalcCaptionButton.c)
 *     xxxMNInvertItem @ 0x1C0248188 (xxxMNInvertItem.c)
 *     xxxRealDrawMenuItem @ 0x1C0248CAC (xxxRealDrawMenuItem.c)
 * Callees:
 *     GetDpiCacheSlot @ 0x1C00671E0 (GetDpiCacheSlot.c)
 *     _EnsureDpiDepSysMetCacheForPlateau @ 0x1C01E4CEC (_EnsureDpiDepSysMetCacheForPlateau.c)
 */

__int64 __fastcall GetDpiDependentMetric(__int64 a1, unsigned int a2)
{
  int DpiCacheSlot; // eax
  unsigned int v3; // r11d
  __int64 v4; // r10
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 result; // rax

  DpiCacheSlot = GetDpiCacheSlot(a2);
  v5 = v4;
  v6 = 30LL * DpiCacheSlot;
  result = *(unsigned int *)(gpsi + 4 * (v6 + v4) + 2284);
  if ( (_DWORD)result == -1 )
  {
    EnsureDpiDepSysMetCacheForPlateau(v3);
    result = *(unsigned int *)(gpsi + 4 * (v5 + v6) + 2284);
    if ( (_DWORD)result == -1 )
      return 0LL;
  }
  return result;
}
