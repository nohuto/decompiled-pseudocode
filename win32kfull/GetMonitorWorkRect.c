/*
 * XREFs of GetMonitorWorkRect @ 0x1C0101744
 * Callers:
 *     _GetWindowPlacement @ 0x1C0006898 (_GetWindowPlacement.c)
 *     ?CheckPlacementBounds@@YAXPEAUtagRECT@@PEAUtagPOINT@@1PEAUtagMONITOR@@@Z @ 0x1C000F544 (-CheckPlacementBounds@@YAXPEAUtagRECT@@PEAUtagPOINT@@1PEAUtagMONITOR@@@Z.c)
 *     xxxDesktopPaintCallback @ 0x1C00EF1F0 (xxxDesktopPaintCallback.c)
 *     xxxSetWindowPlacement @ 0x1C00FF7C8 (xxxSetWindowPlacement.c)
 *     xxxSystemParametersInfoWorker @ 0x1C01032D0 (xxxSystemParametersInfoWorker.c)
 *     ?FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z @ 0x1C01A6F6C (-FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z.c)
 *     ?IsRectBogus@@YAHHHHH@Z @ 0x1C01A70F0 (-IsRectBogus@@YAHHHHH@Z.c)
 *     ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C01CB01C (-xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x1C01EFBFC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     xxxSetInternalWindowPos @ 0x1C01F416C (xxxSetInternalWindowPos.c)
 *     ?_GetOwnerTransformedMonitorRect@@YAXPEAUtagWND@@PEAUtagMONITOR@@HPEAUtagRECT@@@Z @ 0x1C0222480 (-_GetOwnerTransformedMonitorRect@@YAXPEAUtagWND@@PEAUtagMONITOR@@HPEAUtagRECT@@@Z.c)
 *     ?TryRect@@YAHIHHHHPEAUtagRECT@@PEAUtagPOINT@@PEAUtagMONITOR@@@Z @ 0x1C0234DEC (-TryRect@@YAHIHHHHPEAUtagRECT@@PEAUtagPOINT@@PEAUtagMONITOR@@@Z.c)
 *     FindBestPos @ 0x1C0234EF4 (FindBestPos.c)
 * Callees:
 *     GetMonitorWorkRectForDpi @ 0x1C00E1F04 (GetMonitorWorkRectForDpi.c)
 *     ?GetCurrentThreadCompositedDpiContext@@YAKXZ @ 0x1C01017CC (-GetCurrentThreadCompositedDpiContext@@YAKXZ.c)
 */

__m128i *__fastcall GetMonitorWorkRect(__m128i *a1, __int64 a2)
{
  unsigned int CurrentThreadCompositedDpiContext; // eax

  CurrentThreadCompositedDpiContext = GetCurrentThreadCompositedDpiContext();
  GetMonitorWorkRectForDpi(a1, a2, (CurrentThreadCompositedDpiContext >> 8) & 0x1FF);
  return a1;
}
