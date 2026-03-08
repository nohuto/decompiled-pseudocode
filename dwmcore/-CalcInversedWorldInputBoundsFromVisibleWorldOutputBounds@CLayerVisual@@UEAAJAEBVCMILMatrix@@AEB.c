/*
 * XREFs of ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x180007F00
 * Callers:
 *     <none>
 * Callees:
 *     ?CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV3@2@Z @ 0x180007CCC (-CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatr.c)
 *     ?GetShadowBounds@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800081B8 (-GetShadowBounds@CLayerVisual@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@.c)
 *     ?GetMaskBounds@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800082AC (-GetMaskBounds@CLayerVisual@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UN.c)
 *     ?GetBoundsWithLayerEffect@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180008304 (-GetBoundsWithLayerEffect@CLayerVisual@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointA.c)
 *     ?Get2DBoundsUsing2DInverse@CMILMatrix@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180008844 (-Get2DBoundsUsing2DInverse@CMILMatrix@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointA.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180040360 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x1800C2FB0 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CVisual@@UEAAJAEBVCMILMatrix@@AEBV-$TM.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800C35E0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCBrush@@XZ @ 0x1800C515C (-GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCBrush@@XZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

__int64 __fastcall CLayerVisual::CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds(
        CVisual *this,
        CMILMatrix *a2,
        __int64 a3,
        __int64 a4,
        __m128 *a5,
        __m128 *a6)
{
  bool v6; // zf
  int ShadowBounds; // eax
  unsigned int v11; // ecx
  unsigned int v12; // ebx
  __int32 v13; // xmm1_4
  float v14; // xmm0_4
  float v15; // xmm1_4
  float v16; // xmm4_4
  float v17; // xmm1_4
  float v18; // xmm3_4
  float v19; // xmm2_4
  float v20; // xmm1_4
  CMILMatrix *v21; // rdx
  float v22; // xmm1_4
  float v23; // xmm0_4
  float v24; // xmm1_4
  float v25; // xmm2_4
  float v26; // xmm1_4
  float v27; // xmm4_4
  float v28; // xmm3_4
  float v29; // xmm1_4
  int v30; // xmm1_4
  int v31; // eax
  unsigned int v32; // ecx
  int BoundsWithLayerEffect; // eax
  unsigned int v35; // ecx
  __int32 v36; // xmm1_4
  float v37; // xmm0_4
  __int32 v38; // xmm1_4
  float v39; // xmm2_4
  float v40; // xmm4_4
  float v41; // xmm3_4
  float v42; // xmm2_4
  float v43; // xmm5_4
  float v44; // xmm3_4
  int v45; // xmm1_4
  int v46; // eax
  unsigned int v47; // ecx
  __int128 v48; // xmm1
  __int128 v49; // xmm0
  __int128 v50; // xmm1
  __int128 v51; // xmm0
  float v52; // xmm0_4
  float v53; // xmm2_4
  float v54; // xmm4_4
  float v55; // xmm1_4
  __int128 v56; // xmm1
  __int128 v57; // xmm0
  __int128 v58; // xmm1
  __int128 v59; // xmm0
  __int128 v60; // xmm0
  int v61; // eax
  unsigned int v62; // ecx
  __m128 v63; // xmm1
  __int128 v64; // [rsp+30h] [rbp-B9h] BYREF
  __int128 v65; // [rsp+40h] [rbp-A9h]
  __int128 v66; // [rsp+50h] [rbp-99h]
  __int128 v67; // [rsp+60h] [rbp-89h]
  int v68; // [rsp+70h] [rbp-79h]
  __m128 v69; // [rsp+80h] [rbp-69h] BYREF
  __int128 v70; // [rsp+90h] [rbp-59h] BYREF
  __int128 v71; // [rsp+A0h] [rbp-49h] BYREF
  int v72; // [rsp+B0h] [rbp-39h]
  int v73; // [rsp+B4h] [rbp-35h]
  __m128 v74; // [rsp+B8h] [rbp-31h] BYREF
  int v75; // [rsp+C8h] [rbp-21h]
  int v76; // [rsp+CCh] [rbp-1Dh]
  __m128 v77; // [rsp+D0h] [rbp-19h] BYREF

  v6 = *((_QWORD *)this + 88) == 0LL;
  v69 = 0LL;
  if ( !v6 )
  {
    v74 = 0LL;
    v70 = 0LL;
    v77 = 0LL;
    ShadowBounds = CLayerVisual::GetShadowBounds(this, &v69);
    v12 = ShadowBounds;
    if ( ShadowBounds < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, ShadowBounds, 0x12Au, 0LL);
      return v12;
    }
    if ( *((_BYTE *)this + 729) )
    {
      v48 = *((_OWORD *)a2 + 1);
      v68 = *((_DWORD *)a2 + 16);
      v71 = 0LL;
      v49 = *(_OWORD *)a2;
      v65 = v48;
      v50 = *((_OWORD *)a2 + 3);
      v64 = v49;
      v51 = *((_OWORD *)a2 + 2);
      v67 = v50;
      v66 = v51;
      if ( (unsigned __int8)CMILMatrix::Get2DBoundsUsing2DInverse(&v64, a3, &v71) )
      {
        v52 = v69.m128_f32[0];
        if ( *(float *)&v71 > v69.m128_f32[0] )
        {
          v69.m128_i32[0] = v71;
          v52 = *(float *)&v71;
        }
        v53 = v69.m128_f32[1];
        if ( *((float *)&v71 + 1) > v69.m128_f32[1] )
        {
          v69.m128_i32[1] = DWORD1(v71);
          v53 = *((float *)&v71 + 1);
        }
        v54 = v69.m128_f32[2];
        if ( v69.m128_f32[2] > *((float *)&v71 + 2) )
        {
          v69.m128_i32[2] = DWORD2(v71);
          v54 = *((float *)&v71 + 2);
        }
        v55 = v69.m128_f32[3];
        if ( v69.m128_f32[3] > *((float *)&v71 + 3) )
        {
          v69.m128_i32[3] = HIDWORD(v71);
          v55 = *((float *)&v71 + 3);
        }
        if ( v54 <= v52 || v55 <= v53 )
          v69 = 0uLL;
      }
      v21 = (CMILMatrix *)&CMILMatrix::Identity;
    }
    else
    {
      CMILMatrix::Transform2DBoundsHelper<1>(a2, (struct MilRectF *)&v69);
      v13 = *(__int32 *)a3;
      v14 = v69.m128_f32[0];
      if ( *(float *)a3 > v69.m128_f32[0] )
      {
        v69.m128_i32[0] = *(_DWORD *)a3;
        v14 = *(float *)&v13;
      }
      v15 = *(float *)(a3 + 4);
      v16 = v69.m128_f32[1];
      if ( v15 > v69.m128_f32[1] )
      {
        v69.m128_i32[1] = *(_DWORD *)(a3 + 4);
        v16 = v15;
      }
      v17 = *(float *)(a3 + 8);
      v18 = v69.m128_f32[2];
      if ( v69.m128_f32[2] > v17 )
      {
        v69.m128_i32[2] = *(_DWORD *)(a3 + 8);
        v18 = v17;
      }
      v19 = *(float *)(a3 + 12);
      v20 = v69.m128_f32[3];
      if ( v69.m128_f32[3] > v19 )
      {
        v69.m128_i32[3] = *(_DWORD *)(a3 + 12);
        v20 = v19;
      }
      if ( v18 <= v14 || v20 <= v16 )
        v69 = 0uLL;
      v21 = a2;
    }
    CLayerVisual::CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds((__int64)this, v21, &v69, &v77, &v74);
    CLayerVisual::GetMaskBounds(this, &v70);
    if ( *((_BYTE *)this + 729) )
    {
      v56 = *((_OWORD *)a2 + 1);
      v68 = *((_DWORD *)a2 + 16);
      v71 = 0LL;
      v57 = *(_OWORD *)a2;
      v65 = v56;
      v58 = *((_OWORD *)a2 + 3);
      v64 = v57;
      v59 = *((_OWORD *)a2 + 2);
      v67 = v58;
      v66 = v59;
      if ( !(unsigned __int8)CMILMatrix::Get2DBoundsUsing2DInverse(&v64, a3, &v71) )
      {
LABEL_27:
        TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(&v77, &v70);
        TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(&v74, &v70);
        if ( CDropShadow::GetMaskForLayerVisualNoRef(*((CDropShadow **)this + 88)) )
        {
          v63 = v74;
          *a5 = v77;
          *a6 = v63;
        }
        else
        {
          v30 = *(_DWORD *)(a3 + 20);
          v74 = v77;
          v75 = *(_DWORD *)(a3 + 16);
          v76 = v30;
          if ( *((_BYTE *)this + 729) )
          {
            v60 = *(_OWORD *)((char *)this + 172);
            v72 = 0;
            v73 = 0;
            v71 = v60;
            v61 = CVisual::CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds(
                    this,
                    (CMILMatrix *)&CMILMatrix::Identity,
                    (__int64)a5,
                    a6);
            v12 = v61;
            if ( v61 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v62, 0LL, 0, v61, 0x192u, 0LL);
          }
          else
          {
            v31 = CVisual::CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds(this, a2, (__int64)a5, a6);
            v12 = v31;
            if ( v31 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v31, 0x19Fu, 0LL);
          }
        }
        return v12;
      }
      v23 = *(float *)&v70;
      if ( *(float *)&v71 > *(float *)&v70 )
      {
        LODWORD(v70) = v71;
        v23 = *(float *)&v71;
      }
      v25 = *((float *)&v70 + 1);
      if ( *((float *)&v71 + 1) > *((float *)&v70 + 1) )
      {
        DWORD1(v70) = DWORD1(v71);
        v25 = *((float *)&v71 + 1);
      }
      v27 = *((float *)&v70 + 2);
      if ( *((float *)&v70 + 2) > *((float *)&v71 + 2) )
      {
        DWORD2(v70) = DWORD2(v71);
        v27 = *((float *)&v71 + 2);
      }
      v28 = *((float *)&v71 + 3);
    }
    else
    {
      CMILMatrix::Transform2DBoundsHelper<1>(a2, (struct MilRectF *)&v70);
      v22 = *(float *)a3;
      v23 = *(float *)&v70;
      if ( *(float *)a3 > *(float *)&v70 )
      {
        LODWORD(v70) = *(_DWORD *)a3;
        v23 = v22;
      }
      v24 = *(float *)(a3 + 4);
      v25 = *((float *)&v70 + 1);
      if ( v24 > *((float *)&v70 + 1) )
      {
        DWORD1(v70) = *(_DWORD *)(a3 + 4);
        v25 = v24;
      }
      v26 = *(float *)(a3 + 8);
      v27 = *((float *)&v70 + 2);
      if ( *((float *)&v70 + 2) > v26 )
      {
        DWORD2(v70) = *(_DWORD *)(a3 + 8);
        v27 = v26;
      }
      v28 = *(float *)(a3 + 12);
    }
    v29 = *((float *)&v70 + 3);
    if ( *((float *)&v70 + 3) > v28 )
    {
      *((float *)&v70 + 3) = v28;
      v29 = v28;
    }
    if ( v27 <= v23 || v29 <= v25 )
      v70 = 0uLL;
    goto LABEL_27;
  }
  BoundsWithLayerEffect = CLayerVisual::GetBoundsWithLayerEffect(this, &v69);
  v12 = BoundsWithLayerEffect;
  if ( BoundsWithLayerEffect < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, BoundsWithLayerEffect, 0x10Eu, 0LL);
  }
  else
  {
    CMILMatrix::Transform2DBoundsHelper<1>(a2, (struct MilRectF *)&v69);
    v36 = *(_DWORD *)a3;
    v37 = v69.m128_f32[0];
    if ( *(float *)a3 > v69.m128_f32[0] )
    {
      v69.m128_i32[0] = *(_DWORD *)a3;
      LODWORD(v37) = v36;
    }
    v38 = v69.m128_i32[1];
    v39 = *(float *)(a3 + 4);
    v40 = v69.m128_f32[1];
    if ( v39 > v69.m128_f32[1] )
    {
      v69.m128_i32[1] = *(_DWORD *)(a3 + 4);
      v38 = LODWORD(v39);
      v40 = v39;
    }
    v41 = *(float *)(a3 + 8);
    v42 = v69.m128_f32[2];
    if ( v69.m128_f32[2] > v41 )
    {
      v69.m128_i32[2] = *(_DWORD *)(a3 + 8);
      v42 = v41;
    }
    v43 = *(float *)(a3 + 12);
    v44 = v69.m128_f32[3];
    if ( v69.m128_f32[3] > v43 )
    {
      v69.m128_i32[3] = *(_DWORD *)(a3 + 12);
      v44 = v43;
    }
    if ( v42 <= v37 || v44 <= v40 )
    {
      v37 = 0.0;
      v38 = 0;
      v42 = 0.0;
      v69 = 0uLL;
      v44 = 0.0;
    }
    v74.m128_u64[0] = __PAIR64__(v38, LODWORD(v37));
    v45 = *(_DWORD *)(a3 + 20);
    v75 = *(_DWORD *)(a3 + 16);
    v76 = v45;
    v74.m128_u64[1] = __PAIR64__(LODWORD(v44), LODWORD(v42));
    v46 = CVisual::CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds(this, a2, (__int64)a5, a6);
    v12 = v46;
    if ( v46 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0, v46, 0x120u, 0LL);
  }
  return v12;
}
