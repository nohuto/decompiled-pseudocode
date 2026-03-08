/*
 * XREFs of ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CEffectBrush@@QEAA_NAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@AEBVCMILMatrix@@0_NPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@4@Z @ 0x180227CEC
 * Callers:
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CTreeEffect@@QEAA_NAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@AEBVCMILMatrix@@0_NPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@4@Z @ 0x180258C60 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CTreeEffect@@QEAA_NAEBV-$TMil3DRect@MV.c)
 * Callees:
 *     ?Get2DBoundsUsing2DInverse@CMILMatrix@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180008844 (-Get2DBoundsUsing2DInverse@CMILMatrix@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointA.c)
 *     ?GetSourceInputBounds@CEffectBrush@@AEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@AEAV?$DynArray@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0A@@@@Z @ 0x18001BFDC (-GetSourceInputBounds@CEffectBrush@@AEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSi.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004C70C (-IsInfinite@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x18006D880 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180097680 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CEffectBrush::CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        float *a5,
        char a6,
        float *a7,
        float *a8)
{
  int SourceInputBounds; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  int v19; // xmm2_4
  int v20; // xmm3_4
  float v21; // xmm0_4
  float v22; // xmm1_4
  float v23; // xmm0_4
  float v24; // xmm2_4
  float v25; // xmm0_4
  float v26; // xmm3_4
  float v27; // xmm4_4
  float v28; // xmm0_4
  float v29; // xmm0_4
  float v30; // xmm1_4
  float v31; // xmm0_4
  float v32; // xmm2_4
  float v33; // xmm0_4
  float v34; // xmm3_4
  float v35; // xmm4_4
  float v36; // xmm0_4
  int v38; // r9d
  unsigned int v39; // [rsp+20h] [rbp-E0h]
  __int128 v40; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v41; // [rsp+50h] [rbp-B0h]
  int v42; // [rsp+58h] [rbp-A8h]
  _OWORD v43[4]; // [rsp+60h] [rbp-A0h] BYREF
  int v44; // [rsp+A0h] [rbp-60h]
  __int128 v45; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v46; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v47; // [rsp+D0h] [rbp-30h] BYREF
  int v48; // [rsp+E0h] [rbp-20h]
  int v49; // [rsp+E4h] [rbp-1Ch]
  __int128 v50; // [rsp+E8h] [rbp-18h] BYREF
  int v51; // [rsp+F8h] [rbp-8h]
  int v52; // [rsp+FCh] [rbp-4h]
  __int128 v53; // [rsp+100h] [rbp+0h] BYREF
  int v54; // [rsp+110h] [rbp+10h]
  int v55; // [rsp+114h] [rbp+14h]
  __int128 v56; // [rsp+118h] [rbp+18h] BYREF
  int v57; // [rsp+128h] [rbp+28h]
  int v58; // [rsp+12Ch] [rbp+2Ch]
  __int128 v59; // [rsp+130h] [rbp+30h] BYREF

  if ( !*(_QWORD *)(a1 + 112) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147024809, 0x32Eu, 0LL);
    return 0;
  }
  v48 = 0;
  v49 = 0;
  v51 = 0;
  v52 = 0;
  v54 = 0;
  v55 = 0;
  v57 = 0;
  v58 = 0;
  v40 = 0LL;
  v41 = 0LL;
  v59 = 0LL;
  v42 = 0;
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v50 = 0LL;
  v53 = 0LL;
  v56 = 0LL;
  SourceInputBounds = CEffectBrush::GetSourceInputBounds(a1, (_OWORD *)a2, a3, (__int64)&v40);
  if ( SourceInputBounds < 0 )
  {
    v39 = 751;
    goto LABEL_37;
  }
  v13 = *(_DWORD *)(a4 + 64);
  v14 = *(_OWORD *)(a4 + 16);
  v43[0] = *(_OWORD *)a4;
  v15 = *(_OWORD *)(a4 + 32);
  v44 = v13;
  v43[1] = v14;
  v16 = *(_OWORD *)(a4 + 48);
  v43[2] = v15;
  v43[3] = v16;
  if ( !CMILMatrix::Get2DBoundsUsing2DInverse((CMILMatrix *)v43, a5) )
  {
    v38 = -2147024809;
    v39 = 769;
LABEL_35:
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v38, v39, 0LL);
    DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v40);
    return 0;
  }
  SourceInputBounds = (*(__int64 (__fastcall **)(_QWORD, __int128 *, __int64, _QWORD, int, __int128 *, __int128 *))(**(_QWORD **)(a1 + 112) + 96LL))(
                        *(_QWORD *)(a1 + 112),
                        &v59,
                        a2,
                        v40,
                        v42,
                        &v45,
                        &v46);
  if ( SourceInputBounds < 0 )
  {
    v39 = 765;
LABEL_37:
    v38 = SourceInputBounds;
    goto LABEL_35;
  }
  v17 = v45;
  if ( a6 )
  {
    v18 = v46;
  }
  else
  {
    v19 = *(_DWORD *)(a2 + 16);
    v20 = *(_DWORD *)(a2 + 20);
    v47 = v45;
    v48 = v19;
    v50 = v46;
    v49 = v20;
    v51 = v19;
    v52 = v20;
    CMILMatrix::Transform3DBoundsHelper<1>((CMILMatrix *)a4, (float *)&v47, (float *)&v53);
    CMILMatrix::Transform3DBoundsHelper<1>((CMILMatrix *)a4, (float *)&v50, (float *)&v56);
    v17 = v53;
    v18 = v56;
  }
  *(_OWORD *)a7 = v17;
  *(_OWORD *)a8 = v18;
  if ( TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsInfinite(a7) )
  {
    v21 = *a5;
    v22 = *a7;
    if ( *a5 > *a7 )
    {
      *a7 = v21;
      v22 = v21;
    }
    v23 = a5[1];
    v24 = a7[1];
    if ( v23 > v24 )
    {
      a7[1] = v23;
      v24 = v23;
    }
    v25 = a5[2];
    v26 = a7[2];
    if ( v26 > v25 )
    {
      a7[2] = v25;
      v26 = v25;
    }
    v27 = a5[3];
    v28 = a7[3];
    if ( v28 > v27 )
    {
      a7[3] = v27;
      v28 = v27;
    }
    if ( v26 <= v22 || v28 <= v24 )
    {
      *((_QWORD *)a7 + 1) = 0LL;
      *(_QWORD *)a7 = 0LL;
    }
  }
  if ( TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsInfinite(a8) )
  {
    v29 = *a5;
    v30 = *a8;
    if ( *a5 > *a8 )
    {
      *a8 = v29;
      v30 = v29;
    }
    v31 = a5[1];
    v32 = a8[1];
    if ( v31 > v32 )
    {
      a8[1] = v31;
      v32 = v31;
    }
    v33 = a5[2];
    v34 = a8[2];
    if ( v34 > v33 )
    {
      a8[2] = v33;
      v34 = v33;
    }
    v35 = a5[3];
    v36 = a8[3];
    if ( v36 > v35 )
    {
      a8[3] = v35;
      v36 = v35;
    }
    if ( v34 <= v30 || v36 <= v32 )
    {
      *((_QWORD *)a8 + 1) = 0LL;
      *(_QWORD *)a8 = 0LL;
    }
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v40);
  return 1;
}
