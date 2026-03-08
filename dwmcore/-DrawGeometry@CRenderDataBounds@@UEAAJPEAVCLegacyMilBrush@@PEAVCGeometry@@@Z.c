/*
 * XREFs of ?DrawGeometry@CRenderDataBounds@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z @ 0x1800EB050
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800EB0B8 (-GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoin.c)
 *     ?AddBounds@CRenderDataBounds@@IEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800EB228 (-AddBounds@CRenderDataBounds@@IEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@U.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

__int64 __fastcall CRenderDataBounds::DrawGeometry(
        CRenderDataBounds *this,
        struct CLegacyMilBrush *a2,
        struct CGeometry *a3)
{
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF

  if ( a2 && a3 )
  {
    v5 = 0LL;
    CGeometry::GetBoundsSafe(a3, 0LL, &v5);
    CRenderDataBounds::AddBounds(this, &v5);
  }
  return 0LL;
}
