void *__fastcall VertexTransfer::SimdTransfer_VertexTransfer::CSimdCopyOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___(
        __int64 a1)
{
  unsigned int v1; // r15d
  unsigned int v2; // r12d
  void *result; // rax
  size_t v5; // r13
  int v6; // ebx
  int v7; // esi
  __int64 v8; // rdi
  __int64 v9; // rbp

  v1 = 0;
  v2 = *(_DWORD *)(a1 + 20);
  result = (void *)(*(_DWORD *)(a1 + 40) >> 1);
  if ( v2 )
  {
    v5 = (unsigned int)(16 * ((_DWORD)result + 1));
    do
    {
      v6 = *(_DWORD *)(a1 + 16);
      v7 = *(_DWORD *)(a1 + 64);
      v8 = *(_QWORD *)(a1 + 8);
      v9 = *(_QWORD *)(a1 + 56);
      memcpy_0((void *)(v9 + (int)(v1 * v7)), (const void *)(v8 + (int)(v1 * v6)), v5);
      result = memcpy_0((void *)(v9 + (int)(v7 * (v1 + 1))), (const void *)(v8 + (int)(v6 * (v1 + 1))), v5);
      v1 += 2;
    }
    while ( v1 < v2 );
  }
  return result;
}
