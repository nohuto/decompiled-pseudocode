__int64 __fastcall CPreComputeContext::AddWorldBoundsToDirtyRegion(__int64 a1, __int64 a2, __int64 a3, float *a4)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r10

  if ( TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(a4) )
    return 0LL;
  LOBYTE(v5) = 1;
  return CDirtyRegion::Add(*(_QWORD *)(v7 + 424), v4, v5, v6);
}
