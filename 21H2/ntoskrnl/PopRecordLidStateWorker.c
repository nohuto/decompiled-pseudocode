/*
 * XREFs of PopRecordLidStateWorker @ 0x1408E1560
 * Callers:
 *     <none>
 * Callees:
 *     PopOkayToQueueNextWorkItem @ 0x1402503C4 (PopOkayToQueueNextWorkItem.c)
 *     PopReleaseRwLock @ 0x14026A224 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14026FD14 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1403F8020 (PopBsdHandleRequest.c)
 *     PopReleasePolicyLock @ 0x140991044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140991084 (PopAcquirePolicyLock.c)
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
    dword_140C2096C = BYTE11(PopBsdPowerTransition) >> 6;
    PopBsdHandleRequest(1);
    PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
  }
}
