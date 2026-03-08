/*
 * XREFs of RtlpFcValidateFeatureUsageSubscriptionBuffer @ 0x1409C08B4
 * Callers:
 *     CmFcManagerUpdateFeatureUsageSubscriptions @ 0x140A24A68 (CmFcManagerUpdateFeatureUsageSubscriptions.c)
 * Callees:
 *     RtlULongLongMult @ 0x14024789C (RtlULongLongMult.c)
 *     RtlpFcCompareUsageSubscriptionToUsageSubscription @ 0x1405B2730 (RtlpFcCompareUsageSubscriptionToUsageSubscription.c)
 */

__int64 __fastcall RtlpFcValidateFeatureUsageSubscriptionBuffer(unsigned int *a1, ULONGLONG a2)
{
  unsigned int v3; // r10d
  unsigned int *v4; // r11
  unsigned int v5; // r9d
  unsigned int v6; // r8d
  ULONGLONG pullResult; // [rsp+30h] [rbp+8h] BYREF

  pullResult = 0LL;
  if ( a1 )
  {
    if ( a2 >= 4
      && ((unsigned __int8)a1 & 3) == 0
      && RtlULongLongMult(*a1, 0x10uLL, &pullResult) >= 0
      && pullResult + 4 >= pullResult
      && pullResult + 4 <= a2 )
    {
      v5 = *v4;
      v6 = v3;
      if ( !*v4 )
        return v3;
      while ( !v6
           || (int)RtlpFcCompareUsageSubscriptionToUsageSubscription((__int64)&v4[4 * v6 - 3], (__int64)&v4[4 * v6 + 1]) < 0 )
      {
        if ( ++v6 >= v5 )
          return v3;
      }
    }
    return (unsigned int)-1073741811;
  }
  return a2 != 0 ? 0xC000000D : 0;
}
