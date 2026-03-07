char __fastcall TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(float *a1, float *a2)
{
  float v2; // xmm1_4
  float v3; // xmm0_4
  float v4; // xmm2_4
  float v5; // xmm1_4
  float v6; // xmm3_4
  float v7; // xmm2_4
  float v8; // xmm4_4
  float v9; // xmm3_4
  char result; // al

  v2 = *a2;
  v3 = *a1;
  if ( *a2 > *a1 )
  {
    *a1 = v2;
    v3 = v2;
  }
  v4 = a2[1];
  v5 = a1[1];
  if ( v4 > v5 )
  {
    a1[1] = v4;
    v5 = v4;
  }
  v6 = a2[2];
  v7 = a1[2];
  if ( v7 > v6 )
  {
    a1[2] = v6;
    v7 = v6;
  }
  v8 = a2[3];
  v9 = a1[3];
  if ( v9 > v8 )
  {
    a1[3] = v8;
    v9 = v8;
  }
  if ( v7 > v3 && v9 > v5 )
    return 1;
  result = 0;
  *((_QWORD *)a1 + 1) = 0LL;
  *(_QWORD *)a1 = 0LL;
  return result;
}
