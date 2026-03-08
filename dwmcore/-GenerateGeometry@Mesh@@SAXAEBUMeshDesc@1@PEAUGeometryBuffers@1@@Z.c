/*
 * XREFs of ?GenerateGeometry@Mesh@@SAXAEBUMeshDesc@1@PEAUGeometryBuffers@1@@Z @ 0x1800B0C34
 * Callers:
 *     ?Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@PEBVCShape@@AEBVCMILMatrix@@@Z @ 0x1800B12AC (-Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV-$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAn.c)
 * Callees:
 *     ?CalcVertexAAOffsets@Mesh@@SAXAEBUMeshDesc@1@PEAUVertexAAOffsetDesc@1@_N@Z @ 0x1800725E4 (-CalcVertexAAOffsets@Mesh@@SAXAEBUMeshDesc@1@PEAUVertexAAOffsetDesc@1@_N@Z.c)
 *     ?GenerateGeometryForRectangle@Mesh@@CAXAEBUMeshDesc@1@PEAUGeometryBuffers@1@@Z @ 0x180074440 (-GenerateGeometryForRectangle@Mesh@@CAXAEBUMeshDesc@1@PEAUGeometryBuffers@1@@Z.c)
 *     ?GenerateGeometryWorker@Mesh@@CAXAEBUMeshDesc@1@PEAUGeometryBuffers@1@@Z @ 0x180075AC0 (-GenerateGeometryWorker@Mesh@@CAXAEBUMeshDesc@1@PEAUGeometryBuffers@1@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?reserve_region@?$vector_facade@UVertexAAOffsetDesc@Mesh@@V?$buffer_impl@UVertexAAOffsetDesc@Mesh@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUVertexAAOffsetDesc@Mesh@@_K0@Z @ 0x1800D9CF0 (-reserve_region@-$vector_facade@UVertexAAOffsetDesc@Mesh@@V-$buffer_impl@UVertexAAOffsetDesc@Mes.c)
 *     ?clear_region@?$vector_facade@UVertexAAOffsetDesc@Mesh@@V?$buffer_impl@UVertexAAOffsetDesc@Mesh@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800E16B0 (-clear_region@-$vector_facade@UVertexAAOffsetDesc@Mesh@@V-$buffer_impl@UVertexAAOffsetDesc@Mesh@.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

void __fastcall Mesh::GenerateGeometry(const struct Mesh::MeshDesc *a1, struct Mesh::GeometryBuffers *a2)
{
  __int64 v4; // r14
  _OWORD *v5; // rax
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  struct Mesh::VertexAAOffsetDesc *v8; // rcx
  __int64 v9; // r8
  _OWORD v10[2]; // [rsp+20h] [rbp-E0h] BYREF
  struct Mesh::VertexAAOffsetDesc *v11; // [rsp+40h] [rbp-C0h]
  __int64 v12; // [rsp+48h] [rbp-B8h]
  __int64 v13; // [rsp+50h] [rbp-B0h]
  struct Mesh::VertexAAOffsetDesc *v14; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE *v15; // [rsp+68h] [rbp-98h]
  char *v16; // [rsp+70h] [rbp-90h]
  _BYTE v17[1280]; // [rsp+78h] [rbp-88h] BYREF
  char v18; // [rsp+578h] [rbp+478h] BYREF

  if ( *((_BYTE *)a1 + 52) )
  {
    Mesh::GenerateGeometryForRectangle(a1, a2);
  }
  else if ( *((_QWORD *)a1 + 4) )
  {
    Mesh::GenerateGeometryWorker(a1, a2);
  }
  else
  {
    v4 = *((_QWORD *)a1 + 1);
    v14 = (struct Mesh::VertexAAOffsetDesc *)v17;
    v15 = v17;
    v16 = &v18;
    if ( v4 )
    {
      v5 = (_OWORD *)detail::vector_facade<Mesh::VertexAAOffsetDesc,detail::buffer_impl<Mesh::VertexAAOffsetDesc,40,1,detail::liberal_expansion_policy>>::reserve_region(
                       &v14,
                       0LL,
                       v4);
      *v5 = 0LL;
      v5[1] = 0LL;
      qmemcpy(v5 + 2, v5, 8 * ((unsigned __int64)(32 * v4 - 25) >> 3));
    }
    else
    {
      detail::vector_facade<Mesh::VertexAAOffsetDesc,detail::buffer_impl<Mesh::VertexAAOffsetDesc,40,1,detail::liberal_expansion_policy>>::clear_region(
        &v14,
        0LL,
        0LL);
    }
    Mesh::CalcVertexAAOffsets(a1, v14, 1);
    v6 = *((_OWORD *)a1 + 1);
    v10[0] = *(_OWORD *)a1;
    v7 = *((_OWORD *)a1 + 2);
    v10[1] = v6;
    *(_QWORD *)&v6 = *((_QWORD *)a1 + 6);
    v12 = *((_QWORD *)&v7 + 1);
    v11 = v14;
    v13 = v6;
    Mesh::GenerateGeometryWorker((const struct Mesh::MeshDesc *)v10, a2);
    v8 = v14;
    v9 = (v15 - (_BYTE *)v14) >> 5;
    if ( v9 )
    {
      detail::vector_facade<Mesh::VertexAAOffsetDesc,detail::buffer_impl<Mesh::VertexAAOffsetDesc,40,1,detail::liberal_expansion_policy>>::clear_region(
        &v14,
        0LL,
        v9);
      v8 = v14;
    }
    v14 = 0LL;
    if ( v8 == (struct Mesh::VertexAAOffsetDesc *)v17 )
      v8 = 0LL;
    operator delete(v8);
  }
}
