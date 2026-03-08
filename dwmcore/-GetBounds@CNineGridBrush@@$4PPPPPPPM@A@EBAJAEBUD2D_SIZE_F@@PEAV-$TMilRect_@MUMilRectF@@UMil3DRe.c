/*
 * XREFs of ?GetBounds@CNineGridBrush@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180119FB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CNineGridBrush::GetBounds(__int64 a1, __int64 a2, _DWORD *a3)
{
  return CNineGridBrush::GetBounds(a1 - *(int *)(a1 - 4), a2, a3);
}
