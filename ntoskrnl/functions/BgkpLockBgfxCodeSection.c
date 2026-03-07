char BgkpLockBgfxCodeSection()
{
  struct _KTHREAD *CurrentThread; // rax
  int v1; // eax
  char v2; // bl

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C708E0, 0LL);
  v1 = dword_140C6A804;
  if ( !dword_140C6A804 )
  {
    ImageSectionHandle = MmLockPagableDataSection(BgkpLockBgfxCodeSection);
    v1 = dword_140C6A804;
  }
  dword_140C6A804 = v1 + 1;
  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C708E0, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v2 & 2) != 0 && (v2 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C708E0);
  KeAbPostRelease((ULONG_PTR)&qword_140C708E0);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
