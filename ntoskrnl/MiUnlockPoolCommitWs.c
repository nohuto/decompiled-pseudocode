/*
 * XREFs of MiUnlockPoolCommitWs @ 0x1403303A0
 * Callers:
 *     MiFillPoolCommitPageTable @ 0x14032F1F0 (MiFillPoolCommitPageTable.c)
 *     MiCommitPoolMemory @ 0x14032FC90 (MiCommitPoolMemory.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14025C1E0 (MiUnlockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x140290620 (MiUnlockPageTableInternal.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiUnlockPoolCommitWs(__int64 a1)
{
  unsigned __int64 v1; // rdx
  __int64 result; // rax
  unsigned __int64 v4; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v7; // zf

  v1 = *(_QWORD *)(a1 + 64);
  if ( v1 )
  {
    MiUnlockPageTableInternal(*(_QWORD *)(a1 + 48), v1);
    *(_QWORD *)(a1 + 64) = 0LL;
  }
  result = MiUnlockWorkingSetShared(*(_QWORD *)(a1 + 48), 2u);
  v4 = *(unsigned __int8 *)(a1 + 76);
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v4 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
      v7 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v7 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v4);
  return result;
}
