/*
 * XREFs of ?GetD2D1Matrix4x4@CMILMatrix@@QEBA?AUD2D_MATRIX_4X4_F@@XZ @ 0x18026CACC
 * Callers:
 *     ?GetWorldTransform4x4@CDrawingContext@@UEBAXPEAUD2D_MATRIX_4X4_F@@@Z @ 0x1801B3CB0 (-GetWorldTransform4x4@CDrawingContext@@UEBAXPEAUD2D_MATRIX_4X4_F@@@Z.c)
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x1801D1564 (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMIL.c)
 *     ?ClipToPolygon@ClipPlaneIterator@@QEAAJPEAVCPolygon@@AEBVCMILMatrix@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@UNotNeeded@4@@@@Z @ 0x1801D6854 (-ClipToPolygon@ClipPlaneIterator@@QEAAJPEAVCPolygon@@AEBVCMILMatrix@@AEBV-$TMilRect_@HUtagRECT@@.c)
 * Callees:
 *     <none>
 */

struct D2D_MATRIX_4X4_F *__fastcall CMILMatrix::GetD2D1Matrix4x4(
        struct D2D_MATRIX_4X4_F *this,
        struct D2D_MATRIX_4X4_F *__return_ptr retstr)
{
  *retstr = *this;
  return retstr;
}
