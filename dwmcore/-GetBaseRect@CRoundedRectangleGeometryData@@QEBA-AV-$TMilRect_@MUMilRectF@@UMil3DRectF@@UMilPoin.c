/*
 * XREFs of ?GetBaseRect@CRoundedRectangleGeometryData@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1800836C0
 * Callers:
 *     ?TryMerge@CRoundedRectangleGeometryData@@SA_NAEBU1@0PEAU1@@Z @ 0x18001421C (-TryMerge@CRoundedRectangleGeometryData@@SA_NAEBU1@0PEAU1@@Z.c)
 *     ?TryGetMeshAAOffsetsForRoundedRectangle@CMeshCacheManager@@AEAAPEAVVertexAAOffsetsResource@Mesh@@AEBUMeshDesc@3@PEBVCRoundedRectangleShape@@AEBVMatrix3x2F@D2D1@@_N@Z @ 0x18007F5A8 (-TryGetMeshAAOffsetsForRoundedRectangle@CMeshCacheManager@@AEAAPEAVVertexAAOffsetsResource@Mesh@.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180080580 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?TryClipWithRect@CRoundedRectangleGeometryData@@SA_NAEBU1@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAU1@@Z @ 0x180080FC4 (-TryClipWithRect@CRoundedRectangleGeometryData@@SA_NAEBU1@AEBV-$TMilRect_@MUMilRectF@@UMil3DRect.c)
 *     ?GetBoundsForOcclusion@CRoundedRectangleShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180082900 (-GetBoundsForOcclusion@CRoundedRectangleShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMi.c)
 *     ?CalcEdgesAndControlPoints@CRoundedRectangleShape@@AEBAXPEAVCMilPoint2F@@@Z @ 0x1800833A8 (-CalcEdgesAndControlPoints@CRoundedRectangleShape@@AEBAXPEAVCMilPoint2F@@@Z.c)
 *     ?PartitionPrimitiveWithRoundedRectangleClip@CDrawListEntryBuilder@@CA_NIAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@AEBUCRoundedRectangleGeometryData@@PEAV?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1800B25E8 (-PartitionPrimitiveWithRoundedRectangleClip@CDrawListEntryBuilder@@CA_NIAEBUD2D_RECT_F@@W4D2D1_E.c)
 *     ?CreateNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z @ 0x1800D303C (-CreateNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z.c)
 *     ?IsEllipse@CRoundedRectangleGeometryData@@QEBA_NXZ @ 0x1800D3228 (-IsEllipse@CRoundedRectangleGeometryData@@QEBA_NXZ.c)
 *     ?CreateIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z @ 0x1800D32C4 (-CreateIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z.c)
 *     ?GetRectangles@CRoundedRectangleShape@@UEBA_NPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x1801AF710 (-GetRectangles@CRoundedRectangleShape@@UEBA_NPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CRoundedRectangleGeometryData::GetBaseRect(__int64 a1, __int64 a2)
{
  float v3; // xmm1_4
  float v4; // xmm0_4
  float v5; // xmm0_4
  float v6; // xmm1_4

  if ( *(_BYTE *)(a1 + 52) )
  {
    v3 = *(float *)(a1 + 4);
    v4 = *(float *)a1;
    *(_DWORD *)a2 = *(_DWORD *)a1;
    v5 = v4 + *(float *)(a1 + 8);
    *(float *)(a2 + 4) = v3;
    v6 = v3 + *(float *)(a1 + 12);
    *(float *)(a2 + 8) = v5;
    *(float *)(a2 + 12) = v6;
  }
  else
  {
    *(_DWORD *)a2 = *(_DWORD *)a1;
    *(_DWORD *)(a2 + 4) = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 8);
    *(_DWORD *)(a2 + 12) = *(_DWORD *)(a1 + 12);
  }
  return a2;
}
