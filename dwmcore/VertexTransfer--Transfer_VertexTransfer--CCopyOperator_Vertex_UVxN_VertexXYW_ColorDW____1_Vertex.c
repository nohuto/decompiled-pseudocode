_UNKNOWN **__fastcall VertexTransfer::Transfer_VertexTransfer::CCopyOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
        __int64 a1)
{
  _UNKNOWN **result; // rax
  unsigned int v2; // r14d
  unsigned int v3; // ebp
  float i; // xmm6_4
  unsigned int *v6; // rdi
  _DWORD *v7; // rbx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  v2 = *(_DWORD *)(a1 + 20);
  v3 = 0;
  for ( i = *(float *)(a1 + 44); v3 < v2; v7[3] = (_DWORD)result )
  {
    v6 = (unsigned int *)(*(_QWORD *)(a1 + 8) + (int)(*(_DWORD *)(a1 + 16) * v3));
    v7 = (_DWORD *)(*(_QWORD *)(a1 + 56) + (int)(*(_DWORD *)(a1 + 64) * v3));
    memcpy_0(v7, v6, (unsigned int)(8 * *(_DWORD *)(a1 + 40) + 16));
    result = (_UNKNOWN **)BlendPremultipliedColorDW(v6[3], i);
    ++v3;
  }
  return result;
}
