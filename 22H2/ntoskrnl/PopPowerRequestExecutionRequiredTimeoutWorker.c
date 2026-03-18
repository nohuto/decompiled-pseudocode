/*
 * XREFs of PopPowerRequestExecutionRequiredTimeoutWorker @ 0x1409816C0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 *     PopOkayToQueueNextWorkItem @ 0x14032ED60 (PopOkayToQueueNextWorkItem.c)
 *     PopAcquirePowerRequestPushLock @ 0x1407A73E4 (PopAcquirePowerRequestPushLock.c)
 *     PopPowerRequestHandleExecutionEnablementUpdate @ 0x1408563D4 (PopPowerRequestHandleExecutionEnablementUpdate.c)
 */

void PopPowerRequestExecutionRequiredTimeoutWorker()
{
  PopAcquirePowerRequestPushLock(1);
  PopPowerRequestHandleExecutionEnablementUpdate();
  PopOkayToQueueNextWorkItem((__int64)&unk_140C3F548);
  PopReleaseRwLock((__int64 *)&PopPowerRequestLock);
}
