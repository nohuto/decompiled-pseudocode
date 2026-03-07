void __fastcall GammaConvert_64bppABGR_128bppABGR(const struct PipelineParams *a1, const struct ScanOpParams *a2)
{
  __int64 v2; // r11
  __int64 v3; // rbx
  __int64 v4; // r11
  unsigned __int16 *v5; // r11
  float v6; // xmm3_4
  float v7; // xmm0_4
  __int64 v8; // r11
  int v9; // xmm5_4
  int v10; // xmm4_4
  int v11; // r10d

  v2 = *((_QWORD *)a2 + 1);
  v3 = *(_QWORD *)a2;
  if ( *((_DWORD *)a1 + 2) )
  {
    do
    {
      Convert_sRGB_UINT16_To_scRGB_float(*(_WORD *)(v2 + 2));
      Convert_sRGB_UINT16_To_scRGB_float(*(_WORD *)(v4 + 4));
      v6 = (float)v5[3] / 65535.0;
      v7 = Convert_sRGB_UINT16_To_scRGB_float(*v5);
      v2 = v8 + 8;
      *(float *)v3 = v7;
      *(_DWORD *)(v3 + 4) = v9;
      *(_DWORD *)(v3 + 8) = v10;
      *(float *)(v3 + 12) = v6;
      v3 += 16LL;
    }
    while ( v11 != 1 );
  }
}
