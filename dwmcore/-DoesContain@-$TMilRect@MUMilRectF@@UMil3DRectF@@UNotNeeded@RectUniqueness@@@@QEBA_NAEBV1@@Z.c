bool __fastcall TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesContain(float *a1, float *a2)
{
  float v2; // xmm1_4

  v2 = a2[2];
  return v2 <= *a2 || a2[3] <= a2[1] || *a2 >= *a1 && a2[1] >= a1[1] && a1[2] >= v2 && a1[3] >= a2[3];
}
