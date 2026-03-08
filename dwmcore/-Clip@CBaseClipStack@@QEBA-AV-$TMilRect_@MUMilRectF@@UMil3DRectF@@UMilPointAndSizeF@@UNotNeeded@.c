/*
 * XREFs of ?Clip@CBaseClipStack@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBV2@@Z @ 0x180014C44
 * Callers:
 *     ?GetDestinationRect@COcclusionContext@@AEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBV2@@Z @ 0x180014BC8 (-GetDestinationRect@COcclusionContext@@AEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndS.c)
 * Callees:
 *     ?GetTopByReference@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$07$01$07@@QEBAPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1800E1B70 (-GetTopByReference@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UN.c)
 */

__m128 *__fastcall CBaseClipStack::Clip(_DWORD *a1, __m128 *a2, __m128 *a3)
{
  __m128 *v3; // r9
  float *v4; // r8
  __m128 v5; // xmm0
  float v6; // xmm1_4
  float v7; // xmm2_4
  float v8; // xmm3_4
  float v9; // xmm4_4
  __m128 v11; // [rsp+20h] [rbp-18h]

  v3 = a2;
  if ( *a1 )
  {
    v5 = (__m128)_mm_loadu_si128((const __m128i *)CWatermarkStack<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,8,2,8>::GetTopByReference(
                                                    a1,
                                                    a2,
                                                    a3,
                                                    a2));
    v11 = v5;
    v11.m128_i32[0] = v5.m128_i32[0];
    v6 = v5.m128_f32[0];
    if ( *v4 > v5.m128_f32[0] )
    {
      v11.m128_f32[0] = *v4;
      v6 = *v4;
      v5 = v11;
    }
    v7 = _mm_shuffle_ps(v5, v5, 85).m128_f32[0];
    if ( v4[1] > v7 )
    {
      v11.m128_f32[1] = v4[1];
      v7 = v11.m128_f32[1];
      v5 = v11;
    }
    v8 = _mm_shuffle_ps(v5, v5, 170).m128_f32[0];
    if ( v8 > v4[2] )
    {
      v11.m128_f32[2] = v4[2];
      v8 = v11.m128_f32[2];
      v5 = v11;
    }
    v9 = _mm_shuffle_ps(v5, v5, 255).m128_f32[0];
    if ( v9 > v4[3] )
    {
      v11.m128_f32[3] = v4[3];
      v9 = v11.m128_f32[3];
      v5 = v11;
    }
    if ( v8 <= v6 || v9 <= v7 )
      v5 = 0uLL;
    *v3 = v5;
  }
  else
  {
    *a2 = *a3;
  }
  return v3;
}
