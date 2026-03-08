/*
 * XREFs of ViFaultsIsCurrentAppTarget @ 0x140AD3A68
 * Callers:
 *     VfFaultsInjectResourceFailure @ 0x140AD2FAC (VfFaultsInjectResourceFailure.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 ViFaultsIsCurrentAppTarget()
{
  unsigned __int64 v0; // rdi
  unsigned int v1; // ebx
  BOOL v2; // esi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v6; // eax
  bool v7; // zf

  v0 = KeAcquireSpinLockRaiseToDpc(&ViFaultInjectionLock);
  v1 = 0;
  v2 = ViFaultApplicationsList == &ViFaultApplicationsList;
  KxReleaseSpinLock((volatile signed __int64 *)&ViFaultInjectionLock);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v0 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v6 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v0 + 1));
      v7 = (v6 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v6;
      if ( v7 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v0);
  if ( v2 )
    return 1;
  if ( (KeGetCurrentThread()->ApcState.Process[1].DirectoryTableBase & 0x10000) != 0 )
  {
    ++dword_140D707A4;
    return 1;
  }
  ++dword_140D707A0;
  return v1;
}
