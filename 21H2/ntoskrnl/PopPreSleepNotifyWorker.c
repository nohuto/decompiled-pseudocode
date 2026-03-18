/*
 * XREFs of PopPreSleepNotifyWorker @ 0x14099D0B0
 * Callers:
 *     <none>
 * Callees:
 *     PopOkayToQueueNextWorkItem @ 0x140368A78 (PopOkayToQueueNextWorkItem.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 */

__int64 PopPreSleepNotifyWorker()
{
  ++PopPreSleepWnfPayload;
  ZwUpdateWnfStateData((__int64)&WNF_PO_PRESLEEP_NOTIFICATION, (__int64)&PopPreSleepWnfPayload);
  return PopOkayToQueueNextWorkItem((__int64)&PopPreSleepNotifyWorkItem);
}
