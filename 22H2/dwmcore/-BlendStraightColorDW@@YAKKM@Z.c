/*
 * XREFs of ?BlendStraightColorDW@@YAKKM@Z @ 0x18020876C
 * Callers:
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180206AAC (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_V.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x180206DC8 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_C_ea_180206DC8.c)
 *     VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1802070EC (VertexTransfer--Transfer_VertexTransfer--CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_.c)
 *     VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1802072D4 (VertexTransfer--Transfer_VertexTransfer--CNonScale2DOperator_Vertex_UVxN_VertexXYW__ea_1802072D4.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x18020756C (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Ver.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1802077F0 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_Col_ea_1802077F0.c)
 *     VertexTransfer::Transfer_VertexTransfer::CCopyOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180209718 (VertexTransfer--Transfer_VertexTransfer--CCopyOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BlendStraightColorDW(unsigned int a1, float a2)
{
  return (int)(float)(unsigned __int8)a1 | (((int)(float)BYTE1(a1) | ((((int)(float)((float)HIBYTE(a1) * a2) << 8) | (unsigned int)(int)(float)BYTE2(a1)) << 8)) << 8);
}
