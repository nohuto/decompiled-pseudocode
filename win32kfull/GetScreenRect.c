/*
 * XREFs of GetScreenRect @ 0x1C00E4C8C
 * Callers:
 *     _GetPointerDeviceRects @ 0x1C00E4B94 (_GetPointerDeviceRects.c)
 *     ?MiPConvertPoint@@YA?AUtagPOINT@@PEBU1@@Z @ 0x1C0143940 (-MiPConvertPoint@@YA-AUtagPOINT@@PEBU1@@Z.c)
 *     VirtualizeMultiMonDigitizerSize @ 0x1C0145242 (VirtualizeMultiMonDigitizerSize.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C01AC80C (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     _GetMouseMovePointsEx @ 0x1C01ADAFC (_GetMouseMovePointsEx.c)
 *     xxxInjectTouchInput @ 0x1C01B19B4 (xxxInjectTouchInput.c)
 *     RemapHimetricPointsForMultiMonDigitizers @ 0x1C01BAF78 (RemapHimetricPointsForMultiMonDigitizers.c)
 *     NtUserGetHimetricScaleFactorFromPixelLocation @ 0x1C01D2900 (NtUserGetHimetricScaleFactorFromPixelLocation.c)
 *     ?SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z @ 0x1C022700C (-SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z.c)
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GetScreenRectForDpi @ 0x1C00A2874 (GetScreenRectForDpi.c)
 */

__m128i *__fastcall GetScreenRect(__m128i *a1)
{
  __int64 v2; // rcx
  unsigned __int16 v3; // bx
  __int64 v5; // rcx

  v3 = ((unsigned int)W32GetCurrentThreadDpiAwarenessContext(a1) >> 8) & 0x1FF;
  if ( v3
    && (!*((_QWORD *)PtiCurrentShared(v2) + 57)
     || (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrentShared(v5) + 57) + 8LL) + 64LL) & 1) == 0) )
  {
    v3 = 0;
  }
  GetScreenRectForDpi(a1, v3);
  return a1;
}
