/*
 * XREFs of MiEndingOffsetWithLock @ 0x140324190
 * Callers:
 *     MiFinishMdlForMappedFileFault @ 0x14028BD60 (MiFinishMdlForMappedFileFault.c)
 *     MiReadyFlushMdlToWrite @ 0x14028C5D0 (MiReadyFlushMdlToWrite.c)
 *     MiViewMayContainPage @ 0x1402A12A0 (MiViewMayContainPage.c)
 *     MiPfPrepareSequentialReadList @ 0x1406EBE40 (MiPfPrepareSequentialReadList.c)
 *     MiPfAllocateMdls @ 0x14075A230 (MiPfAllocateMdls.c)
 *     MiPfPrepareReadList @ 0x1407C42F0 (MiPfPrepareReadList.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x14030AD60 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpTryAcquireSpinLockShared @ 0x140321970 (ExpTryAcquireSpinLockShared.c)
 *     MiEndingOffset @ 0x140324248 (MiEndingOffset.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140462F92 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140608D0C (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiEndingOffsetWithLock(_QWORD *a1)
{
  volatile signed __int32 *v2; // rbx
  unsigned __int8 CurrentIrql; // si
  unsigned __int64 v4; // rcx
  __int64 v5; // rdi
  _DWORD *SchedulerAssist; // r9
  __int64 v8; // rdx
  unsigned __int8 v9; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v11; // r8
  int v12; // eax
  bool v13; // zf
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (volatile signed __int32 *)(*a1 + 72LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v8) = 4;
    else
      v8 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v8;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v2, CurrentIrql);
  }
  else if ( !ExpTryAcquireSpinLockShared(v2) )
  {
    ExpWaitForSpinLockSharedAndAcquire(v4, CurrentIrql);
  }
  v5 = MiEndingOffset(a1);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v2, retaddr);
  }
  else
  {
    _InterlockedAnd(v2, 0xBFFFFFFF);
    _InterlockedDecrement(v2);
  }
  if ( KiIrqlFlags )
  {
    v9 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v9 <= 0xFu && CurrentIrql <= 0xFu && v9 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v11 = CurrentPrcb->SchedulerAssist;
      v12 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v13 = (v12 & v11[5]) == 0;
      v11[5] &= v12;
      if ( v13 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  return v5;
}
