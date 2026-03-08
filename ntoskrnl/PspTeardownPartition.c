/*
 * XREFs of PspTeardownPartition @ 0x1409B3730
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     PsDereferencePartition @ 0x140295BF8 (PsDereferencePartition.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     MiDeletePartition @ 0x140626F80 (MiDeletePartition.c)
 *     ObCloseHandle @ 0x1407F0D20 (ObCloseHandle.c)
 *     PsTerminateMinimalProcess @ 0x1409B08B0 (PsTerminateMinimalProcess.c)
 *     ExpPartitionDestroy @ 0x1409FDA98 (ExpPartitionDestroy.c)
 */

LONG_PTR __fastcall PspTeardownPartition(PVOID Object)
{
  unsigned __int16 *v2; // rcx
  void *v3; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // r15
  struct _KPROCESS *v6; // rbp
  void *v7; // r12
  PVOID v8; // rax

  if ( Object == PspSystemPartition )
    KeBugCheckEx(0x18Eu, 1uLL, (ULONG_PTR)Object, 0LL, 0LL);
  v2 = *(unsigned __int16 **)Object;
  if ( v2 )
  {
    MiDeletePartition(v2);
    *(_QWORD *)Object = 0LL;
  }
  v3 = (void *)*((_QWORD *)Object + 2);
  if ( v3 )
  {
    ExpPartitionDestroy(v3);
    *((_QWORD *)Object + 2) = 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)Object + 104, 0LL);
  v5 = *((_QWORD *)Object + 8);
  v6 = (struct _KPROCESS *)*((_QWORD *)Object + 14);
  v7 = (void *)*((_QWORD *)Object + 15);
  *((_QWORD *)Object + 8) = MmBadPointer;
  v8 = MmBadPointer;
  *((_QWORD *)Object + 15) = 0LL;
  *((_QWORD *)Object + 14) = v8;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)Object + 13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)Object + 13);
  KeAbPostRelease((ULONG_PTR)Object + 104);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v6 )
  {
    PsTerminateMinimalProcess(v6, 0);
    KeWaitForSingleObject(v6, Executive, 0, 0, 0LL);
    ObfDereferenceObject(v6);
    ObCloseHandle(v7, 0);
  }
  PsDereferencePartition(v5);
  return ObfDereferenceObjectWithTag(Object, 0x64726148u);
}
