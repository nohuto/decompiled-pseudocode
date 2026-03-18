/*
 * XREFs of ?GetTransform@CRenderTargetBitmap@@$4PPPPPPPM@7EBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180123540
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRenderTargetBitmap::GetTransform(__int64 a1)
{
  return CRenderTargetBitmap::GetTransform(a1 - *(int *)(a1 - 4) - 8);
}
