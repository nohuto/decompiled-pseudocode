/*
 * XREFs of GetMonitorRect @ 0x1C00C46EC
 * Callers:
 *     _GetWindowPlacement @ 0x1C0006908 (_GetWindowPlacement.c)
 *     xxxCreateWindowEx @ 0x1C0035320 (xxxCreateWindowEx.c)
 *     xxxSystemParametersInfoWorker @ 0x1C0043D70 (xxxSystemParametersInfoWorker.c)
 *     GetPrimaryMonitorRect @ 0x1C00C4674 (GetPrimaryMonitorRect.c)
 *     xxxSetWindowPlacement @ 0x1C00C4790 (xxxSetWindowPlacement.c)
 *     ?FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z @ 0x1C01A5DB4 (-FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z.c)
 *     ?IsRectBogus@@YAHHHHH@Z @ 0x1C01A5F38 (-IsRectBogus@@YAHHHHH@Z.c)
 *     ?PreventInterMonitorBlts@@YAXPEAUtagCVR@@@Z @ 0x1C01A5FF8 (-PreventInterMonitorBlts@@YAXPEAUtagCVR@@@Z.c)
 *     GetHimetricScaleForMonitor @ 0x1C01B9C68 (GetHimetricScaleForMonitor.c)
 *     RemapHimetricPointsForMultiMonDigitizers @ 0x1C01B9DD8 (RemapHimetricPointsForMultiMonDigitizers.c)
 *     UserGetHipDeviceInfo @ 0x1C01C3500 (UserGetHipDeviceInfo.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01C9060 (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x1C01EEA38 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     xxxSetInternalWindowPos @ 0x1C01F2F6C (xxxSetInternalWindowPos.c)
 *     ?_GetOwnerTransformedMonitorRect@@YAXPEAUtagWND@@PEAUtagMONITOR@@HPEAUtagRECT@@@Z @ 0x1C021F778 (-_GetOwnerTransformedMonitorRect@@YAXPEAUtagWND@@PEAUtagMONITOR@@HPEAUtagRECT@@@Z.c)
 *     ?xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z @ 0x1C0225BF8 (-xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z.c)
 *     FindBestPos @ 0x1C02322C4 (FindBestPos.c)
 * Callees:
 *     ?GetCurrentThreadCompositedDpiContext@@YAKXZ @ 0x1C00C4730 (-GetCurrentThreadCompositedDpiContext@@YAKXZ.c)
 *     GetMonitorRectForDpi @ 0x1C00CFCCC (GetMonitorRectForDpi.c)
 */

__int64 __fastcall GetMonitorRect(__int64 a1, __int64 a2)
{
  unsigned int CurrentThreadCompositedDpiContext; // eax

  CurrentThreadCompositedDpiContext = GetCurrentThreadCompositedDpiContext();
  GetMonitorRectForDpi(a1, a2, (CurrentThreadCompositedDpiContext >> 8) & 0x1FF);
  return a1;
}
