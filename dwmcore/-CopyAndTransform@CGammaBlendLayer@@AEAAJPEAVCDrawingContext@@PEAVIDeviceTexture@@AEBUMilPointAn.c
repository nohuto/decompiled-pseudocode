/*
 * XREFs of ?CopyAndTransform@CGammaBlendLayer@@AEAAJPEAVCDrawingContext@@PEAVIDeviceTexture@@AEBUMilPointAndSizeL@@2W4SurfaceShaderType@@@Z @ 0x1801F19F0
 * Callers:
 *     ?ApplyState@CGammaBlendLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1801F1810 (-ApplyState@CGammaBlendLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderLayer@CGammaBlendLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x1801F1F10 (-RenderLayer@CGammaBlendLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?FlushD2D@CDrawingContext@@QEAAJXZ @ 0x18001A0FC (-FlushD2D@CDrawingContext@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ReadTexture@CDrawingContext@@QEBAXXZ @ 0x1801E48FC (-ReadTexture@CDrawingContext@@QEBAXXZ.c)
 *     ?GetSurfacePixelShaderNoRef@CSurfaceShaderComposer@@QEAAJW4SurfaceShaderType@@PEAPEAUID3D11PixelShader@@@Z @ 0x180296774 (-GetSurfacePixelShaderNoRef@CSurfaceShaderComposer@@QEAAJW4SurfaceShaderType@@PEAPEAUID3D11Pixel.c)
 *     ?RunShader@CSurfaceShaderComposer@@QEAAJPEBXIPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPORT@@W4Enum@BlendMode@@AEBV?$span@USamplerMode@@$0?0@gsl@@_NPEAUID3D11RenderTargetView@@PEAUID3D11PixelShader@@PEBUtagRECT@@5@Z @ 0x1802968E4 (-RunShader@CSurfaceShaderComposer@@QEAAJPEBXIPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPOR.c)
 *     ?UpdateSDRBoostConstantBuffer@CSurfaceShaderComposer@@QEAAJM@Z @ 0x180296FAC (-UpdateSDRBoostConstantBuffer@CSurfaceShaderComposer@@QEAAJM@Z.c)
 */

