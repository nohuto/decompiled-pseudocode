/*
 * XREFs of ?GetBounds@CPrimitiveGroup@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801182D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPrimitiveGroup::GetBounds(__int64 a1, __int64 a2, _OWORD *a3)
{
  return CPrimitiveGroup::GetBounds(a1 - *(int *)(a1 - 4), a2, a3);
}
