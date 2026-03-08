/*
 * XREFs of ?GetShadersNoRef@CLinkedShader@@QEAAJPEAVCD3DDevice@@PEAIPEAPEAUID3D11PixelShader@@@Z @ 0x1802077F4
 * Callers:
 *     ?SetStateOnDevice@CProjectedShadowRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x180205DD0 (-SetStateOnDevice@CProjectedShadowRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 *     ?GetCompositingPixelShaderNoRef@CSurfaceShaderComposer@@QEAAJW4D3D_FEATURE_LEVEL@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D11PixelShader@@@Z @ 0x18029666C (-GetCompositingPixelShaderNoRef@CSurfaceShaderComposer@@QEAAJW4D3D_FEATURE_LEVEL@@V-$span@$$CBUP.c)
 * Callees:
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@QEAAJPEAVCD3DDevice@@PEAPEAVCD3DPixelShader@@@Z @ 0x18002CD5C (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@QEAAJPEAVC.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CLinkedShader::GetShadersNoRef(
        CLinkedShader *this,
        struct CD3DDevice *a2,
        unsigned int *a3,
        struct ID3D11PixelShader **a4)
{
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  struct CD3DPixelShader *v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = 0LL;
  v7 = CDeviceResourceTable<CD3DPixelShader,CLinkedShader>::FindOrCreateResourceNoRef((_QWORD *)this + 4, a2, &v11);
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x11u, 0LL);
  }
  else
  {
    *a3 = *((_DWORD *)this + 6);
    *a4 = (struct ID3D11PixelShader *)*((_QWORD *)v11 + 12);
  }
  return v9;
}
