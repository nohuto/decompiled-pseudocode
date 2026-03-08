/*
 * XREFs of GetWindowBorders @ 0x1C0021910
 * Callers:
 *     xxxDrawCaptionBar @ 0x1C0021730 (xxxDrawCaptionBar.c)
 *     xxxDWP_DoNCActivate @ 0x1C00245B8 (xxxDWP_DoNCActivate.c)
 *     xxxDrawWindowFrame @ 0x1C00A64E4 (xxxDrawWindowFrame.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C02270EC (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 *     xxxHelpLoop @ 0x1C023C17C (xxxHelpLoop.c)
 * Callees:
 *     GetWindowBordersForDpi @ 0x1C0021944 (GetWindowBordersForDpi.c)
 *     GetDpiForSystem @ 0x1C0045E5C (GetDpiForSystem.c)
 */

__int64 __fastcall GetWindowBorders(__int64 a1, __int64 a2)
{
  int v2; // ebx
  int v3; // edi
  int DpiForSystem; // eax
  int v5; // r8d
  int v6; // r9d

  v2 = a2;
  v3 = a1;
  DpiForSystem = GetDpiForSystem(a1, a2);
  return GetWindowBordersForDpi(v3, v2, v5, v6, DpiForSystem);
}
