__int64 __fastcall TransferVertices<Vertex_UVxN<VertexXYW_ColorDW>>(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v7; // rdx
  _BYTE v9[80]; // [rsp+30h] [rbp-A8h] BYREF
  _BYTE v10[88]; // [rsp+80h] [rbp-58h] BYREF

  CCommonTransferParameters<Vertex_UVxN<VertexXYW_ColorDW>>::CCommonTransferParameters<Vertex_UVxN<VertexXYW_ColorDW>>(
    (unsigned int)v10,
    a1,
    a3,
    *(_BYTE *)(a1 + 104),
    a5);
  CDrawListPrimitive::GetScaleCorrectLocalToWorldTransform(a1, v9, a2);
  return TransferVertices<Vertex_UVxN<VertexXYW_ColorDW>>(v10, v7, v9);
}
