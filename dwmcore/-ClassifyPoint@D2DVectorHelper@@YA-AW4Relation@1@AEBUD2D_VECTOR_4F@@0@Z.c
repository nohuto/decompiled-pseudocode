__int64 __fastcall D2DVectorHelper::ClassifyPoint(float *a1, float *a2)
{
  float v2; // xmm2_4
  __int64 result; // rax

  v2 = (float)((float)((float)(a1[1] * a2[1]) + (float)(*a1 * *a2)) + (float)(a1[2] * a2[2])) + (float)(a1[3] * a2[3]);
  if ( v2 > 0.00390625 )
    return 1LL;
  result = 0LL;
  if ( v2 < -0.00390625 )
    return 2LL;
  return result;
}
