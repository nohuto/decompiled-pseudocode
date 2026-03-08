/*
 * XREFs of PopReleaseUmpoPushLock @ 0x14073C2B8
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x1402BD1D0 (PopUmpoSendPowerMessage.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x140262AA0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 */

void PopReleaseUmpoPushLock()
{
  ExReleasePushLockEx((__int64 *)&PopUmpoPushLock, 0LL);
  KeLeaveCriticalRegion();
}
