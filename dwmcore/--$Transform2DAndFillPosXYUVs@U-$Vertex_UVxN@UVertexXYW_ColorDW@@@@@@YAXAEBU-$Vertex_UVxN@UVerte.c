/*
 * XREFs of ??$Transform2DAndFillPosXYUVs@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBVCMILMatrix@@PEAU0@PEAUD2D_POINT_2F@@@Z @ 0x18001AC84
 * Callers:
 *     ?Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@PEBVCShape@@AEBVCMILMatrix@@@Z @ 0x1800B12AC (-Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV-$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAn.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x180204134 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Ver.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1802041EC (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Ver.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1802042A4 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Ver.c)
 * Callees:
 *     sqrtf_0 @ 0x1801177AC (sqrtf_0.c)
 */

float *__fastcall Transform2DAndFillPosXYUVs<Vertex_UVxN<VertexXYW_ColorDW>>(
        float *a1,
        float *a2,
        unsigned int a3,
        float *a4,
        float *a5,
        float *a6)
{
  __int64 v8; // rsi
  float v9; // xmm1_4
  float v10; // xmm6_4
  float v11; // xmm3_4
  float v12; // xmm9_4
  float v13; // xmm10_4
  float v14; // xmm7_4
  float v15; // xmm6_4
  float *result; // rax
  signed __int64 v17; // rbx
  float v18; // xmm8_4
  signed __int64 v19; // rcx
  __int64 v20; // rdx
  float v21; // xmm1_4

  v8 = a3;
  v9 = a1[1] - a2[1];
  v10 = *a1 - *a2;
  v11 = *(float *)&FLOAT_1_0;
  v12 = (float)((float)(a4[4] * a2[1]) + (float)(*a4 * *a2)) + a4[12];
  v13 = (float)((float)(a4[5] * a2[1]) + (float)(a4[1] * *a2)) + a4[13];
  v14 = (float)(v10 * *a4) + (float)(v9 * a4[4]);
  v15 = (float)(v10 * a4[1]) + (float)(v9 * a4[5]);
  if ( v14 != 0.0 || v15 != 0.0 )
    v11 = a2[2] / sqrtf_0((float)(v15 * v15) + (float)(v14 * v14));
  result = a6;
  *a5 = (float)(v14 * v11) + v12;
  a5[1] = (float)(v15 * v11) + v13;
  *a6 = v12;
  a6[1] = v13;
  if ( v11 > 1.0 && a2[3] == 0.0 )
    v11 = *(float *)&FLOAT_1_0;
  if ( (_DWORD)v8 )
  {
    v17 = (char *)a2 - (char *)a1;
    v18 = 1.0 - v11;
    v19 = (char *)a5 - (char *)a1;
    result = a1 + 5;
    v20 = v8;
    do
    {
      v21 = (float)(v18 * *(float *)((char *)result + v17)) + (float)(v11 * *result);
      *(float *)((char *)result + v19 - 4) = (float)(v18 * *(float *)((char *)result + v17 - 4))
                                           + (float)(v11 * *(result - 1));
      *(float *)((char *)result + v19) = v21;
      result += 2;
      --v20;
    }
    while ( v20 );
  }
  return result;
}
