/*
 * XREFs of GetCurrentThreadCompositedDpi @ 0x1C005C500
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x1C00595A0 (xxxEnumDisplayMonitors.c)
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C0059C2C (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     GetMonitorDC @ 0x1C005B3E8 (GetMonitorDC.c)
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00462A0 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C004D320 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

__int64 GetCurrentThreadCompositedDpi()
{
  unsigned __int16 v0; // bx

  v0 = ((unsigned int)W32GetCurrentThreadDpiAwarenessContext() >> 8) & 0x1FF;
  if ( v0
    && (!*((_QWORD *)PtiCurrentShared() + 57)
     || (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrentShared() + 57) + 8LL) + 64LL) & 1) == 0) )
  {
    return 0;
  }
  return v0;
}
