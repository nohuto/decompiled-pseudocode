/*
 * XREFs of RtlpFcCompareUpdates @ 0x14091A150
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpFcCompareUpdates(_DWORD *a1, _DWORD *a2)
{
  int v2; // eax

  if ( *a1 <= *a2 )
  {
    if ( *a1 < *a2 )
      return 0xFFFFFFFFLL;
    v2 = a1[1];
    if ( v2 >= a2[1] )
    {
      if ( v2 <= a2[1] )
        return 0LL;
      return 0xFFFFFFFFLL;
    }
  }
  return 1LL;
}
