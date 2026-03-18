/*
 * XREFs of GetScreenRectForWindow @ 0x1C0157A74
 * Callers:
 *     xxxCheckFullScreen @ 0x1C009687C (xxxCheckFullScreen.c)
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x1C01ED858 (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 *     ?CalcVirtualScreenClipRegion@@YAXPEAUHRGN__@@PEAUtagWND@@@Z @ 0x1C0214F34 (-CalcVirtualScreenClipRegion@@YAXPEAUHRGN__@@PEAUtagWND@@@Z.c)
 *     ?IsVSlick@@YAHPEAUtagWND@@@Z @ 0x1C021FEC0 (-IsVSlick@@YAHPEAUtagWND@@@Z.c)
 * Callees:
 *     GetScreenRectForDpi @ 0x1C00CFD44 (GetScreenRectForDpi.c)
 *     ?GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z @ 0x1C00EDC80 (-GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z.c)
 */

__m128i *__fastcall GetScreenRectForWindow(__m128i *a1, const struct tagWND *a2)
{
  unsigned int WindowCompositedDpiContext; // eax

  WindowCompositedDpiContext = GetWindowCompositedDpiContext(a2);
  GetScreenRectForDpi(a1, (WindowCompositedDpiContext >> 8) & 0x1FF);
  return a1;
}
