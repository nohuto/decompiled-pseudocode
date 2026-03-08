/*
 * XREFs of ?InitializeIdentityMatrix@@YAJPEAMII@Z @ 0x1C0074290
 * Callers:
 *     ?ConvertToMatrix_3x4@@YAJPEBU_D3DKMDT_GAMMA_RAMP@@PEAU1@@Z @ 0x1C0073FE4 (-ConvertToMatrix_3x4@@YAJPEBU_D3DKMDT_GAMMA_RAMP@@PEAU1@@Z.c)
 *     ColorSpaceTransformInitIdentityTransform @ 0x1C0074718 (ColorSpaceTransformInitIdentityTransform.c)
 * Callees:
 *     memset @ 0x1C0027640 (memset.c)
 */

__int64 __fastcall InitializeIdentityMatrix(float *a1, __int64 a2, unsigned int a3)
{
  unsigned int v5; // edx
  __int64 v6; // r9
  unsigned int v7; // ecx
  __int64 v8; // rcx

  memset(a1, 0, 12LL * a3);
  v5 = 0;
  v6 = 0LL;
  do
  {
    v7 = v5++;
    v8 = v6 + a3 * v7;
    ++v6;
    a1[v8] = 1.0;
  }
  while ( v5 < 3 );
  return 0LL;
}
