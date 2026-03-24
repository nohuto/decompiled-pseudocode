/*
 * XREFs of PopRecordLidStateWorker @ 0x1408E1450
 * Callers:
 *     <none>
 * Callees:
 *     PopOkayToQueueNextWorkItem @ 0x14032B274 (PopOkayToQueueNextWorkItem.c)
 *     PopReleaseRwLock @ 0x140345294 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14034AAE4 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1403F76F4 (PopBsdHandleRequest.c)
 *     PopReleasePolicyLock @ 0x140990044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140990084 (PopAcquirePolicyLock.c)
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
    dword_140C2094C = BYTE11(PopBsdPowerTransition) >> 6;
    PopBsdHandleRequest(1);
    PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
  }
}
