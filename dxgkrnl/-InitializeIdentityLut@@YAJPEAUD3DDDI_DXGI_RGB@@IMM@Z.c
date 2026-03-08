/*
 * XREFs of ?InitializeIdentityLut@@YAJPEAUD3DDDI_DXGI_RGB@@IMM@Z @ 0x1C0074204
 * Callers:
 *     ?ConvertToMatrix_3x4@@YAJPEBU_D3DKMDT_GAMMA_RAMP@@PEAU1@@Z @ 0x1C0073FE4 (-ConvertToMatrix_3x4@@YAJPEBU_D3DKMDT_GAMMA_RAMP@@PEAU1@@Z.c)
 *     ?ConvertToMatrix_V2@@YAJPEBU_D3DKMDT_GAMMA_RAMP@@PEAU1@@Z @ 0x1C0074104 (-ConvertToMatrix_V2@@YAJPEBU_D3DKMDT_GAMMA_RAMP@@PEAU1@@Z.c)
 *     ColorSpaceTransformInitIdentityTransform @ 0x1C0074718 (ColorSpaceTransformInitIdentityTransform.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InitializeIdentityLut(struct D3DDDI_DXGI_RGB *a1, unsigned int a2, float a3, float a4)
{
  float v4; // xmm3_4
  float *p_Green; // rax
  __int64 v6; // rcx

  v4 = (float)(a4 - a3) / (float)(int)(a2 - 1);
  if ( a2 )
  {
    p_Green = &a1->Green;
    v6 = a2;
    do
    {
      p_Green[1] = a3;
      *p_Green = a3;
      *(p_Green - 1) = a3;
      p_Green += 3;
      a3 = a3 + v4;
      --v6;
    }
    while ( v6 );
  }
  return 0LL;
}
