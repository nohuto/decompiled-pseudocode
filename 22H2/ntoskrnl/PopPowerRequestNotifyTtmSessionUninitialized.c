/*
 * XREFs of PopPowerRequestNotifyTtmSessionUninitialized @ 0x14098187C
 * Callers:
 *     NtPowerInformation @ 0x140784430 (NtPowerInformation.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 *     PopPowerRequestRevokeRequests @ 0x140583C54 (PopPowerRequestRevokeRequests.c)
 *     PopAcquirePowerRequestPushLock @ 0x1407A73E4 (PopAcquirePowerRequestPushLock.c)
 */

NTSTATUS PopPowerRequestNotifyTtmSessionUninitialized()
{
  PopAcquirePowerRequestPushLock(1);
  PopPowerRequestRevokeRequests(1, 0);
  PopReleaseRwLock((__int64 *)&PopPowerRequestLock);
  return KeWaitForSingleObject(&unk_140C03598, Executive, 0, 0, 0LL);
}
