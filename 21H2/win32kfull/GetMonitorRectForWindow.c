/*
 * XREFs of GetMonitorRectForWindow @ 0x1C0063604
 * Callers:
 *     xxxCheckFullScreen @ 0x1C0061F88 (xxxCheckFullScreen.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C0063E00 (xxxInitSendValidateMinMaxInfoEx.c)
 *     CalcWindowFullScreen @ 0x1C006C0E8 (CalcWindowFullScreen.c)
 *     GetPrimaryMonitorRectForWindow @ 0x1C00AD384 (GetPrimaryMonitorRectForWindow.c)
 *     _anonymous_namespace_::GetPreviousMonitorInfo @ 0x1C00B02C8 (_anonymous_namespace_--GetPreviousMonitorInfo.c)
 *     _anonymous_namespace_::xxxNormalizeRect @ 0x1C00B2264 (_anonymous_namespace_--xxxNormalizeRect.c)
 *     ?GetMonitorMaxArea@@YA?AUtagRECT@@PEBUtagWND@@PEAUtagMONITOR@@@Z @ 0x1C010435C (-GetMonitorMaxArea@@YA-AUtagRECT@@PEBUtagWND@@PEAUtagMONITOR@@@Z.c)
 *     ?DetectNewMonitor@@YAHPEAUMOVESIZEDATA@@PEAUtagRECT@@@Z @ 0x1C01DE8CC (-DetectNewMonitor@@YAHPEAUMOVESIZEDATA@@PEAUtagRECT@@@Z.c)
 *     ?ComputeSourceRectAndMonitorWithPrecision@@YAXQEBUMOVESIZEDATA@@PEAUtagPOINT@@PEAPEAUtagMONITOR@@PEAUtagRECT@@@Z @ 0x1C02098AC (-ComputeSourceRectAndMonitorWithPrecision@@YAXQEBUMOVESIZEDATA@@PEAUtagPOINT@@PEAPEAUtagMONITOR@.c)
 *     ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C022EE24 (-MNGetPopupBoundsRect@@YAXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     xxxMNOpenHierarchy @ 0x1C02325D0 (xxxMNOpenHierarchy.c)
 *     FindBestPos @ 0x1C0245C74 (FindBestPos.c)
 *     xxxTrackPopupMenuEx @ 0x1C024614C (xxxTrackPopupMenuEx.c)
 *     ?xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z @ 0x1C024BDB4 (-xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     ?GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z @ 0x1C0062280 (-GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z.c)
 *     GetMonitorRectForDpi @ 0x1C00B0924 (GetMonitorRectForDpi.c)
 */

__int64 __fastcall GetMonitorRectForWindow(__int64 a1, __int64 a2, const struct tagWND *a3)
{
  unsigned int WindowCompositedDpiContext; // eax
  __int64 v5; // r9

  WindowCompositedDpiContext = GetWindowCompositedDpiContext(a3);
  GetMonitorRectForDpi(a1, v5, (WindowCompositedDpiContext >> 8) & 0x1FF);
  return a1;
}
