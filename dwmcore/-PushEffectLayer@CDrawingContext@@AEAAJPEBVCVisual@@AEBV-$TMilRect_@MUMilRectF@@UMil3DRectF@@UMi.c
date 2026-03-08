/*
 * XREFs of ?PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@11PEAVCResource@@PEA_N@Z @ 0x18000E12C
 * Callers:
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x1800608A8 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UM.c)
 * Callees:
 *     ?Create@CTreeEffectLayer@@SAJPEAVIDeviceTarget@@AEBUMilPointAndSizeL@@PEAVCEffectBrush@@PEBVCVisual@@AEBUMilPointAndSizeF@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAV1@@Z @ 0x18000E370 (-Create@CTreeEffectLayer@@SAJPEAVIDeviceTarget@@AEBUMilPointAndSizeL@@PEAVCEffectBrush@@PEBVCVis.c)
 *     ?GetLayerPointAndSize@CTreeEffectLayer@@SA?AUMilPointAndSizeL@@PEBVCEffectBrush@@AEBU2@AEBUMilPointAndSizeF@@@Z @ 0x18000E6AC (-GetLayerPointAndSize@CTreeEffectLayer@@SA-AUMilPointAndSizeL@@PEBVCEffectBrush@@AEBU2@AEBUMilPo.c)
 *     ?RoundOffLayerSize@CTreeEffectLayer@@SA?AUMilPointAndSizeL@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000E6E4 (-RoundOffLayerSize@CTreeEffectLayer@@SA-AUMilPointAndSizeL@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRe.c)
 *     ?IsSurfaceSizeValid@CDrawingContext@@AEBA_NII@Z @ 0x1800117D8 (-IsSurfaceSizeValid@CDrawingContext@@AEBA_NII@Z.c)
 *     ??_ECTreeEffectLayer@@UEAAPEAXI@Z @ 0x18001D320 (--_ECTreeEffectLayer@@UEAAPEAXI@Z.c)
 *     ?Push@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@CDrawingContext@@@Z @ 0x18005B424 (-Push@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@.c)
 *     ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x18007EBC8 (-PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_ECFilterEffectLayer@@UEAAPEAXI@Z @ 0x1801CFF20 (--_ECFilterEffectLayer@@UEAAPEAXI@Z.c)
 *     ?Create@CFilterEffectLayer@@SAJPEAVIDeviceTarget@@AEBUMilPointAndSizeL@@PEAVCFilterEffect@@PEBVCVisual@@AEBUMilPointAndSizeF@@PEAPEAV1@@Z @ 0x1801F1000 (-Create@CFilterEffectLayer@@SAJPEAVIDeviceTarget@@AEBUMilPointAndSizeL@@PEAVCFilterEffect@@PEBVC.c)
 */

