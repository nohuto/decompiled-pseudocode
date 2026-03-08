/*
 * XREFs of ?DrawRoundedRectangularShadow@@YAXPEAXJJHJ@Z @ 0x1C0223998
 * Callers:
 *     ?GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C0223DF4 (-GenerateWindowShadow@@YAPEAUHBITMAP__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 * Callees:
 *     ?DrawBottomLogicallyLeftCorner@@YAXPEAXJHJ@Z @ 0x1C02236B4 (-DrawBottomLogicallyLeftCorner@@YAXPEAXJHJ@Z.c)
 *     ?DrawBottomLogicallyRightCorner@@YAXPEAXJHJ@Z @ 0x1C0223758 (-DrawBottomLogicallyRightCorner@@YAXPEAXJHJ@Z.c)
 *     ?DrawBottomSide@@YAXPEAXJHJ@Z @ 0x1C0223810 (-DrawBottomSide@@YAXPEAXJHJ@Z.c)
 *     ?DrawLogicallyRightSide@@YAXPEAXJJHJ@Z @ 0x1C02238C0 (-DrawLogicallyRightSide@@YAXPEAXJJHJ@Z.c)
 *     ?DrawTopLogicallyRightCorner@@YAXPEAXJJHJ@Z @ 0x1C0223A30 (-DrawTopLogicallyRightCorner@@YAXPEAXJJHJ@Z.c)
 */

void __fastcall DrawRoundedRectangularShadow(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  DrawTopLogicallyRightCorner(a1, a2, a3, a4, a5);
  DrawLogicallyRightSide((char *)a1, a2, a3, a4, a5);
  DrawBottomLogicallyRightCorner(a1, a2, a4, a5);
  DrawBottomSide((char *)a1, a2, a4, a5);
  DrawBottomLogicallyLeftCorner(a1, a2, a4, a5);
}
