void __fastcall CCompositionLight::NormalizeVec3(
        CCompositionLight *this,
        const struct Windows::Foundation::Numerics::float3 *a2,
        struct Windows::Foundation::Numerics::float3 *a3)
{
  float v4; // xmm6_4
  float v5; // xmm7_4
  float v6; // xmm8_4
  float v7; // xmm0_4

  v4 = *(float *)a2;
  v5 = *((float *)a2 + 1);
  v6 = *((float *)a2 + 2);
  v7 = sqrtf_0((float)((float)(v4 * v4) + (float)(v5 * v5)) + (float)(v6 * v6));
  if ( COERCE_FLOAT(LODWORD(v7) & _xmm) < 0.0000011920929 )
    v7 = *(float *)&FLOAT_1_0;
  *(float *)a3 = v4 / v7;
  *((float *)a3 + 1) = v5 / v7;
  *((float *)a3 + 2) = v6 / v7;
}
