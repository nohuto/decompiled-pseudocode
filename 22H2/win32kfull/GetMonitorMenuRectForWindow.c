/*
 * XREFs of GetMonitorMenuRectForWindow @ 0x1C024BCB8
 * Callers:
 *     ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C0215550 (-MNGetPopupBoundsRect@@YAXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     FindBestPos @ 0x1C02322C4 (FindBestPos.c)
 *     xxxTrackPopupMenuEx @ 0x1C023279C (xxxTrackPopupMenuEx.c)
 * Callees:
 *     ?GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z @ 0x1C00EDC80 (-GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z.c)
 *     ?GetMonitorMenuRectForDpi@@YA?AUtagRECT@@PEBUtagMONITOR@@G@Z @ 0x1C024BBAC (-GetMonitorMenuRectForDpi@@YA-AUtagRECT@@PEBUtagMONITOR@@G@Z.c)
 */

struct tagRECT *__fastcall GetMonitorMenuRectForWindow(struct tagRECT *retstr, __int64 a2, const struct tagWND *a3)
{
  unsigned int WindowCompositedDpiContext; // eax
  const struct tagMONITOR *v5; // r9

  WindowCompositedDpiContext = GetWindowCompositedDpiContext(a3);
  GetMonitorMenuRectForDpi(retstr, v5, (WindowCompositedDpiContext >> 8) & 0x1FF);
  return retstr;
}
