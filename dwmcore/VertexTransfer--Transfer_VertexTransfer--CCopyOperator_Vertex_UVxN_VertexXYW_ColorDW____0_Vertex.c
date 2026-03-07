_UNKNOWN **__fastcall VertexTransfer::Transfer_VertexTransfer::CCopyOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___(
        __int64 a1)
{
  _UNKNOWN **result; // rax
  unsigned int v2; // r14d
  unsigned int i; // ebp
  unsigned int *v5; // rdi
  _DWORD *v6; // rbx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v2 = *(_DWORD *)(a1 + 20);
  for ( i = 0; i < v2; v6[3] = (_DWORD)result )
  {
    v5 = (unsigned int *)(*(_QWORD *)(a1 + 8) + (int)(*(_DWORD *)(a1 + 16) * i));
    v6 = (_DWORD *)(*(_QWORD *)(a1 + 56) + (int)(*(_DWORD *)(a1 + 64) * i));
    memcpy_0(v6, v5, (unsigned int)(8 * *(_DWORD *)(a1 + 40) + 16));
    result = (_UNKNOWN **)v5[3];
    ++i;
  }
  return result;
}
