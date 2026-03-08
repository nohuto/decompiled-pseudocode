/*
 * XREFs of RtlpFcCompareUsageSubscriptionToUsageSubscription @ 0x1405B2730
 * Callers:
 *     RtlpFcCalculateRequiredSizeForNewUsageSubscriptionTable @ 0x1409C0054 (RtlpFcCalculateRequiredSizeForNewUsageSubscriptionTable.c)
 *     RtlpFcUpdateUsageTriggers @ 0x1409C05F0 (RtlpFcUpdateUsageTriggers.c)
 *     RtlpFcValidateFeatureUsageSubscriptionBuffer @ 0x1409C08B4 (RtlpFcValidateFeatureUsageSubscriptionBuffer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpFcCompareUsageSubscriptionToUsageSubscription(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // ax
  unsigned int v3; // eax
  unsigned int v4; // eax

  if ( *(_DWORD *)a1 <= *(_DWORD *)a2 )
  {
    if ( *(_DWORD *)a1 < *(_DWORD *)a2 )
      return 0xFFFFFFFFLL;
    v2 = *(_WORD *)(a1 + 4);
    if ( v2 <= *(_WORD *)(a2 + 4) )
    {
      if ( v2 < *(_WORD *)(a2 + 4) )
        return 0xFFFFFFFFLL;
      v3 = *(_DWORD *)(a1 + 8);
      if ( v3 <= *(_DWORD *)(a2 + 8) )
      {
        if ( v3 >= *(_DWORD *)(a2 + 8) )
        {
          v4 = *(_DWORD *)(a1 + 12);
          if ( v4 <= *(_DWORD *)(a2 + 12) )
            return (unsigned int)-(v4 < *(_DWORD *)(a2 + 12));
          return 1LL;
        }
        return 0xFFFFFFFFLL;
      }
    }
  }
  return 1LL;
}
