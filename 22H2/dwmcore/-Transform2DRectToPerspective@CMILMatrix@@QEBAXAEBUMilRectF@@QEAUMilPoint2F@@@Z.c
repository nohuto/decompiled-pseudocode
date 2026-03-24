/*
 * XREFs of ?Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z @ 0x1800A8CF0
 * Callers:
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180086EA0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800A77A0 (--$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800A7F30 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800A8340 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3.c)
 *     ?FlattenGeometry@CTransformedGeometryHelper@@AEAAJPEBUID2D1Geometry@@@Z @ 0x18025FEC8 (-FlattenGeometry@CTransformedGeometryHelper@@AEAAJPEBUID2D1Geometry@@@Z.c)
 * Callees:
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800826E0 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?IsCloseRealOne@@YA_NMM@Z @ 0x180088808 (-IsCloseRealOne@@YA_NMM@Z.c)
 */

void __fastcall CMILMatrix::Transform2DRectToPerspective(
        CMILMatrix *this,
        const struct MilRectF *a2,
        struct MilPoint2F *const a3)
{
  float v4; // xmm1_4
  float v5; // xmm2_4
  float v6; // xmm6_4
  float v7; // xmm7_4
  float v8; // xmm6_4
  float v9; // xmm3_4
  float v10; // xmm5_4
  float v11; // xmm3_4
  float v12; // xmm2_4
  float v13; // xmm4_4
  float v14; // xmm2_4
  __int64 v15; // r10
  float *v16; // r11
  float v17; // xmm1_4
  float v18; // xmm4_4
  float v19; // xmm3_4
  float v20; // xmm0_4
  float v21; // xmm2_4
  float v22; // xmm7_4
  float v23; // xmm6_4
  float v24; // xmm3_4
  float v25; // xmm4_4
  float *v26; // r10
  float v27; // xmm5_4
  float v28; // xmm1_4
  __int64 v29; // r10
  float v30; // xmm5_4
  float v31; // xmm1_4
  __int64 v32; // r10
  float v33; // xmm4_4
  float v34; // xmm5_4
  float v35; // xmm2_4
  float v36; // xmm4_4
  float v37; // xmm1_4

  v4 = *(float *)a2 * *(float *)this;
  v5 = *(float *)a2 * *((float *)this + 1);
  v6 = *((float *)a2 + 1);
  v7 = v6 * *((float *)this + 5);
  v8 = v6 * *((float *)this + 4);
  *(float *)a3 = (float)(v8 + v4) + *((float *)this + 12);
  *((float *)a3 + 1) = (float)(v7 + v5) + *((float *)this + 13);
  v9 = *((float *)a2 + 3);
  v10 = v9 * *((float *)this + 5);
  v11 = v9 * *((float *)this + 4);
  *((float *)a3 + 2) = (float)(v11 + v4) + *((float *)this + 12);
  *((float *)a3 + 3) = (float)(v10 + v5) + *((float *)this + 13);
  v12 = *((float *)a2 + 2);
  v13 = v12 * *((float *)this + 1);
  v14 = v12 * *(float *)this;
  *((float *)a3 + 4) = (float)(v14 + v11) + *((float *)this + 12);
  *((float *)a3 + 5) = (float)(v13 + v10) + *((float *)this + 13);
  *((float *)a3 + 6) = (float)(v14 + v8) + *((float *)this + 12);
  *((float *)a3 + 7) = (float)(v13 + v7) + *((float *)this + 13);
  if ( !CMILMatrix::Is2DAffine<1>((__int64)this, 1) )
  {
    v17 = v16[15];
    v18 = v16[7] * *((float *)a2 + 1);
    v19 = v16[7] * *((float *)a2 + 3);
    v20 = v16[3] * *(float *)a2;
    v21 = v16[3] * *((float *)a2 + 2);
    v22 = (float)(v18 + v20) + v17;
    v23 = (float)(v19 + v20) + v17;
    v24 = (float)(v19 + v21) + v17;
    v25 = (float)(v18 + v21) + v17;
    if ( v22 < 0.000081380211 || v23 < 0.000081380211 || v24 < 0.000081380211 || v25 < 0.000081380211 )
    {
      if ( v22 >= -0.000081380211 || v23 >= -0.000081380211 || v24 >= -0.000081380211 || v25 >= -0.000081380211 )
      {
        *(_DWORD *)v15 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
        *(_DWORD *)(v15 + 4) = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
        *(_DWORD *)(v15 + 8) = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
        *(_DWORD *)(v15 + 12) = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
        *(_DWORD *)(v15 + 16) = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
        *(_DWORD *)(v15 + 20) = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
        *(_DWORD *)(v15 + 24) = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
        v37 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
      }
      else
      {
        *(_QWORD *)v15 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
        *(_DWORD *)(v15 + 8) = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
        *(_DWORD *)(v15 + 12) = HIDWORD(TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
        *(_QWORD *)(v15 + 16) = *((_QWORD *)&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty
                                + 1);
        *(_DWORD *)(v15 + 24) = DWORD2(TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
        v37 = *((float *)&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty + 1);
      }
      goto LABEL_20;
    }
    if ( !IsCloseRealOne(v22, 0.000081380211) )
    {
      v28 = v26[1] / v22;
      *v26 = *v26 / v22;
      v26[1] = v28;
    }
    if ( !IsCloseRealOne(v23, v27) )
    {
      v31 = *(float *)(v29 + 12) / v23;
      *(float *)(v29 + 8) = *(float *)(v29 + 8) / v23;
      *(float *)(v29 + 12) = v31;
    }
    if ( !IsCloseRealOne(v24, v30) )
    {
      v35 = *(float *)(v32 + 20) / v24;
      *(float *)(v32 + 16) = *(float *)(v32 + 16) / v24;
      *(float *)(v32 + 20) = v35;
    }
    if ( !IsCloseRealOne(v33, v34) )
    {
      v37 = *(float *)(v15 + 28) / v36;
      *(float *)(v15 + 24) = *(float *)(v15 + 24) / v36;
LABEL_20:
      *(float *)(v15 + 28) = v37;
    }
  }
}
