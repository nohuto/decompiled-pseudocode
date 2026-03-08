/*
 * XREFs of PopReleasePowerRequestPushLock @ 0x14073B67C
 * Callers:
 *     PopPowerRequestHandleRequestOverrideQueryResponse @ 0x1402BC0D8 (PopPowerRequestHandleRequestOverrideQueryResponse.c)
 *     PopPowerRequestCallbackWorker @ 0x1402BC180 (PopPowerRequestCallbackWorker.c)
 *     PopPowerRequestCreateCommon @ 0x1402BC348 (PopPowerRequestCreateCommon.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 */

void PopReleasePowerRequestPushLock()
{
  PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
}
