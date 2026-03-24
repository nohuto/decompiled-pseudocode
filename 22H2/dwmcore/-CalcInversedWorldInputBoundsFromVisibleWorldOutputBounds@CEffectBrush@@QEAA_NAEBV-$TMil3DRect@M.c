/*
 * XREFs of ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CEffectBrush@@QEAA_NAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@AEBVCMILMatrix@@0_NPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@4@Z @ 0x18000567C
 * Callers:
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CTreeEffect@@QEAA_NAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@AEBVCMILMatrix@@0_NPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@4@Z @ 0x180005630 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CTreeEffect@@QEAA_NAEBV-$TMil3DRect@MV.c)
 * Callees:
 *     ?Get2DBoundsUsing2DInverse@CMILMatrix@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18000586C (-Get2DBoundsUsing2DInverse@CMILMatrix@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointA.c)
 *     ?GetSourceInputBounds@CEffectBrush@@AEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@AEAV?$DynArray@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0A@@@@Z @ 0x180005AAC (-GetSourceInputBounds@CEffectBrush@@AEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSi.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180065C00 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800A8340 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800C5554 (-IsInfinite@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CEffectBrush::CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        __int64 a7,
        __int64 a8)
{
  int SourceInputBounds; // eax
  unsigned int v12; // ecx
  int v13; // esi
  int v14; // eax
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  unsigned int v18; // ecx
  int v19; // eax
  unsigned int v20; // ecx
  __int128 v21; // xmm0
  int v22; // xmm2_4
  int v23; // xmm3_4
  __int128 v24; // xmm1
  float v26; // xmm0_4
  float v27; // xmm1_4
  float v28; // xmm0_4
  float v29; // xmm2_4
  float v30; // xmm1_4
  float v31; // xmm0_4
  float v32; // xmm1_4
  float v33; // xmm0_4
  float v34; // xmm2_4
  float v35; // xmm1_4
  __int128 v36; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v37; // [rsp+50h] [rbp-B0h]
  int v38; // [rsp+58h] [rbp-A8h]
  _OWORD v39[4]; // [rsp+60h] [rbp-A0h] BYREF
  int v40; // [rsp+A0h] [rbp-60h]
  __int128 v41; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v42; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v43; // [rsp+D0h] [rbp-30h] BYREF
  int v44; // [rsp+E0h] [rbp-20h]
  int v45; // [rsp+E4h] [rbp-1Ch]
  __int128 v46; // [rsp+E8h] [rbp-18h] BYREF
  int v47; // [rsp+F8h] [rbp-8h]
  int v48; // [rsp+FCh] [rbp-4h]
  __int128 v49; // [rsp+100h] [rbp+0h] BYREF
  int v50; // [rsp+110h] [rbp+10h]
  int v51; // [rsp+114h] [rbp+14h]
  __int128 v52; // [rsp+118h] [rbp+18h] BYREF
  int v53; // [rsp+128h] [rbp+28h]
  int v54; // [rsp+12Ch] [rbp+2Ch]
  __int128 v55; // [rsp+130h] [rbp+30h] BYREF

  if ( *(_QWORD *)(a1 + 104) )
  {
    v50 = 0;
    v51 = 0;
    v53 = 0;
    v54 = 0;
    v36 = 0LL;
    v37 = 0LL;
    v55 = 0LL;
    v38 = 0;
    v41 = 0LL;
    v42 = 0LL;
    v49 = 0LL;
    v52 = 0LL;
    SourceInputBounds = CEffectBrush::GetSourceInputBounds(a1, a2, a3, &v36);
    v13 = SourceInputBounds;
    if ( SourceInputBounds < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, SourceInputBounds, 0x2ACu, 0LL);
    }
    else
    {
      v14 = *(_DWORD *)(a4 + 64);
      v15 = *(_OWORD *)(a4 + 16);
      v39[0] = *(_OWORD *)a4;
      v16 = *(_OWORD *)(a4 + 32);
      v40 = v14;
      v39[1] = v15;
      v17 = *(_OWORD *)(a4 + 48);
      v39[2] = v16;
      v39[3] = v17;
      if ( !(unsigned __int8)CMILMatrix::Get2DBoundsUsing2DInverse(v39, a5, &v55) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, -2147024809, 0x2BEu, 0LL);
        DynArrayImpl<0>::~DynArrayImpl<0>(&v36);
        return 0;
      }
      v19 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, __int64, _QWORD, int, __int128 *, __int128 *))(**(_QWORD **)(a1 + 104) + 96LL))(
              *(_QWORD *)(a1 + 104),
              &v55,
              a2,
              v36,
              v38,
              &v41,
              &v42);
      v13 = v19;
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x2BAu, 0LL);
      }
      else
      {
        v21 = v41;
        if ( a6 )
        {
          v24 = v42;
        }
        else
        {
          v22 = *(_DWORD *)(a2 + 16);
          v23 = *(_DWORD *)(a2 + 20);
          v43 = v41;
          v44 = v22;
          v46 = v42;
          v45 = v23;
          v47 = v22;
          v48 = v23;
          CMILMatrix::Transform3DBoundsHelper<1>(a4, &v43, &v49);
          CMILMatrix::Transform3DBoundsHelper<1>(a4, &v46, &v52);
          v21 = v49;
          v24 = v52;
        }
        *(_OWORD *)a7 = v21;
        *(_OWORD *)a8 = v24;
        if ( (unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsInfinite(a7) )
        {
          if ( *(float *)a5 > *(float *)a7 )
            *(_DWORD *)a7 = *(_DWORD *)a5;
          v26 = *(float *)(a5 + 4);
          if ( v26 > *(float *)(a7 + 4) )
            *(float *)(a7 + 4) = v26;
          v27 = *(float *)(a5 + 8);
          v28 = *(float *)(a7 + 8);
          if ( v28 > v27 )
          {
            *(float *)(a7 + 8) = v27;
            v28 = v27;
          }
          v29 = *(float *)(a5 + 12);
          v30 = *(float *)(a7 + 12);
          if ( v30 > v29 )
          {
            *(float *)(a7 + 12) = v29;
            v30 = v29;
            v28 = *(float *)(a7 + 8);
          }
          if ( v28 <= *(float *)a7 || v30 <= *(float *)(a7 + 4) )
          {
            *(_QWORD *)(a7 + 8) = 0LL;
            *(_QWORD *)a7 = 0LL;
          }
        }
        if ( (unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsInfinite(a8) )
        {
          if ( *(float *)a5 > *(float *)a8 )
            *(_DWORD *)a8 = *(_DWORD *)a5;
          v31 = *(float *)(a5 + 4);
          if ( v31 > *(float *)(a8 + 4) )
            *(float *)(a8 + 4) = v31;
          v32 = *(float *)(a5 + 8);
          v33 = *(float *)(a8 + 8);
          if ( v33 > v32 )
          {
            *(float *)(a8 + 8) = v32;
            v33 = v32;
          }
          v34 = *(float *)(a5 + 12);
          v35 = *(float *)(a8 + 12);
          if ( v35 > v34 )
          {
            *(float *)(a8 + 12) = v34;
            v35 = v34;
            v33 = *(float *)(a8 + 8);
          }
          if ( v33 <= *(float *)a8 || v35 <= *(float *)(a8 + 4) )
          {
            *(_QWORD *)(a8 + 8) = 0LL;
            *(_QWORD *)a8 = 0LL;
          }
        }
      }
    }
    DynArrayImpl<0>::~DynArrayImpl<0>(&v36);
  }
  else
  {
    v13 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147024809, 0x2EBu, 0LL);
  }
  return v13 >= 0;
}
