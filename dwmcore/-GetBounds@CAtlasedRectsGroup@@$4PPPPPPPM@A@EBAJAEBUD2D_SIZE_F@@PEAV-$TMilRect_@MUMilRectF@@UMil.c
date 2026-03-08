/*
 * XREFs of ?GetBounds@CAtlasedRectsGroup@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180118230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAtlasedRectsGroup::GetBounds(__int64 a1, __int64 a2, _OWORD *a3)
{
  return CAtlasedRectsGroup::GetBounds(a1 - *(int *)(a1 - 4), a2, a3);
}
