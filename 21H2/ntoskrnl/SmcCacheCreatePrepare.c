/*
 * XREFs of SmcCacheCreatePrepare @ 0x1409D4AF4
 * Callers:
 *     SmcProcessCreateRequest @ 0x1409D4BC0 (SmcProcessCreateRequest.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     SmRegistrationCtxStart @ 0x140861560 (SmRegistrationCtxStart.c)
 *     SmcCacheManagerStart @ 0x1409D7A90 (SmcCacheManagerStart.c)
 */

__int64 __fastcall SmcCacheCreatePrepare(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  int v2; // edi

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140D321A0, 0LL);
  if ( (dword_140D32180 & 8) == 0 )
  {
    v2 = SmRegistrationCtxStart(&qword_140D32430);
    if ( v2 >= 0 )
      dword_140D32180 |= 8u;
  }
  if ( (dword_140D32180 & 4) == 0 && (dword_140D32180 & 8) != 0 )
  {
    v2 = SmcCacheManagerStart(a1, qword_140D32430);
    if ( v2 >= 0 )
      dword_140D32180 |= 4u;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140D321A0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140D321A0);
  KeAbPostRelease((ULONG_PTR)&qword_140D321A0);
  KeLeaveCriticalRegion();
  return (unsigned int)v2;
}
