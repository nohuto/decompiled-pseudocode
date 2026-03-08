/*
 * XREFs of ?RenderXBR@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTargetView@@_NAEBUD3D11_VIEWPORT@@@Z @ 0x1801F2C94
 * Callers:
 *     ?RenderLayer@CResampleLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x1801F2A40 (-RenderLayer@CResampleLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     floorf_0 @ 0x180117728 (floorf_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FillXBRPass1Buffer@@YAJPEAVCSurfaceShaderComposer@@II@Z @ 0x1801F2640 (-FillXBRPass1Buffer@@YAJPEAVCSurfaceShaderComposer@@II@Z.c)
 *     ?FillXBRPass2Buffer@@YAJPEAVCSurfaceShaderComposer@@IIII@Z @ 0x1801F26E8 (-FillXBRPass2Buffer@@YAJPEAVCSurfaceShaderComposer@@IIII@Z.c)
 *     ?GetSurfacePixelShaderNoRef@CSurfaceShaderComposer@@QEAAJW4SurfaceShaderType@@PEAPEAUID3D11PixelShader@@@Z @ 0x180296774 (-GetSurfacePixelShaderNoRef@CSurfaceShaderComposer@@QEAAJW4SurfaceShaderType@@PEAPEAUID3D11Pixel.c)
 *     ?RunShader@CSurfaceShaderComposer@@QEAAJPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPORT@@W4Enum@BlendMode@@AEBV?$span@USamplerMode@@$0?0@gsl@@_NPEAUID3D11RenderTargetView@@PEAUID3D11PixelShader@@PEBUtagRECT@@4@Z @ 0x180296850 (-RunShader@CSurfaceShaderComposer@@QEAAJPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPORT@@W4.c)
 */

