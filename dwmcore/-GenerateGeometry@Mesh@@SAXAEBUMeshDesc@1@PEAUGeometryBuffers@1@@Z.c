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
