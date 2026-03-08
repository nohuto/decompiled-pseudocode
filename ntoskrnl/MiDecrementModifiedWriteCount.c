/*
 * XREFs of MiDecrementModifiedWriteCount @ 0x140212BE4
 * Callers:
 *     MiWriteComplete @ 0x1402126E0 (MiWriteComplete.c)
 *     MiTrimSharedPage @ 0x1403A0EBC (MiTrimSharedPage.c)
 *     MiDeleteCachedSubsection @ 0x140621708 (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x1406220F4 (MiFlushControlArea.c)
 *     MiFlushComplete @ 0x140633A40 (MiFlushComplete.c)
 *     MiLocateSharedPageViews @ 0x1406340C0 (MiLocateSharedPageViews.c)
 *     MiReleasePageFileSectionInfo @ 0x140639168 (MiReleasePageFileSectionInfo.c)
 *     MiPurgeBadFileOnlyPages @ 0x14063C678 (MiPurgeBadFileOnlyPages.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiBuildWakeList @ 0x140332B34 (MiBuildWakeList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiDecrementModifiedWriteCount(__int64 a1, int a2)
{
  volatile LONG *v2; // rsi
  KIRQL v4; // bl
  __int64 v5; // rdi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf

  v2 = (volatile LONG *)(a1 + 72);
  if ( a2 )
    v4 = 17;
  else
    v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  --*(_DWORD *)(a1 + 76);
  v5 = MiBuildWakeList(a1, 8LL);
  if ( v4 != 17 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(v2);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v4 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v10 = ~(unsigned __int16)(-1LL << (v4 + 1));
        v11 = (v10 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v10;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v4);
  }
  return v5;
}
