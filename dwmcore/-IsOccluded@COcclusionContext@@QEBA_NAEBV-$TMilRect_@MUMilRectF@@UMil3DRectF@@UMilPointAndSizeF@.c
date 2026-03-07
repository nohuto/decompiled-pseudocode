char __fastcall COcclusionContext::IsOccluded(__int64 a1, __int64 a2, unsigned int a3)
{
  __int128 *v5; // rdx
  char v6; // r9
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF

  if ( (unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(a2) )
    return 1;
  v8 = 0LL;
  if ( v6 || !*(_BYTE *)(a1 + 1204) )
    v8 = *v5;
  else
    COcclusionContext::PageInPixelsRectToDeviceRect(a1, v5, &v8);
  return CArrayBasedCoverageSet::IsCovered(a1 + 448, &v8, a3);
}
