/*
 * XREFs of SmpSystemStoreCreate @ 0x14085E448
 * Callers:
 *     MiCreatePagingFile @ 0x14084AA8C (MiCreatePagingFile.c)
 *     SmProcessConfigRequest @ 0x14085E334 (SmProcessConfigRequest.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     SmpDirtyStoreCreate @ 0x1406ED344 (SmpDirtyStoreCreate.c)
 */

__int64 SmpSystemStoreCreate()
{
  struct _KTHREAD *CurrentThread; // rax
  int v1; // edi
  int v3; // [rsp+30h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140D321F8, 0LL);
  if ( dword_140D321F0 == -1 )
  {
    v1 = SmpDirtyStoreCreate(
           (__int64)&SmGlobals,
           (unsigned int)(*(_QWORD *)(*(_QWORD *)qword_140C51F48 + 16720LL) >> 8) >> 1,
           0,
           &v3);
    if ( v1 >= 0 )
      dword_140D321F0 = v3;
  }
  else
  {
    v1 = -1073740008;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140D321F8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140D321F8);
  KeAbPostRelease((ULONG_PTR)&qword_140D321F8);
  KeLeaveCriticalRegion();
  return (unsigned int)v1;
}
