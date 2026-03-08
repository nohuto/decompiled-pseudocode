/*
 * XREFs of ?InferAffineMatrix@CMILMatrix@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUMilPoint2F@@@Z @ 0x1800B6C34
 * Callers:
 *     ?InferVisualToTextureTransform@CGradientBrush@@IEBAJAEAY02$$CBUD2D_POINT_2F@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1800B6750 (-InferVisualToTextureTransform@CGradientBrush@@IEBAJAEAY02$$CBUD2D_POINT_2F@@AEBV-$TMilRect_@MUM.c)
 * Callees:
 *     ?SetToIdentity@CMILMatrix@@QEAAXXZ @ 0x18008DA10 (-SetToIdentity@CMILMatrix@@QEAAXXZ.c)
 */

void __fastcall CMILMatrix::InferAffineMatrix(CMILMatrix *a1, float *a2, float *a3)
{
  float v3; // xmm7_4
  float v4; // xmm8_4
  float v5; // xmm9_4
  float v6; // xmm10_4
  float v7; // xmm13_4
  float v8; // xmm14_4
  float v9; // xmm15_4
  float v10; // xmm12_4
  float v11; // xmm11_4
  __int64 v12; // rcx
  float v13; // xmm4_4
  float v14; // xmm2_4
  float v15; // [rsp+D0h] [rbp+8h]
  float v16; // [rsp+D8h] [rbp+10h]
  float v17; // [rsp+E0h] [rbp+18h]

  v3 = a2[3];
  v4 = *a2;
  v5 = a2[1];
  v6 = a2[2];
  v7 = a3[2];
  v15 = a3[1];
  v8 = *a3;
  v17 = a3[3];
  v9 = a3[4];
  v16 = a3[5];
  CMILMatrix::SetToIdentity(a1);
  v10 = (float)(v3 * v6) - (float)(v5 * v4);
  v11 = 1.0 / (float)((float)((float)((float)(v5 - v3) * v4) - (float)((float)(v6 - v4) * v5)) + v10);
  *(float *)(v12 + 4) = (float)((float)((float)((float)(v3 - v5) * v17) + (float)((float)(v5 - v3) * v15))
                              + (float)((float)(v5 - v5) * v16))
                      * v11;
  *(float *)v12 = (float)((float)((float)((float)(v3 - v5) * v7) + (float)((float)(v5 - v3) * v8))
                        + (float)((float)(v5 - v5) * v9))
                * v11;
  *(float *)(v12 + 16) = (float)((float)((float)((float)(v4 - v4) * v7) + (float)((float)(v4 - v6) * v8))
                               + (float)((float)(v6 - v4) * v9))
                       * v11;
  *(_BYTE *)(v12 + 64) &= 0xCu;
  *(_BYTE *)(v12 + 65) &= 0xFCu;
  *(float *)(v12 + 20) = (float)((float)((float)((float)(v4 - v4) * v17) + (float)((float)(v4 - v6) * v15))
                               + (float)((float)(v6 - v4) * v16))
                       * v11;
  v13 = (float)(v5 * v4) - (float)(v6 * v5);
  v14 = (float)(v5 * v4) - (float)(v3 * v4);
  *(float *)(v12 + 52) = (float)((float)((float)(v14 * v17) + (float)(v10 * v15)) + (float)(v13 * v16)) * v11;
  *(float *)(v12 + 48) = (float)((float)((float)(v14 * v7) + (float)(v10 * v8)) + (float)(v13 * v9)) * v11;
}
