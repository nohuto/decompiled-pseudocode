/*
 * XREFs of ?PixelAlign@@YAHMW4Enum@PixelAlignMode@@@Z @ 0x180014044
 * Callers:
 *     ?Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@AEBVRenderTargetInfo@@@Z @ 0x18003AC10 (-Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoin.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x18005E780 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z.c)
 *     ?CollectRectangleForOcclusion@COcclusionContext@@AEAAXPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N1PEAV2@@Z @ 0x180081808 (-CollectRectangleForOcclusion@COcclusionContext@@AEAAXPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@U.c)
 *     ?AlignRectFToPointAndSizeL@@YAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUMilPointAndSizeL@@@Z @ 0x18026FF50 (-AlignRectFToPointAndSizeL@@YAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotN.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PixelAlign(float a1, int a2)
{
  __int64 result; // rax
  __m128 v3; // xmm2
  __m128 v4; // rt1
  float v5; // [rsp+8h] [rbp+8h]

  if ( (LODWORD(a1) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v3 = 0LL;
    v3.m128_f32[0] = (float)(int)a1 - a1;
    v4.m128_f32[0] = FLOAT_N0_5;
    result = (int)a1 - _mm_cmple_ss(v3, v4).m128_u32[0];
  }
  else
  {
    v5 = a1 + 6291456.25;
    result = (unsigned int)((int)(LODWORD(v5) << 10) >> 11);
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(a1 - (float)(int)result) & _xmm) > 0.00390625 )
  {
    if ( a2 )
      return CFloatFPU::CeilingSat(a1);
    else
      return CFloatFPU::FloorSat(a1);
  }
  return result;
}
