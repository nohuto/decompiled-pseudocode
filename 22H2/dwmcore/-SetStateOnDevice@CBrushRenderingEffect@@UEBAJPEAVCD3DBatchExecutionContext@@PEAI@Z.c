/*
 * XREFs of ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x180052640
 * Callers:
 *     <none>
 * Callees:
 *     ?GetLightsMask@CD3DBatchExecutionContext@@QEBAAEBVCLightsMask@@XZ @ 0x180017EBC (-GetLightsMask@CD3DBatchExecutionContext@@QEBAAEBVCLightsMask@@XZ.c)
 *     ?GetShaders@CRenderingTechnique@@QEAAJPEAVCD3DDevice@@AEBUShaderLinkingConfig@@PEAIPEAPEAUID3D11PixelShader@@@Z @ 0x180050DD8 (-GetShaders@CRenderingTechnique@@QEAAJPEAVCD3DDevice@@AEBUShaderLinkingConfig@@PEAIPEAPEAUID3D11.c)
 *     ?GetVertexShaderNoRef@CD3DDevice@@QEBAPEAUID3D11VertexShader@@I@Z @ 0x180051914 (-GetVertexShaderNoRef@CD3DDevice@@QEBAPEAUID3D11VertexShader@@I@Z.c)
 *     ?GetConstantBuffer@CRenderingTechnique@@QEAAJPEAVCD3DDevice@@PEAPEAUID3D11Buffer@@@Z @ 0x18005199C (-GetConstantBuffer@CRenderingTechnique@@QEAAJPEAVCD3DDevice@@PEAPEAUID3D11Buffer@@@Z.c)
 *     ?IsOpaque@CDrawListBitmap@@QEBA_NXZ @ 0x180052B68 (-IsOpaque@CDrawListBitmap@@QEBA_NXZ.c)
 *     ?GetColorChannelDepth@@YAIW4DXGI_FORMAT@@@Z @ 0x180053310 (-GetColorChannelDepth@@YAIW4DXGI_FORMAT@@@Z.c)
 *     ?ConfigureSampler@CRenderingTechnique@@QEAAXIW4Enum@InterpolationMode@@PEAUShaderLinkingSamplerDesc@@AEBUSurfaceSamplerData@1@@Z @ 0x180053340 (-ConfigureSampler@CRenderingTechnique@@QEAAXIW4Enum@InterpolationMode@@PEAUShaderLinkingSamplerD.c)
 *     ?GetD3DSamplerStateNoRef@CD3DDevice@@QEAAJUSamplerMode@@PEAPEAUID3D11SamplerState@@@Z @ 0x180053414 (-GetD3DSamplerStateNoRef@CD3DDevice@@QEAAJUSamplerMode@@PEAPEAUID3D11SamplerState@@@Z.c)
 *     ?GetShaderResourceView@CDrawListBitmap@@QEBAPEAUID3D11ShaderResourceView@@PEAUPixelFormatInfo@@@Z @ 0x18005348C (-GetShaderResourceView@CDrawListBitmap@@QEBAPEAUID3D11ShaderResourceView@@PEAUPixelFormatInfo@@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C915C (-InternalRelease@-$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800CB254 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0ShaderLinkingSamplerDesc@@QEAA@XZ @ 0x1800E320C (--0ShaderLinkingSamplerDesc@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x1800E7650 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800E76B8 (_Init_thread_header.c)
 *     memset_0 @ 0x1800E7F5C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?SetNoOpLightingConstantBuffers@CD3DBatchExecutionContext@@QEAAXXZ @ 0x1801A71A8 (-SetNoOpLightingConstantBuffers@CD3DBatchExecutionContext@@QEAAXXZ.c)
 */

