/*
 * XREFs of ?Transform@CMILMatrix@@QEBAXPEBUMilPoint4F@@PEAU2@I@Z @ 0x18000A0D4
 * Callers:
 *     ?Init@CVisualDepthGeometry@@AEAAXAEBUfloat2@Numerics@Foundation@Windows@@AEBVCMILMatrix@@@Z @ 0x180009BC0 (-Init@CVisualDepthGeometry@@AEAAXAEBUfloat2@Numerics@Foundation@Windows@@AEBVCMILMatrix@@@Z.c)
 *     ?D2DGeometryFromPolygon@CPolygon@@QEBAJPEAUID2D1PathGeometry@@PEBVCMILMatrix@@@Z @ 0x180210054 (-D2DGeometryFromPolygon@CPolygon@@QEBAJPEAUID2D1PathGeometry@@PEBVCMILMatrix@@@Z.c)
 *     ?CalcFrustumOutline@@YAXVCMILMatrix@@PEAULine3D@@111@Z @ 0x180215908 (-CalcFrustumOutline@@YAXVCMILMatrix@@PEAULine3D@@111@Z.c)
 *     ?CreateSkyBoxPrimitive@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAPEAVCDrawListPrimitive@@@Z @ 0x1802222C0 (-CreateSkyBoxPrimitive@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAPEAVCDrawLi.c)
 * Callees:
 *     ??$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18005B510 (--$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 */

void __fastcall CMILMatrix::Transform(CMILMatrix *this, const struct MilPoint4F *a2, struct MilPoint4F *a3, int a4)
{
  float *v4; // rdi
  float *v5; // rsi
  float *v7; // r11
  __int64 v8; // rbx
  float v9; // xmm6_4
  float v10; // xmm5_4
  float v11; // xmm7_4
  float v12; // xmm8_4
  float v13; // xmm1_4
  float v14; // xmm5_4
  float v15; // xmm5_4

  v4 = (float *)((char *)a3 + 12);
  v5 = (float *)((char *)a2 + 8);
  v7 = (float *)this;
  v8 = a3 - a2;
  do
  {
    v9 = *(v5 - 2);
    v10 = *(v5 - 1);
    v11 = *v5;
    v12 = v5[1];
    v13 = *v5;
    *(float *)((char *)v5 + v8 - 8) = (float)((float)((float)(v10 * v7[4]) + (float)(v9 * *v7)) + (float)(*v5 * v7[8]))
                                    + (float)(v12 * v7[12]);
    *(v4 - 2) = (float)((float)((float)(v10 * v7[5]) + (float)(v9 * v7[1])) + (float)(v13 * v7[9]))
              + (float)(v12 * v7[13]);
    *(v4 - 1) = (float)((float)((float)(v10 * v7[6]) + (float)(v9 * v7[2])) + (float)(v11 * v7[10]))
              + (float)(v12 * v7[14]);
    if ( (unsigned __int8)CMILMatrix::IsAffine<1>(v7, 0LL) )
      v15 = *(float *)&FLOAT_1_0;
    else
      v15 = (float)((float)((float)(v14 * v7[7]) + (float)(v9 * v7[3])) + (float)(v11 * v7[11])) + (float)(v12 * v7[15]);
    *v4 = v15;
    v5 += 4;
    v4 += 4;
    --a4;
  }
  while ( a4 );
}
