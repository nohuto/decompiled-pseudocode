/*
 * XREFs of ZwQueryWnfStateData @ 0x1403FD020
 * Callers:
 *     wil_details_StagingConfig_Load @ 0x14038C688 (wil_details_StagingConfig_Load.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x14058E5E0 (RtlRaiseCustomSystemEventTrigger.c)
 *     PopBatteryWorker @ 0x14077F810 (PopBatteryWorker.c)
 *     CmFcpManagerPublishChangeNotifications @ 0x14087E7C4 (CmFcpManagerPublishChangeNotifications.c)
 *     RtlpFcNotifyFeatureUsageTarget @ 0x140919988 (RtlpFcNotifyFeatureUsageTarget.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryWnfStateData(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
