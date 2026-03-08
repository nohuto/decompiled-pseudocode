/*
 * XREFs of PopPowerRequestNotifyTtmSessionUninitialized @ 0x14097E7CC
 * Callers:
 *     NtPowerInformation @ 0x14068AB90 (NtPowerInformation.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     PopPowerRequestRevokeRequests @ 0x140581724 (PopPowerRequestRevokeRequests.c)
 *     PopAcquirePowerRequestPushLock @ 0x14073B7D4 (PopAcquirePowerRequestPushLock.c)
 */

NTSTATUS PopPowerRequestNotifyTtmSessionUninitialized()
{
  PopAcquirePowerRequestPushLock(1);
  PopPowerRequestRevokeRequests(1, 0);
  PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
  return KeWaitForSingleObject(&unk_140C03568, Executive, 0, 0, 0LL);
}
