/*
 * XREFs of ?TryGetMeshAAOffsets@CMeshCacheManager@@QEAAPEAVVertexAAOffsetsResource@Mesh@@AEBUMeshDesc@3@PEBVCShape@@AEBVMatrix3x2F@D2D1@@_N@Z @ 0x1800B20F0
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x18005F2F0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@PEBVCShape@@AEBVCMILMatrix@@@Z @ 0x1800B12AC (-Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV-$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAn.c)
 * Callees:
 *     ?TryGetMeshAAOffsetsForRoundedRectangle@CMeshCacheManager@@AEAAPEAVVertexAAOffsetsResource@Mesh@@AEBUMeshDesc@3@PEBVCRoundedRectangleShape@@AEBVMatrix3x2F@D2D1@@_N@Z @ 0x18007F5A8 (-TryGetMeshAAOffsetsForRoundedRectangle@CMeshCacheManager@@AEAAPEAVVertexAAOffsetsResource@Mesh@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

struct Mesh::VertexAAOffsetsResource *__fastcall CMeshCacheManager::TryGetMeshAAOffsets(
        CMeshCacheManager *this,
        const struct Mesh::MeshDesc *a2,
        const struct CShape *a3,
        const struct D2D1::Matrix3x2F *a4,
        bool a5)
{
  if ( (*(unsigned int (__fastcall **)(const struct CShape *))(*(_QWORD *)a3 + 8LL))(a3) )
    return 0LL;
  else
    return CMeshCacheManager::TryGetMeshAAOffsetsForRoundedRectangle(this, a2, a3, a4, a5);
}
