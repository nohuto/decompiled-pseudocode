/*
 * XREFs of GetMonitorRect @ 0x1C0101788
 * Callers:
 *     _GetWindowPlacement @ 0x1C0006898 (_GetWindowPlacement.c)
 *     xxxCreateWindowEx @ 0x1C00AF050 (xxxCreateWindowEx.c)
 *     xxxSetWindowPlacement @ 0x1C00FF7C8 (xxxSetWindowPlacement.c)
 *     GetPrimaryMonitorRect @ 0x1C0101710 (GetPrimaryMonitorRect.c)
 *     xxxSystemParametersInfoWorker @ 0x1C01032D0 (xxxSystemParametersInfoWorker.c)
 *     ?FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z @ 0x1C01A6F6C (-FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z.c)
 *     ?IsRectBogus@@YAHHHHH@Z @ 0x1C01A70F0 (-IsRectBogus@@YAHHHHH@Z.c)
 *     ?PreventInterMonitorBlts@@YAXPEAUtagCVR@@@Z @ 0x1C01A71B0 (-PreventInterMonitorBlts@@YAXPEAUtagCVR@@@Z.c)
 *     GetHimetricScaleForMonitor @ 0x1C01BAE08 (GetHimetricScaleForMonitor.c)
 *     RemapHimetricPointsForMultiMonDigitizers @ 0x1C01BAF78 (RemapHimetricPointsForMultiMonDigitizers.c)
 *     UserGetHipDeviceInfo @ 0x1C01C4660 (UserGetHipDeviceInfo.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01CA160 (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x1C01EFBFC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     xxxSetInternalWindowPos @ 0x1C01F416C (xxxSetInternalWindowPos.c)
 *     ?_GetOwnerTransformedMonitorRect@@YAXPEAUtagWND@@PEAUtagMONITOR@@HPEAUtagRECT@@@Z @ 0x1C0222480 (-_GetOwnerTransformedMonitorRect@@YAXPEAUtagWND@@PEAUtagMONITOR@@HPEAUtagRECT@@@Z.c)
 *     ?xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z @ 0x1C02288F0 (-xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z.c)
 *     FindBestPos @ 0x1C0234EF4 (FindBestPos.c)
 * Callees:
 *     GetMonitorRectForDpi @ 0x1C00A2698 (GetMonitorRectForDpi.c)
 *     ?GetCurrentThreadCompositedDpiContext@@YAKXZ @ 0x1C01017CC (-GetCurrentThreadCompositedDpiContext@@YAKXZ.c)
 */

__int64 *__fastcall GetMonitorRect(__int64 *a1, __int64 a2)
{
  unsigned int CurrentThreadCompositedDpiContext; // eax

  CurrentThreadCompositedDpiContext = GetCurrentThreadCompositedDpiContext();
  GetMonitorRectForDpi(a1, a2, (CurrentThreadCompositedDpiContext >> 8) & 0x1FF);
  return a1;
}
