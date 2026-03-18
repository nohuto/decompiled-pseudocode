/*
 * XREFs of GetMonitorWorkRect @ 0x1C00C46A8
 * Callers:
 *     _GetWindowPlacement @ 0x1C0006908 (_GetWindowPlacement.c)
 *     ?CheckPlacementBounds@@YAXPEAUtagRECT@@PEAUtagPOINT@@1PEAUtagMONITOR@@@Z @ 0x1C000FEF4 (-CheckPlacementBounds@@YAXPEAUtagRECT@@PEAUtagPOINT@@1PEAUtagMONITOR@@@Z.c)
 *     xxxSystemParametersInfoWorker @ 0x1C0043D70 (xxxSystemParametersInfoWorker.c)
 *     xxxDesktopPaintCallback @ 0x1C00B6FE0 (xxxDesktopPaintCallback.c)
 *     xxxSetWindowPlacement @ 0x1C00C4790 (xxxSetWindowPlacement.c)
 *     ?FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z @ 0x1C01A5DB4 (-FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z.c)
 *     ?IsRectBogus@@YAHHHHH@Z @ 0x1C01A5F38 (-IsRectBogus@@YAHHHHH@Z.c)
 *     ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C01C9F1C (-xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x1C01EEA38 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     xxxSetInternalWindowPos @ 0x1C01F2F6C (xxxSetInternalWindowPos.c)
 *     ?_GetOwnerTransformedMonitorRect@@YAXPEAUtagWND@@PEAUtagMONITOR@@HPEAUtagRECT@@@Z @ 0x1C021F778 (-_GetOwnerTransformedMonitorRect@@YAXPEAUtagWND@@PEAUtagMONITOR@@HPEAUtagRECT@@@Z.c)
 *     ?TryRect@@YAHIHHHHPEAUtagRECT@@PEAUtagPOINT@@PEAUtagMONITOR@@@Z @ 0x1C02321BC (-TryRect@@YAHIHHHHPEAUtagRECT@@PEAUtagPOINT@@PEAUtagMONITOR@@@Z.c)
 *     FindBestPos @ 0x1C02322C4 (FindBestPos.c)
 * Callees:
 *     GetMonitorWorkRectForDpi @ 0x1C00AAE34 (GetMonitorWorkRectForDpi.c)
 *     ?GetCurrentThreadCompositedDpiContext@@YAKXZ @ 0x1C00C4730 (-GetCurrentThreadCompositedDpiContext@@YAKXZ.c)
 */

_OWORD *__fastcall GetMonitorWorkRect(_OWORD *a1, __int64 a2)
{
  unsigned int CurrentThreadCompositedDpiContext; // eax

  CurrentThreadCompositedDpiContext = GetCurrentThreadCompositedDpiContext();
  GetMonitorWorkRectForDpi(a1, a2, (CurrentThreadCompositedDpiContext >> 8) & 0x1FF);
  return a1;
}
