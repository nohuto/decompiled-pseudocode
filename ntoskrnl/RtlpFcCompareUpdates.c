/*
 * XREFs of RtlpFcCompareUpdates @ 0x1409C01B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpFcCompareUpdates(_DWORD *a1, _DWORD *a2)
{
  int v2; // ecx
  int v3; // edx

  if ( *a1 <= *a2 )
  {
    if ( *a1 < *a2 )
      return 0xFFFFFFFFLL;
    v2 = a1[1];
    v3 = a2[1];
    if ( v2 >= v3 )
      return (unsigned int)(v2 <= v3) - 1;
  }
  return 1LL;
}
