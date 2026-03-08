/*
 * XREFs of ?UnionUnsafe@?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800C2A90
 * Callers:
 *     ?AddRectangleToBounds@CWindowBackgroundTreatment@@QEAAJAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000B750 (-AddRectangleToBounds@CWindowBackgroundTreatment@@QEAAJAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18006E820 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(
        float *a1,
        float *a2)
{
  float v2; // xmm8_4
  int v3; // eax
  float v4; // xmm4_4
  float v5; // xmm9_4
  float v6; // xmm6_4
  float v7; // xmm5_4
  unsigned int v8; // r9d
  int v9; // eax
  float v10; // xmm0_4
  unsigned int v11; // r8d
  char result; // al
  float v13; // xmm2_4
  float v14; // xmm0_4
  float v15; // xmm1_4
  float v16; // xmm0_4
  float v17; // xmm0_4
  float v18; // xmm0_4
  float v19; // xmm1_4

  v2 = a1[2];
  v3 = (a1[5] <= a1[4]) + 1;
  v4 = a1[3];
  v5 = a1[1];
  if ( v2 > *a1 )
    v3 = a1[5] <= a1[4];
  v8 = v3 + 1;
  if ( v4 > v5 )
    v8 = v3;
  v7 = a2[4];
  v6 = a2[5];
  v9 = (v6 <= v7) + 1;
  v10 = *a2;
  if ( a2[2] > *a2 )
    v9 = v6 <= v7;
  v11 = v9 + 1;
  if ( a2[3] > a2[1] )
    v11 = v9;
  if ( v8 <= 1 )
  {
    if ( v11 <= 1 )
    {
      v13 = a1[3];
      if ( *a1 > v10 )
      {
        *a1 = v10;
        v13 = v4;
      }
      v14 = a2[1];
      v15 = v4;
      if ( v5 > v14 )
      {
        a1[1] = v14;
        v15 = v13;
      }
      v16 = a2[2];
      if ( v16 > v2 )
      {
        a1[2] = v16;
        v4 = v15;
      }
      v17 = a2[3];
      if ( v17 > v4 )
        a1[3] = v17;
      v18 = a2[5];
      if ( v18 > a1[5] )
        a1[5] = v18;
      v19 = a2[4];
      if ( a1[4] > v19 )
        a1[4] = v19;
    }
    return 1;
  }
  if ( v11 <= 1 )
  {
    *(_OWORD *)a1 = *(_OWORD *)a2;
    *((_QWORD *)a1 + 2) = *((_QWORD *)a2 + 2);
    return 1;
  }
  *((_QWORD *)a1 + 2) = 0LL;
  result = 0;
  *((_QWORD *)a1 + 1) = 0LL;
  *(_QWORD *)a1 = 0LL;
  return result;
}
