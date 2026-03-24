/*
 * XREFs of ?ConvertToMatrix_V2@@YAJPEAU_D3DKMDT_GAMMA_RAMP@@0@Z @ 0x1C0061DE4
 * Callers:
 *     ColorSpaceTransformConvert @ 0x1C0019604 (ColorSpaceTransformConvert.c)
 * Callees:
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     ?InitializeIdentityLut@@YAJPEAUD3DDDI_DXGI_RGB@@IMM@Z @ 0x1C0061EE0 (-InitializeIdentityLut@@YAJPEAUD3DDDI_DXGI_RGB@@IMM@Z.c)
 *     ColorSpaceTransformCombine @ 0x1C0061FC4 (ColorSpaceTransformCombine.c)
 *     ColorSpaceTransformInitIdentityTransform @ 0x1C00623F0 (ColorSpaceTransformInitIdentityTransform.c)
 */

__int64 __fastcall ConvertToMatrix_V2(
        struct _D3DKMDT_GAMMA_RAMP *a1,
        struct _D3DKMDT_GAMMA_RAMP *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  D3DDDI_GAMMA_RAMP_RGB256x3x16 *pRgb256x3x16; // rsi
  D3DDDI_GAMMA_RAMP_RGB256x3x16 *v8; // rdi
  float *v9; // r8
  __int64 v10; // rdi
  float *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx

  v4 = 0;
  if ( a1->Type == D3DDDI_GAMMARAMP_MATRIX_3x4 )
  {
    pRgb256x3x16 = a2->Data.pRgb256x3x16;
    v8 = a1->Data.pRgb256x3x16;
    *(_DWORD *)pRgb256x3x16->Red = 1;
    memmove(&pRgb256x3x16->Red[2], &v8->Red[26], 0xC000uLL);
    v9 = (float *)&v8->Red[24];
    *(_DWORD *)&pRgb256x3x16[32].Red[2] = 1;
    v10 = (char *)v8 - (char *)pRgb256x3x16 - 49160;
    v11 = (float *)&pRgb256x3x16[32].Red[4];
    v12 = 3LL;
    do
    {
      v13 = 3LL;
      do
      {
        *v11 = *(float *)((char *)v11 + v10) * *v9;
        ++v11;
        --v13;
      }
      while ( v13 );
      v10 += 4LL;
      --v12;
    }
    while ( v12 );
    *(_DWORD *)&pRgb256x3x16[32].Red[22] = 2;
    InitializeIdentityLut((struct D3DDDI_DXGI_RGB *)&pRgb256x3x16[32].Red[24], 0x1000u, 0.0, 1.0);
  }
  else if ( (unsigned int)(a1->Type - 2) <= 1 )
  {
    ColorSpaceTransformInitIdentityTransform(a2, a2, a3, a4);
    return (unsigned int)ColorSpaceTransformCombine(0LL, a1, a2);
  }
  return v4;
}
