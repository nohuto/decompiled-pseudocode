/*
 * XREFs of ??DMatrix3x3@@QEBA?AV0@AEBV0@@Z @ 0x1800D4790
 * Callers:
 *     ?Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18005C788 (-Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x180060AB0 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x180076750 (-EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX.c)
 *     ?AppendCpuClipAntialiasHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDesc@@_N2PEA_N@Z @ 0x18007D760 (-AppendCpuClipAntialiasHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUMeshDesc@Mesh@@PEBUPrimitiveV.c)
 *     ?ComputeLocalToSourceTransform@CSurfaceDrawListBrush@@QEBAXPEAVMatrix3x3@@@Z @ 0x1800FBA04 (-ComputeLocalToSourceTransform@CSurfaceDrawListBrush@@QEBAXPEAVMatrix3x3@@@Z.c)
 *     ?ComputeBrushClamp@CBrushDrawListGenerator@@CAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@KAEBVMatrix3x3@@PEAPEAVCShape@@@Z @ 0x1801F9334 (-ComputeBrushClamp@CBrushDrawListGenerator@@CAJV-$span@PEBVCDrawListBrush@@$0-0@gsl@@KAEBVMatrix.c)
 *     ?ProcessBrushClampEdges_Polygon@CBrushDrawListGenerator@@CAXW4D2D1_ANTIALIAS_MODE@@V?$span@PEBVCDrawListBrush@@$0?0@gsl@@KAEBVMatrix3x3@@PEAVCEdgeFlagsMap@@@Z @ 0x1801FA1DC (-ProcessBrushClampEdges_Polygon@CBrushDrawListGenerator@@CAXW4D2D1_ANTIALIAS_MODE@@V-$span@PEBVC.c)
 * Callees:
 *     <none>
 */

float *__fastcall Matrix3x3::operator*(float *a1, float *a2, float *a3)
{
  float v3; // xmm4_4
  float v4; // xmm5_4
  float v5; // xmm0_4
  float v6; // xmm6_4
  float v7; // xmm1_4
  float v8; // xmm3_4
  float v9; // xmm2_4
  float v10; // xmm0_4
  float v11; // xmm2_4
  float v12; // xmm1_4
  float v13; // xmm2_4
  float v14; // xmm0_4
  float v15; // xmm2_4
  float v16; // xmm1_4
  float v17; // xmm2_4
  float v18; // xmm0_4
  float v19; // xmm2_4
  float v20; // xmm1_4
  float v21; // xmm5_4
  float v22; // xmm6_4
  float v23; // xmm4_4
  float v24; // xmm3_4
  float v25; // xmm0_4
  float v26; // xmm6_4
  float v27; // xmm5_4
  float v28; // xmm1_4
  float v29; // xmm6_4
  float v30; // xmm2_4
  float v31; // xmm1_4
  float v32; // xmm6_4
  float v33; // xmm5_4
  float v34; // xmm3_4

  v3 = a1[4];
  v4 = a1[5];
  v5 = a3[4] * a1[1];
  v6 = a1[3];
  v7 = a3[7] * a1[2];
  v8 = v6 * a3[1];
  *a2 = (float)((float)(*a1 * *a3) + (float)(a1[1] * a3[3])) + (float)(a1[2] * a3[6]);
  v9 = (float)(a3[1] * *a1) + v5;
  v10 = a3[2] * *a1;
  v11 = v9 + v7;
  v12 = a3[8] * a1[2];
  a2[1] = v11;
  v13 = (float)(a3[5] * a1[1]) + v10;
  v14 = v3 * a3[3];
  v15 = v13 + v12;
  v16 = v4 * a3[6];
  a2[2] = v15;
  v17 = (float)(v6 * *a3) + v14;
  v18 = v3 * a3[4];
  v19 = v17 + v16;
  v20 = v4 * a3[7];
  v21 = v4 * a3[8];
  v22 = (float)(v6 * a3[2]) + (float)(v3 * a3[5]);
  v23 = a1[7];
  v24 = (float)(v8 + v18) + v20;
  a2[3] = v19;
  v25 = v23 * a3[3];
  v26 = v22 + v21;
  v27 = a1[8];
  a2[4] = v24;
  v28 = v27 * a3[6];
  a2[5] = v26;
  v29 = a1[6];
  v30 = (float)((float)(v29 * *a3) + v25) + v28;
  v31 = v27 * a3[7];
  v32 = (float)(v29 * a3[2]) + (float)(v23 * a3[5]);
  v33 = v27 * a3[8];
  v34 = (float)(a1[6] * a3[1]) + (float)(v23 * a3[4]);
  a2[6] = v30;
  a2[7] = v34 + v31;
  a2[8] = v32 + v33;
  return a2;
}
