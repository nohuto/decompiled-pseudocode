/*
 * XREFs of RtlpFcCompareUsageSubscriptionToUsageSubscription @ 0x1403F8878
 * Callers:
 *     RtlpFcValidateFeatureUsageSubscriptionBuffer @ 0x1405CFCFC (RtlpFcValidateFeatureUsageSubscriptionBuffer.c)
 *     RtlpFcCalculateRequiredSizeForNewUsageSubscriptionTable @ 0x140919FF0 (RtlpFcCalculateRequiredSizeForNewUsageSubscriptionTable.c)
 *     RtlpFcUpdateUsageTriggers @ 0x14091A848 (RtlpFcUpdateUsageTriggers.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpFcCompareUsageSubscriptionToUsageSubscription(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // ax
  unsigned int v3; // eax
  unsigned int v4; // eax

  if ( *(_DWORD *)a1 > *(_DWORD *)a2 )
    return 1LL;
  if ( *(_DWORD *)a1 < *(_DWORD *)a2 )
    return 0xFFFFFFFFLL;
  v2 = *(_WORD *)(a1 + 4);
  if ( v2 > *(_WORD *)(a2 + 4) )
    return 1LL;
  if ( v2 < *(_WORD *)(a2 + 4) )
    return 0xFFFFFFFFLL;
  v3 = *(_DWORD *)(a1 + 8);
  if ( v3 > *(_DWORD *)(a2 + 8) )
    return 1LL;
  if ( v3 < *(_DWORD *)(a2 + 8) )
    return 0xFFFFFFFFLL;
  v4 = *(_DWORD *)(a1 + 12);
  if ( v4 <= *(_DWORD *)(a2 + 12) )
  {
    if ( v4 >= *(_DWORD *)(a2 + 12) )
      return 0LL;
    return 0xFFFFFFFFLL;
  }
  return 1LL;
}
