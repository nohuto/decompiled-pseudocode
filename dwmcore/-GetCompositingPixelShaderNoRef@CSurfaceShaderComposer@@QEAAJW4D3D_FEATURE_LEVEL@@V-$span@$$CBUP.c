/*
 * XREFs of ?GetCompositingPixelShaderNoRef@CSurfaceShaderComposer@@QEAAJW4D3D_FEATURE_LEVEL@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D11PixelShader@@@Z @ 0x18029666C
 * Callers:
 *     ?HDRConvert@CD3DDevice@@QEAAJPEAUID3D11ShaderResourceView@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@3PEAUID3D11RenderTargetView@@1W4DXGI_COLOR_SPACE_TYPE@@M_NPEAUtagRECT@@@Z @ 0x18028A818 (-HDRConvert@CD3DDevice@@QEAAJPEAUID3D11ShaderResourceView@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@.c)
 *     ?HDRConvertWithFakeOverlay@CD3DDevice@@QEAAJPEAUID3D11ShaderResourceView@@AEBUPixelFormatInfo@@0AEBUD2D_SIZE_U@@1AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@3PEAUID3D11RenderTargetView@@2W4DXGI_COLOR_SPACE_TYPE@@M_NPEAUtagRECT@@@Z @ 0x18028AB08 (-HDRConvertWithFakeOverlay@CD3DDevice@@QEAAJPEAUID3D11ShaderResourceView@@AEBUPixelFormatInfo@@0.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetShadersNoRef@CLinkedShader@@QEAAJPEAVCD3DDevice@@PEAIPEAPEAUID3D11PixelShader@@@Z @ 0x1802077F4 (-GetShadersNoRef@CLinkedShader@@QEAAJPEAVCD3DDevice@@PEAIPEAPEAUID3D11PixelShader@@@Z.c)
 *     ?LookupLinkedShader@CShaderCache@@IEBAPEAVCLinkedShader@@ULookupKey@ShaderLinkingConfig@@@Z @ 0x180207878 (-LookupLinkedShader@CShaderCache@@IEBAPEAVCLinkedShader@@ULookupKey@ShaderLinkingConfig@@@Z.c)
 *     ?CreateCompositingShader@CCompositingShaderCache@@QEAAJW4D3DShaderProfileVersion@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAVCLinkedShader@@@Z @ 0x1802B68E0 (-CreateCompositingShader@CCompositingShaderCache@@QEAAJW4D3DShaderProfileVersion@@V-$span@$$CBUP.c)
 *     ?GetCompositingShaderLookupKey@CCompositingShaderCache@@CA?AUCompositingShaderLookupKey@1@W4D3DShaderProfileVersion@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1802B6A40 (-GetCompositingShaderLookupKey@CCompositingShaderCache@@CA-AUCompositingShaderLookupKey@1@W4D3DS.c)
 */

__int64 __fastcall CSurfaceShaderComposer::GetCompositingPixelShaderNoRef(
        __int64 a1,
        int a2,
        _OWORD *a3,
        unsigned int a4,
        struct ID3D11PixelShader **a5)
{
  int *v5; // rbx
  bool v6; // r14
  __int64 v8; // rdi
  __int64 CompositingShaderLookupKey; // rax
  CLinkedShader *v11; // rax
  int v12; // edx
  __int64 v13; // rcx
  int CompositingShader; // eax
  __int64 v15; // rcx
  unsigned int v16; // ebx
  int ShadersNoRef; // eax
  __int64 v18; // rcx
  _OWORD v20[2]; // [rsp+30h] [rbp-28h] BYREF
  CLinkedShader *v21; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v22; // [rsp+68h] [rbp+10h] BYREF

  v5 = *(int **)(a1 + 104);
  v6 = a2 >= 37632;
  v20[0] = *a3;
  v8 = a1;
  LOBYTE(a1) = a2 >= 37632;
  CompositingShaderLookupKey = CCompositingShaderCache::GetCompositingShaderLookupKey(a1, v20, a4);
  DWORD2(v20[0]) = 0;
  *(_QWORD *)&v20[0] = CompositingShaderLookupKey;
  v11 = (CLinkedShader *)CShaderCache::LookupLinkedShader(v5, (__int64)v20);
  v21 = v11;
  if ( !v11 )
  {
    v13 = *(_QWORD *)(v8 + 104);
    v20[0] = *a3;
    LOBYTE(v12) = v6;
    CompositingShader = CCompositingShaderCache::CreateCompositingShader(v13, v12, (unsigned int)v20, a4, (__int64)&v21);
    v16 = CompositingShader;
    if ( CompositingShader < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, CompositingShader, 0x1CCu, 0LL);
      return v16;
    }
    v11 = v21;
  }
  ShadersNoRef = CLinkedShader::GetShadersNoRef(v11, *(struct CD3DDevice **)(v8 + 96), &v22, a5);
  v16 = ShadersNoRef;
  if ( ShadersNoRef < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, ShadersNoRef, 0x1D0u, 0LL);
  return v16;
}
