/*
 * XREFs of ?SetInverse@MILMatrix3x2@@QEAAXAEBV1@@Z @ 0x180075DFC
 * Callers:
 *     ?DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVMILMatrix3x2@@_NHM@Z @ 0x18000EFB4 (-DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV-$TMilRect_ea_18000EFB4.c)
 *     ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBVCMILMatrix@@AEBVCShape@@_NH@Z @ 0x180077420 (-FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBVCMILMatrix@@AEBVCShape@@_NH@.c)
 * Callees:
 *     <none>
 */

void __fastcall MILMatrix3x2::SetInverse(MILMatrix3x2 *this, const struct MILMatrix3x2 *a2)
{
  float v2; // xmm3_4

  v2 = 1.0 / (float)((float)(*((float *)a2 + 3) * *(float *)a2) - (float)(*((float *)a2 + 1) * *((float *)a2 + 2)));
  *(float *)this = *((float *)a2 + 3) * v2;
  *((float *)this + 1) = COERCE_FLOAT(*((_DWORD *)a2 + 1) ^ _xmm) * v2;
  *((float *)this + 2) = COERCE_FLOAT(*((_DWORD *)a2 + 2) ^ _xmm) * v2;
  *((float *)this + 3) = v2 * *(float *)a2;
  *((float *)this + 4) = (float)((float)(*((float *)a2 + 2) * *((float *)a2 + 5))
                               - (float)(*((float *)a2 + 3) * *((float *)a2 + 4)))
                       * v2;
  *((float *)this + 5) = (float)((float)(*((float *)a2 + 1) * *((float *)a2 + 4))
                               - (float)(*(float *)a2 * *((float *)a2 + 5)))
                       * v2;
}
