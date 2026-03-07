__int64 __fastcall CDirtyRegion::CalcDirtyRegionCachedData(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // r8
  float *v4; // rdx

  result = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(a2);
  *(_BYTE *)(v3 + 12) = result;
  *(float *)(v3 + 8) = (float)(v4[2] - *v4) * (float)(v4[3] - v4[1]);
  *(float *)v3 = (float)((float)(v4[2] - *v4) * 0.5) + *v4;
  *(float *)(v3 + 4) = (float)((float)(v4[3] - v4[1]) * 0.5) + v4[1];
  return result;
}