__int64 __fastcall CGammaBlendLayer::CopyAndTransform(
        __int64 a1,
        CDrawingContext *a2,
        _QWORD *a3,
        int *a4,
        __int64 a5,
        unsigned int a6)
{
  __int64 v9; // rcx
  __int64 v10; // rcx
  CSurfaceShaderComposer *v11; // r15
  __int64 v12; // rax
  unsigned int v13; // edi
  __int64 v14; // rax
  void (__fastcall ***v15)(_QWORD, int *); // rcx
  __m128i v16; // xmm4
  float v17; // xmm2_4
  int v18; // eax
  float v19; // xmm1_4
  int SurfacePixelShaderNoRef; // eax
  __int64 v21; // rcx
  unsigned __int64 v22; // rbx
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rbx
  __int64 v28; // r8
  char v29; // al
  int v30; // r8d
  unsigned int v32; // [rsp+20h] [rbp-E0h]
  __int16 v33; // [rsp+70h] [rbp-90h] BYREF
  char v34; // [rsp+72h] [rbp-8Eh]
  int v35; // [rsp+78h] [rbp-88h] BYREF
  int v36; // [rsp+7Ch] [rbp-84h]
  __int64 v37; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v38[2]; // [rsp+90h] [rbp-70h] BYREF
  float v39; // [rsp+98h] [rbp-68h]
  float v40; // [rsp+9Ch] [rbp-64h]
  float v41; // [rsp+A0h] [rbp-60h]
  float v42; // [rsp+A4h] [rbp-5Ch]
  int v43; // [rsp+A8h] [rbp-58h]
  int v44; // [rsp+ACh] [rbp-54h]
  float v45; // [rsp+B0h] [rbp-50h]
  float v46; // [rsp+B4h] [rbp-4Ch]
  float v47; // [rsp+B8h] [rbp-48h]
  float v48; // [rsp+BCh] [rbp-44h]
  int v49; // [rsp+C0h] [rbp-40h]
  int v50; // [rsp+C4h] [rbp-3Ch]
  float v51; // [rsp+C8h] [rbp-38h]
  float v52; // [rsp+CCh] [rbp-34h]
  float v53; // [rsp+D0h] [rbp-30h]
  float v54; // [rsp+D4h] [rbp-2Ch]
  int v55; // [rsp+D8h] [rbp-28h]
  int v56; // [rsp+DCh] [rbp-24h]
  float v57; // [rsp+E0h] [rbp-20h]
  float v58; // [rsp+E4h] [rbp-1Ch]
  float v59; // [rsp+E8h] [rbp-18h]
  float v60; // [rsp+ECh] [rbp-14h]
  int v61; // [rsp+F0h] [rbp-10h]
  int v62; // [rsp+F4h] [rbp-Ch]
  float v63; // [rsp+F8h] [rbp-8h]
  float v64; // [rsp+FCh] [rbp-4h]
  float v65; // [rsp+100h] [rbp+0h]
  float v66; // [rsp+104h] [rbp+4h]
  int v67; // [rsp+108h] [rbp+8h]
  int v68; // [rsp+10Ch] [rbp+Ch]
  float v69; // [rsp+110h] [rbp+10h]
  float v70; // [rsp+114h] [rbp+14h]
  float v71; // [rsp+118h] [rbp+18h]
  float v72; // [rsp+11Ch] [rbp+1Ch]
  __int64 v73; // [rsp+120h] [rbp+20h] BYREF
  _QWORD v74[2]; // [rsp+128h] [rbp+28h] BYREF
  __int128 v75; // [rsp+138h] [rbp+38h] BYREF
  __int64 v76; // [rsp+148h] [rbp+48h]

  v9 = (__int64)a3 + *(int *)(a3[1] + 8LL) + 8;
  v11 = *(CSurfaceShaderComposer **)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9) + 1536);
  v12 = 0LL;
  v76 = 0LL;
  v33 = 256;
  v34 = 1;
  v75 = 0LL;
  if ( !v11 )
  {
    v13 = -2005270524;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2005270524, 0x8Eu, 0LL);
    return v13;
  }
  do
  {
    *((float *)&v75 + v12) = (float)*(int *)(a5 + 4 * v12);
    ++v12;
  }
  while ( v12 < 4 );
  v14 = a3[1];
  HIDWORD(v76) = 1065353216;
  v15 = (void (__fastcall ***)(_QWORD, int *))((char *)a3 + *(int *)(v14 + 16) + 8);
  (**v15)(v15, &v35);
  v16 = _mm_cvtsi32_si128(a4[1]);
  v17 = (float)*a4;
  v38[0] = -1082130432;
  v38[1] = 1065353216;
  v43 = -1082130432;
  v44 = -1082130432;
  v49 = 1065353216;
  v50 = 1065353216;
  v55 = -1082130432;
  v18 = *a4 + a4[2];
  v56 = -1082130432;
  v61 = 1065353216;
  v62 = -1082130432;
  v67 = 1065353216;
  v68 = 1065353216;
  v19 = (float)(a4[1] + a4[3]);
  v39 = v17 / (float)v35;
  v40 = _mm_cvtepi32_ps(v16).m128_f32[0] / (float)v36;
  v46 = v19 / (float)v36;
  v48 = v46;
  v58 = v46;
  v60 = v46;
  v64 = v46;
  v66 = v46;
  v41 = v39;
  v42 = v40;
  v45 = v39;
  v47 = v39;
  v51 = (float)v18 / (float)v35;
  v52 = v40;
  v53 = v51;
  v54 = v40;
  v57 = v39;
  v59 = v39;
  v63 = v51;
  v65 = v51;
  v69 = v51;
  v70 = v40;
  v71 = v51;
  v72 = v40;
  SurfacePixelShaderNoRef = CDrawingContext::FlushD2D(a2);
  v13 = SurfacePixelShaderNoRef;
  if ( SurfacePixelShaderNoRef < 0 )
  {
    v32 = 178;
    goto LABEL_14;
  }
  v22 = (unsigned __int64)a2 + 24;
  if ( g_LockAndReadLayer )
  {
    v23 = *(int *)(a3[1] + 16LL);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)((char *)a3 + v23 + 8) + 24LL))(
      (__int64)a3 + v23 + 8,
      v22 & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64));
  }
  v37 = 0LL;
  SurfacePixelShaderNoRef = CSurfaceShaderComposer::GetSurfacePixelShaderNoRef(v11, a6, &v37);
  v13 = SurfacePixelShaderNoRef;
  if ( SurfacePixelShaderNoRef < 0 )
  {
    v32 = 187;
    goto LABEL_14;
  }
  v24 = (*(__int64 (__fastcall **)(_QWORD *))(*(_QWORD *)v22 + 40LL))((_QWORD *)a2 + 3);
  SurfacePixelShaderNoRef = CSurfaceShaderComposer::UpdateSDRBoostConstantBuffer(v11, *(float *)(v24 + 16));
  v13 = SurfacePixelShaderNoRef;
  if ( SurfacePixelShaderNoRef < 0 )
  {
    v32 = 189;
LABEL_14:
    MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, SurfacePixelShaderNoRef, v32, 0LL);
    return v13;
  }
  v25 = (*(__int64 (__fastcall **)(_QWORD *))(*a3 + 8LL))(a3);
  v26 = *((_QWORD *)a2 + 4);
  v73 = v25;
  v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 56LL))(v26);
  v28 = *(int *)(a3[1] + 8LL);
  v29 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)((char *)a3 + v28 + 8) + 24LL))((__int64)a3 + v28 + 8);
  v74[1] = &v33;
  v74[0] = 1LL;
  CSurfaceShaderComposer::RunShader(
    (_DWORD)v11,
    (unsigned int)v38,
    v30,
    (unsigned int)&v73,
    1,
    (__int64)&v75,
    0,
    (__int64)v74,
    v29,
    v27,
    v37,
    0LL,
    0);
  if ( g_LockAndReadLayer )
    CDrawingContext::ReadTexture(a2);
  return v13;
}
