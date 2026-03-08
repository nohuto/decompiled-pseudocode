/*
 * XREFs of ?Set2DScaleAndOffset@CMILMatrix@@QEAAXMMMM@Z @ 0x1800B0DAC
 * Callers:
 *     ?CalcImageTransform@CCompositionSurfaceBitmap@@AEAA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000D094 (-CalcImageTransform@CCompositionSurfaceBitmap@@AEAA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180067850 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?SetScale@CMILMatrix@@QEAAXMMMMMM@Z @ 0x1800B0D18 (-SetScale@CMILMatrix@@QEAAXMMMMMM@Z.c)
 *     ?CalcDecodedSourceRectAndTransform@CDxHandleYUVBitmapRealization@@IEBAXPEAVCMILMatrix@@PEAV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@1@Z @ 0x1801173EC (-CalcDecodedSourceRectAndTransform@CDxHandleYUVBitmapRealization@@IEBAXPEAVCMILMatrix@@PEAV-$TMi.c)
 * Callees:
 *     ?Set2DAffineMatrix@CMILMatrix@@QEAAXMMMMMM@Z @ 0x1800B0E5C (-Set2DAffineMatrix@CMILMatrix@@QEAAXMMMMMM@Z.c)
 */

void __fastcall CMILMatrix::Set2DScaleAndOffset(CMILMatrix *this, float a2, float a3, float a4, float a5)
{
  char v6; // al

  CMILMatrix::Set2DAffineMatrix(this, a2, 0.0, 0.0, a3, a4, a5);
  v6 = *((_BYTE *)this + 64) & 0x3F | 0x40;
  *((_BYTE *)this + 65) |= 3u;
  *((_BYTE *)this + 64) = v6;
}
