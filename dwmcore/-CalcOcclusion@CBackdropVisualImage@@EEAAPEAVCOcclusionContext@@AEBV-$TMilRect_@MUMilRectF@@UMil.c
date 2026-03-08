/*
 * XREFs of ?CalcOcclusion@CBackdropVisualImage@@EEAAPEAVCOcclusionContext@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x1800EBB50
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureAncestorList@CBackdropVisualImage@@AEAAXXZ @ 0x180087520 (-EnsureAncestorList@CBackdropVisualImage@@AEAAXXZ.c)
 *     ?CalcOcclusion@CCachedVisualImage@@MEAAPEAVCOcclusionContext@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x1800EBBB0 (-CalcOcclusion@CCachedVisualImage@@MEAAPEAVCOcclusionContext@@AEBV-$TMilRect_@MUMilRectF@@UMil3D.c)
 */

__int64 __fastcall CBackdropVisualImage::CalcOcclusion(CBackdropVisualImage *a1, __int64 a2)
{
  if ( !*((_BYTE *)a1 + 1953) )
    return 0LL;
  CBackdropVisualImage::EnsureAncestorList(a1);
  return CCachedVisualImage::CalcOcclusion(a1, a2);
}
