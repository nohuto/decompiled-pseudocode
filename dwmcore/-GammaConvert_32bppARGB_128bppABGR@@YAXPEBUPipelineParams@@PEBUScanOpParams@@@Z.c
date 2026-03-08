/*
 * XREFs of ?GammaConvert_32bppARGB_128bppABGR@@YAXPEBUPipelineParams@@PEBUScanOpParams@@@Z @ 0x1802BA1E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall GammaConvert_32bppARGB_128bppABGR(const struct PipelineParams *a1, const struct ScanOpParams *a2)
{
  unsigned __int8 *v2; // r8
  float *v3; // r9
  __int64 v4; // rdx
  __int64 v5; // rax

  v2 = (unsigned __int8 *)*((_QWORD *)a2 + 1);
  v3 = *(float **)a2;
  if ( *((_DWORD *)a1 + 2) )
  {
    v4 = *((unsigned int *)a1 + 2);
    do
    {
      v5 = *v2;
      v2 += 4;
      v3[2] = GammaLUT_sRGB_to_scRGB[v5] / 255.0;
      v3[1] = GammaLUT_sRGB_to_scRGB[*(v2 - 3)] / 255.0;
      *v3 = GammaLUT_sRGB_to_scRGB[*(v2 - 2)] / 255.0;
      v3 += 4;
      *(v3 - 1) = (float)*(v2 - 1) / 255.0;
      --v4;
    }
    while ( v4 );
  }
}
