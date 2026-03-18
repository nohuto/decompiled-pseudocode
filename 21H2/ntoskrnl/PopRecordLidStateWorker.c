/*
 * XREFs of PopRecordLidStateWorker @ 0x140989A30
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402D66A8 (PopAcquireRwLockExclusive.c)
 *     PopOkayToQueueNextWorkItem @ 0x140368A78 (PopOkayToQueueNextWorkItem.c)
 *     PopBsdHandleRequest @ 0x1403697C8 (PopBsdHandleRequest.c)
 *     PopReleasePolicyLock @ 0x140A47CF8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A48330 (PopAcquirePolicyLock.c)
 */

void PopRecordLidStateWorker()
{
  int v0; // ecx
  char v1; // bl
  __int64 v2; // rdx
  __int64 v3; // rcx

  PopOkayToQueueNextWorkItem((__int64)&PopRecordLidStateWorkItem);
  if ( !PopErrataReportingIncorrectLidState )
  {
    PopAcquirePolicyLock(v0);
    v1 = PopLidOpened != 0 ? 0x40 : 0;
    PopReleasePolicyLock(v3, v2);
    PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
    BYTE11(PopBsdPowerTransition) = v1 | BYTE11(PopBsdPowerTransition) & 0x3F;
    dword_140C1F7EC = BYTE11(PopBsdPowerTransition) >> 6;
    PopBsdHandleRequest(1);
    PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
  }
}
