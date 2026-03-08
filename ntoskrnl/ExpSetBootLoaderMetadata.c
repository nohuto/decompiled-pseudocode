/*
 * XREFs of ExpSetBootLoaderMetadata @ 0x1406034C0
 * Callers:
 *     NtSetSystemInformation @ 0x1407E1F30 (NtSetSystemInformation.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ExSystemExceptionFilter @ 0x140861790 (ExSystemExceptionFilter.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpSetBootLoaderMetadata(void *Src, size_t Size)
{
  size_t v2; // r14
  struct _KTHREAD *CurrentThread; // rax
  _DWORD *Pool2; // rdi
  unsigned int v6; // esi

  v2 = (unsigned int)Size;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&ExBootLoaderMetadataLock, 0LL);
  Pool2 = ExBootLoaderMetadata;
  v6 = 0;
  if ( ExBootLoaderMetadata )
  {
    if ( (_DWORD)v2 != *(_DWORD *)ExBootLoaderMetadata )
    {
      ExFreePoolWithTag(ExBootLoaderMetadata, 0x64506142u);
      Pool2 = 0LL;
      ExBootLoaderMetadata = 0LL;
    }
    if ( Pool2 )
      goto LABEL_9;
  }
  if ( (_DWORD)v2 )
  {
    Pool2 = (_DWORD *)ExAllocatePool2(256LL, v2 + 4, 1682989378LL);
    ExBootLoaderMetadata = Pool2;
    if ( !Pool2 )
    {
      v6 = -1073741670;
      goto LABEL_10;
    }
  }
  if ( Pool2 )
  {
LABEL_9:
    memmove(Pool2 + 1, Src, v2);
    *Pool2 = v2;
  }
LABEL_10:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExBootLoaderMetadataLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExBootLoaderMetadataLock);
  KeAbPostRelease((ULONG_PTR)&ExBootLoaderMetadataLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v6;
}
