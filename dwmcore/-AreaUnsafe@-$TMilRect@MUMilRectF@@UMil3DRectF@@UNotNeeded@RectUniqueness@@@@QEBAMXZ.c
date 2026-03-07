double __fastcall TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::AreaUnsafe(__int64 a1)
{
  double result; // xmm0_8
  float v2; // xmm1_4

  *(_QWORD *)&result = *(unsigned int *)(a1 + 8);
  if ( *(float *)&result <= *(float *)a1 )
    return 0.0;
  v2 = *(float *)(a1 + 12);
  if ( v2 <= *(float *)(a1 + 4) )
    return 0.0;
  *(float *)&result = (float)(*(float *)&result - *(float *)a1) * (float)(v2 - *(float *)(a1 + 4));
  return result;
}
