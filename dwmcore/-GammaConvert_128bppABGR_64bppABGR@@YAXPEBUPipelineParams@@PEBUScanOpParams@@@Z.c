/*
 * XREFs of ?GammaConvert_128bppABGR_64bppABGR@@YAXPEBUPipelineParams@@PEBUScanOpParams@@@Z @ 0x1802BA100
 * Callers:
 *     <none>
 * Callees:
 *     ?Convert_scRGB_float_To_sRGB_UINT16@@YAGM@Z @ 0x18027C4E4 (-Convert_scRGB_float_To_sRGB_UINT16@@YAGM@Z.c)
 */

void __fastcall GammaConvert_128bppABGR_64bppABGR(const struct PipelineParams *a1, const struct ScanOpParams *a2)
{
  int v2; // esi
  float *v3; // rdi
  _WORD *i; // rbx
  float v5; // xmm0_4
  int v6; // eax

  v2 = *((_DWORD *)a1 + 2);
  v3 = (float *)*((_QWORD *)a2 + 1);
  for ( i = *(_WORD **)a2; v2; i += 4 )
  {
    --v2;
    *i = Convert_scRGB_float_To_sRGB_UINT16(*v3);
    i[1] = Convert_scRGB_float_To_sRGB_UINT16(v3[1]);
    i[2] = Convert_scRGB_float_To_sRGB_UINT16(v3[2]);
    v5 = (float)(v3[3] * 65535.0) + 0.5;
    if ( v5 > 0.0 )
    {
      LOWORD(v6) = -1;
      if ( v5 < 65535.0 )
        v6 = (int)v5;
    }
    else
    {
      LOWORD(v6) = 0;
    }
    i[3] = v6;
    v3 += 4;
  }
}
