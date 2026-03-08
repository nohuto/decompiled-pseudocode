/*
 * XREFs of ?IntersectUnsafe@?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800C2160
 * Callers:
 *     ?Intersect@?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000B6FC (-Intersect@-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@Rec.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180067850 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?CalcRootBounds@CVisual@@QEBAJPEAV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800C2D30 (-CalcRootBounds@CVisual@@QEBAJPEAV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointA.c)
 * Callees:
 *     <none>
 */

char __fastcall TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(
        float *a1,
        float *a2)
{
  float v2; // xmm0_4
  float v4; // xmm1_4
  float v5; // xmm0_4
  float v6; // xmm3_4
  float v7; // xmm0_4
  float v8; // xmm4_4
  float v9; // xmm2_4
  float v10; // xmm0_4
  float v11; // xmm7_4
  float v12; // xmm5_4
  float v13; // xmm0_4
  float v14; // xmm6_4
  float v15; // xmm5_4
  int v16; // ecx
  unsigned int v17; // eax
  char result; // al

  v2 = *a2;
  v4 = *a1;
  if ( *a2 > *a1 )
  {
    *a1 = v2;
    v4 = v2;
  }
  v5 = a2[1];
  v6 = a1[1];
  if ( v5 > v6 )
  {
    a1[1] = v5;
    v6 = v5;
  }
  v7 = a2[2];
  v8 = a1[2];
  if ( v8 > v7 )
  {
    a1[2] = v7;
    v8 = v7;
  }
  v9 = a1[3];
  v10 = a2[3];
  v11 = v9;
  if ( v9 > v10 )
  {
    a1[3] = v10;
    v9 = v10;
    v11 = v10;
  }
  v12 = a2[5];
  v13 = a1[5];
  if ( v13 > v12 )
  {
    a1[5] = v12;
    v9 = v11;
    v13 = v12;
  }
  v14 = a2[4];
  v15 = a1[4];
  if ( v14 > v15 )
  {
    a1[4] = v14;
    v15 = v14;
    v9 = v11;
  }
  v16 = (v13 <= v15) + 1;
  if ( v8 > v4 )
    v16 = v13 <= v15;
  v17 = v16 + 1;
  if ( v9 > v6 )
    v17 = v16;
  if ( v17 <= 1 )
    return 1;
  result = 0;
  *((_QWORD *)a1 + 2) = 0LL;
  *((_QWORD *)a1 + 1) = 0LL;
  *(_QWORD *)a1 = 0LL;
  return result;
}
