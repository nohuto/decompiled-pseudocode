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
