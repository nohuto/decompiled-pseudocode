/*
 * XREFs of PopPowerRequestNotifyTtmSessionUninitialized @ 0x140989F5C
 * Callers:
 *     NtPowerInformation @ 0x14074F950 (NtPowerInformation.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     PopPowerRequestRevokeRequests @ 0x140397BB4 (PopPowerRequestRevokeRequests.c)
 *     PopAcquirePowerRequestPushLock @ 0x140753094 (PopAcquirePowerRequestPushLock.c)
 */

NTSTATUS PopPowerRequestNotifyTtmSessionUninitialized()
{
  PopAcquirePowerRequestPushLock(1);
  PopPowerRequestRevokeRequests(1, 0);
  PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
  return KeWaitForSingleObject(&unk_140C03698, Executive, 0, 0, 0LL);
}
