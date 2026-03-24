/*
 * XREFs of GetMaxTrackSizeForWindow @ 0x1C004241C
 * Callers:
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C0064CA0 (xxxInitSendValidateMinMaxInfoEx.c)
 *     ?ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z @ 0x1C01CF83C (-ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z.c)
 * Callees:
 *     ?ComputeMaxTrackSize@@YA?AUtagSIZE@@UtagRECT@@G@Z @ 0x1C0042484 (-ComputeMaxTrackSize@@YA-AUtagSIZE@@UtagRECT@@G@Z.c)
 *     GetScreenRectForDpiContext @ 0x1C0042514 (GetScreenRectForDpiContext.c)
 *     ?GetWindowCompositedDpi@@YAGPEBUtagWND@@@Z @ 0x1C0042628 (-GetWindowCompositedDpi@@YAGPEBUtagWND@@@Z.c)
 *     ?GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z @ 0x1C007C944 (-GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z.c)
 */

struct tagSIZE __fastcall GetMaxTrackSizeForWindow(__int64 a1)
{
  unsigned __int16 WindowCompositedDpi; // bx
  const struct tagWND *v3; // rcx
  unsigned int WindowCompositedDpiContext; // eax
  struct tagRECT v5; // xmm0
  struct tagRECT v7; // [rsp+20h] [rbp-18h] BYREF

  WindowCompositedDpi = GetWindowCompositedDpi((const struct tagWND *)a1);
  WindowCompositedDpiContext = GetWindowCompositedDpiContext(v3);
  v5 = *(struct tagRECT *)GetScreenRectForDpiContext(&v7, WindowCompositedDpiContext);
  if ( !WindowCompositedDpi )
    WindowCompositedDpi = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) + 284LL);
  v7 = v5;
  return ComputeMaxTrackSize(&v7, WindowCompositedDpi);
}
