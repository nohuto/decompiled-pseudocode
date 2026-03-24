/*
 * XREFs of ?Transform@?$CGeneral3DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@VertexTransfer@@QEAAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBVCMILMatrix@@PEAU3@@Z @ 0x1800129A8
 * Callers:
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1800125A4 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_V.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1800128D4 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_V.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801A7FB4 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_V.c)
 * Callees:
 *     ?TransformIgnoreZW@CMILMatrix@@QEBAXPEBUD2D_POINT_2F@@PEAUMilPoint4F@@I@Z @ 0x180012BF0 (-TransformIgnoreZW@CMILMatrix@@QEBAXPEBUD2D_POINT_2F@@PEAUMilPoint4F@@I@Z.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x1800F3FDB (sqrtf_0.c)
 */

void __fastcall VertexTransfer::CGeneral3DOperator<Vertex_UVxN<VertexXYW_ColorDW>>::Transform(
        CMILMatrix *this,
        const struct D2D_POINT_2F *a2,
        const struct D2D_POINT_2F *a3,
        unsigned int a4,
        CMILMatrix *a5,
        char *a6)
{
  __int64 v8; // r14
  unsigned int v10; // r9d
  float v11; // xmm9_4
  float v12; // xmm10_4
  float v13; // xmm13_4
  float v14; // xmm14_4
  float v15; // xmm7_4
  float v16; // xmm8_4
  unsigned int v17; // r9d
  float v18; // xmm0_4
  float v19; // xmm5_4
  unsigned int v20; // r9d
  float v21; // xmm5_4
  float v22; // xmm4_4
  signed __int64 v23; // rdi
  float v24; // xmm6_4
  signed __int64 v25; // rbx
  float *p_y; // rax
  __int64 v27; // rcx
  float v28; // xmm1_4
  struct D2D_POINT_2F v29; // [rsp+28h] [rbp-89h] BYREF
  float v30; // [rsp+34h] [rbp-7Dh]
  float v31; // [rsp+38h] [rbp-79h] BYREF
  float v32; // [rsp+3Ch] [rbp-75h]
  float v33; // [rsp+44h] [rbp-6Dh]
  float v34; // [rsp+48h] [rbp-69h] BYREF
  float v35; // [rsp+4Ch] [rbp-65h]
  float v36; // [rsp+54h] [rbp-5Dh]

  v8 = a4;
  CMILMatrix::TransformIgnoreZW(a5, a2, (struct MilPoint4F *)&v29, a4);
  CMILMatrix::TransformIgnoreZW(a5, a3, (struct MilPoint4F *)&v34, v10);
  v11 = v34;
  v12 = v35;
  v13 = v34 / v36;
  v14 = v35 / v36;
  v15 = (float)(v29.x / v30) - (float)(v34 / v36);
  v16 = (float)(v29.y / v30) - (float)(v35 / v36);
  v18 = sqrtf_0((float)(v16 * v16) + (float)(v15 * v15));
  v19 = *(float *)&FLOAT_1_0;
  if ( v18 > 0.0 )
    v19 = a3[1].x / v18;
  v29.x = (float)(v15 * v19) + v13;
  v29.y = (float)(v16 * v19) + v14;
  CMILMatrix::TransformIgnoreZW(this, &v29, (struct MilPoint4F *)&v31, v17);
  v29.y = v32 / v33;
  v29.x = v31 / v33;
  CMILMatrix::TransformIgnoreZW(a5, &v29, (struct MilPoint4F *)&v31, v20);
  v22 = v33;
  if ( v33 <= 0.0 )
  {
    v22 = v36;
  }
  else
  {
    v11 = v31;
    v12 = v32;
  }
  *(float *)a6 = v11;
  *((float *)a6 + 1) = v12;
  *((float *)a6 + 2) = v22;
  if ( v21 > 1.0 && a3[1].y == 0.0 )
    v21 = *(float *)&FLOAT_1_0;
  if ( (_DWORD)v8 )
  {
    v23 = (char *)a3 - (char *)a2;
    v24 = 1.0 - v21;
    v25 = a6 - (char *)a2;
    p_y = &a2[2].y;
    v27 = v8;
    do
    {
      v28 = (float)(v24 * *(float *)((char *)p_y + v23)) + (float)(v21 * *p_y);
      *(float *)((char *)p_y + v25 - 4) = (float)(v24 * *(float *)((char *)p_y + v23 - 4)) + (float)(v21 * *(p_y - 1));
      *(float *)((char *)p_y + v25) = v28;
      p_y += 2;
      --v27;
    }
    while ( v27 );
  }
}
