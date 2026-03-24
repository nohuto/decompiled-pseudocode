/*
 * XREFs of ?IntersectUnsafe@?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800AD590
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18007BE10 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180088E00 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?CalculateRootBounds@CVisual@@QEBAJPEAV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18008CE40 (-CalculateRootBounds@CVisual@@QEBAJPEAV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilP.c)
 *     ?Intersect@?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180177538 (-Intersect@-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@Rec.c)
 * Callees:
 *     <none>
 */

char __fastcall TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(
        __int64 a1,
        __int64 a2)
{
  float v3; // xmm0_4
  float v4; // xmm1_4
  float v5; // xmm1_4
  float v6; // xmm1_4
  float v7; // xmm0_4
  float v8; // xmm2_4
  float v9; // xmm1_4
  bool v10; // cc
  int v11; // ecx
  unsigned int v12; // eax
  char result; // al

  if ( *(float *)a2 > *(float *)a1 )
    *(_DWORD *)a1 = *(_DWORD *)a2;
  v3 = *(float *)(a2 + 4);
  if ( v3 > *(float *)(a1 + 4) )
    *(float *)(a1 + 4) = v3;
  v4 = *(float *)(a2 + 8);
  if ( *(float *)(a1 + 8) > v4 )
    *(float *)(a1 + 8) = v4;
  v5 = *(float *)(a2 + 12);
  if ( *(float *)(a1 + 12) > v5 )
    *(float *)(a1 + 12) = v5;
  v6 = *(float *)(a2 + 20);
  v7 = *(float *)(a1 + 20);
  if ( v7 > v6 )
  {
    *(float *)(a1 + 20) = v6;
    v7 = v6;
  }
  v8 = *(float *)(a2 + 16);
  v9 = *(float *)(a1 + 16);
  if ( v8 > v9 )
  {
    *(float *)(a1 + 16) = v8;
    v9 = v8;
    v7 = *(float *)(a1 + 20);
  }
  v10 = *(float *)(a1 + 8) <= *(float *)a1;
  v11 = (v7 <= v9) + 1;
  if ( !v10 )
    v11 = v7 <= v9;
  v12 = v11 + 1;
  if ( *(float *)(a1 + 12) > *(float *)(a1 + 4) )
    v12 = v11;
  if ( v12 <= 1 )
    return 1;
  *(_QWORD *)(a1 + 16) = 0LL;
  result = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)a1 = 0LL;
  return result;
}
