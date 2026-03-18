/*
 * XREFs of PopReleasePowerRequestPushLock @ 0x1407A723C
 * Callers:
 *     PopPowerRequestHandleRequestOverrideQueryResponse @ 0x14032B928 (PopPowerRequestHandleRequestOverrideQueryResponse.c)
 *     PopPowerRequestCallbackWorker @ 0x14032B9D0 (PopPowerRequestCallbackWorker.c)
 *     PopPowerRequestCreateCommon @ 0x14032BB98 (PopPowerRequestCreateCommon.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 */

void PopReleasePowerRequestPushLock()
{
  PopReleaseRwLock((__int64 *)&PopPowerRequestLock);
}
