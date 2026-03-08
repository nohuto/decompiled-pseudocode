/*
 * XREFs of MiDerefPageFileSpaceBitmaps @ 0x140636AEC
 * Callers:
 *     MiStoreEvictThread @ 0x1403A3150 (MiStoreEvictThread.c)
 *     MiStoreWriteModifiedPages @ 0x14046554A (MiStoreWriteModifiedPages.c)
 *     MiBuildReservationCluster @ 0x140635ED4 (MiBuildReservationCluster.c)
 *     MiExtendPagingFileMaximum @ 0x140636BC4 (MiExtendPagingFileMaximum.c)
 *     MiFindPageFileWriteCluster @ 0x1406374E0 (MiFindPageFileWriteCluster.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

_DWORD *__fastcall MiDerefPageFileSpaceBitmaps(__int64 a1, _DWORD **a2, int a3)
{
  _DWORD *v3; // r14
  volatile LONG *v4; // rdi
  __int64 v5; // rbx
  KIRQL v7; // si
  int v8; // r15d
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  bool v13; // zf

  v3 = *a2;
  v4 = (volatile LONG *)(a1 + 232);
  v5 = 0LL;
  if ( a3 )
    v7 = 0;
  else
    v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 232));
  v8 = --*v3;
  if ( !a3 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(v4);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v7 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v12 = ~(unsigned __int16)(-1LL << (v7 + 1));
        v13 = (v12 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v12;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(v7);
  }
  if ( !v8 )
    return v3;
  return (_DWORD *)v5;
}
