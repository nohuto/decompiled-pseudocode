/*
 * XREFs of PopReleasePowerRequestPushLock @ 0x1406F4F1C
 * Callers:
 *     PoClearPowerRequestInternal @ 0x14034AFAC (PoClearPowerRequestInternal.c)
 *     PoSetPowerRequestInternal @ 0x14034B170 (PoSetPowerRequestInternal.c)
 *     PopPowerRequestCleanUp @ 0x14034B808 (PopPowerRequestCleanUp.c)
 *     PopProcessPowerRequestOverrideQueryResponse @ 0x14034BCB0 (PopProcessPowerRequestOverrideQueryResponse.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140345294 (PopReleaseRwLock.c)
 */

void PopReleasePowerRequestPushLock()
{
  PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
}
