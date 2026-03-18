/*
 * XREFs of GetScreenRect @ 0x1C0110C1C
 * Callers:
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C00F575C (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     _GetPointerDeviceRects @ 0x1C0110B24 (_GetPointerDeviceRects.c)
 *     _GetMouseMovePointsEx @ 0x1C01D45BC (_GetMouseMovePointsEx.c)
 *     xxxInjectTouchInput @ 0x1C01D73EC (xxxInjectTouchInput.c)
 *     ?MiPConvertPoint@@YA?AUtagPOINT@@PEBU1@@Z @ 0x1C01DBC98 (-MiPConvertPoint@@YA-AUtagPOINT@@PEBU1@@Z.c)
 *     RemapHimetricPointsForMultiMonDigitizers @ 0x1C01DFB4C (RemapHimetricPointsForMultiMonDigitizers.c)
 *     VirtualizeMultiMonDigitizerSize @ 0x1C01E01B4 (VirtualizeMultiMonDigitizerSize.c)
 *     NtUserGetHimetricScaleFactorFromPixelLocation @ 0x1C01F4690 (NtUserGetHimetricScaleFactorFromPixelLocation.c)
 *     ?SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z @ 0x1C023D314 (-SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     GetScreenRectForDpi @ 0x1C00B06C4 (GetScreenRectForDpi.c)
 */

__m128i *__fastcall GetScreenRect(__m128i *a1, __int64 a2)
{
  unsigned __int16 v3; // bx
  __int64 v4; // r8
  __int64 v5; // r9

  v3 = ((unsigned int)W32GetCurrentThreadDpiAwarenessContext(a1, a2) >> 8) & 0x1FF;
  if ( v3
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456)
     || (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) + 8LL)
                   + 64LL) & 1) == 0) )
  {
    v3 = 0;
  }
  GetScreenRectForDpi(a1, v3, v4, v5);
  return a1;
}
