/*
 * XREFs of ZwQueryWnfStateData @ 0x1404150D0
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x1405AEB80 (RtlRaiseCustomSystemEventTrigger.c)
 *     PopBatteryWorker @ 0x14086DD10 (PopBatteryWorker.c)
 *     RtlpFcNotifyFeatureUsageTarget @ 0x1409C0968 (RtlpFcNotifyFeatureUsageTarget.c)
 *     CmFcpManagerPublishChangeNotifications @ 0x140A24FA4 (CmFcpManagerPublishChangeNotifications.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryWnfStateData(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
