/*
 * XREFs of ?DrawImage@CRenderDataBounds@@UEAAJPEAVCResource@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001F360
 * Callers:
 *     <none>
 * Callees:
 *     ?AddBounds@CRenderDataBounds@@IEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800EB228 (-AddBounds@CRenderDataBounds@@IEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@U.c)
 */

__int64 __fastcall CRenderDataBounds::DrawImage(__int64 a1, __int64 a2, __int64 a3)
{
  if ( a2 )
    CRenderDataBounds::AddBounds(a1, a3);
  return 0LL;
}
