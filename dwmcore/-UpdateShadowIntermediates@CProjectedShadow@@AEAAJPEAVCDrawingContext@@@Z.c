/*
 * XREFs of ?UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x180247EC4
 * Callers:
 *     ?Draw@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180245E60 (-Draw@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?at@?$map@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@@std@@QEBAAEBUVisualPropertyData@CProjectedShadowCaster@@AEBQEBVCVisualTree@@@Z @ 0x180005870 (-at@-$map@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U-$less@PEBVCVisualTree@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E91E4 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?EnsureNoInvalidIntermediates@CProjectedShadowCaster@@QEAAXXZ @ 0x18021659C (-EnsureNoInvalidIntermediates@CProjectedShadowCaster@@QEAAXXZ.c)
 *     ?UpdateMaskIntermediate@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@@Z @ 0x180216840 (-UpdateMaskIntermediate@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?EnsureNoInvalidIntermediates@CProjectedShadow@@AEAAXXZ @ 0x180246068 (-EnsureNoInvalidIntermediates@CProjectedShadow@@AEAAXXZ.c)
 *     ?GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x180246204 (-GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GenerateFastShadowIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x1802470B0 (-GenerateFastShadowIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 *     ?EnsureNoInvalidIntermediates@CProjectedShadowReceiver@@QEAAXXZ @ 0x18024817C (-EnsureNoInvalidIntermediates@CProjectedShadowReceiver@@QEAAXXZ.c)
 *     ?GenerateBlurIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVIBitmapRealization@@AEBUD2D_POINT_2F@@MPEAPEAVIRenderTargetBitmap@@@Z @ 0x1802B4594 (-GenerateBlurIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 */

