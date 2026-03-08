/*
 * XREFs of ?TryGetMeshAAOffsetsForRoundedRectangle@CMeshCacheManager@@AEAAPEAVVertexAAOffsetsResource@Mesh@@AEBUMeshDesc@3@PEBVCRoundedRectangleShape@@AEBVMatrix3x2F@D2D1@@_N@Z @ 0x18007F5A8
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x18005F2F0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?TryGetMeshAAOffsets@CMeshCacheManager@@QEAAPEAVVertexAAOffsetsResource@Mesh@@AEBUMeshDesc@3@PEBVCShape@@AEBVMatrix3x2F@D2D1@@_N@Z @ 0x1800B20F0 (-TryGetMeshAAOffsets@CMeshCacheManager@@QEAAPEAVVertexAAOffsetsResource@Mesh@@AEBUMeshDesc@3@PEB.c)
 * Callees:
 *     ??0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x18005C728 (--0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z @ 0x18007F7E4 (-Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?AreAllCornerRadiiEqual@CRoundedRectangleGeometryData@@QEBA_NXZ @ 0x18007F820 (-AreAllCornerRadiiEqual@CRoundedRectangleGeometryData@@QEBA_NXZ.c)
 *     ?Transform_AxisAlignedPreserving@CRoundedRectangleGeometryData@@SAXAEBU1@AEBVCMILMatrix@@PEAU1@@Z @ 0x18007F8A8 (-Transform_AxisAlignedPreserving@CRoundedRectangleGeometryData@@SAXAEBU1@AEBVCMILMatrix@@PEAU1@@.c)
 *     ?GetBaseRect@CRoundedRectangleGeometryData@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1800836C0 (-GetBaseRect@CRoundedRectangleGeometryData@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoin.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?resize@?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_KAEBW4D2D1_EDGE_FLAGS@@@Z @ 0x1800B0AA8 (-resize@-$vector_facade@W4D2D1_EDGE_FLAGS@@V-$buffer_impl@W4D2D1_EDGE_FLAGS@@$0CI@$00Vliberal_ex.c)
 *     ?clear_region@?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800B2168 (-clear_region@-$vector_facade@W4D2D1_EDGE_FLAGS@@V-$buffer_impl@W4D2D1_EDGE_FLAGS@@$0CI@$00Vlibe.c)
 *     ?IsFullyAntialiased@CMeshCacheManager@@CA_NPEBW4D2D1_EDGE_FLAGS@@_K@Z @ 0x1800EBB24 (-IsFullyAntialiased@CMeshCacheManager@@CA_NPEBW4D2D1_EDGE_FLAGS@@_K@Z.c)
 *     ?Create@VertexAAOffsetsResource@Mesh@@SAXAEBUMeshDesc@2@PEAPEAV12@@Z @ 0x1800EDFC8 (-Create@VertexAAOffsetsResource@Mesh@@SAXAEBUMeshDesc@2@PEAPEAV12@@Z.c)
 *     ??$_Try_emplace@AEBURoundedRectangleCacheKey@CMeshCacheManager@@$$V@?$map@URoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@U?$less@URoundedRectangleCacheKey@CMeshCacheManager@@@std@@V?$allocator@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@@6@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBURoundedRectangleCacheKey@CMeshCacheManager@@V?$com_ptr_t@VVertexAAOffsetsResource@Mesh@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@_N@1@AEBURoundedRectangleCacheKey@CMeshCacheManager@@@Z @ 0x1800EE478 (--$_Try_emplace@AEBURoundedRectangleCacheKey@CMeshCacheManager@@$$V@-$map@URoundedRectangleCache.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

struct Mesh::VertexAAOffsetsResource *__fastcall CMeshCacheManager::TryGetMeshAAOffsetsForRoundedRectangle(
        CMeshCacheManager *this,
        const struct Mesh::MeshDesc *a2,
        const struct CRoundedRectangleShape *a3,
        const struct D2D1::Matrix3x2F *a4,
        bool a5)
{
  const struct D2D_MATRIX_3X2_F *v7; // r9
  __int64 v8; // r10
  __int64 v9; // r8
  __int64 v10; // r9
  float v12; // xmm3_4
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  _BYTE *v18; // rcx
  struct Mesh::VertexAAOffsetsResource **v19; // rdx
  int v20; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v21; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v22; // [rsp+38h] [rbp-C8h]
  _BYTE *v23; // [rsp+40h] [rbp-C0h]
  __int128 v24; // [rsp+48h] [rbp-B8h]
  __int64 v25; // [rsp+58h] [rbp-A8h]
  _BYTE v26[72]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v27; // [rsp+A8h] [rbp-58h] BYREF
  float v28; // [rsp+B0h] [rbp-50h]
  float v29; // [rsp+B4h] [rbp-4Ch]
  __int64 v30; // [rsp+B8h] [rbp-48h] BYREF
  float v31; // [rsp+C0h] [rbp-40h]
  _BYTE *v32; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE *v33; // [rsp+D8h] [rbp-28h]
  char *v34; // [rsp+E0h] [rbp-20h]
  _BYTE v35[160]; // [rsp+E8h] [rbp-18h] BYREF
  char v36; // [rsp+188h] [rbp+88h] BYREF

  if ( !D2DMatrixHelper::Is2DAxisAlignedPreserving(a4, (const struct D2D_MATRIX_3X2_F *)a2) )
    return 0LL;
  LODWORD(v25) = 0;
  CMILMatrix::CMILMatrix((CMILMatrix *)v26, v7);
  CRoundedRectangleGeometryData::Transform_AxisAlignedPreserving(
    (const struct CRoundedRectangleGeometryData *)(*(_QWORD *)(v8 + 16) + 16LL),
    (const struct CMILMatrix *)v26,
    (struct CRoundedRectangleGeometryData *)&v21);
  if ( !CRoundedRectangleGeometryData::AreAllCornerRadiiEqual((CRoundedRectangleGeometryData *)&v21) )
    return 0LL;
  CRoundedRectangleGeometryData::GetBaseRect(&v21, &v27, v9, v10);
  v12 = *(float *)&v22;
  if ( (float)((float)(v28 - *(float *)&v27) - (float)(*(float *)&v22 * 2.0)) <= 0.0000011920929
    || (float)((float)(v29 - *((float *)&v27 + 1)) - (float)(*((float *)&v22 + 1) * 2.0)) <= 0.0000011920929
    || !a5 && !CMeshCacheManager::IsFullyAntialiased(*((const enum D2D1_EDGE_FLAGS **)a2 + 3), *((_QWORD *)a2 + 1)) )
  {
    return 0LL;
  }
  v30 = *((_QWORD *)a2 + 1);
  v31 = v12 / *((float *)&v22 + 1);
  std::map<CMeshCacheManager::RoundedRectangleCacheKey,wil::com_ptr_t<Mesh::VertexAAOffsetsResource,wil::err_returncode_policy>>::_Try_emplace<CMeshCacheManager::RoundedRectangleCacheKey const &,>(
    this,
    &v27,
    &v30);
  v13 = v27;
  if ( !*(_QWORD *)(v27 + 48) )
  {
    if ( a5 )
    {
      v14 = *((_QWORD *)a2 + 1);
      v32 = v35;
      v20 = 3;
      v33 = v35;
      v34 = &v36;
      detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,40,1,detail::liberal_expansion_policy>>::resize(
        &v32,
        v14,
        &v20);
      v15 = *(_QWORD *)(v13 + 48);
      v16 = *((_OWORD *)a2 + 1);
      v21 = *(_OWORD *)a2;
      v17 = *((_OWORD *)a2 + 2);
      v22 = v16;
      v23 = v32;
      v25 = *((_QWORD *)a2 + 6);
      *(_QWORD *)(v13 + 48) = 0LL;
      v24 = v17;
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
      Mesh::VertexAAOffsetsResource::Create(
        (const struct Mesh::MeshDesc *)&v21,
        (struct Mesh::VertexAAOffsetsResource **)(v13 + 48));
      v18 = v32;
      if ( (v33 - v32) >> 2 )
      {
        detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,40,1,detail::liberal_expansion_policy>>::clear_region(
          &v32,
          0LL);
        v18 = v32;
      }
      v32 = 0LL;
      if ( v18 == v35 )
        v18 = 0LL;
      operator delete(v18);
    }
    else
    {
      v19 = (struct Mesh::VertexAAOffsetsResource **)(v27 + 48);
      *(_QWORD *)(v27 + 48) = 0LL;
      Mesh::VertexAAOffsetsResource::Create(a2, v19);
    }
  }
  return *(struct Mesh::VertexAAOffsetsResource **)(v13 + 48);
}
