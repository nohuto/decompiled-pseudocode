/*
 * XREFs of ?CalcSubtractionRectangles@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBAIAEBV1@_NPEAV1@IPEAK@Z @ 0x1800C7E74
 * Callers:
 *     ?GetUnOccludedWorldShape@CRectanglesShape@@UEBAJV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@PEAPEAVCShape@@@Z @ 0x1800591C0 (-GetUnOccludedWorldShape@CRectanglesShape@@UEBAJV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointA.c)
 *     ?GetUnOccludedDirtyRect@CDirtyRegion@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IAEBV2@_NAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEBVCOcclusionContext@@@Z @ 0x180091ED4 (-GetUnOccludedDirtyRect@CDirtyRegion@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSi.c)
 *     ?GetUnOccludedWorldShape@CRegionShape@@UEBAJV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@PEAPEAVCShape@@@Z @ 0x18025F650 (-GetUnOccludedWorldShape@CRegionShape@@UEBAJV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSi.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::CalcSubtractionRectangles(
        float *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  float v4; // xmm1_4
  unsigned int v5; // r8d
  float v7; // xmm1_4
  float v8; // xmm1_4
  float v9; // xmm1_4
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx

  v4 = a1[1];
  v5 = 0;
  if ( *(float *)(a2 + 4) > v4 )
  {
    *(float *)(a4 + 4) = v4;
    v5 = 1;
    *(_DWORD *)(a4 + 12) = *(_DWORD *)(a2 + 4);
    *(float *)a4 = *a1;
    *(float *)(a4 + 8) = a1[2];
  }
  v7 = *a1;
  if ( *(float *)a2 > *a1 )
  {
    v13 = 2LL * v5++;
    *(float *)(a4 + 8 * v13) = v7;
    *(_DWORD *)(a4 + 8 * v13 + 8) = *(_DWORD *)a2;
    *(_DWORD *)(a4 + 8 * v13 + 4) = *(_DWORD *)(a2 + 4);
    *(_DWORD *)(a4 + 8 * v13 + 12) = *(_DWORD *)(a2 + 12);
  }
  v8 = *(float *)(a2 + 8);
  if ( a1[2] > v8 )
  {
    if ( v5 < 4 )
    {
      v12 = 2LL * v5;
      *(float *)(a4 + 8 * v12) = v8;
      *(float *)(a4 + 8 * v12 + 8) = a1[2];
      *(_DWORD *)(a4 + 8 * v12 + 4) = *(_DWORD *)(a2 + 4);
      *(_DWORD *)(a4 + 8 * v12 + 12) = *(_DWORD *)(a2 + 12);
    }
    ++v5;
  }
  v9 = *(float *)(a2 + 12);
  if ( a1[3] > v9 )
  {
    if ( v5 < 4 )
    {
      v11 = 2LL * v5;
      *(float *)(a4 + 8 * v11 + 4) = v9;
      *(float *)(a4 + 8 * v11 + 12) = a1[3];
      *(float *)(a4 + 8 * v11) = *a1;
      *(float *)(a4 + 8 * v11 + 8) = a1[2];
    }
    ++v5;
  }
  return v5;
}
