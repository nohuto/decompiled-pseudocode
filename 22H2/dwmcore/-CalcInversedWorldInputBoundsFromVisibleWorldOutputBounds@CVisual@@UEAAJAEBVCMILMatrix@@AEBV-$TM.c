/*
 * XREFs of ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x1800BF420
 * Callers:
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x180005C60 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEB.c)
 * Callees:
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CTreeEffect@@QEAA_NAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@AEBVCMILMatrix@@0_NPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@4@Z @ 0x180005630 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CTreeEffect@@QEAA_NAEBV-$TMil3DRect@MV.c)
 *     ?Get2DBoundsUsing2DInverse@CMILMatrix@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18000586C (-Get2DBoundsUsing2DInverse@CMILMatrix@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointA.c)
 *     ?GetAutomaticBoundsExpansion@CLayerVisual@@QEBA_NXZ @ 0x180005F44 (-GetAutomaticBoundsExpansion@CLayerVisual@@QEBA_NXZ.c)
 *     ?GetFlatteningToLocalSpace@CLayerVisual@@QEBA_NXZ @ 0x180005F74 (-GetFlatteningToLocalSpace@CLayerVisual@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x1800A0088 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800A8340 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3.c)
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x1800BF5F8 (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?GetSourceInputBoundsUnion@CEffectBrush@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@PEAV2@@Z @ 0x1801BFB10 (-GetSourceInputBoundsUnion@CEffectBrush@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoint.c)
 */

