/*
 * XREFs of ViFaultsRemoveAllTags @ 0x140AD3CD8
 * Callers:
 *     VfFaultsSetParameters @ 0x140AD3148 (VfFaultsSetParameters.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 ViFaultsRemoveAllTags()
{
  KIRQL v0; // al
  PVOID **v1; // rcx
  unsigned __int64 v2; // rdi
  PVOID *v3; // rbx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v7; // zf

  v0 = KeAcquireSpinLockRaiseToDpc(&ViFaultInjectionLock);
  v1 = (PVOID **)ViFaultTagsList;
  v2 = v0;
  if ( ViFaultTagsList != &ViFaultTagsList )
  {
    do
    {
      v3 = *v1;
      ExFreePoolWithTag(v1, 0);
      v1 = (PVOID **)v3;
    }
    while ( v3 != &ViFaultTagsList );
  }
  ViHaveFaultTags = 0;
  qword_140C367A8 = (__int64)&ViFaultTagsList;
  ViFaultTagsList = &ViFaultTagsList;
  result = KxReleaseSpinLock((volatile signed __int64 *)&ViFaultInjectionLock);
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v2 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
      v7 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v7 )
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v2);
  return result;
}
