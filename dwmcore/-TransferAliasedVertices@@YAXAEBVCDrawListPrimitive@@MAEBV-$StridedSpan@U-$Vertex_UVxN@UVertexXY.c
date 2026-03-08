/*
 * XREFs of ?TransferAliasedVertices@@YAXAEBVCDrawListPrimitive@@MAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x180206548
 * Callers:
 *     ?EmitInstancedGeometry@@YAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z @ 0x180205454 (-EmitInstancedGeometry@@YAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z.c)
 * Callees:
 *     ??0?$CCommonTransferParameters@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@QEAA@AEBVCDrawListPrimitive@@M_NAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x180049CAC (--0-$CCommonTransferParameters@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@QEAA@AEBVCDrawListPrimitiv.c)
 *     ?TransferAliasedVertices@@YAXAEBV?$CCommonTransferParameters@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x1802064BC (-TransferAliasedVertices@@YAXAEBV-$CCommonTransferParameters@U-$Vertex_UVxN@UVertexXYW_ColorDW@@.c)
 */

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
