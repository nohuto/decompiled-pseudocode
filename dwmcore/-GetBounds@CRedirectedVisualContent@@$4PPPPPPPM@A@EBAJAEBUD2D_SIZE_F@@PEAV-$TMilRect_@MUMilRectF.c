/*
 * XREFs of ?GetBounds@CRedirectedVisualContent@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18011A5B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRedirectedVisualContent::GetBounds(__int64 a1, __int64 a2, _OWORD *a3)
{
  return CRedirectedVisualContent::GetBounds(a1 - *(int *)(a1 - 4), a2, a3);
}
