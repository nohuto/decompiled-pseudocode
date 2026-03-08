/*
 * XREFs of ?GetBounds@CPrimitiveGroup@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180106AC0
 * Callers:
 *     ?GetBounds@CPrimitiveGroup@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801182D0 (-GetBounds@CPrimitiveGroup@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DR.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPrimitiveGroup::GetBounds(__int64 a1, __int64 a2, _OWORD *a3)
{
  __int64 result; // rax

  result = 0LL;
  *a3 = *(_OWORD *)(a1 - 572);
  return result;
}
