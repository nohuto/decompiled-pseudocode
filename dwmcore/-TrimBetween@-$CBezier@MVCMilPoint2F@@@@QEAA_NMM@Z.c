char __fastcall CBezier<float,CMilPoint2F>::TrimBetween(float *a1, float a2, float a3)
{
  int *v3; // rcx
  int v4; // xmm0_4
  char result; // al
  int v6; // xmm1_4

  if ( (float)(a3 - a2) >= 0.000001 )
  {
    if ( a3 < 1.0 )
      CBezier<float,CMilPoint2F>::TrimToEndAt(a1);
    if ( a2 > 0.0 )
      CBezier<float,CMilPoint2F>::TrimToStartAt(a1);
    return 1;
  }
  else
  {
    CBezier<float,CMilPoint2F>::GetPoint(a1, a2, a1);
    v4 = *v3;
    result = 0;
    v6 = v3[1];
    v3[6] = *v3;
    v3[7] = v6;
    v3[4] = v4;
    v3[5] = v6;
    v3[2] = v4;
    v3[3] = v6;
  }
  return result;
}
