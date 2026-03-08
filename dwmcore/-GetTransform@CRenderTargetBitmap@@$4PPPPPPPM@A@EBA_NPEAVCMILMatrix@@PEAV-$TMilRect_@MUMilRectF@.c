/*
 * XREFs of ?GetTransform@CRenderTargetBitmap@@$4PPPPPPPM@A@EBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18011E6D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRenderTargetBitmap::GetTransform(__int64 a1)
{
  return CRenderTargetBitmap::GetTransform(a1 - *(int *)(a1 - 4));
}
