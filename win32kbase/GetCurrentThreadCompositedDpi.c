/*
 * XREFs of GetCurrentThreadCompositedDpi @ 0x1C003B5D4
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x1C003AE40 (xxxEnumDisplayMonitors.c)
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C003B638 (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     GetMonitorDC @ 0x1C003D41C (GetMonitorDC.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0041AF0 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C004FE50 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall GetCurrentThreadCompositedDpi(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int16 v3; // bx

  v3 = ((unsigned int)W32GetCurrentThreadDpiAwarenessContext(a1, a2, a3) >> 8) & 0x1FF;
  if ( v3
    && (!*((_QWORD *)PtiCurrentShared() + 57)
     || (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrentShared() + 57) + 8LL) + 64LL) & 1) == 0) )
  {
    return 0;
  }
  return v3;
}
