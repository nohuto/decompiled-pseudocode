float *__fastcall anonymous_namespace_::operator_(float *a1, float *a2, float *a3)
{
  float v3; // xmm1_4
  float v4; // xmm2_4
  float v5; // xmm0_4
  float v6; // xmm1_4
  float *result; // rax
  float v8; // xmm0_4

  v3 = a2[1] - a3[1];
  v4 = a3[2];
  *a1 = *a2 - *a3;
  v5 = a2[3] - a3[3];
  a1[1] = v3;
  v6 = a2[2];
  a1[3] = v5;
  if ( v4 != 0.0 )
    v6 = v6 / v4;
  result = a1;
  v8 = a2[4] - a3[4];
  a1[2] = v6;
  a1[4] = v8;
  return result;
}
