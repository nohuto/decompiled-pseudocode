__int64 __fastcall CDirtyRegion::GetBounds(__int64 a1, __int64 a2)
{
  float *v3; // rdx
  float *v4; // r10
  __int64 v5; // rdx
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  float *v8; // [rsp+28h] [rbp-10h]

  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)a2 = 0LL;
  CDirtyRegion::GetDirtyRects(a1, &v7);
  v3 = v8;
  v4 = &v8[4 * v7];
  while ( v3 != v4 )
  {
    TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)a2, v3);
    v3 = (float *)(v5 + 16);
  }
  return a2;
}
