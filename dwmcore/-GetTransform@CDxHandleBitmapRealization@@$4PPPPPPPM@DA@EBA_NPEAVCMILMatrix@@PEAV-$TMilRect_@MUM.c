/*
 * XREFs of ?GetTransform@CDxHandleBitmapRealization@@$4PPPPPPPM@DA@EBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18011E950
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDxHandleBitmapRealization::GetTransform(__int64 a1, CMILMatrix *a2, float *a3)
{
  return CDxHandleBitmapRealization::GetTransform(a1 - *(int *)(a1 - 4) - 48, a2, a3);
}
