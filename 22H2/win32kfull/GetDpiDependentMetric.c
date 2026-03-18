/*
 * XREFs of GetDpiDependentMetric @ 0x1C00F0DA0
 * Callers:
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C0014A74 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     xxxCreateWindowSmIcon @ 0x1C001FABC (xxxCreateWindowSmIcon.c)
 *     xxxUpdateSystemIconsFromRegistry @ 0x1C001FD1C (xxxUpdateSystemIconsFromRegistry.c)
 *     xxxCreateClassSmIcon @ 0x1C0020AF8 (xxxCreateClassSmIcon.c)
 *     _DrawIconEx @ 0x1C0028030 (_DrawIconEx.c)
 *     ?_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z @ 0x1C002DBDC (-_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z.c)
 *     xxxSystemParametersInfoWorker @ 0x1C0043D70 (xxxSystemParametersInfoWorker.c)
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C0062F3C (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     xxxCheckFullScreen @ 0x1C009687C (xxxCheckFullScreen.c)
 *     _SystemParametersInfoForDpi @ 0x1C00A033C (_SystemParametersInfoForDpi.c)
 *     ?GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z @ 0x1C00A2B74 (-GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z.c)
 *     ?GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z @ 0x1C00AB228 (-GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z.c)
 *     FindNCHit @ 0x1C00AD74C (FindNCHit.c)
 *     xxxDrawCaptionBar @ 0x1C00C689C (xxxDrawCaptionBar.c)
 *     CalcSBStuff @ 0x1C00C7878 (CalcSBStuff.c)
 *     CalcSBStuff2 @ 0x1C00C7CF4 (CalcSBStuff2.c)
 *     GetCaptionHeight @ 0x1C00ECE00 (GetCaptionHeight.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C00ED180 (xxxInitSendValidateMinMaxInfoEx.c)
 *     GetWindowBordersForDpiWithCompatFlags2 @ 0x1C00EDCBC (GetWindowBordersForDpiWithCompatFlags2.c)
 *     ?CalculateContentRect@@YA?AUtagRECT@@PEBUtagWND@@PEAH@Z @ 0x1C00EE150 (-CalculateContentRect@@YA-AUtagRECT@@PEBUtagWND@@PEAH@Z.c)
 *     InternalGetRealClientRect @ 0x1C00EF568 (InternalGetRealClientRect.c)
 *     GetWindowNCMetrics @ 0x1C00F0894 (GetWindowNCMetrics.c)
 *     ?UpdateFrameControlMetricsSize@@YAFPEAUOEMBITMAPSET@@I@Z @ 0x1C00F09D0 (-UpdateFrameControlMetricsSize@@YAFPEAUOEMBITMAPSET@@I@Z.c)
 *     GetWindowNCMetricsForDpi @ 0x1C00F0B8C (GetWindowNCMetricsForDpi.c)
 *     xxxCalcClientRect @ 0x1C010ACC0 (xxxCalcClientRect.c)
 *     ?CreateDPIBitmapStrip@@YAHI@Z @ 0x1C01159A0 (-CreateDPIBitmapStrip@@YAHI@Z.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01BF620 (_ScaleSystemMetricForDPIWithoutCache.c)
 *     ?_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z @ 0x1C01C0C04 (-_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z.c)
 *     ?xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z @ 0x1C01C8170 (-xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01C9060 (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x1C01EEA38 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     MNPositionSysMenu @ 0x1C01FF5E4 (MNPositionSysMenu.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C02160D4 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     xxxMNFindWindowFromPoint @ 0x1C0217C90 (xxxMNFindWindowFromPoint.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C02243DC (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 *     ?CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C0228A60 (-CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C0229B1C (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     DrawSize @ 0x1C0229DC8 (DrawSize.c)
 *     xxxSBWndProc @ 0x1C022AA50 (xxxSBWndProc.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C022B9A4 (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     xxxCalcCaptionButton @ 0x1C022BDD0 (xxxCalcCaptionButton.c)
 *     xxxGetMenuBarInfo @ 0x1C0230D6C (xxxGetMenuBarInfo.c)
 *     xxxMNInvertItem @ 0x1C0235660 (xxxMNInvertItem.c)
 *     xxxRealDrawMenuItem @ 0x1C0236930 (xxxRealDrawMenuItem.c)
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C0237E5C (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     xxxMNCompute @ 0x1C0238860 (xxxMNCompute.c)
 * Callees:
 *     _EnsureDpiDepSysMetCacheForPlateau @ 0x1C01BF5AC (_EnsureDpiDepSysMetCacheForPlateau.c)
 */

__int64 __fastcall GetDpiDependentMetric(int a1, int a2)
{
  int v2; // r8d
  __int64 v3; // rbx
  __int64 result; // rax

  v2 = -1;
  if ( a2 == *(unsigned __int16 *)(gpsi + 6998LL) )
  {
    v2 = 0;
  }
  else if ( a2 >= 96 && a2 == 24 * (a2 / 0x18u) )
  {
    v2 = (a2 - 72) / 24;
    if ( v2 >= 18 )
      v2 = -1;
  }
  v3 = a1 + 30LL * v2;
  result = *(unsigned int *)(gpsi + 4 * v3 + 2284);
  if ( (_DWORD)result == -1 )
  {
    EnsureDpiDepSysMetCacheForPlateau((unsigned int)a2);
    result = *(unsigned int *)(gpsi + 4 * v3 + 2284);
    if ( (_DWORD)result == -1 )
      return 0LL;
  }
  return result;
}
