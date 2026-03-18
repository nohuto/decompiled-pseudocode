/*
 * XREFs of PopRecordLidStateWorker @ 0x1409812D0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C404 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x14032D1F4 (PopBsdHandleRequest.c)
 *     PopOkayToQueueNextWorkItem @ 0x14032ED60 (PopOkayToQueueNextWorkItem.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

void PopRecordLidStateWorker()
{
  int v0; // ecx
  char v1; // bl
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8

  PopOkayToQueueNextWorkItem((__int64)&PopRecordLidStateWorkItem);
  if ( !PopErrataReportingIncorrectLidState )
  {
    PopAcquirePolicyLock(v0);
    v1 = PopLidOpened != 0 ? 0x40 : 0;
    PopReleasePolicyLock(v3, v2, v4);
    PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
    BYTE11(PopBsdPowerTransition) = v1 | BYTE11(PopBsdPowerTransition) & 0x3F;
    dword_140C3A06C = BYTE11(PopBsdPowerTransition) >> 6;
    PopBsdHandleRequest(1u);
    PopReleaseRwLock(&PopBsdUpdateLock);
  }
}
