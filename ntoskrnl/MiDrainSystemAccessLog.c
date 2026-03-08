/*
 * XREFs of MiDrainSystemAccessLog @ 0x140330B34
 * Callers:
 *     MiEmptyAccessLogs @ 0x1402005B0 (MiEmptyAccessLogs.c)
 *     MiDeleteSessionAddressSpace @ 0x1402008EC (MiDeleteSessionAddressSpace.c)
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x1402F6AAC (MiCaptureAndResetWorkingSetAccessBits.c)
 *     MiCleanWorkingSet @ 0x1402F92FC (MiCleanWorkingSet.c)
 *     MiDeleteVad @ 0x1407C82E0 (MiDeleteVad.c)
 * Callees:
 *     MiEmptyPageAccessLog @ 0x14028C160 (MiEmptyPageAccessLog.c)
 *     MiGetSharedVm @ 0x140330CD4 (MiGetSharedVm.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140333520 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiDrainSystemAccessLog(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  _DWORD *SchedulerAssist; // r9
  __int64 v9; // rdi
  unsigned __int8 CurrentIrql; // bl
  __int64 SharedVm; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 *v15; // rcx
  __int64 v16; // rax
  int v17; // eax
  unsigned __int8 v18; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v20; // r8
  int v21; // eax
  bool v22; // zf

  result = MiGetSharedVm(a1, a2, a3, a4);
  v9 = result;
  if ( *(_QWORD *)(result + 40) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      v17 = 4;
      if ( CurrentIrql != 2 )
      {
        v6 = -1LL << (CurrentIrql + 1);
        v17 = v6 & 4;
      }
      v7 = (unsigned int)v17 | SchedulerAssist[5];
      SchedulerAssist[5] = v7;
    }
    SharedVm = MiGetSharedVm(a1, v6, v7, SchedulerAssist);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(SharedVm + 64));
    v15 = *(unsigned __int64 **)(v9 + 40);
    if ( v15 )
    {
      MiEmptyPageAccessLog(v15);
      *(_QWORD *)(v9 + 40) = 0LL;
    }
    v16 = MiGetSharedVm(a1, v12, v13, v14);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v16 + 64));
    if ( KiIrqlFlags )
    {
      v18 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v18 <= 0xFu && CurrentIrql <= 0xFu && v18 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v20 = CurrentPrcb->SchedulerAssist;
        v21 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v22 = (v21 & v20[5]) == 0;
        v20[5] &= v21;
        if ( v22 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
