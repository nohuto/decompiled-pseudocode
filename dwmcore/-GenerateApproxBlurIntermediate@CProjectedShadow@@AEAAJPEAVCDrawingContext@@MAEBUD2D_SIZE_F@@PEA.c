/*
 * XREFs of ?GenerateApproxBlurIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@MAEBUD2D_SIZE_F@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1802469F4
 * Callers:
 *     ?GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x180246204 (-GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E91E4 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GenerateBlurIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVIBitmapRealization@@AEBUD2D_POINT_2F@@MPEAPEAVIRenderTargetBitmap@@@Z @ 0x1802B4594 (-GenerateBlurIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 *     ?GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCBrush@@PEBVCShape@@_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1802B4874 (-GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 */

__int64 __fastcall CProjectedShadow::GenerateApproxBlurIntermediate(
        CProjectedShadow *this,
        struct CDrawingContext *a2,
        float a3,
        struct D2D_SIZE_F *a4,
        struct IRenderTargetBitmap **a5)
{
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // r9
  int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // ebx
  struct IRenderTargetBitmap *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  const struct D2D_SIZE_F *v17; // r9
  int BlurIntermediate; // eax
  __int64 v19; // rcx
  struct D2D_POINT_2F *v21; // [rsp+28h] [rbp-39h]
  struct IRenderTargetBitmap **v22; // [rsp+38h] [rbp-29h]
  struct IRenderTargetBitmap *v23; // [rsp+40h] [rbp-21h] BYREF
  const char *v24; // [rsp+48h] [rbp-19h] BYREF
  int v25; // [rsp+50h] [rbp-11h]
  __int128 v26; // [rsp+58h] [rbp-9h] BYREF

  *a5 = 0LL;
  v8 = CProjectedShadow::s_cpMaskForBlur;
  if ( !CProjectedShadow::s_cpMaskForBlur )
  {
    v23 = 0LL;
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset((__int64 *)&v23);
    v9 = *((_QWORD *)this + 2);
    v24 = "DWM ProjectedShadow ApproxBlur";
    v26 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
    v10 = *(_QWORD *)(v9 + 328);
    v25 = 30;
    v11 = ShadowHelpers::GenerateMaskIntermediate(&v24, a2, &unk_1803B5500, v10, 0LL, 0, &v26, &v23);
    v13 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x36Au, 0LL);
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v23);
      return v13;
    }
    v14 = v23;
    v15 = CProjectedShadow::s_cpMaskForBlur;
    v23 = 0LL;
    CProjectedShadow::s_cpMaskForBlur = (__int64)v14;
    if ( v15 )
    {
      v16 = v15 + 8 + *(int *)(*(_QWORD *)(v15 + 8) + 4LL);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v23);
    v8 = CProjectedShadow::s_cpMaskForBlur;
  }
  v23 = (struct IRenderTargetBitmap *)_mm_unpacklo_ps((__m128)LODWORD(FLOAT_64_0), (__m128)LODWORD(FLOAT_64_0)).m128_u64[0];
  if ( v8 )
    v17 = (const struct D2D_SIZE_F *)(v8 + *(int *)(*(_QWORD *)(v8 + 8) + 16LL) + 8LL);
  else
    v17 = 0LL;
  *(float *)&v21 = a3;
  v24 = "DWM ProjectedShadow ApproxBlur";
  v25 = 30;
  BlurIntermediate = ShadowHelpers::GenerateBlurIntermediate(
                       (ShadowHelpers *)&v24,
                       a2,
                       (struct CDrawingContext *)a4,
                       v17,
                       (struct IBitmapRealization *)&v23,
                       v21,
                       *(float *)&a5,
                       v22);
  v13 = BlurIntermediate;
  if ( BlurIntermediate < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, BlurIntermediate, 0x37Au, 0LL);
  return v13;
}
