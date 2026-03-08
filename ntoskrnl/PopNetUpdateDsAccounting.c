/*
 * XREFs of PopNetUpdateDsAccounting @ 0x140596AF0
 * Callers:
 *     PdcPoNetworkResiliency @ 0x140994930 (PdcPoNetworkResiliency.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PopNetUpdateDsAccounting(char a1)
{
  unsigned __int64 v2; // rdi
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v6; // zf

  v2 = KeAcquireSpinLockRaiseToDpc(&PopCsResiliencyStatsLock);
  if ( a1 )
  {
    if ( PopNetStandbyState == 2 )
      qword_140C3C758 = MEMORY[0xFFFFF78000000008];
  }
  else if ( qword_140C3C758 )
  {
    qword_140C3C760 += (MEMORY[0xFFFFF78000000008] - qword_140C3C758) / 0xAuLL;
    qword_140C3C758 = 0LL;
  }
  result = KxReleaseSpinLock((volatile signed __int64 *)&PopCsResiliencyStatsLock);
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
      v6 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v6 )
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v2);
  return result;
}
