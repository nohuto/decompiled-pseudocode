/*
 * XREFs of ?UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x18000C524
 * Callers:
 *     ?Draw@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180009560 (-Draw@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x180008E78 (-GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 *     ?at@?$map@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@@std@@QEBAAEBUVisualPropertyData@CProjectedShadowCaster@@AEBQEBVCVisualTree@@@Z @ 0x18000A400 (-at@-$map@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U-$less@PEBVCVisualTree@@.c)
 *     ?EnsureNoInvalidIntermediates@CProjectedShadowCaster@@QEAAXXZ @ 0x18000C5C4 (-EnsureNoInvalidIntermediates@CProjectedShadowCaster@@QEAAXXZ.c)
 *     ?EnsureNoInvalidIntermediates@CProjectedShadow@@AEAAXXZ @ 0x18000C60C (-EnsureNoInvalidIntermediates@CProjectedShadow@@AEAAXXZ.c)
 *     ?InvalidateMaskContent@CProjectedShadowReceiver@@QEAAXXZ @ 0x18000CCFC (-InvalidateMaskContent@CProjectedShadowReceiver@@QEAAXXZ.c)
 *     ?GenerateBlurIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVIBitmapRealization@@AEBUD2D_POINT_2F@@MPEAPEAVIRenderTargetBitmap@@@Z @ 0x18000D278 (-GenerateBlurIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 *     ?GenerateFastShadowIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x18000F55C (-GenerateFastShadowIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?UpdateMaskIntermediate@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@@Z @ 0x1801E409C (-UpdateMaskIntermediate@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@@Z.c)
 */

__int64 __fastcall CProjectedShadow::UpdateShadowIntermediates(
        CProjectedShadowCaster **this,
        struct CDrawingContext *a2)
{
  unsigned int v4; // ebx
  CProjectedShadowReceiver *v5; // r14
  __int64 v6; // r8
  int v7; // eax
  int ApproxBlur; // eax
  unsigned int v10; // ecx
  int FastShadowIntermediate; // eax
  unsigned int v12; // ecx
  int (__fastcall ***v13)(_QWORD); // rcx
  __int64 *v14; // r14
  int updated; // eax
  unsigned int v16; // ecx
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rbx
  void (__fastcall ***v20)(_QWORD, int *); // rcx
  __m128 v21; // xmm4
  float v22; // xmm0_4
  int v23; // eax
  __m128 v24; // xmm2
  __m128 v25; // rt1
  __m128 v26; // xmm5
  float v27; // xmm0_4
  int v28; // eax
  __m128 v29; // xmm2
  __m128 v30; // rt1
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r9
  int BlurIntermediate; // eax
  unsigned int v35; // ecx
  struct D2D_POINT_2F *v36; // [rsp+28h] [rbp-38h]
  struct IRenderTargetBitmap **v37; // [rsp+38h] [rbp-28h]
  const char *v38; // [rsp+40h] [rbp-20h] BYREF
  int v39; // [rsp+48h] [rbp-18h]
  __int128 v40; // [rsp+90h] [rbp+30h] BYREF
  int v41; // [rsp+A0h] [rbp+40h] BYREF
  int v42; // [rsp+A4h] [rbp+44h]
  unsigned __int64 v43; // [rsp+A8h] [rbp+48h] BYREF

