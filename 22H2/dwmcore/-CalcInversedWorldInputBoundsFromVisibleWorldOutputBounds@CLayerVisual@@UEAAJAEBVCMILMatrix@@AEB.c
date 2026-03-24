/*
 * XREFs of ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x180005C60
 * Callers:
 *     <none>
 * Callees:
 *     ?GetShadowBounds@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180005088 (-GetShadowBounds@CLayerVisual@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@.c)
 *     ?Get2DBoundsUsing2DInverse@CMILMatrix@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18000586C (-Get2DBoundsUsing2DInverse@CMILMatrix@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointA.c)
 *     ?GetBoundsWithLayerEffect@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180005E18 (-GetBoundsWithLayerEffect@CLayerVisual@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointA.c)
 *     ?GetFlatteningToLocalSpace@CLayerVisual@@QEBA_NXZ @ 0x180005F74 (-GetFlatteningToLocalSpace@CLayerVisual@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18006C310 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800A7F30 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x1800BF420 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CVisual@@UEAAJAEBVCMILMatrix@@AEBV-$TM.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     ?GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCBrush@@XZ @ 0x1801BEF40 (-GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCBrush@@XZ.c)
 *     ?CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV3@2@Z @ 0x1801D1ED8 (-CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatr.c)
 *     ?GetMaskBounds@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801D2138 (-GetMaskBounds@CLayerVisual@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UN.c)
 */

