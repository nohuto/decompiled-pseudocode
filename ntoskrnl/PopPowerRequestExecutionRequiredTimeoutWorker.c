/*
 * XREFs of PopPowerRequestExecutionRequiredTimeoutWorker @ 0x14097E610
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     PopOkayToQueueNextWorkItem @ 0x140302D08 (PopOkayToQueueNextWorkItem.c)
 *     PopAcquirePowerRequestPushLock @ 0x14073B7D4 (PopAcquirePowerRequestPushLock.c)
 *     PopPowerRequestHandleExecutionEnablementUpdate @ 0x1408525A4 (PopPowerRequestHandleExecutionEnablementUpdate.c)
 */

void PopPowerRequestExecutionRequiredTimeoutWorker()
{
  PopAcquirePowerRequestPushLock(1);
  PopPowerRequestHandleExecutionEnablementUpdate();
  PopOkayToQueueNextWorkItem((__int64)&unk_140C3F108);
  PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
}
