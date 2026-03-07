bool __fastcall COcclusionContext::PageInPixelsRectToDeviceRect(__int64 a1, struct MilRectF *a2, float *a3)
{
  bool v3; // zf
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(_BYTE *)(a1 + 1204) == 0;
  v6 = 0LL;
  if ( v3 )
  {
    *(_OWORD *)a3 = *(_OWORD *)a2;
  }
  else
  {
    CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)(a1 + 1208), a2, (float *)&v6);
    *(_OWORD *)a3 = v6;
  }
  return !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(a3);
}
