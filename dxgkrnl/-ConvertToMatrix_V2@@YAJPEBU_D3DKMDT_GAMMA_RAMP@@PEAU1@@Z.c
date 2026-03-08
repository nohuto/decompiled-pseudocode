/*
 * XREFs of ?ConvertToMatrix_V2@@YAJPEBU_D3DKMDT_GAMMA_RAMP@@PEAU1@@Z @ 0x1C0074104
 * Callers:
 *     ColorSpaceTransformConvert @ 0x1C0004808 (ColorSpaceTransformConvert.c)
 * Callees:
 *     memmove @ 0x1C0027340 (memmove.c)
 *     ?InitializeIdentityLut@@YAJPEAUD3DDDI_DXGI_RGB@@IMM@Z @ 0x1C0074204 (-InitializeIdentityLut@@YAJPEAUD3DDDI_DXGI_RGB@@IMM@Z.c)
 *     ColorSpaceTransformCombine @ 0x1C00742E4 (ColorSpaceTransformCombine.c)
 *     ColorSpaceTransformInitIdentityTransform @ 0x1C0074718 (ColorSpaceTransformInitIdentityTransform.c)
 */

__int64 __fastcall ConvertToMatrix_V2(
        const struct _D3DKMDT_GAMMA_RAMP *a1,
        struct _D3DKMDT_GAMMA_RAMP *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  D3DDDI_GAMMA_RAMP_RGB256x3x16 *pRgb256x3x16; // r14
  D3DDDI_GAMMA_RAMP_RGB256x3x16 *v8; // rdi
  __int64 v9; // rax
  float *v10; // r9
  __int64 v11; // r8
  float *v12; // rcx
  __int64 v13; // rdx

  v4 = 0;
  if ( a1->Type == D3DDDI_GAMMARAMP_MATRIX_3x4 )
  {
    pRgb256x3x16 = a2->Data.pRgb256x3x16;
    v8 = a1->Data.pRgb256x3x16;
    *(_DWORD *)pRgb256x3x16->Red = 1;
    memmove(&pRgb256x3x16->Red[2], &v8->Red[26], 0xC000uLL);
    *(_DWORD *)&pRgb256x3x16[32].Red[2] = 1;
    v9 = (char *)pRgb256x3x16 - (char *)v8 + 49160;
    v10 = (float *)&v8->Red[24];
    v11 = 3LL;
    do
    {
      v12 = (float *)v8;
      v13 = 3LL;
      do
      {
        *(float *)((char *)v12 + v9) = *v12 * *v10;
        ++v12;
        --v13;
      }
      while ( v13 );
      v8 = (D3DDDI_GAMMA_RAMP_RGB256x3x16 *)((char *)v8 + 16);
      v9 -= 4LL;
      --v11;
    }
    while ( v11 );
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
