/*
 * XREFs of ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x1800C2FB0
 * Callers:
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x180007F00 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEB.c)
 * Callees:
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x180008350 (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 *     ?Get2DBoundsUsing2DInverse@CMILMatrix@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180008844 (-Get2DBoundsUsing2DInverse@CMILMatrix@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointA.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x18006D880 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x1800C31F4 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetSourceInputBoundsUnion@CEffectBrush@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@PEAV2@@Z @ 0x180228090 (-GetSourceInputBoundsUnion@CEffectBrush@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoint.c)
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CTreeEffect@@QEAA_NAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@AEBVCMILMatrix@@0_NPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@4@Z @ 0x180258C60 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CTreeEffect@@QEAA_NAEBV-$TMil3DRect@MV.c)
 */

__int64 __fastcall CVisual::CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds(
        CVisual *this,
        CMILMatrix *a2,
        float *a3,
        __int64 a4,
        _OWORD *a5,
        _OWORD *a6)
{
  _DWORD *v6; // rax
  unsigned int v7; // r12d
  __int128 v11; // xmm1
  struct CEffect *EffectInternal; // r13
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int128 v18; // xmm6
  __int64 v19; // rax
  __int128 v20; // xmm0
  int v21; // xmm2_4
  int v22; // xmm3_4
  int v23; // eax
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  char v27; // [rsp+30h] [rbp-D8h]
  float v28[2]; // [rsp+48h] [rbp-C0h] BYREF
  _OWORD v29[4]; // [rsp+58h] [rbp-B0h] BYREF
  int v30; // [rsp+98h] [rbp-70h]
  __int128 v31; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v32; // [rsp+B8h] [rbp-50h] BYREF
  int v33; // [rsp+C8h] [rbp-40h]
  int v34; // [rsp+CCh] [rbp-3Ch]
  __int128 v35; // [rsp+D0h] [rbp-38h] BYREF
  int v36; // [rsp+E0h] [rbp-28h]
  int v37; // [rsp+E4h] [rbp-24h]
  __int128 v38; // [rsp+E8h] [rbp-20h] BYREF
  int v39; // [rsp+F8h] [rbp-10h]
  int v40; // [rsp+FCh] [rbp-Ch]
  __int128 v41; // [rsp+100h] [rbp-8h] BYREF
  int v42; // [rsp+110h] [rbp+8h]
  int v43; // [rsp+114h] [rbp+Ch]

  v6 = (_DWORD *)*((_QWORD *)this + 29);
  v7 = 0;
  *(_QWORD *)&v31 = a4;
  if ( (*v6 & 0x400000) == 0
    || (EffectInternal = CVisual::GetEffectInternal(this),
        !(*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 56LL))(
           EffectInternal,
           61LL)) )
  {
    if ( (*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)this + 216LL))(this) )
    {
      if ( !CVisual::GetEffectiveSize(this, v28, (float *)&v31) && !*((_BYTE *)this + 728) )
      {
        *a5 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
        *a6 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
        return v7;
      }
      v16 = *(_QWORD *)this;
      LODWORD(v28[1]) = v31;
      v17 = (*(__int64 (**)(void))(v16 + 216))();
      v27 = *((_BYTE *)this + 729) != 0;
      *(_QWORD *)&v31 = v17;
      if ( (unsigned __int8)CTreeEffect::CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds(
                              v17,
                              (int)this + 172,
                              (unsigned int)v28,
                              (_DWORD)a2,
                              (__int64)a3,
                              v27,
                              (__int64)a5,
                              (__int64)a6) )
        return v7;
      v18 = 0LL;
      v32 = 0LL;
      if ( *(_QWORD *)v31 )
      {
        CEffectBrush::GetSourceInputBoundsUnion(*(_QWORD *)v31, (char *)this + 172, v28, &v32);
        v18 = v32;
      }
      v19 = *(_QWORD *)this;
      v31 = *(_OWORD *)((char *)this + 172);
      (*(void (__fastcall **)(CVisual *, __int128 *, __int128 *))(v19 + 304))(this, &v31, &v31);
      if ( *((_BYTE *)this + 729) )
      {
        v20 = v31;
        *a5 = v18;
        goto LABEL_22;
      }
      v39 = 0;
      v21 = *((_DWORD *)this + 47);
      v22 = *((_DWORD *)this + 48);
      v40 = 0;
      v42 = 0;
      v43 = 0;
      v35 = v32;
      v36 = v21;
      v32 = v31;
      v37 = v22;
      v38 = 0LL;
      v33 = v21;
      v34 = v22;
      v41 = 0LL;
      CMILMatrix::Transform3DBoundsHelper<1>(a2, (float *)&v35, (float *)&v38);
      CMILMatrix::Transform3DBoundsHelper<1>(a2, (float *)&v32, (float *)&v41);
      v11 = v41;
      *a5 = v38;
    }
    else
    {
      if ( (*(unsigned __int8 (__fastcall **)(CVisual *, __int64))(*(_QWORD *)this + 56LL))(this, 93LL)
        && *((_BYTE *)this + 729) )
      {
        v23 = *((_DWORD *)a2 + 16);
        v24 = *((_OWORD *)a2 + 1);
        v29[0] = *(_OWORD *)a2;
        v25 = *((_OWORD *)a2 + 2);
        v30 = v23;
        v29[1] = v24;
        v26 = *((_OWORD *)a2 + 3);
        v29[2] = v25;
        v32 = 0LL;
        v29[3] = v26;
        if ( !CMILMatrix::Get2DBoundsUsing2DInverse((CMILMatrix *)v29, a3) )
        {
          *a5 = *(_OWORD *)((char *)this + 172);
          v11 = *(_OWORD *)((char *)this + 148);
          goto LABEL_5;
        }
        v20 = v32;
        *a5 = v32;
LABEL_22:
        *a6 = v20;
        return v7;
      }
      *a5 = *(_OWORD *)a3;
      v11 = *(_OWORD *)a3;
    }
LABEL_5:
    *a6 = v11;
    return v7;
  }
  v14 = (*(__int64 (__fastcall **)(struct CEffect *, CMILMatrix *, float *, _QWORD, _OWORD *, _OWORD *))(*(_QWORD *)EffectInternal + 232LL))(
          EffectInternal,
          a2,
          a3,
          v31,
          a5,
          a6);
  v7 = v14;
  if ( v14 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0xEB1u, 0LL);
  return v7;
}
