/*
 * XREFs of ?Transform@CMILMatrix@@QEBAXPEBUD2D_POINT_2F@@PEAUHomogeneousPoint2D@@I@Z @ 0x18026DC28
 * Callers:
 *     ?Transform@?$CGeneral3DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexTransfer@@QEAAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBVCMILMatrix@@PEAU?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@Z @ 0x18012D984 (-Transform@-$CGeneral3DOperator@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexTra.c)
 *     ?Transform@?$CGeneral3DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@VertexTransfer@@QEAAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBVCMILMatrix@@PEAU3@@Z @ 0x1802056F0 (-Transform@-$CGeneral3DOperator@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@VertexTransfer@@QEAAXAEBU-.c)
 *     ?TransferVertices2DH_UV2@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@MAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x180206584 (-TransferVertices2DH_UV2@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@MAEBV-$StridedSpan@U-$Verte.c)
 * Callees:
 *     ??$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18005B510 (--$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 */

void __fastcall CMILMatrix::Transform(CMILMatrix *this, const struct D2D_POINT_2F *a2, struct HomogeneousPoint2D *a3)
{
  float x; // xmm6_4
  float y; // xmm2_4
  float *v6; // r11
  float v7; // xmm5_4
  float v8; // xmm5_4

  x = a2->x;
  y = a2->y;
  *(float *)a3 = (float)((float)(y * *((float *)this + 4)) + (float)(a2->x * *(float *)this)) + *((float *)this + 12);
  *((float *)a3 + 1) = (float)((float)(y * *((float *)this + 5)) + (float)(x * *((float *)this + 1)))
                     + *((float *)this + 13);
  if ( CMILMatrix::IsAffine<1>((__int64)this, 1) )
    v8 = *(float *)&FLOAT_1_0;
  else
    v8 = (float)((float)(v7 * v6[7]) + (float)(x * v6[3])) + v6[15];
  *((float *)a3 + 2) = v8;
}
