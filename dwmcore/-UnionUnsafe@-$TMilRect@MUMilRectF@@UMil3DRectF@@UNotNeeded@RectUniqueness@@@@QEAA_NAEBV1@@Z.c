char __fastcall TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(float *a1, float *a2)
{
  int v2; // eax
  BOOL v3; // r8d
  float *v4; // r9
  float v5; // xmm1_4
  float v6; // xmm0_4
  float v7; // xmm0_4
  char result; // al

  v2 = 1;
  v3 = a1[2] <= *a1 || a1[3] <= a1[1];
  v4 = a2 + 1;
  v5 = *a2;
  if ( a2[2] > *a2 && a2[3] > *v4 )
    v2 = 0;
  if ( v3 )
  {
    if ( v2 )
    {
      *((_QWORD *)a1 + 1) = 0LL;
      result = 0;
      *(_QWORD *)a1 = 0LL;
    }
    else
    {
      result = 1;
      *(_OWORD *)a1 = *(_OWORD *)a2;
    }
  }
  else
  {
    if ( !v2 )
    {
      if ( *a1 > v5 )
        *a1 = v5;
      if ( a1[1] > *v4 )
        a1[1] = *v4;
      v6 = a2[2];
      if ( v6 > a1[2] )
        a1[2] = v6;
      v7 = a2[3];
      if ( v7 > a1[3] )
        a1[3] = v7;
    }
    return 1;
  }
  return result;
}
