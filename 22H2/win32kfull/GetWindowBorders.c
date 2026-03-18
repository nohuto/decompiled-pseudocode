/*
 * XREFs of GetWindowBorders @ 0x1C00C6A7C
 * Callers:
 *     xxxDrawCaptionBar @ 0x1C00C689C (xxxDrawCaptionBar.c)
 *     xxxDrawWindowFrame @ 0x1C00C6FE0 (xxxDrawWindowFrame.c)
 *     xxxDWP_DoNCActivate @ 0x1C00C9228 (xxxDWP_DoNCActivate.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C02243DC (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 *     xxxHelpLoop @ 0x1C0239514 (xxxHelpLoop.c)
 * Callees:
 *     GetWindowBordersForDpi @ 0x1C00C6AB0 (GetWindowBordersForDpi.c)
 *     GetDpiForSystem @ 0x1C00EDB80 (GetDpiForSystem.c)
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
