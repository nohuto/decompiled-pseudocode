/*
 * XREFs of ?SetStateOnDevice@CProjectedShadowRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x180205DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetLightsMask@CD3DBatchExecutionContext@@QEBAAEBVCLightsMask@@XZ @ 0x180017AE0 (-GetLightsMask@CD3DBatchExecutionContext@@QEBAAEBVCLightsMask@@XZ.c)
 *     ??_GCShaderCache@@QEAAPEAXI@Z @ 0x18001BE58 (--_GCShaderCache@@QEAAPEAXI@Z.c)
 *     ?CreateLinkedShader@CShaderCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAPEAVCLinkedShader@@@Z @ 0x180026C2C (-CreateLinkedShader@CShaderCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V-$span@.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18003A2A4 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044B4C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetShaderResourceView@CDrawListBitmap@@QEBAPEAUID3D11ShaderResourceView@@AEBVRenderTargetInfo@@PEAUPixelFormatInfo@@@Z @ 0x1801F8F30 (-GetShaderResourceView@CDrawListBitmap@@QEBAPEAUID3D11ShaderResourceView@@AEBVRenderTargetInfo@@.c)
 *     ?GetVertexShaderNoRef@CD3DDevice@@QEBAPEAUID3D11VertexShader@@I@Z @ 0x1801FE508 (-GetVertexShaderNoRef@CD3DDevice@@QEBAPEAUID3D11VertexShader@@I@Z.c)
 *     ?GetConversionShader@ColorConversion@@SAJW4DXGI_COLOR_SPACE_TYPE@@_NI0PEAVShader@1@PEA_N@Z @ 0x1802025A4 (-GetConversionShader@ColorConversion@@SAJW4DXGI_COLOR_SPACE_TYPE@@_NI0PEAVShader@1@PEA_N@Z.c)
 *     ?GetShaderLinkingBody@ProjectedShadowRenderingShaderBody@@YA?AUShaderLinkingBody@@W4Enum@CommonRenderingShaderBody@@W4D3DShaderProfileVersion@@@Z @ 0x180205D18 (-GetShaderLinkingBody@ProjectedShadowRenderingShaderBody@@YA-AUShaderLinkingBody@@W4Enum@CommonR.c)
 *     ?GetShadersNoRef@CLinkedShader@@QEAAJPEAVCD3DDevice@@PEAIPEAPEAUID3D11PixelShader@@@Z @ 0x1802077F4 (-GetShadersNoRef@CLinkedShader@@QEAAJPEAVCD3DDevice@@PEAIPEAPEAUID3D11PixelShader@@@Z.c)
 *     ?LookupShader@CShaderCache@@QEBAPEAVCLinkedShader@@IAEBUShaderLinkingConfig@@@Z @ 0x1802078F4 (-LookupShader@CShaderCache@@QEBAPEAVCLinkedShader@@IAEBUShaderLinkingConfig@@@Z.c)
 *     ?GetD3DSamplerStateNoRef@CD3DDevice@@QEAAJUSamplerMode@@PEAPEAUID3D11SamplerState@@@Z @ 0x18028A5B0 (-GetD3DSamplerStateNoRef@CD3DDevice@@QEAAJUSamplerMode@@PEAPEAUID3D11SamplerState@@@Z.c)
 */

