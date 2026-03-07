__int64 __fastcall TransferAliasedVertices(__int64 a1, float a2, __int64 a3)
{
  _BYTE v4[88]; // [rsp+30h] [rbp-58h] BYREF

  CCommonTransferParameters<Vertex_UVxN<VertexXYW_ColorDW>>::CCommonTransferParameters<Vertex_UVxN<VertexXYW_ColorDW>>(
    (__int64)v4,
    a1,
    a2,
    *(_BYTE *)(a1 + 104),
    a3);
  return TransferAliasedVertices((__int64)v4);
}
