float *__fastcall CDirtyRegion::GetUnoptimizedBounds(__int64 a1, float *a2)
{
  float *v2; // r10
  float *v3; // rdx
  float *v4; // r11
  __int64 v5; // rdx

  v2 = a2;
  *(_QWORD *)a2 = 0LL;
  *((_QWORD *)a2 + 1) = 0LL;
  if ( *(_BYTE *)(a1 + 4420) )
  {
    *(_OWORD *)a2 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  }
  else
  {
    v3 = (float *)(a1 + 1568);
    v4 = (float *)(a1 + 1696);
    while ( v3 != v4 )
    {
      TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v2, v3);
      v3 = (float *)(v5 + 16);
    }
  }
  return v2;
}
