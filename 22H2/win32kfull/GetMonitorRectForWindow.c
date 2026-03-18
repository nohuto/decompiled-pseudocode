/*
 * XREFs of GetMonitorRectForWindow @ 0x1C00CF9A8
 * Callers:
 *     xxxCheckFullScreen @ 0x1C009687C (xxxCheckFullScreen.c)
 *     _anonymous_namespace_::xxxNormalizeRect @ 0x1C00C190C (_anonymous_namespace_--xxxNormalizeRect.c)
 *     CalcWindowFullScreen @ 0x1C00CF81C (CalcWindowFullScreen.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C00ED180 (xxxInitSendValidateMinMaxInfoEx.c)
 *     GetPrimaryMonitorRectForWindow @ 0x1C0135648 (GetPrimaryMonitorRectForWindow.c)
 *     ?DetectNewMonitor@@YAHPEAUMOVESIZEDATA@@PEAUtagRECT@@@Z @ 0x1C01B8A28 (-DetectNewMonitor@@YAHPEAUMOVESIZEDATA@@PEAUtagRECT@@@Z.c)
 *     ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C0215550 (-MNGetPopupBoundsRect@@YAXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     xxxMNOpenHierarchy @ 0x1C0218BF0 (xxxMNOpenHierarchy.c)
 *     FindBestPos @ 0x1C02322C4 (FindBestPos.c)
 *     xxxTrackPopupMenuEx @ 0x1C023279C (xxxTrackPopupMenuEx.c)
 * Callees:
 *     GetMonitorRectForDpi @ 0x1C00CFCCC (GetMonitorRectForDpi.c)
 *     ?GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z @ 0x1C00EDC80 (-GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z.c)
 */

__int64 __fastcall GetMonitorRectForWindow(__int64 a1, __int64 a2, const struct tagWND *a3)
{
  unsigned int WindowCompositedDpiContext; // eax
  __int64 v5; // r9

  WindowCompositedDpiContext = GetWindowCompositedDpiContext(a3);
  GetMonitorRectForDpi(a1, v5, (WindowCompositedDpiContext >> 8) & 0x1FF);
  return a1;
}
