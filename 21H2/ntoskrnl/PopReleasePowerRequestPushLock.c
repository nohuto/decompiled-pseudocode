/*
 * XREFs of PopReleasePowerRequestPushLock @ 0x14067C12C
 * Callers:
 *     PoClearPowerRequestInternal @ 0x140281F9C (PoClearPowerRequestInternal.c)
 *     PoSetPowerRequestInternal @ 0x140282160 (PoSetPowerRequestInternal.c)
 *     PopPowerRequestCleanUp @ 0x14028278C (PopPowerRequestCleanUp.c)
 *     PopProcessPowerRequestOverrideQueryResponse @ 0x140282C34 (PopProcessPowerRequestOverrideQueryResponse.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14027C284 (PopReleaseRwLock.c)
 */

void PopReleasePowerRequestPushLock()
{
  PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
}
