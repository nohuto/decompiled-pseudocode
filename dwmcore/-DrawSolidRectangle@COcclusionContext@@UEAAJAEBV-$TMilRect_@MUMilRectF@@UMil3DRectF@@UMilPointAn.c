/*
 * XREFs of ?DrawSolidRectangle@COcclusionContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x180039EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?CollectRectangleForOcclusion@COcclusionContext@@AEAAXPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N1PEAV2@@Z @ 0x180081808 (-CollectRectangleForOcclusion@COcclusionContext@@AEAAXPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@U.c)
 */

__int64 __fastcall COcclusionContext::DrawSolidRectangle(__int64 a1, int a2, __int64 a3, int a4)
{
  if ( !*(_DWORD *)(a1 + 1432) && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a3 + 12) - 1.0) & _xmm) < 0.0000011920929 )
    COcclusionContext::CollectRectangleForOcclusion(a1, a2, 0, a4, 0LL);
  return 0LL;
}
