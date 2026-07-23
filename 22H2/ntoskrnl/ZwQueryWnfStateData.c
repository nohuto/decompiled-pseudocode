/*
 * XREFs of ZwQueryWnfStateData @ 0x1403FC6A0
 * Callers:
 *     wil_details_StagingConfig_Load @ 0x14038BF88 (wil_details_StagingConfig_Load.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x14058E520 (RtlRaiseCustomSystemEventTrigger.c)
 *     PopBatteryWorker @ 0x14077F710 (PopBatteryWorker.c)
 *     CmFcpManagerPublishChangeNotifications @ 0x14087E814 (CmFcpManagerPublishChangeNotifications.c)
 *     RtlpFcNotifyFeatureUsageTarget @ 0x1409199D8 (RtlpFcNotifyFeatureUsageTarget.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryWnfStateData(
        PCWNF_STATE_NAME StateName,
        PCWNF_TYPE_ID TypeId,
        const void *ExplicitScope,
        PWNF_CHANGE_STAMP ChangeStamp,
        PVOID Buffer,
        PULONG BufferSize)
{
  _disable();
  __readeflags();
  return KiServiceInternal(StateName);
}
