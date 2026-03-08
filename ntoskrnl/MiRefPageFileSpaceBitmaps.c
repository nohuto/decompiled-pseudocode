/*
 * XREFs of MiRefPageFileSpaceBitmaps @ 0x140639084
 * Callers:
 *     MiStoreEvictThread @ 0x1403A3150 (MiStoreEvictThread.c)
 *     MiStoreWriteModifiedPages @ 0x14046554A (MiStoreWriteModifiedPages.c)
 *     MiBuildReservationCluster @ 0x140635ED4 (MiBuildReservationCluster.c)
 *     MiFindPageFileWriteCluster @ 0x1406374E0 (MiFindPageFileWriteCluster.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiRefPageFileSpaceBitmaps(int *a1, __int64 a2)
{
  volatile LONG *v2; // rbx
  KIRQL v5; // al
  __int64 v6; // r14
  unsigned __int64 v7; // rbp
  int v8; // edi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  bool v13; // zf

  v2 = a1 + 58;
  v5 = ExAcquireSpinLockExclusive(a1 + 58);
  v6 = *((_QWORD *)a1 + 14);
  v7 = v5;
  ++*(_DWORD *)v6;
  *(_OWORD *)a2 = *(_OWORD *)v6;
  *(_OWORD *)(a2 + 16) = *(_OWORD *)(v6 + 16);
  *(_QWORD *)(a2 + 32) = *(_QWORD *)(v6 + 32);
  v8 = *a1;
  ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
      v13 = (v12 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v12;
      if ( v13 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v7);
  *(_DWORD *)(a2 + 8) = v8;
  *(_DWORD *)(a2 + 24) = v8;
  *(_QWORD *)a2 = v6;
}
