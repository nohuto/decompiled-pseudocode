/*
 * XREFs of ?Create@VertexAAOffsetsResource@Mesh@@SAXAEBUMeshDesc@2@PEAPEAV12@@Z @ 0x1800EDFC8
 * Callers:
 *     ?TryGetMeshAAOffsetsForRoundedRectangle@CMeshCacheManager@@AEAAPEAVVertexAAOffsetsResource@Mesh@@AEBUMeshDesc@3@PEBVCRoundedRectangleShape@@AEBVMatrix3x2F@D2D1@@_N@Z @ 0x18007F5A8 (-TryGetMeshAAOffsetsForRoundedRectangle@CMeshCacheManager@@AEAAPEAVVertexAAOffsetsResource@Mesh@.c)
 *     ?Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@PEBVCShape@@AEBVCMILMatrix@@@Z @ 0x1800B12AC (-Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV-$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAn.c)
 * Callees:
 *     ??1?$com_ptr_t@VClipPlaneInfoRef@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000DA7C (--1-$com_ptr_t@VClipPlaneInfoRef@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044B4C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?CalcVertexAAOffsets@Mesh@@SAXAEBUMeshDesc@1@PEAUVertexAAOffsetDesc@1@_N@Z @ 0x1800725E4 (-CalcVertexAAOffsets@Mesh@@SAXAEBUMeshDesc@1@PEAUVertexAAOffsetDesc@1@_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Mesh::VertexAAOffsetsResource::Create(
        const struct Mesh::MeshDesc *a1,
        struct Mesh::VertexAAOffsetsResource **a2)
{
  char *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v4 = (char *)DefaultHeap::Alloc(32LL * *((_QWORD *)a1 + 1) + 24);
  if ( v4 )
  {
    v5 = *((_QWORD *)a1 + 1);
    *((_DWORD *)v4 + 2) = 0;
    *((_QWORD *)v4 + 2) = v5;
    *(_QWORD *)v4 = &Mesh::VertexAAOffsetsResource::`vftable';
    ((void (__fastcall *)(char *))Mesh::VertexAAOffsetsResource::`vftable')(v4);
  }
  else
  {
    v4 = 0LL;
  }
  Mesh::CalcVertexAAOffsets(a1, (struct Mesh::VertexAAOffsetDesc *)(v4 + 24), 1);
  v6 = 0LL;
  *a2 = (struct Mesh::VertexAAOffsetsResource *)v4;
  wil::com_ptr_t<ClipPlaneInfoRef,wil::err_returncode_policy>::~com_ptr_t<ClipPlaneInfoRef,wil::err_returncode_policy>(&v6);
}
