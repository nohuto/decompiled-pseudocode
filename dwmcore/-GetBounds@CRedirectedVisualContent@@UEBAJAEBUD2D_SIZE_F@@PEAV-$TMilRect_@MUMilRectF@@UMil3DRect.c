/*
 * XREFs of ?GetBounds@CRedirectedVisualContent@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18010715C
 * Callers:
 *     ?GetBounds@CRedirectedVisualContent@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18011A5B0 (-GetBounds@CRedirectedVisualContent@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CRedirectedVisualContent::GetBounds(__int64 a1, __int64 a2, _OWORD *a3)
{
  __int64 result; // rax

  result = 0LL;
  *a3 = *(_OWORD *)(a1 - 48);
  return result;
}
