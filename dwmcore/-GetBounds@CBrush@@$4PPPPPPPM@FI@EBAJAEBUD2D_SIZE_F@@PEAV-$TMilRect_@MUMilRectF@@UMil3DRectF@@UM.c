/*
 * XREFs of ?GetBounds@CBrush@@$4PPPPPPPM@FI@EBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180119D90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBrush::GetBounds(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  return CBrush::GetBounds(a1 - *(int *)(a1 - 4) - 88, a2, a3);
}
