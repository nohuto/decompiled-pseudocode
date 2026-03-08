/*
 * XREFs of ?GammaConvert_128bppABGR_32bppARGB@@YAXPEBUPipelineParams@@PEBUScanOpParams@@@Z @ 0x1802BA050
 * Callers:
 *     <none>
 * Callees:
 *     ?Convert_scRGB_Channel_To_sRGB_Byte@@YAEM@Z @ 0x1800F6CCC (-Convert_scRGB_Channel_To_sRGB_Byte@@YAEM@Z.c)
 *     floorf_0 @ 0x180117728 (floorf_0.c)
 */

void __fastcall GammaConvert_128bppABGR_32bppARGB(const struct PipelineParams *a1, const struct ScanOpParams *a2)
{
  float *v2; // rdi
  _BYTE *v3; // rbx
  __int64 v4; // rsi
  int v5; // ecx
  char v6; // al

  v2 = (float *)*((_QWORD *)a2 + 1);
  v3 = *(_BYTE **)a2;
  if ( *((_DWORD *)a1 + 2) )
  {
    v4 = *((unsigned int *)a1 + 2);
    do
    {
      *v3 = Convert_scRGB_Channel_To_sRGB_Byte(v2[2]);
      v3[1] = Convert_scRGB_Channel_To_sRGB_Byte(v2[1]);
      v3[2] = Convert_scRGB_Channel_To_sRGB_Byte(*v2);
      v5 = (int)floorf_0((float)(v2[3] * 255.0) + 0.5);
      if ( v5 <= 255 )
      {
        v6 = 0;
        if ( v5 >= 0 )
          v6 = v5;
      }
      else
      {
        v6 = -1;
      }
      v3[3] = v6;
      v2 += 4;
      v3 += 4;
      --v4;
    }
    while ( v4 );
  }
}
