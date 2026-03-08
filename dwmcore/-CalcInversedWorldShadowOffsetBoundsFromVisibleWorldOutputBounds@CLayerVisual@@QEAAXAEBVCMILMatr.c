/*
 * XREFs of ?CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV3@2@Z @ 0x180007CCC
 * Callers:
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x180007F00 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEB.c)
 *     ?RenderLayer@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x18000E7D0 (-RenderLayer@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?GetMaskBounds@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800082AC (-GetMaskBounds@CLayerVisual@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UN.c)
 *     ?CalcInversedShadowInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0PEAV2@1@Z @ 0x180008554 (-CalcInversedShadowInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBV-$TMilRect_@MU.c)
 *     ?CalcInversedOffsetInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@AEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z @ 0x180008650 (-CalcInversedOffsetInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@AEAAXAEBVCMILMatrix@@AE.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004AF54 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?Inflate@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x18007598C (-Inflate@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800C35E0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?GetRadius@CDropShadow@@QEBAMXZ @ 0x1800C5170 (-GetRadius@CDropShadow@@QEBAMXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

void __fastcall CLayerVisual::CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds(
        __int64 a1,
        CMILMatrix *a2,
        __m128 *a3,
        __m128 *a4,
        __m128 *a5)
{
  CDropShadow *v6; // rcx
  int MaskBounds; // eax
  unsigned int v11; // ecx
  __m128 v12; // xmm6
  __int32 v13; // xmm8_4
  __int32 v14; // xmm9_4
  float v15; // xmm10_4
  float v16; // xmm8_4
  float v17; // xmm9_4
  float v18; // xmm10_4
  __m128 v19; // [rsp+38h] [rbp-A1h] BYREF
  __m128 v20; // [rsp+48h] [rbp-91h] BYREF
  __m128 v21; // [rsp+58h] [rbp-81h] BYREF
  __int128 v22; // [rsp+68h] [rbp-71h] BYREF
  __int128 v23; // [rsp+78h] [rbp-61h] BYREF
  __int128 v24; // [rsp+88h] [rbp-51h] BYREF

  v6 = *(CDropShadow **)(a1 + 704);
  v19 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v22 = 0LL;
  CDropShadow::GetRadius(v6);
  v21 = 0LL;
  MaskBounds = CLayerVisual::GetMaskBounds(a1, &v21);
  if ( MaskBounds < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, MaskBounds, 0x242u, 0LL);
    *a4 = *a3;
    *a5 = *a3;
  }
  else
  {
    v20 = v21;
    if ( !(unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(&v20) )
      TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::Inflate(&v20);
    CMILMatrix::Transform2DBoundsHelper<1>(a2, (struct MilRectF *)&v21);
    CMILMatrix::Transform2DBoundsHelper<1>(a2, (struct MilRectF *)&v20);
    v20 = *a3;
    CLayerVisual::CalcInversedOffsetInputBoundsFromVisibleWorldOutputBounds(a1, a2, &v20, &v22, &v19, &v23);
    v20 = v19;
    CLayerVisual::CalcInversedShadowInputBoundsFromVisibleWorldOutputBounds(
      a1,
      (unsigned int)&v20,
      (unsigned int)&v24,
      (unsigned int)&v19,
      (__int64)&v23);
    v12 = v19;
    v13 = _mm_shuffle_ps(v19, v19, 85).m128_u32[0];
    v14 = _mm_shuffle_ps(v19, v19, 170).m128_u32[0];
    LODWORD(v15) = _mm_shuffle_ps(v19, v19, 255).m128_u32[0];
    *(unsigned __int64 *)((char *)v19.m128_u64 + 4) = __PAIR64__(v14, v13);
    v19.m128_f32[3] = v15;
    *a4 = v12;
    if ( !(unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(&v19) )
    {
      TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::Inflate(&v19);
      v15 = v19.m128_f32[3];
      v14 = v19.m128_i32[2];
      v13 = v19.m128_i32[1];
      v12.m128_i32[0] = v19.m128_i32[0];
    }
    v19.m128_u64[0] = *(_QWORD *)(*(_QWORD *)(a1 + 704) + 96LL);
    v16 = *(float *)&v13 + v19.m128_f32[1];
    v17 = *(float *)&v14 + v19.m128_f32[0];
    v18 = v15 + v19.m128_f32[1];
    a5->m128_f32[0] = v12.m128_f32[0] + v19.m128_f32[0];
    a5->m128_f32[1] = v16;
    a5->m128_f32[2] = v17;
    a5->m128_f32[3] = v18;
  }
}
