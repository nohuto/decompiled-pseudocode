/*
 * XREFs of ?GetBounds@CGradientBrush@@$4PPPPPPPM@BA@EBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180119E90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CGradientBrush::GetBounds(__int64 a1, _DWORD *a2, __int64 a3)
{
  return CGradientBrush::GetBounds(a1 - *(int *)(a1 - 4) - 16, a2, a3);
}
