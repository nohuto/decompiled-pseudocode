/*
 * XREFs of IopCheckHardErrorEmpty @ 0x140552AE0
 * Callers:
 *     IopHardErrorThread @ 0x140941E20 (IopHardErrorThread.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

char IopCheckHardErrorEmpty()
{
  char v0; // di
  KIRQL v1; // al
  unsigned __int64 v2; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *SchedulerAssist; // r9
  int v6; // edx
  bool v7; // zf

  v0 = 1;
  v1 = KeAcquireSpinLockRaiseToDpc(&qword_140C5D990);
  IopCurrentHardError = 0LL;
  v2 = v1;
  if ( (__int64 *)qword_140C5D980 == &qword_140C5D980 )
  {
    byte_140C5D9B8 = 0;
    v0 = 0;
  }
  KxReleaseSpinLock((volatile signed __int64 *)&qword_140C5D990);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v6 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
      v7 = (v6 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v6;
      if ( v7 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v2);
  return v0;
}
