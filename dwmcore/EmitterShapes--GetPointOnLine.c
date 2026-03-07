float *__fastcall EmitterShapes::GetPointOnLine(float *a1, __int64 a2, __int64 a3, float a4, float a5)
{
  float v6; // xmm6_4
  float v7; // xmm8_4
  float v8; // xmm0_4
  float *result; // rax

  v6 = *((float *)&a3 + 1) - *((float *)&a2 + 1);
  v7 = *(float *)&a3 - *(float *)&a2;
  v8 = sqrtf_0((float)(v6 * v6) + (float)(v7 * v7));
  result = a1;
  a1[1] = (float)((float)(v7 * (float)(1.0 / v8)) * a5) + (float)((float)(v6 * a4) + *((float *)&a2 + 1));
  *a1 = (float)((float)(COERCE_FLOAT(LODWORD(v6) ^ _xmm) * (float)(1.0 / v8)) * a5)
      + (float)((float)(v7 * a4) + *(float *)&a2);
  return result;
}