__int64 __fastcall CLayerVisual::CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds(
        CVisual *this,
        __int128 *a2,
        __int64 a3,
        __int64 a4,
        _OWORD *a5,
        _OWORD *a6)
{
  bool v6; // zf
  int BoundsWithLayerEffect; // eax
  unsigned int v11; // ecx
  unsigned int v12; // ebx
  float v13; // xmm1_4
  float v14; // xmm0_4
  float v15; // xmm1_4
  float v16; // xmm2_4
  float v17; // xmm4_4
  float v18; // xmm3_4
  float v19; // xmm2_4
  float v20; // xmm5_4
  float v21; // xmm3_4
  int v23; // xmm1_4
  int v24; // eax
  unsigned int v25; // ecx
  int ShadowBounds; // eax
  unsigned int v28; // ecx
  float v29; // xmm0_4
  float v30; // xmm1_4
  float v31; // xmm0_4
  float v32; // xmm2_4
  float v33; // xmm0_4
  float v34; // xmm4_4
  float v35; // xmm3_4
  float v36; // xmm0_4
  void *v37; // rdx
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  float v42; // xmm0_4
  float v43; // xmm2_4
  float v44; // xmm4_4
  float v45; // xmm1_4
  float v46; // xmm1_4
  float v47; // xmm0_4
  float v48; // xmm1_4
  float v49; // xmm2_4
  float v50; // xmm1_4
  float v51; // xmm3_4
  float v52; // xmm4_4
  __int128 v53; // xmm1
  __int128 v54; // xmm0
  __int128 v55; // xmm1
  __int128 v56; // xmm0
  float v57; // xmm1_4
  int v58; // xmm1_4
  __int128 v59; // xmm0
  int v60; // eax
  unsigned int v61; // ecx
  int v62; // eax
  unsigned int v63; // ecx
  __int128 v64; // xmm1
  __int128 v65; // [rsp+30h] [rbp-B9h] BYREF
  __int128 v66; // [rsp+40h] [rbp-A9h]
  __int128 v67; // [rsp+50h] [rbp-99h]
  __int128 v68; // [rsp+60h] [rbp-89h]
  int v69; // [rsp+70h] [rbp-79h]
  __int128 v70; // [rsp+80h] [rbp-69h] BYREF
  __int128 v71; // [rsp+90h] [rbp-59h] BYREF
  __int128 v72; // [rsp+A0h] [rbp-49h]
  int v73; // [rsp+B0h] [rbp-39h]
  int v74; // [rsp+B4h] [rbp-35h]
  __int128 v75; // [rsp+B8h] [rbp-31h] BYREF
  int v76; // [rsp+C8h] [rbp-21h]
  int v77; // [rsp+CCh] [rbp-1Dh]
  __int128 v78; // [rsp+D0h] [rbp-19h] BYREF

  v6 = *((_QWORD *)this + 77) == 0LL;
  v70 = 0LL;
  if ( v6 )
  {
    BoundsWithLayerEffect = CLayerVisual::GetBoundsWithLayerEffect(this, &v70);
    v12 = BoundsWithLayerEffect;
    if ( BoundsWithLayerEffect < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, BoundsWithLayerEffect, 0xE5u, 0LL);
    }
    else
    {
      CMILMatrix::Transform2DBoundsHelper<1>(a2, &v70, &v70);
      v13 = *(float *)a3;
      LODWORD(v14) = v70;
      if ( *(float *)a3 > *(float *)&v70 )
      {
        LODWORD(v70) = *(_DWORD *)a3;
        v14 = v13;
      }
      v15 = *((float *)&v70 + 1);
      v16 = *(float *)(a3 + 4);
      v17 = *((float *)&v70 + 1);
      if ( v16 > *((float *)&v70 + 1) )
      {
        DWORD1(v70) = *(_DWORD *)(a3 + 4);
        v15 = v16;
        v17 = v16;
      }
      v18 = *(float *)(a3 + 8);
      v19 = *((float *)&v70 + 2);
      if ( *((float *)&v70 + 2) > v18 )
      {
        DWORD2(v70) = *(_DWORD *)(a3 + 8);
        v19 = v18;
      }
      v20 = *(float *)(a3 + 12);
      v21 = *((float *)&v70 + 3);
      if ( *((float *)&v70 + 3) > v20 )
      {
        HIDWORD(v70) = *(_DWORD *)(a3 + 12);
        v21 = v20;
      }
      if ( v19 <= v14 || v21 <= v17 )
      {
        v14 = 0.0;
        v15 = 0.0;
        v19 = 0.0;
        v70 = 0uLL;
        v21 = 0.0;
      }
      *(_QWORD *)&v75 = __PAIR64__(LODWORD(v15), LODWORD(v14));
      v23 = *(_DWORD *)(a3 + 20);
      v76 = *(_DWORD *)(a3 + 16);
      v77 = v23;
      *((_QWORD *)&v75 + 1) = __PAIR64__(LODWORD(v21), LODWORD(v19));
      v24 = CVisual::CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds(this, (__int64)a5, a6);
      v12 = v24;
      if ( v24 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0xF6u, 0LL);
    }
    return v12;
  }
  v75 = 0LL;
  v71 = 0LL;
  v78 = 0LL;
  ShadowBounds = CLayerVisual::GetShadowBounds(this, &v70);
  v12 = ShadowBounds;
  if ( ShadowBounds < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, ShadowBounds, 0x100u, 0LL);
    return v12;
  }
  if ( CLayerVisual::GetFlatteningToLocalSpace(this) )
  {
    v38 = a2[1];
    v69 = *((_DWORD *)a2 + 16);
    v72 = 0LL;
    v39 = *a2;
    v66 = v38;
    v40 = a2[3];
    v65 = v39;
    v41 = a2[2];
    v68 = v40;
    v67 = v41;
    if ( CMILMatrix::Get2DBoundsUsing2DInverse((CMILMatrix *)&v65, (float *)a3) )
    {
      v42 = *(float *)&v70;
      if ( *(float *)&v72 > *(float *)&v70 )
      {
        LODWORD(v70) = v72;
        v42 = *(float *)&v72;
      }
      v43 = *((float *)&v70 + 1);
      if ( *((float *)&v72 + 1) > *((float *)&v70 + 1) )
      {
        DWORD1(v70) = DWORD1(v72);
        v43 = *((float *)&v72 + 1);
      }
      v44 = *((float *)&v70 + 2);
      if ( *((float *)&v70 + 2) > *((float *)&v72 + 2) )
      {
        DWORD2(v70) = DWORD2(v72);
        v44 = *((float *)&v72 + 2);
      }
      v45 = *((float *)&v70 + 3);
      if ( *((float *)&v70 + 3) > *((float *)&v72 + 3) )
      {
        HIDWORD(v70) = HIDWORD(v72);
        v45 = *((float *)&v72 + 3);
      }
      if ( v44 <= v42 || v45 <= v43 )
        v70 = 0uLL;
    }
    v37 = &CMILMatrix::Identity;
  }
  else
  {
    CMILMatrix::Transform2DBoundsHelper<1>(a2, &v70, &v70);
    v29 = *(float *)a3;
    v30 = *(float *)&v70;
    if ( *(float *)a3 > *(float *)&v70 )
    {
      LODWORD(v70) = *(_DWORD *)a3;
      v30 = v29;
    }
    v31 = *(float *)(a3 + 4);
    v32 = *((float *)&v70 + 1);
    if ( v31 > *((float *)&v70 + 1) )
    {
      DWORD1(v70) = *(_DWORD *)(a3 + 4);
      v32 = v31;
    }
    v33 = *(float *)(a3 + 8);
    v34 = *((float *)&v70 + 2);
    if ( *((float *)&v70 + 2) > v33 )
    {
      DWORD2(v70) = *(_DWORD *)(a3 + 8);
      v34 = v33;
    }
    v35 = *(float *)(a3 + 12);
    v36 = *((float *)&v70 + 3);
    if ( *((float *)&v70 + 3) > v35 )
    {
      HIDWORD(v70) = *(_DWORD *)(a3 + 12);
      v36 = v35;
    }
    if ( v34 <= v30 || v36 <= v32 )
      v70 = 0uLL;
    LODWORD(v37) = (_DWORD)a2;
  }
  CLayerVisual::CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds(
    (_DWORD)this,
    (_DWORD)v37,
    (unsigned int)&v70,
    (unsigned int)&v78,
    (__int64)&v75);
  CLayerVisual::GetMaskBounds(this);
  if ( !CLayerVisual::GetFlatteningToLocalSpace(this) )
  {
    CMILMatrix::Transform2DBoundsHelper<1>(a2, &v71, &v71);
    v46 = *(float *)a3;
    v47 = *(float *)&v71;
    if ( *(float *)a3 > *(float *)&v71 )
    {
      LODWORD(v71) = *(_DWORD *)a3;
      v47 = v46;
    }
    v48 = *(float *)(a3 + 4);
    v49 = *((float *)&v71 + 1);
    if ( v48 > *((float *)&v71 + 1) )
    {
      DWORD1(v71) = *(_DWORD *)(a3 + 4);
      v49 = v48;
    }
    v50 = *(float *)(a3 + 8);
    v51 = *((float *)&v71 + 2);
    if ( *((float *)&v71 + 2) > v50 )
    {
      DWORD2(v71) = *(_DWORD *)(a3 + 8);
      v51 = v50;
    }
    v52 = *(float *)(a3 + 12);
LABEL_64:
    v57 = *((float *)&v71 + 3);
    if ( *((float *)&v71 + 3) > v52 )
    {
      *((float *)&v71 + 3) = v52;
      v57 = v52;
    }
    if ( v51 <= v47 || v57 <= v49 )
      v71 = 0uLL;
    goto LABEL_69;
  }
  v53 = a2[1];
  v69 = *((_DWORD *)a2 + 16);
  v72 = 0LL;
  v54 = *a2;
  v66 = v53;
  v55 = a2[3];
  v65 = v54;
  v56 = a2[2];
  v68 = v55;
  v67 = v56;
  if ( CMILMatrix::Get2DBoundsUsing2DInverse((CMILMatrix *)&v65, (float *)a3) )
  {
    v47 = *(float *)&v71;
    if ( *(float *)&v72 > *(float *)&v71 )
    {
      LODWORD(v71) = v72;
      v47 = *(float *)&v72;
    }
    v49 = *((float *)&v71 + 1);
    if ( *((float *)&v72 + 1) > *((float *)&v71 + 1) )
    {
      DWORD1(v71) = DWORD1(v72);
      v49 = *((float *)&v72 + 1);
    }
    v51 = *((float *)&v71 + 2);
    if ( *((float *)&v71 + 2) > *((float *)&v72 + 2) )
    {
      DWORD2(v71) = DWORD2(v72);
      v51 = *((float *)&v72 + 2);
    }
    v52 = *((float *)&v72 + 3);
    goto LABEL_64;
  }
LABEL_69:
  TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(&v78, &v71);
  TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(&v75, &v71);
  if ( CDropShadow::GetMaskForLayerVisualNoRef(*((CDropShadow **)this + 77)) )
  {
    v64 = v75;
    *a5 = v78;
    *a6 = v64;
  }
  else
  {
    v58 = *(_DWORD *)(a3 + 20);
    v75 = v78;
    v76 = *(_DWORD *)(a3 + 16);
    v77 = v58;
    if ( CLayerVisual::GetFlatteningToLocalSpace(this) )
    {
      v59 = *(_OWORD *)((char *)this + 164);
      v73 = 0;
      v74 = 0;
      v72 = v59;
      v60 = CVisual::CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds(this, (__int64)a5, a6);
      v12 = v60;
      if ( v60 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v61, 0LL, 0, v60, 0x163u, 0LL);
    }
    else
    {
      v62 = CVisual::CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds(this, (__int64)a5, a6);
      v12 = v62;
      if ( v62 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v63, 0LL, 0, v62, 0x16Fu, 0LL);
    }
  }
  return v12;
}
