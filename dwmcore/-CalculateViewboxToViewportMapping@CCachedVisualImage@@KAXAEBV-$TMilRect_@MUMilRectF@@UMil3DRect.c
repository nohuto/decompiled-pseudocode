/*
 * XREFs of ?CalculateViewboxToViewportMapping@CCachedVisualImage@@KAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0W4Enum@MilStretch@@W43MilHorizontalAlignment@@W43MilVerticalAlignment@@PEAVCMILMatrix@@@Z @ 0x18003B2BC
 * Callers:
 *     ?Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@AEBVRenderTargetInfo@@@Z @ 0x18003AC10 (-Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoin.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCachedVisualImage::CalculateViewboxToViewportMapping(
        float *a1,
        float *a2,
        int a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  float v6; // xmm5_4
  float v7; // xmm2_4
  float v8; // xmm3_4
  int v9; // r8d
  __int64 result; // rax
  float v11; // xmm1_4
  float v12; // xmm0_4

  v6 = a2[1];
  v7 = (float)(a1[2] - *a1) / (float)(a2[2] - *a2);
  v8 = (float)(a1[3] - a1[1]) / (float)(a2[3] - v6);
  if ( a3 )
  {
    v9 = a3 - 2;
    if ( v9 )
    {
      if ( v9 != 1 )
        goto LABEL_5;
      v7 = fmaxf(v7, v8);
    }
    else
    {
      v7 = fminf(v7, v8);
    }
  }
  else
  {
    v7 = *(float *)&FLOAT_1_0;
  }
  v8 = v7;
LABEL_5:
  result = a6;
  v11 = (float)(v7 * COERCE_FLOAT(*(_DWORD *)a2 ^ _xmm)) + *a1;
  v12 = (float)(v8 * COERCE_FLOAT(LODWORD(v6) ^ _xmm)) + a1[1];
  *(float *)a6 = v7;
  *(_QWORD *)(a6 + 4) = 0LL;
  *(_QWORD *)(a6 + 12) = 0LL;
  *(float *)(a6 + 20) = v8;
  *(_QWORD *)(a6 + 24) = 0LL;
  *(_QWORD *)(a6 + 32) = 0LL;
  *(_QWORD *)(a6 + 40) = 1065353216LL;
  *(float *)(a6 + 48) = v11;
  *(float *)(a6 + 52) = v12;
  *(_DWORD *)(a6 + 56) = 0;
  *(_QWORD *)(a6 + 60) = 1065353216LL;
  return result;
}
