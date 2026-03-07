float *__fastcall Insets::Clamp(float *a1, float *a2, float a3, float a4)
{
  float *result; // rax
  float v5; // xmm1_4
  float v6; // xmm0_4
  float v7; // xmm4_4
  float v8; // xmm1_4

  result = a1;
  v5 = fmaxf(0.0, fminf(*a2, a3));
  v6 = fminf(a2[1], a4);
  *a1 = v5;
  v7 = fmaxf(0.0, v6);
  v8 = fminf(a2[2], a3 - v5);
  a1[1] = v7;
  a1[2] = fmaxf(0.0, v8);
  a1[3] = fmaxf(0.0, fminf(a2[3], a4 - v7));
  return result;
}