__int64 __fastcall CProjectedShadowRenderingEffect::SetStateOnDevice(
        CProjectedShadowRenderingEffect *this,
        struct CD3DBatchExecutionContext *a2,
        unsigned int *a3)
{
  int *v3; // rdi
  __int64 v5; // rax
  __int64 v7; // r15
  char v8; // r13
  enum DXGI_COLOR_SPACE_TYPE v9; // r9d
  int ConversionShader; // eax
  __int64 v11; // rcx
  unsigned int v12; // esi
  bool v13; // zf
  char *v14; // r15
  bool v15; // al
  bool v16; // al
  unsigned int v17; // edi
  struct ID3D11ShaderResourceView **v18; // r12
  CDrawListBitmap *v19; // rax
  struct ID3D11ShaderResourceView *ShaderResourceView; // rax
  CD3DDevice *v21; // rcx
  int v22; // edi
  unsigned int v23; // ebx
  CShaderCache *v24; // rax
  CShaderCache *v25; // rcx
  CLinkedShader *v26; // rax
  __int64 ShaderLinkingBody; // rax
  CD3DDevice *v28; // r14
  __int64 v29; // r15
  unsigned int v30; // edi
  void (__fastcall *v31)(__int64, struct ID3D11VertexShader *, _QWORD, _QWORD); // rbx
  struct ID3D11VertexShader *VertexShaderNoRef; // rax
  unsigned int v34; // [rsp+20h] [rbp-E0h]
  unsigned int v35[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v36[2]; // [rsp+40h] [rbp-C0h] BYREF
  CD3DDevice *v37; // [rsp+50h] [rbp-B0h]
  struct ID3D11PixelShader *v38; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v39; // [rsp+60h] [rbp-A0h]
  unsigned int *v40; // [rsp+68h] [rbp-98h]
  __int128 v41; // [rsp+70h] [rbp-90h] BYREF
  __int128 v42; // [rsp+80h] [rbp-80h] BYREF
  _OWORD v43[3]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v44; // [rsp+C0h] [rbp-40h]
  _BYTE v45[56]; // [rsp+C8h] [rbp-38h] BYREF
  char v46[128]; // [rsp+100h] [rbp+0h] BYREF
  int v47; // [rsp+180h] [rbp+80h]
  __int128 v48; // [rsp+188h] [rbp+88h]
  bool v49[24]; // [rsp+198h] [rbp+98h] BYREF

  v3 = (int *)*((_QWORD *)a2 + 1);
  v5 = *((_QWORD *)a2 + 2);
  v7 = *((_QWORD *)a2 + 4);
  v40 = a3;
  v37 = (CD3DDevice *)v3;
  v39 = v5;
  v38 = 0LL;
  v8 = 0;
  v41 = 0LL;
  v42 = 0LL;
  memset_0(v46, 0, sizeof(v46));
  `vector constructor iterator'(
    v46,
    32LL,
    4LL,
    (void (__fastcall *)(char *))ShaderLinkingSamplerDesc::ShaderLinkingSamplerDesc);
  v47 = -1;
  *(_QWORD *)&v48 = "NoOp";
  *(_OWORD *)v49 = 0LL;
  DWORD2(v48) = 0;
  if ( v3[146] >= 37632 )
  {
    v8 = 1;
    v47 = *(_DWORD *)CD3DBatchExecutionContext::GetLightsMask(a2);
  }
  v9 = *((_DWORD *)a2 + 30);
  v36[0] = (__int64)"NoOp";
  v49[6] = v9 == DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709;
  LODWORD(v36[1]) = 0;
  v49[8] = *((_BYTE *)a2 + 82) == 2;
  ConversionShader = ColorConversion::GetConversionShader(
                       DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P709,
                       0,
                       8,
                       v9,
                       (struct ColorConversion::Shader *)v36,
                       &v49[7]);
  v12 = ConversionShader;
  if ( ConversionShader < 0 )
  {
    v34 = 112;
    goto LABEL_33;
  }
  if ( LODWORD(v36[1]) > 1 )
    v48 = *(_OWORD *)v36;
  v13 = *(_BYTE *)(v7 + 368) == 0;
  v14 = (char *)this + 64;
  v15 = v49[1];
  if ( !v13 )
    v15 = 1;
  v13 = *((_DWORD *)a2 + 16) == 22;
  v49[1] = v15;
  v16 = v49[0];
  if ( v13 )
    v16 = 1;
  v17 = 0;
  v49[0] = v16;
  v18 = (struct ID3D11ShaderResourceView **)&v41;
  do
  {
    v19 = (CDrawListBitmap *)(*(__int64 (__fastcall **)(CProjectedShadowRenderingEffect *, _QWORD))(*(_QWORD *)this
                                                                                                  + 16LL))(
                               this,
                               v17);
    if ( *((_QWORD *)v19 + 1) )
    {
      ShaderResourceView = CDrawListBitmap::GetShaderResourceView(
                             v19,
                             *((const struct RenderTargetInfo **)a2 + 14),
                             (struct PixelFormatInfo *)v36);
      v21 = v37;
      *v18 = ShaderResourceView;
      LOWORD(v35[0]) = *(_WORD *)v14;
      BYTE2(v35[0]) = v14[2];
      ConversionShader = CD3DDevice::GetD3DSamplerStateNoRef(v21, v35, (char *)&v43[-1] + 8 * v17);
      v12 = ConversionShader;
      if ( ConversionShader < 0 )
      {
        v34 = 137;
        goto LABEL_33;
      }
    }
    ++v17;
    ++v18;
    v14 += 3;
  }
  while ( v17 < 2 );
  v22 = (*(__int64 (__fastcall **)(CProjectedShadowRenderingEffect *))(*(_QWORD *)this + 24LL))(this);
  v23 = v22;
  if ( !v8 )
    v23 = v22 | 4;
  v24 = g_spProjectedShadowShaderCache;
  if ( g_spProjectedShadowShaderCache )
    goto LABEL_25;
  v24 = (CShaderCache *)DefaultHeap::Alloc(0x20uLL);
  if ( v24 )
  {
    *(_QWORD *)v24 = 0LL;
    *((_QWORD *)v24 + 1) = 0LL;
    *((_DWORD *)v24 + 4) = 0;
    *((_QWORD *)v24 + 3) = v24;
  }
  else
  {
    v24 = 0LL;
  }
  v25 = g_spProjectedShadowShaderCache;
  g_spProjectedShadowShaderCache = v24;
  if ( v25 )
  {
    CShaderCache::`scalar deleting destructor'(v25);
    v24 = g_spProjectedShadowShaderCache;
  }
  if ( v24 )
  {
LABEL_25:
    v26 = CShaderCache::LookupShader(v24, v23, (const struct ShaderLinkingConfig *)v46);
    *(_QWORD *)v35 = v26;
    if ( !v26 )
    {
      ShaderLinkingBody = ProjectedShadowRenderingShaderBody::GetShaderLinkingBody((__int64)v45, v22, v8);
      v36[0] = 0LL;
      v36[1] = 0LL;
      v43[0] = *(_OWORD *)ShaderLinkingBody;
      v43[1] = *(_OWORD *)(ShaderLinkingBody + 16);
      v43[2] = *(_OWORD *)(ShaderLinkingBody + 32);
      v44 = *(_QWORD *)(ShaderLinkingBody + 48);
      ConversionShader = CShaderCache::CreateLinkedShader(
                           (const void **)g_spProjectedShadowShaderCache,
                           v23,
                           (__int64)v46,
                           (__int64)v43,
                           v36,
                           (struct CLinkedShader **)v35);
      v12 = ConversionShader;
      if ( ConversionShader < 0 )
      {
        v34 = 168;
        goto LABEL_33;
      }
      v26 = *(CLinkedShader **)v35;
    }
    v28 = v37;
    ConversionShader = CLinkedShader::GetShadersNoRef(v26, v37, v35, &v38);
    v12 = ConversionShader;
    if ( ConversionShader >= 0 )
    {
      v29 = v39;
      v30 = v35[0];
      v31 = *(void (__fastcall **)(__int64, struct ID3D11VertexShader *, _QWORD, _QWORD))(*(_QWORD *)v39 + 88LL);
      VertexShaderNoRef = CD3DDevice::GetVertexShaderNoRef(v28, v35[0]);
      v31(v29, VertexShaderNoRef, 0LL, 0LL);
      (*(void (__fastcall **)(__int64, struct ID3D11PixelShader *, _QWORD, _QWORD))(*(_QWORD *)v29 + 72LL))(
        v29,
        v38,
        0LL,
        0LL);
      (*(void (__fastcall **)(__int64, _QWORD, __int64, __int128 *))(*(_QWORD *)v29 + 64LL))(v29, 0LL, 2LL, &v41);
      (*(void (__fastcall **)(__int64, _QWORD, __int64, __int128 *))(*(_QWORD *)v29 + 80LL))(v29, 0LL, 2LL, &v42);
      *v40 = v30;
      return v12;
    }
    v34 = 172;
LABEL_33:
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, ConversionShader, v34, 0LL);
    return v12;
  }
  v12 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast((__int64)v25, 0LL, 0, -2147024882, 0x9Cu, 0LL);
  return v12;
}