__int64 __fastcall CDrawingContext::PushEffectLayer(
        struct IDeviceTarget **this,
        struct CVisual *a2,
        __int64 a3,
        __int64 a4,
        void *a5,
        struct CFilterEffect *a6,
        char *a7)
{
  CFilterEffectLayer *v9; // r15
  struct CLayer *v10; // rsi
  char v11; // r13
  __int128 *v12; // rax
  float *v13; // r10
  float v14; // xmm3_4
  __int128 v15; // xmm0
  int v16; // eax
  float v17; // xmm4_4
  int v18; // eax
  __m128 v19; // xmm1
  float v20; // xmm0_4
  int v21; // eax
  __m128 v22; // xmm3
  __m128 v23; // xmm0
  __m128i v24; // xmm0
  int v25; // eax
  unsigned int v26; // ecx
  unsigned int v27; // ebx
  __m128 v29; // xmm2
  __m128 v30; // rt1
  __m128 v31; // xmm2
  __m128 v32; // rt1
  int v33; // eax
  unsigned int v34; // ecx
  unsigned int v35; // ecx
  int v36; // eax
  unsigned int v37; // ecx
  unsigned int v38; // [rsp+20h] [rbp-71h]
  float v39; // [rsp+40h] [rbp-51h]
  float v40; // [rsp+40h] [rbp-51h]
  struct CLayer *v41; // [rsp+48h] [rbp-49h] BYREF
  unsigned int v42[4]; // [rsp+50h] [rbp-41h] BYREF
  struct CLayer *v43[2]; // [rsp+60h] [rbp-31h] BYREF
  void *v44; // [rsp+70h] [rbp-21h]
  char *v45; // [rsp+78h] [rbp-19h]
  float v46[2]; // [rsp+80h] [rbp-11h] BYREF
  struct CVisual *v47; // [rsp+88h] [rbp-9h]

  v44 = a5;
  v9 = 0LL;
  v10 = 0LL;
  v45 = a7;
  v43[0] = 0LL;
  v41 = 0LL;
  v11 = 0;
  v12 = (__int128 *)CTreeEffectLayer::RoundOffLayerSize(v46, a3);
  v14 = *v13;
  v15 = *v12;
  LODWORD(v12) = *(_DWORD *)v13 & 0x7FFFFFFF;
  *(_OWORD *)v42 = v15;
  if ( (unsigned int)v12 > 0x497FFFF0 )
  {
    v29 = 0LL;
    v29.m128_f32[0] = (float)(int)v14 - v14;
    v30.m128_f32[0] = FLOAT_N0_5;
    v16 = (int)v14 - _mm_cmple_ss(v29, v30).m128_u32[0];
  }
  else
  {
    v39 = v14 + 6291456.25;
    v16 = (int)(LODWORD(v39) << 10) >> 11;
  }
  v17 = v13[1];
  v46[0] = (float)v16;
  if ( (LODWORD(v17) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v31 = 0LL;
    v31.m128_f32[0] = (float)(int)v17 - v17;
    v32.m128_f32[0] = FLOAT_N0_5;
    v18 = (int)v17 - _mm_cmple_ss(v31, v32).m128_u32[0];
  }
  else
  {
    v40 = v17 + 6291456.25;
    v18 = (int)(LODWORD(v40) << 10) >> 11;
  }
  v19.m128_f32[0] = v13[2] - v14;
  v20 = (float)v18;
  v21 = (int)v19.m128_f32[0];
  v46[1] = v20;
  v22 = 0LL;
  v23 = 0LL;
  v23.m128_f32[0] = (float)(int)v19.m128_f32[0];
  v23.m128_i32[0] = _mm_cmplt_ss(v23, v19).m128_u32[0];
  v19.m128_f32[0] = v13[3] - v17;
  *(float *)&v47 = (float)(v21 - v23.m128_i32[0]);
  v22.m128_f32[0] = (float)(int)v19.m128_f32[0];
  *((float *)&v47 + 1) = (float)(int)((int)v19.m128_f32[0] - _mm_cmplt_ss(v22, v19).m128_u32[0]);
  if ( (int)v42[2] <= 0 || (int)v42[3] <= 0 )
  {
    LODWORD(v46[0]) = 7;
    v47 = a2;
    v11 = 1;
    v25 = CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Push(this + 46, v46);
    v27 = v25;
    if ( v25 >= 0 )
      goto LABEL_12;
    v38 = 3763;
LABEL_39:
    MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, v38, 0LL);
    goto LABEL_13;
  }
  if ( a6 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(struct CFilterEffect *, __int64))(*(_QWORD *)a6 + 56LL))(a6, 61LL) )
    {
      if ( CDrawingContext::IsSurfaceSizeValid((CDrawingContext *)this, v42[2], v42[3]) )
      {
        v33 = CFilterEffectLayer::Create(
                this[4],
                (const struct MilPointAndSizeL *)v42,
                a6,
                a2,
                (const struct MilPointAndSizeF *)v46,
                v43);
        v27 = v33;
        if ( v33 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v33, 0xEC8u, 0LL);
          v9 = v43[0];
          goto LABEL_13;
        }
        v9 = v43[0];
        v25 = CDrawingContext::PushLayer((CDrawingContext *)this, a2, v43[0], 1, 1);
        v27 = v25;
        if ( v25 >= 0 )
        {
          v9 = 0LL;
          goto LABEL_12;
        }
        v38 = 3790;
      }
      else
      {
        LODWORD(v46[0]) = 7;
        v47 = a2;
        v25 = CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Push(this + 46, v46);
        v27 = v25;
        if ( v25 >= 0 )
          goto LABEL_12;
        v38 = 3773;
      }
      goto LABEL_39;
    }
    if ( !(*(unsigned __int8 (__fastcall **)(struct CFilterEffect *, __int64))(*(_QWORD *)a6 + 56LL))(a6, 57LL) )
    {
      v27 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, -2147024809, 0xF00u, 0LL);
      goto LABEL_13;
    }
  }
  v24 = _mm_srli_si128(*(__m128i *)CTreeEffectLayer::GetLayerPointAndSize(v43, a6, v42, v46), 8);
  if ( !CDrawingContext::IsSurfaceSizeValid((CDrawingContext *)this, _mm_cvtsi128_si32(v24), v24.m128i_u32[1]) )
  {
    LODWORD(v46[0]) = 7;
    v47 = a2;
    v25 = CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Push(this + 46, v46);
    v27 = v25;
    if ( v25 >= 0 )
      goto LABEL_12;
    v38 = 3806;
    goto LABEL_39;
  }
  if ( (int)CTreeEffectLayer::Create(
              (unsigned int)this[4],
              (unsigned int)v42,
              (_DWORD)a6,
              (_DWORD)a2,
              (__int64)v46,
              (__int64)v44,
              (__int64)&v41) >= 0 )
  {
    v10 = v41;
    v25 = CDrawingContext::PushLayer((CDrawingContext *)this, a2, v41, 1, 1);
    v27 = v25;
    if ( v25 >= 0 )
    {
      v10 = 0LL;
LABEL_12:
      *v45 = v11;
      goto LABEL_13;
    }
    v38 = 3830;
    goto LABEL_39;
  }
  LODWORD(v46[0]) = 7;
  v47 = a2;
  v36 = CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Push(this + 46, v46);
  v27 = v36;
  if ( v36 >= 0 )
  {
    v10 = v41;
    v27 = 0;
    goto LABEL_12;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v36, 0xEEDu, 0LL);
  v10 = v41;
LABEL_13:
  if ( v9 )
    CFilterEffectLayer::`vector deleting destructor'(v9, 1u);
  if ( v10 )
    CTreeEffectLayer::`vector deleting destructor'(v10, 1u);
  return v27;
}
