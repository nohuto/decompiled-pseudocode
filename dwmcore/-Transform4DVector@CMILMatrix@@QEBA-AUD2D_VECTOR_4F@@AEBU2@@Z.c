/*
 * XREFs of ?Transform4DVector@CMILMatrix@@QEBA?AUD2D_VECTOR_4F@@AEBU2@@Z @ 0x180006078
 * Callers:
 *     ?PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x180004F04 (-PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@.c)
 *     ?UpdateCasterEntry@CProjectedShadowScene@@AEAAJPEBVCVisualTree@@PEAUCasterEntry@1@@Z @ 0x180005500 (-UpdateCasterEntry@CProjectedShadowScene@@AEAAJPEBVCVisualTree@@PEAUCasterEntry@1@@Z.c)
 *     ?GetLightPosition@ShadowHelpers@@YAJPEBVCVisualTree@@PEBVCCompositionLight@@PEAVCVisual@@PEAUD2D_VECTOR_3F@@@Z @ 0x180005ED8 (-GetLightPosition@ShadowHelpers@@YAJPEBVCVisualTree@@PEBVCCompositionLight@@PEAVCVisual@@PEAUD2D.c)
 *     ?GetSceneLightRealization@CCompositionPointLight@@UEBAJAEBVCMILMatrix@@PEAPEAUISpectreLightNode@@@Z @ 0x1802216D0 (-GetSceneLightRealization@CCompositionPointLight@@UEBAJAEBVCMILMatrix@@PEAPEAUISpectreLightNode@.c)
 *     ?GetSceneLightRealization@CCompositionSpotLight@@UEBAJAEBVCMILMatrix@@PEAPEAUISpectreLightNode@@@Z @ 0x180223240 (-GetSceneLightRealization@CCompositionSpotLight@@UEBAJAEBVCMILMatrix@@PEAPEAUISpectreLightNode@@.c)
 * Callees:
 *     ??$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18005B510 (--$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 */

struct D2D_VECTOR_4F *__fastcall CMILMatrix::Transform4DVector(
        CMILMatrix *this,
        struct D2D_VECTOR_4F *__return_ptr retstr,
        const struct D2D_VECTOR_4F *a3)
{
  float w; // xmm6_4
  float v6; // xmm7_4
  float v7; // xmm1_4
  float v8; // xmm5_4
  float v9; // xmm4_4
  float v10; // xmm3_4
  FLOAT v11; // xmm7_4
  float *v12; // r11
  float v13; // xmm2_4

  w = a3->w;
  v6 = a3->x * *((float *)this + 2);
  v7 = a3->z * *((float *)this + 9);
  v8 = a3->z * *((float *)this + 10);
  v9 = a3->y * *((float *)this + 6);
  v10 = (float)(a3->x * *((float *)this + 1)) + (float)(a3->y * *((float *)this + 5));
  retstr->x = (float)((float)((float)(a3->y * *((float *)this + 4)) + (float)(a3->x * *(float *)this))
                    + (float)(a3->z * *((float *)this + 8)))
            + (float)(w * *((float *)this + 12));
  v11 = (float)((float)(v6 + v9) + v8) + (float)(w * *((float *)this + 14));
  retstr->y = (float)(v10 + v7) + (float)(w * *((float *)this + 13));
  retstr->z = v11;
  if ( (unsigned __int8)CMILMatrix::IsAffine<1>(this, 0LL) )
    v13 = *(float *)&FLOAT_1_0;
  else
    v13 = (float)((float)((float)(v12[3] * a3->x) + (float)(v12[7] * a3->y)) + (float)(v12[11] * a3->z))
        + (float)(v12[15] * a3->w);
  retstr->w = v13;
  return retstr;
}