__int64 __fastcall CVisual::CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds(
        CLayerVisual *this,
        __int64 a2,
        float *a3,
        __int64 a4,
        __int128 *a5,
        __int128 *a6)
{
  _DWORD *v6; // rax
  unsigned int v7; // r12d
  __int128 v11; // xmm1
  struct CEffect *EffectInternal; // r13
  int v14; // eax
  __int64 v15; // rcx
  char v16; // r9
  __int64 (*v17)(void); // rax
  char FlatteningToLocalSpace; // al
  __int64 *v19; // r15
  __int64 v20; // rcx
  __int128 v21; // xmm6
  void (__fastcall *v22)(CLayerVisual *, __int128 *, __int128 *); // rax
  __int128 v23; // xmm0
  int v24; // xmm2_4
  int v25; // xmm3_4
  int v26; // eax
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int64 v30; // [rsp+28h] [rbp-E0h]
  float v31[2]; // [rsp+48h] [rbp-C0h] BYREF
  _OWORD v32[4]; // [rsp+58h] [rbp-B0h] BYREF
  int v33; // [rsp+98h] [rbp-70h]
  __int128 v34; // [rsp+A8h] [rbp-60h] BYREF
  int v35; // [rsp+B8h] [rbp-50h]
  int v36; // [rsp+BCh] [rbp-4Ch]
  __int128 v37; // [rsp+C0h] [rbp-48h] BYREF
  __int128 v38; // [rsp+D0h] [rbp-38h] BYREF
  int v39; // [rsp+E0h] [rbp-28h]
  int v40; // [rsp+E4h] [rbp-24h]
  __int128 v41; // [rsp+E8h] [rbp-20h] BYREF
  int v42; // [rsp+F8h] [rbp-10h]
  int v43; // [rsp+FCh] [rbp-Ch]
  __int128 v44; // [rsp+100h] [rbp-8h] BYREF
  int v45; // [rsp+110h] [rbp+8h]
  int v46; // [rsp+114h] [rbp+Ch]

  v6 = (_DWORD *)*((_QWORD *)this + 28);
  v7 = 0;
  *(_QWORD *)&v37 = a4;
  if ( (*v6 & 0x400000) == 0
    || (EffectInternal = CVisual::GetEffectInternal(this),
        !(*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 56LL))(
           EffectInternal,
           59LL)) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(CLayerVisual *))(*(_QWORD *)this + 232LL))(this) )
    {
      CLayerVisual::GetAutomaticBoundsExpansion(this);
      if ( CVisual::GetEffectiveSize(this, v31, (float *)&v37) || v16 )
      {
        v17 = *(__int64 (**)(void))(*(_QWORD *)this + 240LL);
        LODWORD(v31[1]) = v37;
        *(_QWORD *)&v37 = v17();
        FlatteningToLocalSpace = CLayerVisual::GetFlatteningToLocalSpace(this);
        v30 = (__int64)a3;
        v19 = (__int64 *)v37;
        if ( (unsigned __int8)CTreeEffect::CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds(
                                (_QWORD *)v37,
                                (int)this + 164,
                                (int)v31,
                                a2,
                                v30,
                                FlatteningToLocalSpace,
                                (__int64)a5,
                                (__int64)a6) )
          return v7;
        v20 = *v19;
        v21 = 0LL;
        v34 = 0LL;
        if ( v20 )
        {
          CEffectBrush::GetSourceInputBoundsUnion(v20, (char *)this + 164, v31, &v34);
          v21 = v34;
        }
        v22 = *(void (__fastcall **)(CLayerVisual *, __int128 *, __int128 *))(*(_QWORD *)this + 320LL);
        v37 = *(_OWORD *)((char *)this + 164);
        v22(this, &v37, &v37);
        if ( CLayerVisual::GetFlatteningToLocalSpace(this) )
        {
          v23 = v37;
          *a5 = v21;
          goto LABEL_22;
        }
        v42 = 0;
        v24 = *((_DWORD *)this + 45);
        v25 = *((_DWORD *)this + 46);
        v43 = 0;
        v45 = 0;
        v46 = 0;
        v38 = v34;
        v39 = v24;
        v34 = v37;
        v40 = v25;
        v41 = 0LL;
        v35 = v24;
        v36 = v25;
        v44 = 0LL;
        CMILMatrix::Transform3DBoundsHelper<1>(a2, (float *)&v38, (__m128 *)&v41);
        CMILMatrix::Transform3DBoundsHelper<1>(a2, (float *)&v34, (__m128 *)&v44);
        v11 = v44;
        *a5 = v41;
      }
      else
      {
        *a5 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
        v11 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
        v34 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
      }
    }
    else
    {
      if ( (*(unsigned __int8 (__fastcall **)(CLayerVisual *, __int64))(*(_QWORD *)this + 56LL))(this, 91LL)
        && CLayerVisual::GetFlatteningToLocalSpace(this) )
      {
        v26 = *(_DWORD *)(a2 + 64);
        v27 = *(_OWORD *)(a2 + 16);
        v32[0] = *(_OWORD *)a2;
        v28 = *(_OWORD *)(a2 + 32);
        v33 = v26;
        v32[1] = v27;
        v29 = *(_OWORD *)(a2 + 48);
        v32[2] = v28;
        v34 = 0LL;
        v32[3] = v29;
        if ( !CMILMatrix::Get2DBoundsUsing2DInverse((CMILMatrix *)v32, a3) )
        {
          *a5 = *(_OWORD *)((char *)this + 164);
          v11 = *(_OWORD *)((char *)this + 140);
          goto LABEL_5;
        }
        v23 = v34;
        *a5 = v34;
LABEL_22:
        *a6 = v23;
        return v7;
      }
      *a5 = *(_OWORD *)a3;
      v11 = *(_OWORD *)a3;
    }
LABEL_5:
    *a6 = v11;
    return v7;
  }
  v14 = (*(__int64 (__fastcall **)(struct CEffect *, __int64, float *, _QWORD, __int128 *, __int128 *))(*(_QWORD *)EffectInternal + 248LL))(
          EffectInternal,
          a2,
          a3,
          v37,
          a5,
          a6);
  v7 = v14;
  if ( v14 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0xEE3u, 0LL);
  return v7;
}
