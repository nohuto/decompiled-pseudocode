/*
 * XREFs of ?GetTransform@CGDISectionBitmapRealization@@$4PPPPPPPM@A@EBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18011DB30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CGDISectionBitmapRealization::GetTransform(__int64 a1, CMILMatrix *a2, float *a3)
{
  return CGDISectionBitmapRealization::GetTransform(a1 - *(int *)(a1 - 4), a2, a3);
}
