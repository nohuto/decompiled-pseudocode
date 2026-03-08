/*
 * XREFs of PopPreSleepNotifyWorker @ 0x140998F40
 * Callers:
 *     <none>
 * Callees:
 *     PopOkayToQueueNextWorkItem @ 0x140302D08 (PopOkayToQueueNextWorkItem.c)
 *     ZwUpdateWnfStateData @ 0x140415ED0 (ZwUpdateWnfStateData.c)
 */

__int64 PopPreSleepNotifyWorker()
{
  ++PopPreSleepWnfPayload;
  ZwUpdateWnfStateData((__int64)&WNF_PO_PRESLEEP_NOTIFICATION, (__int64)&PopPreSleepWnfPayload);
  return PopOkayToQueueNextWorkItem((__int64)&PopPreSleepNotifyWorkItem);
}
