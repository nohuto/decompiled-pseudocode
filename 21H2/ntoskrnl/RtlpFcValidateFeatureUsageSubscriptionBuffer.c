/*
 * XREFs of RtlpFcValidateFeatureUsageSubscriptionBuffer @ 0x1409BFC00
 * Callers:
 *     CmFcManagerUpdateFeatureUsageSubscriptions @ 0x14092317C (CmFcManagerUpdateFeatureUsageSubscriptions.c)
 * Callees:
 *     RtlpFcCompareUsageSubscriptionToUsageSubscription @ 0x1405EE7A0 (RtlpFcCompareUsageSubscriptionToUsageSubscription.c)
 */

__int64 __fastcall RtlpFcValidateFeatureUsageSubscriptionBuffer(unsigned int *a1, unsigned __int64 a2)
{
  unsigned int v2; // r8d
  unsigned int *v3; // r10
  unsigned int v4; // r11d
  unsigned __int64 v5; // kr00_8
  unsigned __int64 v6; // rax
  int v7; // r9d

  v2 = 0;
  v3 = a1;
  if ( a1 )
  {
    if ( a2 >= 4 && ((unsigned __int8)a1 & 3) == 0 )
    {
      v4 = *a1;
      v5 = *a1;
      if ( is_mul_ok(v5, 0x10uLL) )
      {
        v6 = 16 * v5 + 4;
        if ( v6 >= 16 * v5 && v6 <= a2 )
        {
          v7 = 0;
          if ( !v4 )
            return v2;
          while ( !v7
               || (int)RtlpFcCompareUsageSubscriptionToUsageSubscription(
                         (__int64)&v3[4 * (v7 - 1) + 1],
                         (__int64)&v3[4 * v7 + 1]) < 0 )
          {
            if ( ++v7 >= v4 )
              return v2;
          }
        }
      }
    }
    return (unsigned int)-1073741811;
  }
  return a2 != 0 ? 0xC000000D : 0;
}
