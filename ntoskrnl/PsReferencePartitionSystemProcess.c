/*
 * XREFs of PsReferencePartitionSystemProcess @ 0x1409B3550
 * Callers:
 *     ExSwapinWorkerThreads @ 0x1409FD778 (ExSwapinWorkerThreads.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     ObfReferenceObject @ 0x140267A70 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 */

__int64 __fastcall PsReferencePartitionSystemProcess(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v3; // rbx
  PVOID v6; // rcx
  __int64 v7; // rax
  unsigned int v8; // edi

  CurrentThread = KeGetCurrentThread();
  v3 = (signed __int64 *)(a1 + 104);
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx(a1 + 104, 0LL);
  v6 = *(PVOID *)(a1 + 112);
  if ( v6 == MmBadPointer )
  {
    v8 = -1073740640;
  }
  else
  {
    ObfReferenceObject(v6);
    v7 = *(_QWORD *)(a1 + 112);
    v8 = 0;
    *a2 = v7;
  }
  if ( _InterlockedCompareExchange64(v3, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v8;
}
