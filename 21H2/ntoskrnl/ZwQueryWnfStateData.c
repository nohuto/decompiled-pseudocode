/*
 * XREFs of ZwQueryWnfStateData @ 0x1403FD200
 * Callers:
 *     wil_details_StagingConfig_Load @ 0x14038C7D8 (wil_details_StagingConfig_Load.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x14058E810 (RtlRaiseCustomSystemEventTrigger.c)
 *     PopBatteryWorker @ 0x14077F9D0 (PopBatteryWorker.c)
 *     CmFcpManagerPublishChangeNotifications @ 0x14087E924 (CmFcpManagerPublishChangeNotifications.c)
 *     RtlpFcNotifyFeatureUsageTarget @ 0x140919AE8 (RtlpFcNotifyFeatureUsageTarget.c)
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
