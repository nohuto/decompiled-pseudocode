/*
 * XREFs of ViHalTrackDomainCommonBuffer @ 0x140AC63E8
 * Callers:
 *     VfAllocateDomainCommonBuffer @ 0x1405CC330 (VfAllocateDomainCommonBuffer.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ViHalTrackDomainCommonBuffer(__int64 *a1)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v7; // zf

  v2 = KeAcquireSpinLockRaiseToDpc(&qword_140C365D0);
  v3 = ViDomainCommonBufferList;
  if ( *(__int64 **)(ViDomainCommonBufferList + 8) != &ViDomainCommonBufferList )
    __fastfail(3u);
  a1[1] = (__int64)&ViDomainCommonBufferList;
  *a1 = v3;
  *(_QWORD *)(v3 + 8) = a1;
  ViDomainCommonBufferList = (__int64)a1;
  result = KxReleaseSpinLock((volatile signed __int64 *)&qword_140C365D0);
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
