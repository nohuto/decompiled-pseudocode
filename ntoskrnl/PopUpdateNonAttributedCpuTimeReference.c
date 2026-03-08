/*
 * XREFs of PopUpdateNonAttributedCpuTimeReference @ 0x140597458
 * Callers:
 *     PpmUpdateIdleVeto @ 0x140583F90 (PpmUpdateIdleVeto.c)
 *     PopFxPlatformStateAvailable @ 0x140588EBC (PopFxPlatformStateAvailable.c)
 *     PopPdcIdleResiliencyCallback @ 0x14099507C (PopPdcIdleResiliencyCallback.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     PopAccumulateNonActivatedCpuTime @ 0x1405973F0 (PopAccumulateNonActivatedCpuTime.c)
 */

__int64 __fastcall PopUpdateNonAttributedCpuTimeReference(char a1)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // rdi
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v7; // zf

  v3 = KeAcquireSpinLockRaiseToDpc(&qword_140CF7A08);
  if ( a1 )
  {
    if ( ++dword_140CF7A04 == 1 )
    {
      v2 = 0LL;
LABEL_6:
      PopAccumulateNonActivatedCpuTime(v2, &qword_140CF78F8, &qword_140CF7900);
    }
  }
  else if ( !--dword_140CF7A04 )
  {
    LOBYTE(v2) = 1;
    goto LABEL_6;
  }
  result = KxReleaseSpinLock((volatile signed __int64 *)&qword_140CF7A08);
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v3 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
      v7 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v7 )
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v3);
  return result;
}
