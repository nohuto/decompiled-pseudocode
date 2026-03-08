/*
 * XREFs of ?GetInputEffectForAtlasedSurface@CFilterEffect@@AEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@PEAVCCompositionSurfaceBitmap@@PEAPEAUID2D1Effect@@@Z @ 0x180219764
 * Callers:
 *     ?GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAVCDrawingContext@@PEAUID2D1Bitmap1@@PEAPEAUID2D1Effect@@@Z @ 0x180219440 (-GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAVCDrawingContext@@PEAUID2D1Bitmap1@@PEAPEAUID2D1Effect.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z @ 0x18000FC10 (-SetInputEffect@ID2D1Effect@@QEAAXIPEAU1@H@Z.c)
 *     ?CreateD2DEffect@CD2DContext@@UEAAJAEBU_GUID@@PEAPEAVCD2DEffect@@@Z @ 0x1800168B0 (-CreateD2DEffect@CD2DContext@@UEAAJAEBU_GUID@@PEAPEAVCD2DEffect@@@Z.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18003CE64 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1800D4E90 (-GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
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
  char v12; // si
  __int64 (__fastcall *v13)(struct IBitmapRealization *, __int64, __int64 *, __int64); // r12
  __int64 v14; // rax
  __int64 v15; // r9
  int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  struct CD2DEffect *v22; // rdi
  struct CD2DEffect *v23; // rbx
  struct ID2D1Effect *v24; // rdi
  __m128i v25; // xmm1
  ID2D1Effect *v26; // rbx
  float v27; // xmm0_4
  float v28; // xmm0_4
  int v29; // eax
  __int64 v30; // rcx
  __m128i v31; // xmm1
  int v32; // eax
  __int64 v33; // rcx
  __int64 v35; // [rsp+30h] [rbp-41h] BYREF
  ID2D1Effect *v36; // [rsp+38h] [rbp-39h] BYREF
  struct CD2DEffect *v37; // [rsp+40h] [rbp-31h] BYREF
  struct CD2DEffect *v38; // [rsp+48h] [rbp-29h] BYREF
  struct IBitmapRealization *v39; // [rsp+50h] [rbp-21h] BYREF
  struct ID2D1Effect *v40; // [rsp+58h] [rbp-19h] BYREF
  _DWORD v41[4]; // [rsp+60h] [rbp-11h] BYREF
  __int128 v42; // [rsp+70h] [rbp-1h] BYREF
  int v43; // [rsp+80h] [rbp+Fh]
  int v44; // [rsp+84h] [rbp+13h]

  v35 = 0LL;
  v38 = 0LL;
  v37 = 0LL;
  v40 = 0LL;
  v36 = 0LL;
  v39 = 0LL;
  CurrentRenderingRealization = CCompositionSurfaceBitmap::GetCurrentRenderingRealization(
                                  (CCompositionSurfaceBitmap *)(a4 + 72),
                                  &v39);
  v10 = CurrentRenderingRealization;
  if ( CurrentRenderingRealization < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, CurrentRenderingRealization, 0x31Cu, 0LL);
  }
  else
  {
    v11 = v39;
    v12 = *(_BYTE *)(a4 + 192);
    v13 = *(__int64 (__fastcall **)(struct IBitmapRealization *, __int64, __int64 *, __int64))(*(_QWORD *)v39 + 56LL);
    v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a2 + 24) + 40LL))(a2 + 24);
    LOBYTE(v15) = v12;
    v16 = v13(v11, v14, &v35, v15);
    v10 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x320u, 0LL);
    }
    else
    {
      v18 = CD2DContext::CreateD2DEffect((CD2DContext *)(*(_QWORD *)(a2 + 40) + 16LL), &CLSID_D2D1Crop, &v38);
      v10 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x323u, 0LL);
      }
      else
      {
        v20 = CD2DContext::CreateD2DEffect(
                (CD2DContext *)(*(_QWORD *)(a2 + 40) + 16LL),
                &CLSID_D2D12DAffineTransform,
                &v37);
        v10 = v20;
        if ( v20 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x326u, 0LL);
        }
        else
        {
          v22 = v38;
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v38 + 10) + 8LL))(*((_QWORD *)v38 + 10));
          v23 = v37;
          v24 = (struct ID2D1Effect *)*((_QWORD *)v22 + 10);
          v40 = v24;
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v37 + 10) + 8LL))(*((_QWORD *)v37 + 10));
          v25 = _mm_cvtsi32_si128(*(_DWORD *)(a3 + 8));
          v26 = (ID2D1Effect *)*((_QWORD *)v23 + 10);
          v27 = (float)*(int *)a3;
          v36 = v26;
          *(float *)v41 = v27;
          v28 = (float)*(int *)(a3 + 4);
          v41[2] = _mm_cvtepi32_ps(v25).m128_u32[0];
          *(float *)&v41[1] = v28;
          *(float *)&v41[3] = (float)*(int *)(a3 + 12);
          v29 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, _DWORD *, int))(*(_QWORD *)v24 + 72LL))(
                  v24,
                  0LL,
                  0LL,
                  v41,
                  16);
          v10 = v29;
          if ( v29 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v29, 0x330u, 0LL);
          }
          else
          {
            v31 = _mm_cvtsi32_si128(*(_DWORD *)a3);
            v42 = *(_OWORD *)&_xmm;
            v44 = COERCE_UNSIGNED_INT((float)*(int *)(a3 + 4)) ^ _xmm;
            v43 = _mm_cvtepi32_ps(v31).m128_u32[0] ^ _xmm;
            v32 = (*(__int64 (__fastcall **)(ID2D1Effect *, __int64, _QWORD, __int128 *, int))(*(_QWORD *)v26 + 72LL))(
                    v26,
                    2LL,
                    0LL,
                    &v42,
                    24);
            v10 = v32;
            if ( v32 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v32, 0x338u, 0LL);
            }
            else
            {
              (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, __int64, __int64))(*(_QWORD *)v24 + 112LL))(
                v24,
                0LL,
                v35,
                1LL);
              ID2D1Effect::SetInputEffect(v26, 0, v24);
              v36 = 0LL;
              *a5 = v26;
            }
          }
        }
      }
    }
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v36);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v40);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v37);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v38);
  wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>(&v35);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v39);
  return v10;
}
