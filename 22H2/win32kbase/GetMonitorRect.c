/*
 * XREFs of GetMonitorRect @ 0x1C005BE7C
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x1C00595A0 (xxxEnumDisplayMonitors.c)
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C0059C2C (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     GetMonitorDC @ 0x1C005B3E8 (GetMonitorDC.c)
 *     ?AdjustDisplayMonitor@@YAPEAUtagMONITOR@@PEAU1@PEAUtagRECT@@@Z @ 0x1C00BC138 (-AdjustDisplayMonitor@@YAPEAUtagMONITOR@@PEAU1@PEAUtagRECT@@@Z.c)
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00462A0 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C004D320 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetMonitorRectForDpi @ 0x1C005A3D8 (GetMonitorRectForDpi.c)
 */

__m128i *__fastcall GetMonitorRect(__m128i *a1, __int64 a2)
{
  unsigned int CurrentThreadDpiAwarenessContext; // ebx

  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  if ( (CurrentThreadDpiAwarenessContext & 0xF) != 2
    && (!*((_QWORD *)PtiCurrentShared() + 57)
     || (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrentShared() + 57) + 8LL) + 64LL) & 1) == 0) )
  {
    CurrentThreadDpiAwarenessContext = 18;
  }
  GetMonitorRectForDpi(a1, a2, (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF);
  return a1;
}
