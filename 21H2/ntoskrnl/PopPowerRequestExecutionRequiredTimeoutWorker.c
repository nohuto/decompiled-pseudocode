/*
 * XREFs of PopPowerRequestExecutionRequiredTimeoutWorker @ 0x140989DA0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     PopOkayToQueueNextWorkItem @ 0x140368A78 (PopOkayToQueueNextWorkItem.c)
 *     PopAcquirePowerRequestPushLock @ 0x140753094 (PopAcquirePowerRequestPushLock.c)
 *     PopPowerRequestHandleExecutionEnablementUpdate @ 0x1407EE888 (PopPowerRequestHandleExecutionEnablementUpdate.c)
 */

void PopPowerRequestExecutionRequiredTimeoutWorker()
{
  PopAcquirePowerRequestPushLock(1);
  PopPowerRequestHandleExecutionEnablementUpdate();
  PopOkayToQueueNextWorkItem((__int64)&unk_140C24348);
  PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
}
