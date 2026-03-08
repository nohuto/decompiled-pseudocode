/*
 * XREFs of MiOutlawInswaps @ 0x1402DB8E0
 * Callers:
 *     MiBeginProcessClean @ 0x1402DB7FC (MiBeginProcessClean.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     MiGetWorkingSetSwapSupport @ 0x1402DBD74 (MiGetWorkingSetSwapSupport.c)
 *     MiGetSharedVm @ 0x140330CD4 (MiGetSharedVm.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiOutlawInswaps(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  unsigned __int64 v3; // rsi
  __int64 WorkingSetSwapSupport; // rbp
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  bool v14; // zf

  v1 = a1 + 1664;
  v2 = *(_QWORD *)(qword_140C67048 + 8LL * *(unsigned __int16 *)(a1 + 1838));
  v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 1176));
  WorkingSetSwapSupport = MiGetWorkingSetSwapSupport(v1);
  *(_QWORD *)(MiGetSharedVm(v6, v5, v7, v8) + 24) = 2LL;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 1176));
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
      v14 = (v13 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v13;
      if ( v14 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v3);
  return WorkingSetSwapSupport;
}
