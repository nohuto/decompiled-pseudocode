/*
 * XREFs of ExpQueryBootLoaderMetadata @ 0x1406033C8
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406AC2A0 (ExpQuerySystemInformation.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ExSystemExceptionFilter @ 0x140861790 (ExSystemExceptionFilter.c)
 */

__int64 __fastcall ExpQueryBootLoaderMetadata(void *a1, unsigned int a2, _DWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  char *v7; // rdx
  unsigned int v8; // edi
  size_t v9; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&ExBootLoaderMetadataLock, 0LL);
  v7 = (char *)ExBootLoaderMetadata;
  v8 = 0;
  if ( ExBootLoaderMetadata )
  {
    v9 = *(unsigned int *)ExBootLoaderMetadata;
    *a3 = v9;
    if ( a1 )
    {
      if ( a2 >= (unsigned int)v9 )
        memmove(a1, v7 + 4, v9);
      else
        v8 = -1073741820;
    }
  }
  else
  {
    *a3 = 0;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExBootLoaderMetadataLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExBootLoaderMetadataLock);
  KeAbPostRelease((ULONG_PTR)&ExBootLoaderMetadataLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v8;
}
