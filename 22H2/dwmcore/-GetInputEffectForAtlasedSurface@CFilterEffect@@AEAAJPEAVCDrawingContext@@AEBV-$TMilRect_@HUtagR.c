/*
 * XREFs of ?GetInputEffectForAtlasedSurface@CFilterEffect@@AEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@PEAVCCompositionSurfaceBitmap@@PEAPEAUID2D1Effect@@@Z @ 0x1801B25E0
 * Callers:
 *     ?GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAVCDrawingContext@@PEAUID2D1Bitmap1@@PEAPEAUID2D1Effect@@@Z @ 0x18000DF38 (-GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAVCDrawingContext@@PEAUID2D1Bitmap1@@PEAPEAUID2D1Effect.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024CA8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180025150 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002D180 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z @ 0x180040698 (-SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1800BBE50 (-GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D0818 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?CreateD2DEffect@CD2DContext@@UEAAJAEBU_GUID@@PEAPEAVCD2DEffect@@@Z @ 0x18023AF80 (-CreateD2DEffect@CD2DContext@@UEAAJAEBU_GUID@@PEAPEAVCD2DEffect@@@Z.c)
 */

__int64 __fastcall CFilterEffect::GetInputEffectForAtlasedSurface(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        ID2D1Effect **a5)
{
  int CurrentRenderingRealization; // eax
  __int64 v9; // rcx
  unsigned int v10; // esi
  struct IBitmapRealization *v11; // rbx
  char v12; // di
  __int64 (__fastcall *v13)(struct IBitmapRealization *, __int64, __int64 *, __int64); // rsi
  __int64 v14; // r9
  struct CD2DEffect *v15; // rdi
  struct ID2D1Effect *v16; // rdi
  struct CD2DEffect *v17; // rbx
  __m128i v18; // xmm1
  ID2D1Effect *v19; // rbx
  float v20; // xmm0_4
  __m128i v21; // xmm0
  int v22; // eax
  __int64 v23; // rcx
  __m128i v24; // xmm1
  unsigned int v26; // [rsp+20h] [rbp-51h]
  __int64 v27; // [rsp+30h] [rbp-41h] BYREF
  ID2D1Effect *v28; // [rsp+38h] [rbp-39h] BYREF
  struct CD2DEffect *v29; // [rsp+40h] [rbp-31h] BYREF
  struct CD2DEffect *v30; // [rsp+48h] [rbp-29h] BYREF
  struct IBitmapRealization *v31; // [rsp+50h] [rbp-21h] BYREF
  struct ID2D1Effect *v32; // [rsp+58h] [rbp-19h] BYREF
  _DWORD v33[4]; // [rsp+60h] [rbp-11h] BYREF
  __int128 v34; // [rsp+70h] [rbp-1h] BYREF
  int v35; // [rsp+80h] [rbp+Fh]
  int v36; // [rsp+84h] [rbp+13h]

  v27 = 0LL;
  v30 = 0LL;
  v29 = 0LL;
  v32 = 0LL;
  v28 = 0LL;
  v31 = 0LL;
  CurrentRenderingRealization = CCompositionSurfaceBitmap::GetCurrentRenderingRealization(
                                  (CCompositionSurfaceBitmap *)(a4 + 64),
                                  &v31);
  v10 = CurrentRenderingRealization;
  if ( CurrentRenderingRealization < 0 )
  {
    v26 = 796;
    goto LABEL_14;
  }
  v11 = v31;
  v12 = *(_BYTE *)(a4 + 192);
  v13 = *(__int64 (__fastcall **)(struct IBitmapRealization *, __int64, __int64 *, __int64))(*(_QWORD *)v31 + 56LL);
  wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset(&v27);
  LOBYTE(v14) = v12;
  CurrentRenderingRealization = v13(v11, a2 + 56, &v27, v14);
  v10 = CurrentRenderingRealization;
  if ( CurrentRenderingRealization < 0 )
  {
    v26 = 800;
    goto LABEL_14;
  }
  CurrentRenderingRealization = CD2DContext::CreateD2DEffect(
                                  (CD2DContext *)(*(_QWORD *)(a2 + 40) + 16LL),
                                  &CLSID_D2D1Crop,
                                  &v30);
  v10 = CurrentRenderingRealization;
  if ( CurrentRenderingRealization < 0 )
  {
    v26 = 803;
    goto LABEL_14;
  }
  CurrentRenderingRealization = CD2DContext::CreateD2DEffect(
                                  (CD2DContext *)(*(_QWORD *)(a2 + 40) + 16LL),
                                  &CLSID_D2D12DAffineTransform,
                                  &v29);
  v10 = CurrentRenderingRealization;
  if ( CurrentRenderingRealization < 0 )
  {
    v26 = 806;
    goto LABEL_14;
  }
  v15 = v30;
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v30 + 10) + 8LL))(*((_QWORD *)v30 + 10));
  v16 = (struct ID2D1Effect *)*((_QWORD *)v15 + 10);
  v17 = v29;
  v32 = v16;
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v29 + 10) + 8LL))(*((_QWORD *)v29 + 10));
  v18 = _mm_cvtsi32_si128(*(_DWORD *)(a3 + 4));
  v19 = (ID2D1Effect *)*((_QWORD *)v17 + 10);
  v20 = (float)*(int *)a3;
  v28 = v19;
  *(float *)v33 = v20;
  v21 = _mm_cvtsi32_si128(*(_DWORD *)(a3 + 8));
  v33[1] = _mm_cvtepi32_ps(v18).m128_u32[0];
  *(float *)v18.m128i_i32 = (float)*(int *)(a3 + 12);
  v33[2] = _mm_cvtepi32_ps(v21).m128_u32[0];
  v33[3] = v18.m128i_i32[0];
  v22 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, _DWORD *, int))(*(_QWORD *)v16 + 72LL))(
          v16,
          0LL,
          0LL,
          v33,
          16);
  v10 = v22;
  if ( v22 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x330u, 0LL);
    goto LABEL_15;
  }
  v24 = _mm_cvtsi32_si128(*(_DWORD *)a3);
  v34 = _xmm;
  v36 = COERCE_UNSIGNED_INT((float)*(int *)(a3 + 4)) ^ _xmm;
  v35 = _mm_cvtepi32_ps(v24).m128_u32[0] ^ _xmm;
  CurrentRenderingRealization = (*(__int64 (__fastcall **)(ID2D1Effect *, __int64, _QWORD, __int128 *, int))(*(_QWORD *)v19 + 72LL))(
                                  v19,
                                  2LL,
                                  0LL,
                                  &v34,
                                  24);
  v10 = CurrentRenderingRealization;
  if ( CurrentRenderingRealization < 0 )
  {
    v26 = 824;
LABEL_14:
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, CurrentRenderingRealization, v26, 0LL);
    goto LABEL_15;
  }
  (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, __int64, __int64))(*(_QWORD *)v16 + 112LL))(v16, 0LL, v27, 1LL);
  ID2D1Effect::SetInputEffect(v19, 0, v16);
  v28 = 0LL;
  *a5 = v19;
LABEL_15:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v28);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v32);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v29);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v30);
  wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>(&v27);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v31);
  return v10;
}
