char __fastcall CDirtyRegion::DoesContain(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  unsigned int v4; // r8d
  int v5; // r8d
  unsigned int v6; // r10d

  v2 = a1;
  if ( *(_BYTE *)(a1 + 4420) )
    return 1;
  v4 = 0;
  if ( *(_DWORD *)(a1 + 2820) )
  {
    while ( !(unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesContain(
                                16LL * v4 + v2 + 2660,
                                a2) )
    {
      v4 = v5 + 1;
      if ( v4 >= v6 )
        return 0;
    }
    return 1;
  }
  return 0;
}