__int64 __fastcall CBrushRenderingEffect::SetStateOnDevice(
        CBrushRenderingEffect *this,
        struct CD3DBatchExecutionContext *a2,
        unsigned int *a3)
{
  __int64 v3; // r13
  struct CD3DDevice *v5; // r12
  __int64 v7; // rsi
  __int64 v8; // r13
  ShaderLinkingSamplerDesc *v9; // rbx
  __int64 v10; // rdi
  bool v11; // zf
  __int64 v12; // rax
  int *v13; // rax
  __int64 v14; // r8
  float v15; // xmm6_4
  __int64 v16; // rbx
  __int64 v17; // rax
  unsigned int v18; // ecx
  __int64 v19; // rdx
  _BYTE *v20; // rcx
  CDrawListBitmap *v21; // rax
  char *v22; // rdi
  __int64 v23; // r8
  struct ID3D11ShaderResourceView *ShaderResourceView; // rax
  int D3DSamplerStateNoRef; // eax
  unsigned int v26; // ecx
  int v27; // ebx
  int v28; // edi
  unsigned int v29; // r12d
  const char *v30; // rax
  unsigned int ColorChannelDepth; // esi
  bool IsOpaque; // dl
  struct ColorConversion::Shader near **v33; // rcx
  __int64 v34; // rax
  __int128 v35; // xmm0
  bool *v36; // rbx
  CDrawListBitmap *v37; // rcx
  bool v38; // al
  float v39; // xmm1_4
  float *v40; // rax
  __int64 v41; // r8
  __int64 v42; // r9
  unsigned int v43; // edi
  void (__fastcall *v44)(__int64, struct ID3D11VertexShader *, _QWORD, _QWORD); // rbx
  struct ID3D11VertexShader *VertexShaderNoRef; // rax
  CRenderingTechnique *v46; // rbx
  int ConstantBuffer; // eax
  unsigned int v48; // ecx
  int v50; // edi
  int v51; // edi
  int v52; // edi
  int v53; // edi
  int v54; // edi
  int v55; // edi
  unsigned int v56; // [rsp+28h] [rbp-E0h]
  bool v57; // [rsp+38h] [rbp-D0h]
  struct ID3D11Buffer *v58; // [rsp+40h] [rbp-C8h] BYREF
  __int16 v59; // [rsp+48h] [rbp-C0h] BYREF
  char v60; // [rsp+4Ah] [rbp-BEh]
  __int64 v61; // [rsp+58h] [rbp-B0h]
  __int64 v62; // [rsp+60h] [rbp-A8h]
  CDrawListBitmap *v63; // [rsp+68h] [rbp-A0h]
  bool *v64; // [rsp+70h] [rbp-98h]
  float *v65; // [rsp+78h] [rbp-90h]
  struct ID3D11PixelShader *v66; // [rsp+80h] [rbp-88h] BYREF
  struct CD3DDevice *v67; // [rsp+88h] [rbp-80h]
  char *v68; // [rsp+90h] [rbp-78h]
  __int128 v69; // [rsp+98h] [rbp-70h]
  __int64 v70; // [rsp+A8h] [rbp-60h]
  __int64 v71; // [rsp+B0h] [rbp-58h]
  unsigned int *v72; // [rsp+B8h] [rbp-50h]
  enum DXGI_FORMAT v73; // [rsp+C0h] [rbp-48h] BYREF
  int v74; // [rsp+C8h] [rbp-40h]
  _BYTE v75[24]; // [rsp+D8h] [rbp-30h] BYREF
  _BYTE v76[104]; // [rsp+F0h] [rbp-18h] BYREF
  int v77; // [rsp+158h] [rbp+50h]
  const char *v78; // [rsp+160h] [rbp+58h]
  int v79; // [rsp+168h] [rbp+60h]
  __int128 v80; // [rsp+170h] [rbp+68h]
  _QWORD v81[4]; // [rsp+188h] [rbp+80h] BYREF
  _QWORD v82[4]; // [rsp+1A8h] [rbp+A0h] BYREF

  v3 = *((_QWORD *)a2 + 4);
  v5 = (struct CD3DDevice *)*((_QWORD *)a2 + 1);
  v7 = *((_QWORD *)a2 + 2);
  v66 = 0LL;
  v8 = v3 + 160;
  v72 = a3;
  v67 = v5;
  v71 = v7;
  memset_0(v75, 0, 0x80uLL);
  v9 = (ShaderLinkingSamplerDesc *)v75;
  v10 = 4LL;
  do
  {
    ShaderLinkingSamplerDesc::ShaderLinkingSamplerDesc(v9);
    v9 = (ShaderLinkingSamplerDesc *)((char *)v9 + 32);
    --v10;
  }
  while ( v10 );
  v79 = 0;
  v78 = "NoOp";
  v11 = *((_DWORD *)a2 + 27) == 1;
  v77 = -1;
  v80 = 0LL;
  if ( v11 )
    WORD3(v80) = 257;
  else
    WORD3(v80) = 0;
  v12 = *((_QWORD *)a2 + 6);
  LOBYTE(v80) = *((_DWORD *)a2 + 16) == 22;
  BYTE5(v80) = 1;
  if ( v12 )
  {
    v13 = (int *)(v12 + 16);
  }
  else
  {
    if ( __TSS0__1__NoLights_CLightsMask__SAAEBV2_XZ_4HA > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer
                                                                       + (unsigned int)tls_index)
                                                                     + 4LL) )
    {
      Init_thread_header(&__TSS0__1__NoLights_CLightsMask__SAAEBV2_XZ_4HA);
      if ( __TSS0__1__NoLights_CLightsMask__SAAEBV2_XZ_4HA == -1 )
      {
        `CLightsMask::NoLights'::`2'::noLights = -1;
        Init_thread_footer(&__TSS0__1__NoLights_CLightsMask__SAAEBV2_XZ_4HA);
      }
    }
    v13 = &`CLightsMask::NoLights'::`2'::noLights;
  }
  v14 = v8 + 16;
  v15 = *(float *)&FLOAT_1_0;
  v16 = 0LL;
  v77 = *v13;
  BYTE1(v80) = *(_BYTE *)(v8 + 208);
  v17 = *((_QWORD *)this + 2);
  LODWORD(v61) = 0;
  v18 = *(_DWORD *)(v17 + 60);
  LODWORD(v58) = v18;
  if ( v18 )
  {
    v19 = 0LL;
    v65 = (float *)(v8 + 112);
    v20 = v76;
    v21 = (CBrushRenderingEffect *)((char *)this + 24);
    v62 = 0LL;
    v22 = (char *)this + 216;
    v63 = (CBrushRenderingEffect *)((char *)this + 24);
    v23 = 16LL;
    v64 = v76;
    v68 = (char *)this + 216;
    v70 = 16LL;
    while ( 1 )
    {
      LOBYTE(v23) = 1;
      if ( !*(_QWORD *)v21 && !*((_QWORD *)v21 + 1) )
      {
        v81[v19] = 0LL;
        v82[v19] = 0LL;
        *(v20 - 2) = 1;
        goto LABEL_28;
      }
      ShaderResourceView = CDrawListBitmap::GetShaderResourceView(v21, (struct PixelFormatInfo *)&v73);
      v81[v62] = ShaderResourceView;
      v59 = *(_WORD *)v22;
      v60 = v22[2];
      D3DSamplerStateNoRef = CD3DDevice::GetD3DSamplerStateNoRef(v5, &v59, &v82[v16]);
      v27 = D3DSamplerStateNoRef;
      if ( D3DSamplerStateNoRef < 0 )
      {
        v56 = 104;
        goto LABEL_78;
      }
      v28 = v74;
      v29 = 0;
      *(_QWORD *)&v69 = "NoOp";
      v30 = (const char *)&unk_1802CE558;
      DWORD2(v69) = 0;
      do
      {
        if ( *(_DWORD *)v30 == v74 )
          break;
        v30 += 4;
      }
      while ( v30 != "NoOp" );
      v57 = v30 != "NoOp";
      ColorChannelDepth = GetColorChannelDepth(v73);
      IsOpaque = CDrawListBitmap::IsOpaque(v63);
      v27 = -2003292288;
      if ( !v28 )
        break;
      v50 = v28 - 1;
      if ( !v50 )
      {
        v34 = 2LL;
        goto LABEL_17;
      }
      v51 = v50 - 1;
      if ( v51 )
      {
        v52 = v51 - 1;
        if ( !v52 )
          goto LABEL_65;
        v53 = v52 - 9;
        if ( !v53 )
        {
          v34 = 10LL;
          goto LABEL_17;
        }
        v54 = v53 - 2;
        if ( !v54 )
        {
          v34 = 34LL;
          goto LABEL_17;
        }
        v55 = v54 - 6;
        if ( v55 )
        {
          if ( v55 == 1 )
          {
            v34 = 30LL;
            goto LABEL_17;
          }
        }
        else
        {
          if ( ColorChannelDepth == 8 )
          {
            v34 = 18LL;
            goto LABEL_17;
          }
          if ( ColorChannelDepth == 10 )
          {
            v34 = 26LL;
            goto LABEL_17;
          }
        }
      }
      else
      {
        if ( ColorChannelDepth == 8 )
        {
          v34 = 14LL;
          goto LABEL_17;
        }
        if ( ColorChannelDepth == 10 )
        {
LABEL_65:
          v34 = 22LL;
          goto LABEL_17;
        }
      }
      v35 = v69;
LABEL_20:
      if ( v27 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v33, 0LL, 0, v27, 0x73u, 0LL);
        goto LABEL_41;
      }
      v36 = v64;
      if ( v29 > 1 )
        *(_OWORD *)(v64 - 24) = v35;
      v37 = v63;
      *v36 = v57;
      v38 = CDrawListBitmap::IsOpaque(v37);
      v22 = v68;
      *(v36 - 1) = v38;
      LOBYTE(v23) = *v22;
      if ( *((_BYTE *)this + v62 + 356) )
        v39 = 0.0;
      else
        v39 = *(float *)&FLOAT_1_0;
      v40 = v65;
      if ( v65[(unsigned __int64)v70 / 4 - 4] != v39 )
      {
        *(_BYTE *)(v8 + 8) = 1;
        *v40 = v39;
      }
      v5 = v67;
      LODWORD(v16) = v61;
LABEL_28:
      CRenderingTechnique::ConfigureSampler(
        *((_QWORD *)this + 2),
        (unsigned int)v16,
        v23,
        &v75[32 * (unsigned int)v16],
        (char *)this + 32 * (unsigned int)v16 + 228);
      v16 = (unsigned int)(v16 + 1);
      v19 = v62 + 1;
      v21 = (CDrawListBitmap *)((char *)v63 + 48);
      ++v65;
      v20 = v64 + 32;
      v22 += 3;
      LODWORD(v61) = v16;
      ++v62;
      v68 = v22;
      v63 = (CDrawListBitmap *)((char *)v63 + 48);
      v64 += 32;
      if ( (unsigned int)v16 >= (unsigned int)v58 )
      {
        v17 = *((_QWORD *)this + 2);
        v14 = v8 + 16;
        v7 = v71;
        v18 = (unsigned int)v58;
        goto LABEL_30;
      }
    }
    v34 = 0LL;
