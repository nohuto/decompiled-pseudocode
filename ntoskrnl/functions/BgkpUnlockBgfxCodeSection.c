char BgkpUnlockBgfxCodeSection()
{
  struct _KTHREAD *CurrentThread; // rax
  char v1; // bl

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C708E0, 0LL);
  if ( !--dword_140C6A804 )
  {
    MmUnlockPagableImageSection(ImageSectionHandle);
    ImageSectionHandle = 0LL;
  }
  v1 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C708E0, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v1 & 2) != 0 && (v1 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C708E0);
  KeAbPostRelease((ULONG_PTR)&qword_140C708E0);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