  v4 = 0;
  CProjectedShadow::EnsureNoInvalidIntermediates((CProjectedShadow *)this);
  CProjectedShadowCaster::EnsureNoInvalidIntermediates(this[9]);
  v5 = this[10];
  v6 = *((_QWORD *)v5 + 13);
  if ( v6 )
  {
    v13 = (int (__fastcall ***)(_QWORD))(*(int *)(*(_QWORD *)(v6 + 8) + 8LL) + v6 + 8);
    if ( (**v13)(v13) < 0 )
      CProjectedShadowReceiver::InvalidateMaskContent(v5);
  }
  v7 = *((_DWORD *)this + 80);
  if ( v7 == 1 )
  {
    if ( !*(_QWORD *)&CProjectedShadow::s_cpFastShadowIntermediate )
    {
      FastShadowIntermediate = CProjectedShadow::GenerateFastShadowIntermediate((CProjectedShadow *)this, a2);
      v4 = FastShadowIntermediate;
      if ( FastShadowIntermediate < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, FastShadowIntermediate, 0x17Eu, 0LL);
    }
  }
  else if ( (unsigned int)(v7 - 2) > 3 )
  {
    v14 = (__int64 *)(this + 45);
    if ( !this[45] || *((_QWORD *)this[9] + 10) > 1uLL )
    {
      updated = CProjectedShadowCaster::UpdateMaskIntermediate(this[9], a2);
      v4 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, updated, 0x191u, 0LL);
      }
      else
      {
        v18 = (__int64)this[9] + 72;
        *(_QWORD *)&v40 = *((_QWORD *)a2 + 741);
        v19 = *(_QWORD *)(std::map<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData>::at(
                            v18,
                            (__int64)&v40,
                            v17)
                        + 40);
        v20 = (void (__fastcall ***)(_QWORD, int *))(v19 + *(int *)(*(_QWORD *)(v19 + 8) + 16LL) + 8LL);
        (**v20)(v20, &v41);
        v21 = (__m128)*((unsigned int *)this + 22);
        v22 = (float)v42 + (float)(v21.m128_f32[0] + v21.m128_f32[0]);
        *(float *)&v40 = v22;
        if ( COERCE_UNSIGNED_INT(fabs(v22)) > 0x497FFFF0 )
        {
          v24 = 0LL;
          v24.m128_f32[0] = (float)(int)v22 - v22;
          v25.m128_f32[0] = FLOAT_N0_5;
          LODWORD(v40) = _mm_cmple_ss(v24, v25).m128_u32[0];
          v23 = (int)v22 - v40;
        }
        else
        {
          *(float *)&v40 = v22 + 6291456.25;
          v23 = (int)((_DWORD)v40 << 10) >> 11;
        }
        v26 = (__m128)COERCE_UNSIGNED_INT((float)v23);
        v27 = (float)v41 + (float)(v21.m128_f32[0] + v21.m128_f32[0]);
        *(float *)&v40 = v27;
        if ( COERCE_UNSIGNED_INT(fabs(v27)) > 0x497FFFF0 )
        {
          v29 = 0LL;
          v29.m128_f32[0] = (float)(int)v27 - v27;
          v30.m128_f32[0] = FLOAT_N0_5;
          LODWORD(v40) = _mm_cmple_ss(v29, v30).m128_u32[0];
          v28 = (int)v27 - v40;
        }
        else
        {
          *(float *)&v40 = v27 + 6291456.25;
          v28 = (int)((_DWORD)v40 << 10) >> 11;
        }
        v31 = *v14;
        *v14 = 0LL;
        v43 = _mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)v28), v26).m128_u64[0];
        *(_QWORD *)&v40 = _mm_unpacklo_ps(v21, v21).m128_u64[0];
        if ( v31 )
        {
          v32 = v31 + 8 + *(int *)(*(_QWORD *)(v31 + 8) + 4LL);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
        }
        LODWORD(v36) = *((_DWORD *)this + 22);
        v33 = *(int *)(*(_QWORD *)(v19 + 8) + 16LL);
        v38 = "DWM ProjectedShadow Blur";
        v39 = 24;
        BlurIntermediate = ShadowHelpers::GenerateBlurIntermediate(
                             (ShadowHelpers *)&v38,
                             a2,
                             (struct CDrawingContext *)&v43,
                             (const struct D2D_SIZE_F *)(v19 + v33 + 8),
                             (struct IBitmapRealization *)&v40,
                             v36,
                             COERCE_FLOAT((_DWORD)this + 360),
                             v37);
        v4 = BlurIntermediate;
        if ( BlurIntermediate < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, BlurIntermediate, 0x1A2u, 0LL);
      }
    }
  }
  else
  {
    ApproxBlur = CProjectedShadow::GenerateApproxBlur((CProjectedShadow *)this, a2);
    v4 = ApproxBlur;
    if ( ApproxBlur < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, ApproxBlur, 0x186u, 0LL);
  }
  return v4;
}
