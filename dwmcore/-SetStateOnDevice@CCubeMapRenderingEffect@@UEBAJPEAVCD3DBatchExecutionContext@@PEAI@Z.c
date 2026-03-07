__int64 __fastcall CCubeMapRenderingEffect::SetStateOnDevice(
        CCubeMapRenderingEffect *this,
        struct CD3DBatchExecutionContext *a2,
        unsigned int *a3)
{
  struct CD3DDevice *v3; // r15
  __int64 v4; // r13
  __int64 v5; // rbx
  enum DXGI_COLOR_SPACE_TYPE v7; // r12d
  const struct CLightsMask *LightsMask; // rax
  bool v10; // zf
  int v11; // ebx
  int v12; // ebx
  int ColorChannelDepth; // eax
  char v14; // dl
  int ConversionShader; // eax
  CCommonRenderingShaderCache *v16; // rcx
  unsigned int v17; // esi
  int CommonOrCubeMapRenderingShader; // eax
  __int64 v19; // rcx
  int D3DSamplerStateNoRef; // eax
  __int64 v21; // rcx
  unsigned int v22; // edi
  void (__fastcall *v23)(__int64, struct ID3D11VertexShader *, _QWORD, _QWORD); // rbx
  struct ID3D11VertexShader *VertexShaderNoRef; // rax
  __int64 v26; // [rsp+30h] [rbp-49h] BYREF
  enum DXGI_FORMAT v27[4]; // [rsp+38h] [rbp-41h] BYREF
  __int128 v28; // [rsp+48h] [rbp-31h] BYREF
  __int64 v29; // [rsp+58h] [rbp-21h] BYREF
  __int128 v30; // [rsp+60h] [rbp-19h]
  const char *v31; // [rsp+70h] [rbp-9h]
  int v32; // [rsp+78h] [rbp-1h]
  int v33; // [rsp+80h] [rbp+7h]
  bool v34[76]; // [rsp+84h] [rbp+Bh] BYREF
  __int16 v35; // [rsp+E0h] [rbp+67h] BYREF
  char v36; // [rsp+E2h] [rbp+69h]
  unsigned int v37; // [rsp+E8h] [rbp+6Fh] BYREF
  unsigned int *v38; // [rsp+F0h] [rbp+77h]
  struct ID3D11PixelShader *v39; // [rsp+F8h] [rbp+7Fh] BYREF

  v38 = a3;
  v3 = (struct CD3DDevice *)*((_QWORD *)a2 + 1);
  v4 = *((_QWORD *)a2 + 2);
  v5 = *((_QWORD *)a2 + 4);
  v7 = *((_DWORD *)a2 + 30);
  v29 = 0LL;
  v39 = 0LL;
  *(_QWORD *)&v30 = "NoOp";
  v31 = "NoOp";
  *(_DWORD *)v34 = 0;
  v26 = 0LL;
  DWORD2(v30) = 0;
  v32 = 0;
  LightsMask = CD3DBatchExecutionContext::GetLightsMask(a2);
  *(_WORD *)&v34[1] = v7 == DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709;
  v10 = *(_BYTE *)(v5 + 368) == 0;
  v11 = 0;
  v33 = *(_DWORD *)LightsMask;
  if ( !v10 )
    v11 = 16;
  if ( *((_DWORD *)a2 + 16) == 22 )
    v11 |= 8u;
  v12 = v11 | 1;
  LODWORD(v29) = v12;
  if ( CDrawListBitmap::IsOpaque((CCubeMapRenderingEffect *)((char *)this + 16)) )
    LODWORD(v29) = v12 | 4;
  CDrawListBitmap::GetShaderResourceView(
    (CCubeMapRenderingEffect *)((char *)this + 16),
    *((const struct RenderTargetInfo **)a2 + 14),
    (struct PixelFormatInfo *)v27);
  *(_QWORD *)&v28 = "NoOp";
  DWORD2(v28) = 0;
  CDrawListBitmap::IsOpaque((CCubeMapRenderingEffect *)((char *)this + 16));
  ColorChannelDepth = GetColorChannelDepth(v27[0]);
  ConversionShader = ColorConversion::GetConversionShader(
                       (enum DXGI_COLOR_SPACE_TYPE)v27[2],
                       v14,
                       ColorChannelDepth,
                       v7,
                       (struct ColorConversion::Shader *)&v28,
                       v34);
  v17 = ConversionShader;
  if ( ConversionShader < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v16, 0LL, 0, ConversionShader, 0x65u, 0LL);
  }
  else
  {
    if ( DWORD2(v28) > 1 )
      v30 = v28;
    CommonOrCubeMapRenderingShader = CCommonRenderingShaderCache::GetCommonOrCubeMapRenderingShader(
                                       v16,
                                       v3,
                                       (const struct CommonRenderingShaderDesc *)&v29,
                                       1,
                                       &v37,
                                       &v39);
    v17 = CommonOrCubeMapRenderingShader;
    if ( CommonOrCubeMapRenderingShader < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, CommonOrCubeMapRenderingShader, 0x6Eu, 0LL);
    }
    else
    {
      v35 = *((_WORD *)this + 20);
      v36 = *((_BYTE *)this + 42);
      D3DSamplerStateNoRef = CD3DDevice::GetD3DSamplerStateNoRef((__int64)v3, (unsigned __int8 *)&v35, &v26);
      v17 = D3DSamplerStateNoRef;
      if ( D3DSamplerStateNoRef < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, D3DSamplerStateNoRef, 0x70u, 0LL);
      }
      else
      {
        v22 = v37;
        v23 = *(void (__fastcall **)(__int64, struct ID3D11VertexShader *, _QWORD, _QWORD))(*(_QWORD *)v4 + 88LL);
        VertexShaderNoRef = CD3DDevice::GetVertexShaderNoRef(v3, v37);
        v23(v4, VertexShaderNoRef, 0LL, 0LL);
        (*(void (__fastcall **)(__int64, struct ID3D11PixelShader *, _QWORD, _QWORD))(*(_QWORD *)v4 + 72LL))(
          v4,
          v39,
          0LL,
          0LL);
        (*(void (__fastcall **)(__int64, _QWORD, __int64, char *))(*(_QWORD *)v4 + 64LL))(
          v4,
          0LL,
          1LL,
          (char *)this + 48);
        (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v4 + 80LL))(v4, 0LL, 1LL, &v26);
        *v38 = v22;
      }
    }
  }
  return v17;
}
