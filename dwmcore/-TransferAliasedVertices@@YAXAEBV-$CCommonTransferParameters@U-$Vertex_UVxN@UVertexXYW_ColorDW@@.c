/*
 * XREFs of ?TransferAliasedVertices@@YAXAEBV?$CCommonTransferParameters@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x1802064BC
 * Callers:
 *     ?EmitGeometryImpl@CRenderingEffect@@KAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@_N@Z @ 0x180072BA0 (-EmitGeometryImpl@CRenderingEffect@@KAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand.c)
 *     ?EmitCpuClipAntialiasTemplateGeometry@@YAJPEAVCD3DBatchExecutionContext@@PEBVCCpuClipAntialiasBatchCommand@@_N@Z @ 0x18007D038 (-EmitCpuClipAntialiasTemplateGeometry@@YAJPEAVCD3DBatchExecutionContext@@PEBVCCpuClipAntialiasBa.c)
 *     ?TransferAliasedVertices@@YAXAEBVCDrawListPrimitive@@MAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x180206548 (-TransferAliasedVertices@@YAXAEBVCDrawListPrimitive@@MAEBV-$StridedSpan@U-$Vertex_UVxN@UVertexXY.c)
 * Callees:
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdCopyOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180206244 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdCopyOperator_Vertex_UVxN_VertexXYW_ColorDW____.c)
 *     VertexTransfer::Transfer_VertexTransfer::CCopyOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1802062FC (VertexTransfer--Transfer_VertexTransfer--CCopyOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex.c)
 *     VertexTransfer::Transfer_VertexTransfer::CCopyOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180206398 (VertexTransfer--Transfer_VertexTransfer--CCopyOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex.c)
 *     VertexTransfer::Transfer_VertexTransfer::CCopyOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180206434 (VertexTransfer--Transfer_VertexTransfer--CCopyOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex.c)
 */

__int64 __fastcall TransferAliasedVertices(__int64 a1)
{
  char v1; // al
  __int64 result; // rax

  v1 = 1;
  if ( (*(_BYTE *)(a1 + 40) & 1) != 0 || (*(_BYTE *)(a1 + 56) & 0xF) != 0 )
    v1 = 0;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 44) - 1.0) & _xmm) >= 0.0000011920929 )
  {
    if ( !*(_BYTE *)(a1 + 48) )
    {
      if ( !v1 )
      {
        VertexTransfer::Transfer_VertexTransfer::CCopyOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(a1);
        goto LABEL_14;
      }
      goto LABEL_12;
    }
    if ( v1 )
    {
LABEL_12:
      VertexTransfer::SimdTransfer_VertexTransfer::CSimdCopyOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___(a1);
      goto LABEL_14;
    }
    VertexTransfer::Transfer_VertexTransfer::CCopyOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(a1);
  }
  else
  {
    if ( v1 )
      goto LABEL_12;
    VertexTransfer::Transfer_VertexTransfer::CCopyOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___(a1);
  }
LABEL_14:
  result = *(unsigned int *)(a1 + 20);
  dword_1803E2B14 += result;
  return result;
}
