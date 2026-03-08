/*
 * XREFs of GetScreenRectForWindow @ 0x1C014AD54
 * Callers:
 *     xxxCheckFullScreen @ 0x1C0033340 (xxxCheckFullScreen.c)
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x1C01EEA1C (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 *     ?CalcVirtualScreenClipRegion@@YAXPEAUHRGN__@@PEAUtagWND@@@Z @ 0x1C0217AF4 (-CalcVirtualScreenClipRegion@@YAXPEAUHRGN__@@PEAUtagWND@@@Z.c)
 *     ?IsVSlick@@YAHPEAUtagWND@@@Z @ 0x1C0222BCC (-IsVSlick@@YAHPEAUtagWND@@@Z.c)
 * Callees:
 *     ?GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z @ 0x1C0044A68 (-GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z.c)
 *     GetScreenRectForDpi @ 0x1C00A2874 (GetScreenRectForDpi.c)
 */

__m128i *__fastcall GetScreenRectForWindow(__m128i *a1, const struct tagWND *a2)
{
  unsigned int WindowCompositedDpiContext; // eax

  WindowCompositedDpiContext = GetWindowCompositedDpiContext(a2);
  GetScreenRectForDpi(a1, (WindowCompositedDpiContext >> 8) & 0x1FF);
  return a1;
}
