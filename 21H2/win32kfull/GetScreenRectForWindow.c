/*
 * XREFs of GetScreenRectForWindow @ 0x1C025A608
 * Callers:
 *     xxxCheckFullScreen @ 0x1C0061F88 (xxxCheckFullScreen.c)
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x1C020D6AC (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 *     ?CalcVirtualScreenClipRegion@@YAXPEAUHRGN__@@PEAUtagWND@@@Z @ 0x1C022E878 (-CalcVirtualScreenClipRegion@@YAXPEAUHRGN__@@PEAUtagWND@@@Z.c)
 *     ?IsVSlick@@YAHPEAUtagWND@@@Z @ 0x1C0238984 (-IsVSlick@@YAHPEAUtagWND@@@Z.c)
 * Callees:
 *     ?GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z @ 0x1C0062280 (-GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z.c)
 *     GetScreenRectForDpi @ 0x1C00B06C4 (GetScreenRectForDpi.c)
 */

__m128i *__fastcall GetScreenRectForWindow(__m128i *a1, const struct tagWND *a2)
{
  unsigned int WindowCompositedDpiContext; // eax
  __int64 v4; // r8
  __int64 v5; // r9

  WindowCompositedDpiContext = GetWindowCompositedDpiContext(a2);
  GetScreenRectForDpi(a1, (WindowCompositedDpiContext >> 8) & 0x1FF, v4, v5);
  return a1;
}
