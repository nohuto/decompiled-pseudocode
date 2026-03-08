/*
 * XREFs of ??0DbgString@DwmDbg@@QEAA@AEBVCMILMatrix@@@Z @ 0x1800E1710
 * Callers:
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_NPEAVCVisual@@@Z @ 0x18008795C (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF.c)
 *     ?ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x18008833C (-ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@.c)
 * Callees:
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18008883C (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 */

char **__fastcall DwmDbg::DbgString::DbgString(char **this, const struct CMILMatrix *a2)
{
  DwmDbg::DbgString::DbgString(
    this,
    "(%.2f, %.2f, %.2f, %.2f), (%.2f, %.2f, %.2f, %.2f), (%.2f, %.2f, %.2f, %.2f), (%.2f, %.2f, %.2f, %.2f)",
    *(float *)a2,
    *((float *)a2 + 1),
    *((float *)a2 + 2),
    *((float *)a2 + 3),
    *((float *)a2 + 4),
    *((float *)a2 + 5),
    *((float *)a2 + 6),
    *((float *)a2 + 7),
    *((float *)a2 + 8),
    *((float *)a2 + 9),
    *((float *)a2 + 10),
    *((float *)a2 + 11),
    *((float *)a2 + 12),
    *((float *)a2 + 13),
    *((float *)a2 + 14),
    *((float *)a2 + 15));
  return this;
}
