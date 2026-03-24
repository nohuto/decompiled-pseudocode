/*
 * XREFs of ?IsEmpty@Insets@@SA_NAEBV1@@Z @ 0x180008758
 * Callers:
 *     ?CreateShadowOpacityBrush@ShadowIntermediates@CDropShadow@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@MPEAPEAVCDrawListBrush@@@Z @ 0x180006598 (-CreateShadowOpacityBrush@ShadowIntermediates@CDropShadow@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZ.c)
 *     ?AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01_N@Z @ 0x1800F37B4 (-AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall Insets::IsEmpty(const struct Insets *a1)
{
  return COERCE_FLOAT(*(_DWORD *)a1 & _xmm) < 0.0000011920929
      && COERCE_FLOAT(*((_DWORD *)a1 + 1) & _xmm) < 0.0000011920929
      && COERCE_FLOAT(*((_DWORD *)a1 + 2) & _xmm) < 0.0000011920929
      && COERCE_FLOAT(*((_DWORD *)a1 + 3) & _xmm) < 0.0000011920929;
}