LABEL_17:
    if ( IsOpaque )
      v34 = (unsigned int)(v34 + 1);
    v33 = &ColorConversion::g_rgShaders;
    v27 = 0;
    v35 = *((_OWORD *)&ColorConversion::g_rgShaders + v34);
    v69 = v35;
    v29 = DWORD2(v35);
    goto LABEL_20;
  }
LABEL_30:
  if ( (*(_BYTE *)(v17 + 64) & 0x10) == 0 || v18 >= 4 )
    v15 = 0.0;
  if ( *(float *)(v14 + 16) != v15 )
  {
    *(float *)(v8 + 32) = v15;
    *(_BYTE *)(v8 + 8) = 1;
  }
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD *))(*(_QWORD *)v7 + 64LL))(v7, 0LL, v18, v81);
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD *))(*(_QWORD *)v7 + 80LL))(v7, 0LL, (unsigned int)v58, v82);
  D3DSamplerStateNoRef = CRenderingTechnique::GetShaders(
                           *((CRenderingTechnique **)this + 2),
                           v5,
                           (const struct ShaderLinkingConfig *)v75,
                           (unsigned int *)&v58,
                           &v66);
  v27 = D3DSamplerStateNoRef;
  if ( D3DSamplerStateNoRef < 0 )
  {
    v56 = 167;
LABEL_78:
    MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, D3DSamplerStateNoRef, v56, 0LL);
  }
  else
  {
    v43 = (unsigned int)v58;
    v44 = *(void (__fastcall **)(__int64, struct ID3D11VertexShader *, _QWORD, _QWORD))(*(_QWORD *)v7 + 88LL);
    VertexShaderNoRef = CD3DDevice::GetVertexShaderNoRef(v5, (unsigned int)v58, v41, v42);
    v44(v7, VertexShaderNoRef, 0LL, 0LL);
    (*(void (__fastcall **)(__int64, struct ID3D11PixelShader *, _QWORD, _QWORD))(*(_QWORD *)v7 + 72LL))(
      v7,
      v66,
      0LL,
      0LL);
    v46 = (CRenderingTechnique *)*((_QWORD *)this + 2);
    v58 = 0LL;
    Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease(&v58);
    ConstantBuffer = CRenderingTechnique::GetConstantBuffer(v46, v5, &v58);
    v27 = ConstantBuffer;
    if ( ConstantBuffer < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v48, 0LL, 0, ConstantBuffer, 0xAFu, 0LL);
      Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease(&v58);
    }
    else
    {
      if ( v58 )
        (*(void (__fastcall **)(__int64, _QWORD, __int64, struct ID3D11Buffer **))(*(_QWORD *)v7 + 128LL))(
          v7,
          0LL,
          1LL,
          &v58);
      Microsoft::WRL::ComPtr<ID2D1Geometry>::InternalRelease(&v58);
      if ( (*(_BYTE *)(*((_QWORD *)this + 2) + 64LL) & 2) != 0
        && *(_DWORD *)CD3DBatchExecutionContext::GetLightsMask(a2) == -1
        || (*(_BYTE *)(*((_QWORD *)this + 2) + 64LL) & 4) != 0 )
      {
        CD3DBatchExecutionContext::SetNoOpLightingConstantBuffers(a2);
      }
      *v72 = v43;
    }
  }
LABEL_41:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v66);
  return (unsigned int)v27;
}
