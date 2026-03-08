/*
 * XREFs of ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x180049C3C
 * Callers:
 *     ?PrepareData@CMegaRect@@QEAAJAEAV?$vector@EV?$allocator@E@std@@@std@@@Z @ 0x18004A01C (-PrepareData@CMegaRect@@QEAAJAEAV-$vector@EV-$allocator@E@std@@@std@@@Z.c)
 * Callees:
 *     ??0?$CCommonTransferParameters@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@QEAA@AEBVCDrawListPrimitive@@M_NAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x180049CAC (--0-$CCommonTransferParameters@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@QEAA@AEBVCDrawListPrimitiv.c)
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBV?$CCommonTransferParameters@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBVCMILMatrix@@1_N@Z @ 0x1800712A0 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBV-$CCommonTransferParameters@U-.c)
 *     ?GetScaleCorrectLocalToWorldTransform@CDrawListPrimitive@@QEBA?AVCMILMatrix@@AEBV2@@Z @ 0x18007D340 (-GetScaleCorrectLocalToWorldTransform@CDrawListPrimitive@@QEBA-AVCMILMatrix@@AEBV2@@Z.c)
 */

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
