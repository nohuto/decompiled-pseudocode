/*
 * XREFs of ?TransformIgnoreZW@CMILMatrix@@QEBAXPEBUD2D_POINT_2F@@PEAUMilPoint4F@@I@Z @ 0x18026DDB4
 * Callers:
 *     ?FillLightingData@CCpuClipAntialiasDrawListEntry@@QEBAXAEBUBounds@CCpuClipAntialiasSink@@_NAEBVCMILMatrix@@AEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@@Z @ 0x1801FE598 (-FillLightingData@CCpuClipAntialiasDrawListEntry@@QEBAXAEBUBounds@CCpuClipAntialiasSink@@_NAEBVC.c)
 *     VertexTransfer::TransformDeviceSpacePositionAndNormal @ 0x180205A78 (VertexTransfer--TransformDeviceSpacePositionAndNormal.c)
 * Callees:
 *     ??$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18005B510 (--$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 */

void __fastcall CMILMatrix::TransformIgnoreZW(CMILMatrix *this, const struct D2D_POINT_2F *a2, struct MilPoint4F *a3)
{
  float y; // xmm2_4
  float x; // xmm6_4
  float *v6; // r11
  float v7; // xmm5_4
  float v8; // xmm5_4

  y = a2->y;
  x = a2->x;
  *(float *)a3 = (float)((float)(y * *((float *)this + 4)) + (float)(a2->x * *(float *)this)) + *((float *)this + 12);
  *((float *)a3 + 1) = (float)((float)(y * *((float *)this + 5)) + (float)(x * *((float *)this + 1)))
                     + *((float *)this + 13);
  *((float *)a3 + 2) = (float)((float)(y * *((float *)this + 6)) + (float)(x * *((float *)this + 2)))
                     + *((float *)this + 14);
  if ( CMILMatrix::IsAffine<1>((__int64)this, 1) )
    v8 = *(float *)&FLOAT_1_0;
  else
    v8 = (float)((float)(v7 * v6[7]) + (float)(x * v6[3])) + v6[15];
  *((float *)a3 + 3) = v8;
}
