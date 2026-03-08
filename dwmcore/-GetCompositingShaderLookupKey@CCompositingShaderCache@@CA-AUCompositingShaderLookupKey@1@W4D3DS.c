/*
 * XREFs of ?GetCompositingShaderLookupKey@CCompositingShaderCache@@CA?AUCompositingShaderLookupKey@1@W4D3DShaderProfileVersion@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1802B6A40
 * Callers:
 *     ?GetCompositingPixelShaderNoRef@CSurfaceShaderComposer@@QEAAJW4D3D_FEATURE_LEVEL@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D11PixelShader@@@Z @ 0x18029666C (-GetCompositingPixelShaderNoRef@CSurfaceShaderComposer@@QEAAJW4D3D_FEATURE_LEVEL@@V-$span@$$CBUP.c)
 *     ?CreateCompositingShader@CCompositingShaderCache@@QEAAJW4D3DShaderProfileVersion@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAVCLinkedShader@@@Z @ 0x1802B68E0 (-CreateCompositingShader@CCompositingShaderCache@@QEAAJW4D3DShaderProfileVersion@@V-$span@$$CBUP.c)
 * Callees:
 *     ?GetColorChannelDepth@@YAIW4DXGI_FORMAT@@@Z @ 0x18002C1B4 (-GetColorChannelDepth@@YAIW4DXGI_FORMAT@@@Z.c)
 */

__int64 __fastcall CCompositingShaderCache::GetCompositingShaderLookupKey(char a1, _QWORD *a2, char a3)
{
  __int64 v3; // rax
  __int64 v4; // r10
  int *v5; // r8
  __int64 v6; // r10
  int *v7; // r9
  int ColorChannelDepth; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r11
  __int64 v12; // rcx

  v3 = 0LL;
  v4 = a3 & 0x1F;
  if ( *a2 == 2LL )
    v3 = 32LL;
  v5 = (int *)a2[1];
  v6 = (a1 != 0 ? 0x40 : 0) | v3 | v4;
  v7 = &v5[3 * *a2];
  while ( v5 != v7 )
  {
    ColorChannelDepth = GetColorChannelDepth(*v5);
    v12 = 0LL;
    if ( *(_DWORD *)(v10 + 4) == 3 )
      v12 = v11;
    v6 = (4 * v9) | v12 | (ColorChannelDepth == 8);
    v5 = (int *)(v10 + 12);
  }
  return v6;
}
