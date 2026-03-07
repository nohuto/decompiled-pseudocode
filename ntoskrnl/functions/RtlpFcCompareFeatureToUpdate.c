__int64 __fastcall RtlpFcCompareFeatureToUpdate(_DWORD *a1, _DWORD *a2)
{
  int v2; // eax
  unsigned int v3; // ecx
  unsigned int v4; // eax

  if ( *a1 <= *a2 )
  {
    if ( *a1 < *a2 )
      return 0xFFFFFFFFLL;
    v2 = a1[1];
    v3 = a2[1];
    v4 = v2 & 0xF;
    if ( v4 >= v3 )
      return (unsigned int)-(v3 < v4);
  }
  return 1LL;
}
