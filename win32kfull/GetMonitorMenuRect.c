/*
 * XREFs of GetMonitorMenuRect @ 0x1C024E934
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C01032D0 (xxxSystemParametersInfoWorker.c)
 *     FindBestPos @ 0x1C0234EF4 (FindBestPos.c)
 * Callees:
 *     ?GetCurrentThreadCompositedDpiContext@@YAKXZ @ 0x1C01017CC (-GetCurrentThreadCompositedDpiContext@@YAKXZ.c)
 *     ?GetMonitorMenuRectForDpi@@YA?AUtagRECT@@PEBUtagMONITOR@@G@Z @ 0x1C024E86C (-GetMonitorMenuRectForDpi@@YA-AUtagRECT@@PEBUtagMONITOR@@G@Z.c)
 */

struct tagRECT *__fastcall GetMonitorMenuRect(struct tagRECT *retstr, struct tagMONITOR *a2)
{
  unsigned int CurrentThreadCompositedDpiContext; // eax

  CurrentThreadCompositedDpiContext = GetCurrentThreadCompositedDpiContext((__int64)retstr);
  GetMonitorMenuRectForDpi(retstr, a2, (CurrentThreadCompositedDpiContext >> 8) & 0x1FF);
  return retstr;
}
