/*
 * XREFs of MiLockHugePfn @ 0x14061EFAC
 * Callers:
 *     MiZeroPage @ 0x140275060 (MiZeroPage.c)
 *     MiGetHugeRangeFromNode @ 0x1403BF1C4 (MiGetHugeRangeFromNode.c)
 *     MiDecrementHugeContext @ 0x1403D0A68 (MiDecrementHugeContext.c)
 *     MiAddPartitionHugeRange @ 0x14061CDC4 (MiAddPartitionHugeRange.c)
 *     MiGetPageInHugePageBadStatus @ 0x14061DAC4 (MiGetPageInHugePageBadStatus.c)
 *     MiHotRemoveHugeRange @ 0x14061DC8C (MiHotRemoveHugeRange.c)
 *     MiMarkHugePfnBad @ 0x14061F1D0 (MiMarkHugePfnBad.c)
 *     MiMarkHugePfnGood @ 0x14061F9B8 (MiMarkHugePfnGood.c)
 *     MiMoveBadHugeRangeCrossPartition @ 0x14061FC7C (MiMoveBadHugeRangeCrossPartition.c)
 *     MiReleaseMemoryRuns @ 0x14061FEB0 (MiReleaseMemoryRuns.c)
 *     MiReturnUnusedHugeDescriptors @ 0x1406202D4 (MiReturnUnusedHugeDescriptors.c)
 *     MiZeroHugeRangeWorker @ 0x140620990 (MiZeroHugeRangeWorker.c)
 *     MiUpdateBadPfnIdentity @ 0x140628ED0 (MiUpdateBadPfnIdentity.c)
 *     MiFreePartitionPageRun @ 0x140657734 (MiFreePartitionPageRun.c)
 *     MiInsertPartitionPages @ 0x140657EB8 (MiInsertPartitionPages.c)
 *     MiAllocatePartitionPhysicalPages @ 0x140A416B8 (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     MiLockHugePfnInternal @ 0x14061F020 (MiLockHugePfnInternal.c)
 */

unsigned __int8 __fastcall MiLockHugePfn(__int64 a1)
{
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  int v3; // eax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v3 = 4;
    if ( CurrentIrql != 2 )
      v3 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v3;
  }
  MiLockHugePfnInternal(a1, 0LL);
  return CurrentIrql;
}
