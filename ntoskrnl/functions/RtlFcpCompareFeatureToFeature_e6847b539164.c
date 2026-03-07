__int64 __fastcall RtlFcpCompareFeatureToFeature(_DWORD *a1, _DWORD *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // ecx

  if ( *a1 <= *a2 )
  {
    if ( *a1 < *a2 )
      return 0xFFFFFFFFLL;
    v2 = a1[1] & 0xF;
    v3 = a2[1] & 0xF;
    if ( v2 >= v3 )
      return (unsigned int)-(v3 < v2);
  }
  return 1LL;
}
