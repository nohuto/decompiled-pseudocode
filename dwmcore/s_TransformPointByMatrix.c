__int64 __fastcall s_TransformPointByMatrix(float *a1, int *a2)
{
  float v2; // xmm6_4
  float v3; // xmm0_4
  float v4; // xmm1_4
  float v5; // xmm6_4
  __int64 result; // rax

  v2 = (float)a2[1];
  v3 = (float)*a2;
  v4 = (float)((float)(v2 * a1[2]) + (float)(v3 * *a1)) + a1[4];
  v5 = (float)((float)(v2 * a1[3]) + (float)(v3 * a1[1])) + a1[5];
  *a2 = (int)v4;
  result = (unsigned int)(int)v5;
  a2[1] = result;
  return result;
}
