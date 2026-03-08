/*
 * XREFs of ?GetBounds@CMaskBrush@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180119F10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMaskBrush::GetBounds(__int64 a1, __int64 a2, float *a3)
{
  return CMaskBrush::GetBounds(a1 - *(int *)(a1 - 4), a2, a3);
}
