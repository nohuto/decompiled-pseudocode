unsigned int __fastcall VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
        __int64 a1,
        CMILMatrix *a2)
{
  __int64 v4; // rax
  unsigned int v5; // r15d
  unsigned int v6; // ebp
  float v7; // xmm6_4
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  unsigned int result; // eax
  __int64 v12; // rdi
  __int64 v13; // rbx
  _OWORD v14[4]; // [rsp+30h] [rbp-C8h] BYREF
  unsigned int i; // [rsp+70h] [rbp-88h]
  __int64 v16; // [rsp+80h] [rbp-78h] BYREF

  v4 = CMILMatrix::ComputeAdjointIgnoreZ(&v16);
  v5 = *(_DWORD *)(a1 + 20);
  v6 = 0;
  v7 = *(float *)(a1 + 44);
  v8 = *(_OWORD *)(v4 + 16);
  v14[0] = *(_OWORD *)v4;
  v14[1] = v8;
  v9 = *(_OWORD *)(v4 + 32);
  v10 = *(_OWORD *)(v4 + 48);
  result = *(_DWORD *)(v4 + 64);
  v14[2] = v9;
  v14[3] = v10;
  for ( i = result; v6 < v5; *(_DWORD *)(v13 + 12) = result )
  {
    v12 = *(_QWORD *)(a1 + 8) + (int)(*(_DWORD *)(a1 + 16) * v6);
    v13 = *(_QWORD *)(a1 + 56) + (int)(*(_DWORD *)(a1 + 64) * v6);
    VertexTransfer::CGeneral3DOperator<Vertex_UVxN<VertexXYW_ColorDW>>::Transform((CMILMatrix *)v14, a2, v13);
    result = BlendStraightColorDW(*(_DWORD *)(v12 + 12), v7);
    ++v6;
  }
  return result;
}
