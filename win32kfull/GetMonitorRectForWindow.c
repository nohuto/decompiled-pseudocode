/*
 * XREFs of GetMonitorRectForWindow @ 0x1C00FF4DC
 * Callers:
 *     xxxCheckFullScreen @ 0x1C0033340 (xxxCheckFullScreen.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C004524C (xxxInitSendValidateMinMaxInfoEx.c)
 *     CalcWindowFullScreen @ 0x1C006789C (CalcWindowFullScreen.c)
 *     xxxCreateWindowEx @ 0x1C00AF050 (xxxCreateWindowEx.c)
 *     _anonymous_namespace_::xxxNormalizeRect @ 0x1C00FB938 (_anonymous_namespace_--xxxNormalizeRect.c)
 *     GetPrimaryMonitorRectForWindow @ 0x1C012953C (GetPrimaryMonitorRectForWindow.c)
 *     ?DetectNewMonitor@@YAHPEAUMOVESIZEDATA@@PEAUtagRECT@@@Z @ 0x1C01B9BC8 (-DetectNewMonitor@@YAHPEAUMOVESIZEDATA@@PEAUtagRECT@@@Z.c)
 *     ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C0218110 (-MNGetPopupBoundsRect@@YAXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     xxxMNOpenHierarchy @ 0x1C021B7B0 (xxxMNOpenHierarchy.c)
 *     FindBestPos @ 0x1C0234EF4 (FindBestPos.c)
 *     xxxTrackPopupMenuEx @ 0x1C02353CC (xxxTrackPopupMenuEx.c)
 * Callees:
 *     ?GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z @ 0x1C0044A68 (-GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z.c)
 *     GetMonitorRectForDpi @ 0x1C00A2698 (GetMonitorRectForDpi.c)
 */

__int64 *__fastcall GetMonitorRectForWindow(__int64 *a1, __int64 a2, const struct tagWND *a3)
{
  unsigned int WindowCompositedDpiContext; // eax
  __int64 v5; // r9

  WindowCompositedDpiContext = GetWindowCompositedDpiContext(a3);
  GetMonitorRectForDpi(a1, v5, (WindowCompositedDpiContext >> 8) & 0x1FF);
  return a1;
}
