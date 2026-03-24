/*
 * XREFs of SmpSystemStoreCreate @ 0x1407CE9E0
 * Callers:
 *     MiCreatePagingFile @ 0x1407B6DDC (MiCreatePagingFile.c)
 *     SmProcessConfigRequest @ 0x1407CE8CC (SmProcessConfigRequest.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402CBAC0 (KeLeaveCriticalRegion.c)
 *     SmpDirtyStoreCreate @ 0x1406FB7C8 (SmpDirtyStoreCreate.c)
 */

__int64 SmpSystemStoreCreate()
{
  struct _KTHREAD *CurrentThread; // rax
  int v1; // edi
  int v3; // [rsp+30h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140D241B8, 0LL);
  if ( dword_140D241B0 == -1 )
  {
    v1 = SmpDirtyStoreCreate(
           (__int64)&SmGlobals,
           (unsigned int)(*(_QWORD *)(*(_QWORD *)qword_140C4E648 + 6928LL) >> 8) >> 1,
           0,
           &v3);
    if ( v1 >= 0 )
      dword_140D241B0 = v3;
  }
  else
  {
    v1 = -1073740008;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140D241B8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140D241B8);
  KeAbPostRelease((ULONG_PTR)&qword_140D241B8);
  KeLeaveCriticalRegion();
  return (unsigned int)v1;
}
