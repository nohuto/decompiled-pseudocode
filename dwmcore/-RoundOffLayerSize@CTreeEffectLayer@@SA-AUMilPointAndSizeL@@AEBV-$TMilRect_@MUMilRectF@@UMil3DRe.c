/*
 * XREFs of ?RoundOffLayerSize@CTreeEffectLayer@@SA?AUMilPointAndSizeL@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000E6E4
 * Callers:
 *     ?PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@11PEAVCResource@@PEA_N@Z @ 0x18000E12C (-PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMi.c)
 * Callees:
 *     <none>
 */

int *__fastcall CTreeEffectLayer::RoundOffLayerSize(int *a1, __int64 a2)
{
  float v2; // xmm4_4
  int v3; // eax
  float v4; // xmm3_4
  int v5; // eax
  __m128 v6; // xmm2
  float v7; // xmm0_4
  int v8; // eax
  __m128 v9; // xmm1
  __m128 v10; // xmm0
  unsigned __int32 v11; // eax
  __m128 v13; // xmm2
  __m128 v14; // xmm2
  __m128 v15; // rt1
  float v16; // [rsp+8h] [rbp+8h]
  float v17; // [rsp+8h] [rbp+8h]

  v2 = *(float *)a2;
  if ( (*(_DWORD *)a2 & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v13 = 0LL;
    v13.m128_f32[0] = (float)(int)v2 - v2;
    v3 = (int)v2 - _mm_cmple_ss(v13, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
  }
  else
  {
    v16 = v2 + 6291456.25;
    v3 = (int)(LODWORD(v16) << 10) >> 11;
  }
  v4 = *(float *)(a2 + 4);
  *a1 = v3;
  if ( (LODWORD(v4) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v14 = 0LL;
    v14.m128_f32[0] = (float)(int)v4 - v4;
    v15.m128_f32[0] = FLOAT_N0_5;
    v5 = (int)v4 - _mm_cmple_ss(v14, v15).m128_u32[0];
  }
  else
  {
    v17 = v4 + 6291456.25;
    v5 = (int)(LODWORD(v17) << 10) >> 11;
  }
  v6 = 0LL;
  v7 = *(float *)(a2 + 8) - v2;
  a1[1] = v5;
  v8 = (int)v7;
  v9.m128_f32[0] = v7;
  v10 = 0LL;
  v10.m128_f32[0] = (float)v8;
  v11 = v8 - _mm_cmplt_ss(v10, v9).m128_u32[0];
  v10.m128_i32[0] = *(_DWORD *)(a2 + 12);
  a1[2] = v11;
  v10.m128_f32[0] = v10.m128_f32[0] - v4;
  v6.m128_f32[0] = (float)(int)v10.m128_f32[0];
  a1[3] = (int)v10.m128_f32[0] - _mm_cmplt_ss(v6, v10).m128_u32[0];
  return a1;
}
