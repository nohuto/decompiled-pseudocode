/*
 * XREFs of ColorSpaceTransformInitIdentityTransform @ 0x1C0074718
 * Callers:
 *     ColorSpaceTransformConvert @ 0x1C0004808 (ColorSpaceTransformConvert.c)
 *     ?ConvertToMatrix_V2@@YAJPEBU_D3DKMDT_GAMMA_RAMP@@PEAU1@@Z @ 0x1C0074104 (-ConvertToMatrix_V2@@YAJPEBU_D3DKMDT_GAMMA_RAMP@@PEAU1@@Z.c)
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0179B90 (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?GetDxgiGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C01D491C (-GetDxgiGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAPEBUDXGK_GAMMA_RAMP@@@Z.c)
 * Callees:
 *     ?InitializeIdentityLut@@YAJPEAUD3DDDI_DXGI_RGB@@IMM@Z @ 0x1C0074204 (-InitializeIdentityLut@@YAJPEAUD3DDDI_DXGI_RGB@@IMM@Z.c)
 *     ?InitializeIdentityLut_RGB256x3x16@@YAJPEAU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z @ 0x1C0074248 (-InitializeIdentityLut_RGB256x3x16@@YAJPEAU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z.c)
 *     ?InitializeIdentityMatrix@@YAJPEAMII@Z @ 0x1C0074290 (-InitializeIdentityMatrix@@YAJPEAMII@Z.c)
 */

__int64 __fastcall ColorSpaceTransformInitIdentityTransform(__int64 a1)
{
  unsigned int v1; // edi
  __int64 v2; // rdx
  __int64 v3; // rbx
  unsigned int v4; // edx
  struct D3DDDI_DXGI_RGB *v5; // rcx
  float v6; // xmm3_4
  __int64 v7; // r9
  __int64 v8; // rdx
  float *v9; // r9
  __int64 v10; // rcx

  v1 = 0;
  if ( *(_DWORD *)a1 != 1 )
  {
    if ( *(_DWORD *)a1 == 2 )
      return (unsigned int)InitializeIdentityLut_RGB256x3x16(*(struct _D3DDDI_GAMMA_RAMP_RGB256x3x16 **)(a1 + 16));
    if ( *(_DWORD *)a1 == 3 )
    {
      v10 = *(_QWORD *)(a1 + 16);
      v4 = 1025;
      *(_DWORD *)v10 = 1065353216;
      *(_DWORD *)(v10 + 4) = 1065353216;
      *(_QWORD *)(v10 + 8) = 1065353216LL;
      *(_QWORD *)(v10 + 16) = 0LL;
      v5 = (struct D3DDDI_DXGI_RGB *)(v10 + 24);
      v6 = FLOAT_1_0;
      goto LABEL_9;
    }
    v2 = (unsigned int)(*(_DWORD *)a1 - 4);
    if ( *(_DWORD *)a1 == 4 )
    {
      v7 = *(_QWORD *)(a1 + 16);
      *(_DWORD *)(v7 + 48) = 1065353216;
      InitializeIdentityLut((struct D3DDDI_DXGI_RGB *)(v7 + 52), 0x1000u, 0.0, 1.0);
      InitializeIdentityMatrix(v9, v8, 4u);
      return v1;
    }
    if ( *(_DWORD *)a1 == 5 )
    {
      v3 = *(_QWORD *)(a1 + 16);
      *(_DWORD *)(v3 + 49196) = 2;
      *(_DWORD *)(v3 + 49156) = 2;
      *(_DWORD *)v3 = 2;
      InitializeIdentityMatrix((float *)(v3 + 49160), v2, 3u);
      InitializeIdentityLut((struct D3DDDI_DXGI_RGB *)(v3 + 4), 0x1000u, 0.0, 1.0);
      v5 = (struct D3DDDI_DXGI_RGB *)(v3 + 49200);
      v6 = FLOAT_1_0;
LABEL_9:
      InitializeIdentityLut(v5, v4, 0.0, v6);
      return v1;
    }
  }
  return 0LL;
}