__int64 __fastcall CProjectedShadow::UpdateShadowIntermediates(CProjectedShadow *this, struct CDrawingContext *a2)
{
  unsigned int v4; // ebx
  int updated; // eax
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rbx
  void (__fastcall ***v9)(_QWORD, int *); // rcx
  __m128 v10; // xmm7
  float v11; // xmm0_4
  int v12; // eax
  __m128 v13; // xmm2
  __m128 v14; // rt1
  __m128 v15; // xmm5
  float v16; // xmm0_4
  int v17; // eax
  __m128 v18; // xmm2
  __m128 v19; // rt1
  __int64 v20; // r9
  int BlurIntermediate; // eax
  __int64 v22; // rcx
  int ApproxBlur; // eax
  __int64 v24; // rcx
  int FastShadowIntermediate; // eax
  __int64 v26; // rcx
  struct D2D_POINT_2F *v28; // [rsp+28h] [rbp-38h]
  struct IRenderTargetBitmap **v29; // [rsp+38h] [rbp-28h]
  const char *v30; // [rsp+40h] [rbp-20h] BYREF
  int v31; // [rsp+48h] [rbp-18h]
  __int128 v32; // [rsp+90h] [rbp+30h] BYREF
  int v33; // [rsp+A0h] [rbp+40h] BYREF
  int v34; // [rsp+A4h] [rbp+44h]
  unsigned __int64 v35; // [rsp+A8h] [rbp+48h] BYREF

  v4 = 0;
  CProjectedShadow::EnsureNoInvalidIntermediates(this);
  CProjectedShadowCaster::EnsureNoInvalidIntermediates(*((CProjectedShadowCaster **)this + 10));
  CProjectedShadowReceiver::EnsureNoInvalidIntermediates(*((CProjectedShadowReceiver **)this + 11));
  if ( *((_DWORD *)this + 82) == 1 )
  {
    if ( !*(_QWORD *)&CProjectedShadow::s_cpFastShadowIntermediate )
    {
      FastShadowIntermediate = CProjectedShadow::GenerateFastShadowIntermediate(this, a2);
      v4 = FastShadowIntermediate;
      if ( FastShadowIntermediate < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, FastShadowIntermediate, 0x17Eu, 0LL);
    }
  }
  else if ( *((_DWORD *)this + 82) == 2 || *((_DWORD *)this + 82) == 3 || (unsigned int)(*((_DWORD *)this + 82) - 4) < 2 )
  {
    ApproxBlur = CProjectedShadow::GenerateApproxBlur(this, a2);
    v4 = ApproxBlur;
    if ( ApproxBlur < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, ApproxBlur, 0x186u, 0LL);
  }
  else if ( !*((_QWORD *)this + 46) || *(_QWORD *)(*((_QWORD *)this + 10) + 88LL) > 1uLL )
  {
    updated = CProjectedShadowCaster::UpdateMaskIntermediate(*((CProjectedShadowCaster **)this + 10), a2);
    v4 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, updated, 0x191u, 0LL);
    }
    else
    {
      v7 = *((_QWORD *)this + 10) + 80LL;
      *(_QWORD *)&v32 = *((_QWORD *)a2 + 1007);
      v8 = *(_QWORD *)(std::map<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData>::at(v7, (__int64)&v32)
                     + 40);
      v9 = (void (__fastcall ***)(_QWORD, int *))(v8 + *(int *)(*(_QWORD *)(v8 + 8) + 16LL) + 8LL);
      (**v9)(v9, &v33);
      v10 = (__m128)*((unsigned int *)this + 24);
      v11 = (float)v34 + (float)(v10.m128_f32[0] + v10.m128_f32[0]);
      *(float *)&v32 = v11;
      if ( COERCE_UNSIGNED_INT(fabs(v11)) > 0x497FFFF0 )
      {
        v13 = 0LL;
        v13.m128_f32[0] = (float)(int)v11 - v11;
        v14.m128_f32[0] = FLOAT_N0_5;
        LODWORD(v32) = _mm_cmple_ss(v13, v14).m128_u32[0];
        v12 = (int)v11 - v32;
      }
      else
      {
        *(float *)&v32 = v11 + 6291456.25;
        v12 = (int)((_DWORD)v32 << 10) >> 11;
      }
      v15 = (__m128)COERCE_UNSIGNED_INT((float)v12);
      v16 = (float)v33 + (float)(v10.m128_f32[0] + v10.m128_f32[0]);
      *(float *)&v32 = v16;
      if ( COERCE_UNSIGNED_INT(fabs(v16)) > 0x497FFFF0 )
      {
        v18 = 0LL;
        v18.m128_f32[0] = (float)(int)v16 - v16;
        v19.m128_f32[0] = FLOAT_N0_5;
        LODWORD(v32) = _mm_cmple_ss(v18, v19).m128_u32[0];
        v17 = (int)v16 - v32;
      }
      else
      {
        *(float *)&v32 = v16 + 6291456.25;
        v17 = (int)((_DWORD)v32 << 10) >> 11;
      }
      v35 = _mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)v17), v15).m128_u64[0];
      *(_QWORD *)&v32 = _mm_unpacklo_ps(v10, v10).m128_u64[0];
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset((__int64 *)this + 46);
      LODWORD(v28) = *((_DWORD *)this + 24);
      v20 = *(int *)(*(_QWORD *)(v8 + 8) + 16LL);
      v30 = "DWM ProjectedShadow Blur";
      v31 = 24;
      BlurIntermediate = ShadowHelpers::GenerateBlurIntermediate(
                           (ShadowHelpers *)&v30,
                           a2,
                           (struct CDrawingContext *)&v35,
                           (const struct D2D_SIZE_F *)(v8 + v20 + 8),
                           (struct IBitmapRealization *)&v32,
                           v28,
                           COERCE_FLOAT((_DWORD)this + 368),
                           v29);
      v4 = BlurIntermediate;
      if ( BlurIntermediate < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, BlurIntermediate, 0x1A2u, 0LL);
    }
  }
  return v4;
}
