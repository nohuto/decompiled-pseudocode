/*
 * XREFs of ExInterlockedExtendZone @ 0x140609D70
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ExExtendZone @ 0x140609C80 (ExExtendZone.c)
 */

NTSTATUS __stdcall ExInterlockedExtendZone(PZONE_HEADER Zone, PVOID Segment, ULONG SegmentSize, PKSPIN_LOCK Lock)
{
  unsigned __int64 v8; // r14
  NTSTATUS v9; // ebx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  bool v14; // zf

  v8 = KeAcquireSpinLockRaiseToDpc(Lock);
  v9 = ExExtendZone(Zone, Segment, SegmentSize);
  KxReleaseSpinLock((volatile signed __int64 *)Lock);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
      v14 = (v13 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v13;
      if ( v14 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v8);
  return v9;
}
