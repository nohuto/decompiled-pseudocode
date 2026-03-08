/*
 * XREFs of ?TransformAttenuation@CCompositionLight@@IEBAXAEBUfloat3@Numerics@Foundation@Windows@@AEBUfloat2@345@PEAULightInfo@@@Z @ 0x18021631C
 * Callers:
 *     ?GetLightInfo@CCompositionPointLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z @ 0x180221560 (-GetLightInfo@CCompositionPointLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@.c)
 *     ?GetLightInfo@CCompositionSpotLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z @ 0x1802230B0 (-GetLightInfo@CCompositionSpotLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CCompositionLight::TransformAttenuation(
        CCompositionLight *this,
        const struct Windows::Foundation::Numerics::float3 *a2,
        const struct Windows::Foundation::Numerics::float2 *a3,
        struct LightInfo *a4)
{
  float v4; // xmm0_4
  float v5; // xmm2_4
  float v6; // xmm3_4
  float v7; // xmm2_4
  float v8; // xmm3_4
  float v9; // xmm1_4
  float v10; // xmm1_4
  float v11; // xmm2_4

  v4 = 0.0;
  if ( *(float *)a2 >= 0.0 )
    v5 = fminf(25500.0, *(float *)a2);
  else
    v5 = 0.0;
  *((float *)a4 + 15) = v5;
  v6 = *((float *)a2 + 1) * 0.0099999998;
  if ( v6 >= 0.0 )
    v7 = fminf(25500.0, v6);
  else
    v7 = 0.0;
  *((float *)a4 + 16) = v7;
  v8 = *((float *)a2 + 2) * 0.000099999997;
  if ( v8 >= 0.0 )
    v9 = fminf(25500.0, v8);
  else
    v9 = 0.0;
  *((float *)a4 + 17) = v9;
  v10 = *(float *)a3;
  v11 = *((float *)a3 + 1);
  if ( *(float *)a3 < v11 )
    v4 = 1.0 / (float)(v11 - v10);
  *((float *)a4 + 25) = v4;
  *((float *)a4 + 24) = COERCE_FLOAT(LODWORD(v10) ^ _xmm) * v4;
}
