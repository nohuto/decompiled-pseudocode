char __fastcall CDrawingContext::IsOccluded(__int64 a1, __int64 a2, unsigned int a3)
{
  char v5; // bl
  __int64 v6; // r9
  __int64 v7; // rcx
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF

  v9 = 0LL;
  v5 = 0;
  CDrawingContext::CalcWorldSpaceClippedBounds(a1, a2, &v9);
  if ( (unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(&v9) )
    return 1;
  v7 = *(_QWORD *)(a1 + 8072);
  if ( v7 )
  {
    LOBYTE(v6) = 1;
    return COcclusionContext::IsOccluded(v7, &v9, a3, v6);
  }
  return v5;
}
