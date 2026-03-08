/*
 * XREFs of ?HDRConvert@CD3DDevice@@QEAAJPEAUID3D11ShaderResourceView@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@3PEAUID3D11RenderTargetView@@1W4DXGI_COLOR_SPACE_TYPE@@M_NPEAUtagRECT@@@Z @ 0x18028A818
 * Callers:
 *     ?ConvertSingleResource@CConversionSwapChain@@IEAAJPEAUID3D11ShaderResourceView@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@33@Z @ 0x18029E400 (-ConvertSingleResource@CConversionSwapChain@@IEAAJPEAUID3D11ShaderResourceView@@AEBUD2D_SIZE_U@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1801AEDB0 (-terminate@details@gsl@@YAXXZ.c)
 *     ?Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z @ 0x18026DCC0 (-Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z.c)
 *     ?CalcHDRConvertUVTransform@CD3DDevice@@SAXAEBUD2D_SIZE_U@@0AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@1PEAVCMILMatrix@@@Z @ 0x180289168 (-CalcHDRConvertUVTransform@CD3DDevice@@SAXAEBUD2D_SIZE_U@@0AEBV-$TMilRect_@HUtagRECT@@UMilPointA.c)
 *     ?GetCompositingPixelShaderNoRef@CSurfaceShaderComposer@@QEAAJW4D3D_FEATURE_LEVEL@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D11PixelShader@@@Z @ 0x18029666C (-GetCompositingPixelShaderNoRef@CSurfaceShaderComposer@@QEAAJW4D3D_FEATURE_LEVEL@@V-$span@$$CBUP.c)
 *     ?RunShader@CSurfaceShaderComposer@@QEAAJPEBXIPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPORT@@W4Enum@BlendMode@@AEBV?$span@USamplerMode@@$0?0@gsl@@_NPEAUID3D11RenderTargetView@@PEAUID3D11PixelShader@@PEBUtagRECT@@5@Z @ 0x1802968E4 (-RunShader@CSurfaceShaderComposer@@QEAAJPEBXIPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPOR.c)
 *     ?UpdateSDRBoostConstantBuffer@CSurfaceShaderComposer@@QEAAJM@Z @ 0x180296FAC (-UpdateSDRBoostConstantBuffer@CSurfaceShaderComposer@@QEAAJM@Z.c)
 */

