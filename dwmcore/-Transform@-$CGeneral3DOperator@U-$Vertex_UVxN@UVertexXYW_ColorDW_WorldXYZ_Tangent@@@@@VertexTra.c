/*
 * XREFs of ?Transform@?$CGeneral3DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexTransfer@@QEAAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBVCMILMatrix@@PEAU?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@Z @ 0x18012D984
 * Callers:
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1802038E8 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldX.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x180203A48 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_C_ea_180203A48.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x180203BA8 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_C_ea_180203BA8.c)
 * Callees:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x1801177AC (sqrtf_0.c)
 *     ?Transform@CMILMatrix@@QEBAXPEBUD2D_POINT_2F@@PEAUHomogeneousPoint2D@@I@Z @ 0x18026DC28 (-Transform@CMILMatrix@@QEBAXPEBUD2D_POINT_2F@@PEAUHomogeneousPoint2D@@I@Z.c)
 */

float *__fastcall VertexTransfer::CGeneral3DOperator<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>::Transform(
        CMILMatrix *this,
        const struct D2D_POINT_2F *a2,
        const struct D2D_POINT_2F *a3,
        unsigned int a4,
        CMILMatrix *a5,
        __int64 a6)
{
  __int64 v8; // r14
  unsigned int v10; // r9d
  float v11; // xmm11_4
  float v12; // xmm12_4
  float v13; // xmm8_4
  float v14; // xmm9_4
  unsigned int v15; // r9d
  float v16; // xmm0_4
  float v17; // xmm6_4
  unsigned int v18; // r9d
  __int64 v19; // xmm0_8
  float *result; // rax
  __int64 v21; // rbx
  float v22; // xmm7_4
  signed __int64 v23; // rdi
  __int64 v24; // rcx
  float v25; // xmm1_4
  struct D2D_POINT_2F v26; // [rsp+28h] [rbp-79h] BYREF
  float v27; // [rsp+30h] [rbp-71h]
  __int64 v28; // [rsp+38h] [rbp-69h] BYREF
  float v29; // [rsp+40h] [rbp-61h]
  __int64 v30; // [rsp+48h] [rbp-59h] BYREF
  float v31; // [rsp+50h] [rbp-51h]

  v8 = a4;
  CMILMatrix::Transform(a5, a2, (struct HomogeneousPoint2D *)&v26, a4);
  CMILMatrix::Transform(a5, a3, (struct HomogeneousPoint2D *)&v30, v10);
  v11 = *(float *)&v30 / v31;
  v12 = *((float *)&v30 + 1) / v31;
  v13 = (float)(v26.x / v27) - (float)(*(float *)&v30 / v31);
  v14 = (float)(v26.y / v27) - (float)(*((float *)&v30 + 1) / v31);
  v16 = sqrtf_0((float)(v14 * v14) + (float)(v13 * v13));
  v17 = *(float *)&FLOAT_1_0;
  if ( v16 > 0.0 )
    v17 = a3[1].x / v16;
  v26.x = (float)(v13 * v17) + v11;
  v26.y = (float)(v14 * v17) + v12;
  CMILMatrix::Transform(this, &v26, (struct HomogeneousPoint2D *)&v28, v15);
  v26.x = *(float *)&v28 / v29;
  v26.y = *((float *)&v28 + 1) / v29;
  CMILMatrix::Transform(a5, &v26, (struct HomogeneousPoint2D *)&v28, v18);
  if ( v29 <= 0.0 )
  {
    v19 = v30;
    result = (float *)LODWORD(v31);
  }
  else
  {
    v19 = v28;
    result = (float *)LODWORD(v29);
  }
  *(_QWORD *)a6 = v19;
  *(_DWORD *)(a6 + 8) = (_DWORD)result;
  if ( v17 > 1.0 && a3[1].y == 0.0 )
    v17 = *(float *)&FLOAT_1_0;
  if ( (_DWORD)v8 )
  {
    v21 = a6 - (_QWORD)a2;
    v22 = 1.0 - v17;
    v23 = (char *)a3 - (char *)a2;
    result = &a2[2].y;
    v24 = v8;
    do
    {
      v25 = (float)(v22 * *(float *)((char *)result + v23)) + (float)(v17 * *result);
      *(float *)((char *)result + v21 + 28) = (float)(v22 * *(float *)((char *)result + v23 - 4))
                                            + (float)(v17 * *(result - 1));
      *(float *)((char *)result + v21 + 32) = v25;
      result += 2;
      --v24;
    }
    while ( v24 );
  }
  return result;
}
