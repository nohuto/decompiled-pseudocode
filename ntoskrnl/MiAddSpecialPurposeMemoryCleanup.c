/*
 * XREFs of MiAddSpecialPurposeMemoryCleanup @ 0x140A44064
 * Callers:
 *     MmManagePartitionInitialAddMemory @ 0x140A42A68 (MmManagePartitionInitialAddMemory.c)
 *     MmManagePartitionMoveMemory @ 0x140A42B54 (MmManagePartitionMoveMemory.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     PsDereferencePartition @ 0x140295BF8 (PsDereferencePartition.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 */

void __fastcall MiAddSpecialPurposeMemoryCleanup(__int64 a1, volatile signed __int64 **a2)
{
  volatile signed __int64 *v2; // rbx
  struct _KTHREAD *CurrentThread; // rax
  bool v5; // zf

  v2 = *a2;
  if ( *a2 )
  {
    if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v2);
    KeAbPostRelease((ULONG_PTR)v2);
    CurrentThread = KeGetCurrentThread();
    v5 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v5 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
  if ( a1 )
    PsDereferencePartition(a1);
}
