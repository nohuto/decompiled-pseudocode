/*
 * XREFs of ?CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV3@2@Z @ 0x1801D1ED8
 * Callers:
 *     ?RenderLayer@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180004E48 (-RenderLayer@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x180005C60 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEB.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180058560 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Inflate@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x18006AEEC (-Inflate@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800A7F30 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     ?CalcInversedOffsetInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@AEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z @ 0x1801D1C18 (-CalcInversedOffsetInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@AEAAXAEBVCMILMatrix@@AE.c)
 *     ?CalcInversedShadowInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0PEAV2@1@Z @ 0x1801D1DEC (-CalcInversedShadowInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBV-$TMilRect_@MU.c)
 *     ?GetMaskBounds@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801D2138 (-GetMaskBounds@CLayerVisual@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UN.c)
 */

void __fastcall CLayerVisual::CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds(
        CVisual *a1,
        __int64 a2,
        __int128 *a3,
        _OWORD *a4,
        float *a5)
{
  float v8; // xmm6_4
  int MaskBounds; // eax
  __int64 v11; // rcx
  int v12; // edi
  __m128 v13; // xmm7
  __int32 v14; // xmm8_4
  __int32 v15; // xmm9_4
  float v16; // xmm10_4
  float v17; // xmm8_4
  float v18; // xmm9_4
  float v19; // xmm10_4
  __m128 v20; // [rsp+38h] [rbp-A1h] BYREF
  __m128 v21; // [rsp+48h] [rbp-91h] BYREF
  __int128 v22; // [rsp+58h] [rbp-81h] BYREF
  __int128 v23; // [rsp+68h] [rbp-71h] BYREF
  __int128 v24; // [rsp+78h] [rbp-61h] BYREF
  __int128 v25; // [rsp+88h] [rbp-51h] BYREF

  v8 = *(float *)(*((_QWORD *)a1 + 77) + 96LL);
  v22 = 0LL;
  v20 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v23 = 0LL;
  MaskBounds = CLayerVisual::GetMaskBounds(a1);
  v12 = MaskBounds;
  if ( MaskBounds < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, MaskBounds, 0x20Eu, 0LL);
  }
  else
  {
    v21 = (__m128)v22;
    if ( !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(v21.m128_f32) )
      TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::Inflate(v21.m128_f32, v8, v8);
    CMILMatrix::Transform2DBoundsHelper<1>(a2, (float *)&v22, (float *)&v25);
    CMILMatrix::Transform2DBoundsHelper<1>(a2, v21.m128_f32, (float *)&v23);
    v21 = (__m128)*a3;
    CLayerVisual::CalcInversedOffsetInputBoundsFromVisibleWorldOutputBounds(
      (__int64)a1,
      a2,
      v21.m128_f32,
      (float *)&v23,
      v20.m128_f32,
      (__int64)&v24);
    v21 = v20;
    CLayerVisual::CalcInversedShadowInputBoundsFromVisibleWorldOutputBounds(
      (__int64)a1,
      (__int128 *)&v21,
      (__int64)&v25,
      (__int64)&v20,
      (float *)&v24);
    v13 = v20;
    v14 = _mm_shuffle_ps(v20, v20, 85).m128_u32[0];
    v15 = _mm_shuffle_ps(v20, v20, 170).m128_u32[0];
    LODWORD(v16) = _mm_shuffle_ps(v20, v20, 255).m128_u32[0];
    *(unsigned __int64 *)((char *)v20.m128_u64 + 4) = __PAIR64__(v15, v14);
    v20.m128_f32[3] = v16;
    *a4 = v13;
    if ( !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(v20.m128_f32) )
    {
      TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::Inflate(v20.m128_f32, v8, v8);
      v16 = v20.m128_f32[3];
      v15 = v20.m128_i32[2];
      v14 = v20.m128_i32[1];
      v13.m128_i32[0] = v20.m128_i32[0];
    }
    v20.m128_u64[0] = *(_QWORD *)(*((_QWORD *)a1 + 77) + 104LL);
    v17 = *(float *)&v14 + v20.m128_f32[1];
    v18 = *(float *)&v15 + v20.m128_f32[0];
    v19 = v16 + v20.m128_f32[1];
    *a5 = v13.m128_f32[0] + v20.m128_f32[0];
    a5[1] = v17;
    a5[2] = v18;
    a5[3] = v19;
  }
  if ( v12 < 0 )
  {
    *a4 = *a3;
    *(_OWORD *)a5 = *a3;
  }
}