__int64 __fastcall CD3DDevice::HDRConvert(
        __int64 a1,
        __int64 a2,
        int *a3,
        __int64 a4,
        unsigned int *a5,
        enum DXGI_MODE_ROTATION a6,
        __int64 a7,
        __int64 a8,
        int *a9,
        int a10,
        float a11,
        char a12,
        __int64 a13)
{
  unsigned int v15; // r14d
  __int64 v16; // rdi
  __int64 v17; // rbx
  gsl::details *v18; // rcx
  int v19; // xmm1_4
  int CompositingPixelShaderNoRef; // eax
  __int64 v21; // rcx
  unsigned int v22; // ebx
  int v23; // eax
  CSurfaceShaderComposer *v24; // rcx
  float v25; // xmm0_4
  int v26; // eax
  int updated; // eax
  __int64 v28; // rcx
  int v29; // r8d
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // rcx
  __int16 v34; // [rsp+70h] [rbp-90h] BYREF
  char v35; // [rsp+72h] [rbp-8Eh]
  int v36[4]; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v37[2]; // [rsp+90h] [rbp-70h] BYREF
  struct ID3D11PixelShader *v38; // [rsp+98h] [rbp-68h] BYREF
  __int64 v39; // [rsp+A0h] [rbp-60h]
  __int64 v40; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v41[64]; // [rsp+B0h] [rbp-50h] BYREF
  int v42; // [rsp+F0h] [rbp-10h]
  __int64 v43; // [rsp+100h] [rbp+0h] BYREF
  float v44; // [rsp+108h] [rbp+8h]
  float v45; // [rsp+10Ch] [rbp+Ch]
  int v46; // [rsp+110h] [rbp+10h]
  int v47; // [rsp+114h] [rbp+14h]
  _DWORD v48[2]; // [rsp+120h] [rbp+20h] BYREF
  __int128 v49; // [rsp+128h] [rbp+28h]
  int v50; // [rsp+138h] [rbp+38h]
  int v51; // [rsp+13Ch] [rbp+3Ch]
  int v52; // [rsp+140h] [rbp+40h]
  int v53; // [rsp+144h] [rbp+44h]
  int v54; // [rsp+148h] [rbp+48h]
  __m128i si128; // [rsp+14Ch] [rbp+4Ch]
  int v56; // [rsp+15Ch] [rbp+5Ch]
  __int128 v57; // [rsp+160h] [rbp+60h]
  __int128 v58; // [rsp+170h] [rbp+70h]
  __int128 v59; // [rsp+180h] [rbp+80h]
  __int128 v60; // [rsp+190h] [rbp+90h]
  __int128 v61; // [rsp+1A0h] [rbp+A0h]

  v52 = 0;
  v54 = 0;
  v56 = 0;
  v49 = 0LL;
  v39 = a13;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v57 = _xmm_bf800000bf800000000000003f800000;
  v58 = _xmm;
  v59 = _xmm;
  v40 = a2;
  v60 = _xmm;
  v38 = 0LL;
  v43 = 0LL;
  v46 = 0;
  v42 = 0;
  v34 = 257;
  v35 = 1;
  v48[0] = -1082130432;
  v48[1] = 1065353216;
  v50 = -1082130432;
  v51 = -1082130432;
  v53 = 1065353216;
  v61 = _xmm;
  CD3DDevice::CalcHDRConvertUVTransform(a9, a3, a5, a6, a7, (CMILMatrix *)v41);
  v15 = 0;
  do
  {
    v16 = 6 * v15 + 2;
    v37[0] = v48[v16];
    v37[1] = v48[6 * v15 + 3];
    v17 = 6 * v15 + 3;
    CMILMatrix::Transform((CMILMatrix *)v41, (const struct MilPoint2F *)v37, (struct MilPoint2F *)v36, 1);
    ++v15;
    v19 = v36[1];
    v48[v16] = v36[0];
    v48[v17] = v19;
  }
  while ( v15 < 6 );
  *(_QWORD *)&v36[2] = a4;
  *(_QWORD *)v36 = 1LL;
  if ( !a4 )
  {
    gsl::details::terminate(v18);
    __debugbreak();
  }
  CompositingPixelShaderNoRef = CSurfaceShaderComposer::GetCompositingPixelShaderNoRef(
                                  *(_QWORD *)(a1 + 1536),
                                  *(_DWORD *)(a1 + 584),
                                  (int)v36,
                                  a10,
                                  &v38);
  v22 = CompositingPixelShaderNoRef;
  if ( CompositingPixelShaderNoRef < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, CompositingPixelShaderNoRef, 0x949u, 0LL);
  }
  else
  {
    v23 = *a9;
    v24 = *(CSurfaceShaderComposer **)(a1 + 1536);
    v47 = 1065353216;
    v25 = (float)v23;
    v26 = a9[1];
    v44 = v25;
    v45 = (float)v26;
    updated = CSurfaceShaderComposer::UpdateSDRBoostConstantBuffer(v24, a11);
    v22 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, updated, 0x94Fu, 0LL);
    }
    else
    {
      v30 = *(_QWORD *)(a1 + 1536);
      *(_QWORD *)&v36[2] = &v34;
      *(_QWORD *)v36 = 1LL;
      v31 = CSurfaceShaderComposer::RunShader(
              v30,
              (unsigned int)v48,
              v29,
              (unsigned int)&v40,
              1,
              (__int64)&v43,
              5,
              (__int64)v36,
              a12,
              a8,
              (__int64)v38,
              v39,
              1);
      v22 = v31;
      if ( v31 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v31, 0x95Cu, 0LL);
    }
  }
  return v22;
}
