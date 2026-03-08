/*
 * XREFs of ViFaultsInitializeTagsList @ 0x140AD387C
 * Callers:
 *     VfFaultsInitPhase0 @ 0x140AD2E18 (VfFaultsInitPhase0.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ViFaultsAddAllTags @ 0x140AD3400 (ViFaultsAddAllTags.c)
 */

__int64 ViFaultsInitializeTagsList()
{
  unsigned int v0; // ebx
  unsigned __int64 v1; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v5; // eax
  bool v6; // zf

  v0 = 0;
  v1 = KeAcquireSpinLockRaiseToDpc(&ViFaultInjectionLock);
  ViHaveFaultTags = 0;
  qword_140C367A8 = (__int64)&ViFaultTagsList;
  ViFaultTagsList = &ViFaultTagsList;
  KxReleaseSpinLock((volatile signed __int64 *)&ViFaultInjectionLock);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v1 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v5 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v1 + 1));
      v6 = (v5 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v5;
      if ( v6 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v1);
  if ( VerifierFaultTagsBufferSize != -1 && (unsigned int)(VerifierFaultTagsBufferSize - 2) <= 0xFE )
    return (unsigned int)ViFaultsAddAllTags(
                           VerifierFaultTagsBuffer,
                           ((unsigned __int64)(unsigned int)VerifierFaultTagsBufferSize - 2) >> 1);
  return v0;
}
