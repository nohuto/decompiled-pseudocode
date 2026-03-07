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
    dword_140C39C8C = BYTE11(PopBsdPowerTransition) >> 6;
    PopBsdHandleRequest(1u);
    PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
  }
}
