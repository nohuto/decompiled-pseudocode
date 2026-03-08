/*
 * XREFs of ?GetBounds@CRenderData@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18011A110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRenderData::GetBounds(__int64 a1, __int64 a2, _OWORD *a3)
{
  return CRenderData::GetBounds(a1 - *(int *)(a1 - 4), a2, a3);
}
