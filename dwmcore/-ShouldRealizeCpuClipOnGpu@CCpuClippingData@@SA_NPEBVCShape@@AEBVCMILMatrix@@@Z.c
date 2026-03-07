bool __fastcall CCpuClippingData::ShouldRealizeCpuClipOnGpu(const struct CShape *a1, const struct CMILMatrix *a2)
{
  __int64 v4; // rax
  double v5; // xmm0_8
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF

  if ( !CShape::IsAxisAlignedRectangle(a1) )
    return 0;
  if ( !CMILMatrix::Is2DAxisAlignedPreserving(a2) )
    return 0;
  v4 = *(_QWORD *)a1;
  v7 = 0LL;
  if ( (*(int (__fastcall **)(const struct CShape *, __int128 *, const struct CMILMatrix *))(v4 + 48))(a1, &v7, a2) < 0
    || TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsInfinite((float *)&v7) )
  {
    return 0;
  }
  v5 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::AreaUnsafe((__int64)&v7);
  return *(float *)&v5 >= (float)CCommonRegistryData::CpuClipAreaThreshold;
}
