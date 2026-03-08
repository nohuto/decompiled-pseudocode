/*
 * XREFs of ?GenerateFastShadowIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x1802470B0
 * Callers:
 *     ?UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x180247EC4 (-UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E91E4 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ?GenerateBlurIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVIBitmapRealization@@AEBUD2D_POINT_2F@@MPEAPEAVIRenderTargetBitmap@@@Z @ 0x1802B4594 (-GenerateBlurIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 *     ?GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCBrush@@PEBVCShape@@_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1802B4874 (-GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 */

__int64 __fastcall CProjectedShadow::GenerateFastShadowIntermediate(CProjectedShadow *this, struct CDrawingContext *a2)
{
  __int64 v4; // rax
  __int64 v5; // r9
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  const struct D2D_SIZE_F *v9; // r9
  int BlurIntermediate; // eax
  __int64 v11; // rcx
  struct D2D_POINT_2F *v13; // [rsp+30h] [rbp-21h]
  struct IRenderTargetBitmap **v14; // [rsp+40h] [rbp-11h]
  struct IRenderTargetBitmap *v15; // [rsp+48h] [rbp-9h] BYREF
  _DWORD v16[2]; // [rsp+50h] [rbp-1h] BYREF
  _DWORD v17[2]; // [rsp+58h] [rbp+7h] BYREF
  const char *v18; // [rsp+60h] [rbp+Fh] BYREF
  int v19; // [rsp+68h] [rbp+17h]
  __int128 v20; // [rsp+70h] [rbp+1Fh] BYREF

  v15 = 0LL;
  v16[0] = 1107558400;
  v16[1] = 1107558400;
  v17[0] = 1115815936;
  v17[1] = 1115815936;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset((__int64 *)&v15);
  v4 = *((_QWORD *)this + 2);
  v18 = "DWM ProjectedShadow FastShadow";
  v20 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  v5 = *(_QWORD *)(v4 + 328);
  v19 = 30;
  v6 = ShadowHelpers::GenerateMaskIntermediate(&v18, a2, v16, v5, 0LL, 0, &v20, &v15);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x338u, 0LL);
  }
  else
  {
    *(_QWORD *)&v20 = _mm_unpacklo_ps((__m128)LODWORD(FLOAT_16_0), (__m128)LODWORD(FLOAT_16_0)).m128_u64[0];
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset((__int64 *)&CProjectedShadow::s_cpFastShadowIntermediate);
    if ( v15 )
      v9 = (const struct D2D_SIZE_F *)((char *)v15 + *(int *)(*((_QWORD *)v15 + 1) + 16LL) + 8);
    else
      v9 = 0LL;
    *(float *)&v13 = FLOAT_16_0;
    v18 = "DWM ProjectedShadow FastShadow";
    v19 = 30;
    BlurIntermediate = ShadowHelpers::GenerateBlurIntermediate(
                         (ShadowHelpers *)&v18,
                         a2,
                         (struct CDrawingContext *)v17,
                         v9,
                         (struct IBitmapRealization *)&v20,
                         v13,
                         COERCE_FLOAT(&CProjectedShadow::s_cpFastShadowIntermediate),
                         v14);
    v8 = BlurIntermediate;
    if ( BlurIntermediate < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, BlurIntermediate, 0x342u, 0LL);
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v15);
  return v8;
}
