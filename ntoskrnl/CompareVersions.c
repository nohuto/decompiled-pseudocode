/*
 * XREFs of CompareVersions @ 0x1402FF3D0
 * Callers:
 *     RtlGetProductInfo @ 0x1402FF290 (RtlGetProductInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CompareVersions(_DWORD *a1, _DWORD *a2)
{
  unsigned int v3; // eax
  unsigned int v4; // eax
  unsigned int v5; // eax

  if ( *a1 > *a2 )
    return 1LL;
  if ( *a1 >= *a2 )
  {
    v3 = a1[1];
    if ( v3 > a2[1] )
      return 1LL;
    if ( v3 >= a2[1] )
    {
      v4 = a1[2];
      if ( v4 > a2[2] )
        return 1LL;
      if ( v4 >= a2[2] )
      {
        v5 = a1[3];
        if ( v5 <= a2[3] )
          return (unsigned int)-(v5 < a2[3]);
        return 1LL;
      }
    }
  }
  return 0xFFFFFFFFLL;
}
