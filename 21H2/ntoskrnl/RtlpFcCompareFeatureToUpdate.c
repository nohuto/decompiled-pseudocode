/*
 * XREFs of RtlpFcCompareFeatureToUpdate @ 0x14091A11C
 * Callers:
 *     RtlpFcCalculateRequiredSizeForNewFeatureTable @ 0x140919E88 (RtlpFcCalculateRequiredSizeForNewFeatureTable.c)
 *     RtlpFcUpdateFeatureConfiguration @ 0x14091A644 (RtlpFcUpdateFeatureConfiguration.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpFcCompareFeatureToUpdate(_DWORD *a1, _DWORD *a2)
{
  unsigned int v2; // eax

  if ( *a1 <= *a2 )
  {
    if ( *a1 < *a2 )
      return 0xFFFFFFFFLL;
    v2 = a1[1] & 0xF;
    if ( v2 >= a2[1] )
    {
      if ( v2 <= a2[1] )
        return 0LL;
      return 0xFFFFFFFFLL;
    }
  }
  return 1LL;
}
