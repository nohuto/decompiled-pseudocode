__int64 __fastcall KiTpIsExcludedKernelTracepointLocation(__int64 a1)
{
  unsigned int v1; // edi
  struct _KTHREAD *CurrentThread; // rax
  RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0;
  if ( !qword_140C40E88 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&KiTpStateLock, 0LL);
    if ( !qword_140C40E88 )
      KiTpExcludedRangeBitMap = *KiTpBuildExcludedKernelTracepointBitmap(&BitMapHeader);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KiTpStateLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&KiTpStateLock);
    KeAbPostRelease((ULONG_PTR)&KiTpStateLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( !qword_140C40E88 )
      return 1LL;
  }
  LOBYTE(v1) = (unsigned int)RtlNumberOfSetBitsInRange(
                               (__int64)&KiTpExcludedRangeBitMap,
                               (a1 - PsNtosImageBase) >> 4,
                               (unsigned int)((a1 - PsNtosImageBase + 16) >> 4)
                             - (unsigned int)((a1 - PsNtosImageBase) >> 4)) != 0;
  return v1;
}
