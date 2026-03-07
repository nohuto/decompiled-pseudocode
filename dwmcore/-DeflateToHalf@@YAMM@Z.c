float __fastcall DeflateToHalf(float a1)
{
  float v1; // xmm6_4
  float v2; // xmm0_4

  v1 = a1;
  v2 = ceilf_0(a1);
  if ( (float)(v2 - v1) < 0.5 )
    return v2 - 0.5;
  return v1;
}
