/*
 * XREFs of GetWindowBorders @ 0x1C00DCF9C
 * Callers:
 *     xxxDrawWindowFrame @ 0x1C004BA7C (xxxDrawWindowFrame.c)
 *     xxxDWP_DoNCActivate @ 0x1C00DC844 (xxxDWP_DoNCActivate.c)
 *     xxxDrawCaptionBar @ 0x1C00DCAB8 (xxxDrawCaptionBar.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C023E3AC (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 *     xxxHelpLoop @ 0x1C024FBDC (xxxHelpLoop.c)
 * Callees:
 *     GetDpiForSystem @ 0x1C0063C1C (GetDpiForSystem.c)
 *     GetWindowBordersForDpi @ 0x1C00E0E50 (GetWindowBordersForDpi.c)
 */

__int64 __fastcall GetWindowBorders(__int64 a1, int a2)
{
  int v3; // edi
  int DpiForSystem; // eax
  int v5; // r8d
  int v6; // r9d

  v3 = a1;
  DpiForSystem = GetDpiForSystem(a1);
  return GetWindowBordersForDpi(v3, a2, v5, v6, DpiForSystem);
}
