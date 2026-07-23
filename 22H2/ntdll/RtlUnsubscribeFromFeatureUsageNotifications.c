/*
 * XREFs of RtlUnsubscribeFromFeatureUsageNotifications @ 0x180101CA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlUnsubscribeFromFeatureUsageNotifications(
        PRTL_FEATURE_USAGE_SUBSCRIPTION_DETAILS SubscriptionDetails,
        SIZE_T SubscriptionCount)
{
  char v2; // r8

  v2 = 1;
  return RtlpFcUpdateUsageSubscriptions(SubscriptionDetails, SubscriptionCount, v2);
}
