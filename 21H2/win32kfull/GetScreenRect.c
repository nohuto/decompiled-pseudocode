/*
 * XREFs of GetScreenRect @ 0x1C0122CA4
 * Callers:
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C01034BC (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     _GetPointerDeviceRects @ 0x1C0122BAC (_GetPointerDeviceRects.c)
 *     _GetMouseMovePointsEx @ 0x1C01D9ECC (_GetMouseMovePointsEx.c)
 *     xxxInjectTouchInput @ 0x1C01DCDAC (xxxInjectTouchInput.c)
 *     ?MiPConvertPoint@@YA?AUtagPOINT@@PEBU1@@Z @ 0x1C01E0A58 (-MiPConvertPoint@@YA-AUtagPOINT@@PEBU1@@Z.c)
 *     RemapHimetricPointsForMultiMonDigitizers @ 0x1C01E5BEC (RemapHimetricPointsForMultiMonDigitizers.c)
 *     VirtualizeMultiMonDigitizerSize @ 0x1C01E6264 (VirtualizeMultiMonDigitizerSize.c)
 *     NtUserGetHimetricScaleFactorFromPixelLocation @ 0x1C01F9CA0 (NtUserGetHimetricScaleFactorFromPixelLocation.c)
 *     ?SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z @ 0x1C023E88C (-SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z.c)
 * Callees:
 *     GetScreenRectForDpi @ 0x1C0042630 (GetScreenRectForDpi.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C005BA00 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 */

__m128i *__fastcall GetScreenRect(__m128i *a1)
{
  unsigned __int16 v2; // bx
  __m128i v3; // xmm0
  __m128i *result; // rax
  __m128i v5; // [rsp+20h] [rbp-18h] BYREF

  v2 = ((unsigned int)W32GetCurrentThreadDpiAwarenessContext((__int64)a1) >> 8) & 0x1FF;
  if ( v2
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456)
     || (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) + 8LL)
                   + 64LL) & 1) == 0) )
  {
    v2 = 0;
  }
  v3 = *GetScreenRectForDpi(&v5, v2);
  result = a1;
  *a1 = v3;
  return result;
}
