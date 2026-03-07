__int128 *__fastcall VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
        __int64 a1,
        __int64 a2,
        CMILMatrix *a3,
        __int64 a4)
{
  __int128 *result; // rax
  struct D2D_POINT_2F *v6; // r15
  unsigned int v7; // esi
  unsigned int v8; // r12d
  int v9; // r8d
  __int64 v11; // rdi
  __int64 v12; // rbx
  __int128 v13[4]; // [rsp+30h] [rbp-48h] BYREF
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h] BYREF
  char v15; // [rsp+80h] [rbp+8h] BYREF
  __int64 v16; // [rsp+88h] [rbp+10h]

  result = (__int128 *)&retaddr;
  v16 = a2;
  v6 = *(struct D2D_POINT_2F **)a1;
  v7 = 0;
  v8 = *(_DWORD *)(a1 + 20);
  v9 = a2;
  v13[0] = _xmm;
  if ( a3 && a4 )
  {
    result = (__int128 *)CalculateTBNFrameFrom3Vertices((__int64)v13, (__int64)v6, (__int64 *)(a1 + 8));
    v9 = v16;
    v13[0] = *result;
  }
  if ( v8 )
  {
    do
    {
      v11 = *(_QWORD *)(a1 + 8) + (int)(*(_DWORD *)(a1 + 16) * v7);
      v12 = *(_QWORD *)(a1 + 56) + (int)(*(_DWORD *)(a1 + 64) * v7);
      Transform2DAndFillPosXYUVs<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>(
        *(_DWORD *)(a1 + 8) + *(_DWORD *)(a1 + 16) * v7,
        *(_DWORD *)(a1 + 24) + *(_DWORD *)(a1 + 32) * v7,
        *(_DWORD *)(a1 + 40),
        v9,
        v12,
        (__int64)&v15);
      *(_DWORD *)(v12 + 8) = 1065353216;
      *(_DWORD *)(v12 + 12) = *(_DWORD *)(v11 + 12);
      result = (__int128 *)VertexTransfer::TransformDeviceSpacePositionAndNormal(v6, a3);
      v9 = v16;
      ++v6;
      ++v7;
    }
    while ( v7 < v8 );
  }
  return result;
}