__int64 __fastcall CResampleLayer::RenderXBR(
        CResampleLayer *this,
        struct CSurfaceShaderComposer *a2,
        struct ID3D11RenderTargetView *a3,
        char a4,
        const struct D3D11_VIEWPORT *a5)
{
  __int64 v6; // rcx
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 (__fastcall *v12)(__int64, __int64, __int64 *); // rbx
  __int64 v13; // rax
  int SurfacePixelShaderNoRef; // eax
  unsigned int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdi
  __m128i v21; // xmm1
  __m128i v22; // xmm0
  __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 (__fastcall *v26)(__int64, __int64, __int64 *); // rbx
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rax
  __m128i v31; // xmm7
  float v32; // xmm0_4
  signed int v33; // ebx
  float v34; // xmm0_4
  __int16 v36; // [rsp+68h] [rbp-81h] BYREF
  char v37; // [rsp+6Ah] [rbp-7Fh]
  __int64 v38; // [rsp+70h] [rbp-79h] BYREF
  __int16 v39; // [rsp+78h] [rbp-71h] BYREF
  char v40; // [rsp+7Ah] [rbp-6Fh]
  __int16 v41; // [rsp+7Bh] [rbp-6Eh]
  char v42; // [rsp+7Dh] [rbp-6Ch]
  __int64 v43; // [rsp+80h] [rbp-69h] BYREF
  __int64 v44; // [rsp+88h] [rbp-61h] BYREF
  __int64 v45; // [rsp+90h] [rbp-59h] BYREF
  __int64 v46; // [rsp+98h] [rbp-51h] BYREF
  __int16 *v47; // [rsp+A0h] [rbp-49h]
  _QWORD v48[2]; // [rsp+B0h] [rbp-39h] BYREF
  _DWORD v49[6]; // [rsp+C0h] [rbp-29h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+140h] [rbp+57h]

  v6 = *((_QWORD *)this + 1);
  v36 = 256;
  v37 = 1;
  v10 = v6 + *(int *)(*(_QWORD *)(v6 + 8) + 16LL);
  v11 = *(_QWORD *)(v10 + 8);
  v43 = 0LL;
  v12 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(v11 + 48);
  v13 = (**(__int64 (__fastcall ***)(__int64, __int64 *))v6)(v6, &v46);
  SurfacePixelShaderNoRef = v12(v10 + 8, v13, &v43);
  v15 = SurfacePixelShaderNoRef;
  if ( SurfacePixelShaderNoRef < 0 )
  {
    v16 = 383LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\resamplelayer.cpp",
      (const char *)(unsigned int)SurfacePixelShaderNoRef);
    goto LABEL_20;
  }
  v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v43 + 8LL))(v43);
  v18 = *((_QWORD *)this + 16);
  v45 = v17;
  v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 64LL))(v18);
  v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 56LL))(v19);
  SurfacePixelShaderNoRef = FillXBRPass1Buffer(a2, *((_DWORD *)this + 6), *((_DWORD *)this + 7));
  v15 = SurfacePixelShaderNoRef;
  if ( SurfacePixelShaderNoRef < 0 )
  {
    v16 = 392LL;
    goto LABEL_5;
  }
  SurfacePixelShaderNoRef = CSurfaceShaderComposer::GetSurfacePixelShaderNoRef(a2, 4LL, &v44);
  v15 = SurfacePixelShaderNoRef;
  if ( SurfacePixelShaderNoRef < 0 )
  {
    v16 = 396LL;
    goto LABEL_5;
  }
  v21 = _mm_cvtsi32_si128(*((_DWORD *)this + 6));
  v22 = _mm_cvtsi32_si128(*((_DWORD *)this + 7));
  v49[4] = 0;
  v49[0] = 0;
  v49[1] = 0;
  v47 = &v36;
  v46 = 1LL;
  v49[2] = _mm_cvtepi32_ps(v21).m128_u32[0];
  v49[5] = (_DWORD)FLOAT_1_0;
  v49[3] = _mm_cvtepi32_ps(v22).m128_u32[0];
  SurfacePixelShaderNoRef = CSurfaceShaderComposer::RunShader(
                              (_DWORD)a2,
                              (unsigned int)&v45,
                              1,
                              (unsigned int)v49,
                              5,
                              (__int64)&v46,
                              a4,
                              v20,
                              v44);
  v15 = SurfacePixelShaderNoRef;
  if ( SurfacePixelShaderNoRef < 0 )
  {
    v16 = 413LL;
    goto LABEL_5;
  }
  v23 = *((_QWORD *)this + 16);
  v24 = v23 + *(int *)(*(_QWORD *)(v23 + 8) + 16LL);
  v25 = *(_QWORD *)(v24 + 8);
  v38 = 0LL;
  v26 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(v25 + 48);
  v27 = (**(__int64 (__fastcall ***)(__int64, __int64 *))v23)(v23, &v46);
  v28 = v26(v24 + 8, v27, &v38);
  v15 = v28;
  if ( v28 >= 0 )
  {
    v30 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v38 + 8LL))(v38);
    v31 = _mm_cvtsi32_si128(*((_DWORD *)this + 6));
    v32 = (float)*((int *)this + 7);
    v48[0] = v30;
    v48[1] = v45;
    *(float *)v31.m128i_i32 = (float)(_mm_cvtepi32_ps(v31).m128_f32[0] * *((float *)this + 34)) + 0.5;
    v33 = (int)floorf_0((float)(v32 * *((float *)this + 35)) + 0.5);
    v34 = floorf_0(*(float *)v31.m128i_i32);
    v28 = FillXBRPass2Buffer(a2, *((_DWORD *)this + 6), *((_DWORD *)this + 7), (int)v34, v33);
    v15 = v28;
    if ( v28 >= 0 )
    {
      v28 = CSurfaceShaderComposer::GetSurfacePixelShaderNoRef(a2, 5LL, &v44);
      v15 = v28;
      if ( v28 >= 0 )
      {
        v40 = v37;
        v42 = v37;
        v47 = &v39;
        v39 = v36;
        v41 = v36;
        v46 = 2LL;
        v28 = CSurfaceShaderComposer::RunShader(
                (_DWORD)a2,
                (unsigned int)v48,
                2,
                (_DWORD)a5,
                0,
                (__int64)&v46,
                a4,
                (__int64)a3,
                v44);
        v15 = v28;
        if ( v28 >= 0 )
        {
          wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v38);
          v15 = 0;
          goto LABEL_20;
        }
        v29 = 448LL;
      }
      else
      {
        v29 = 436LL;
      }
    }
    else
    {
      v29 = 432LL;
    }
  }
  else
  {
    v29 = 418LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v29,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\resamplelayer.cpp",
    (const char *)(unsigned int)v28);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v38);
LABEL_20:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v43);
  return v15;
}
