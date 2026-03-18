/*
 * XREFs of ScaleDpiOffsetWithSubpixel @ 0x1C01BA068
 * Callers:
 *     OffsetChildren @ 0x1C00F147C (OffsetChildren.c)
 *     ?GetDpiRectWithSubpixel@@YAXPEBUtagRECT@@PEBMPEBUtagWND@@2PEAM333@Z @ 0x1C01B9118 (-GetDpiRectWithSubpixel@@YAXPEBUtagRECT@@PEBMPEBUtagWND@@2PEAM333@Z.c)
 * Callees:
 *     ?GetWindowCoordinateSpaceDpi@@YAGPEBUtagWND@@@Z @ 0x1C00D1E30 (-GetWindowCoordinateSpaceDpi@@YAGPEBUtagWND@@@Z.c)
 *     ?ScaleValueWithSubpixel@@YAXPEAJPEAMM@Z @ 0x1C0151912 (-ScaleValueWithSubpixel@@YAXPEAJPEAMM@Z.c)
 */

void __fastcall ScaleDpiOffsetWithSubpixel(int *a1, float *a2, struct tagWND *a3, struct tagWND *a4)
{
  int WindowCoordinateSpaceDpi; // ebp
  unsigned __int16 v8; // ax
  float v9; // xmm2_4

  WindowCoordinateSpaceDpi = (unsigned __int16)GetWindowCoordinateSpaceDpi(a3);
  v8 = GetWindowCoordinateSpaceDpi(a4);
  if ( v8 )
  {
    v9 = (float)WindowCoordinateSpaceDpi / (float)v8;
    ScaleValueWithSubpixel(a1, a2, v9);
    ScaleValueWithSubpixel(a1 + 1, a2 + 1, v9);
  }
}
