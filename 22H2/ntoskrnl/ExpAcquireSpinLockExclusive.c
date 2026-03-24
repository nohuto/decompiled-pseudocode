/*
 * XREFs of ExpAcquireSpinLockExclusive @ 0x14021D130
 * Callers:
 *     PsImpersonateContainerOfThread @ 0x14021BC50 (PsImpersonateContainerOfThread.c)
 *     MiDeleteVad @ 0x14021BFB0 (MiDeleteVad.c)
 *     ExInitializeResourceLite @ 0x14021CC10 (ExInitializeResourceLite.c)
 *     PspRevertContainerImpersonation @ 0x14021FAA0 (PspRevertContainerImpersonation.c)
 *     MiReferencePageRuns @ 0x14022F500 (MiReferencePageRuns.c)
 *     RtlpHpSegPageRangeAllocate @ 0x14028A070 (RtlpHpSegPageRangeAllocate.c)
 *     MiAddViewsForSection @ 0x140295C70 (MiAddViewsForSection.c)
 *     MiInsertVad @ 0x1402969B0 (MiInsertVad.c)
 *     MiFinishVadDeletion @ 0x140297440 (MiFinishVadDeletion.c)
 *     MiGetVadWakeList @ 0x1402986A0 (MiGetVadWakeList.c)
 *     RtlpHpVsChunkSplit @ 0x1402BF820 (RtlpHpVsChunkSplit.c)
 *     MiDereferenceControlAreaPfnList @ 0x1402F4E60 (MiDereferenceControlAreaPfnList.c)
 *     MmDoesFileHaveUserWritableReferences @ 0x1402F7C00 (MmDoesFileHaveUserWritableReferences.c)
 *     MiZeroLargePageThread @ 0x1403AEB30 (MiZeroLargePageThread.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B5AE8 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140230F30 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     HvlNotifyLongSpinWait @ 0x14038FA40 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140390820 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExpAcquireSpinLockExclusive(volatile signed __int32 *a1, unsigned __int8 a2, __int64 a3, __int64 a4)
{
  struct _KPRCB *CurrentPrcb; // rsi
  unsigned int v6; // ebx
  _DWORD *SchedulerAssist; // rcx
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  _DWORD *v12; // rcx
  bool v13; // zf
  unsigned __int32 v14; // eax
  int v15; // eax
  int v16; // eax
  __int64 v17; // [rsp+20h] [rbp-8h]

  CurrentPrcb = KeGetCurrentPrcb();
  v6 = 0;
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v15 = SchedulerAssist[6];
      SchedulerAssist[6] = v15 + 1;
      if ( v15 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( _interlockedbittestandset(a1, 0x1Fu) )
  {
    v12 = CurrentPrcb->SchedulerAssist;
    if ( v12 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v16 = v12[6] - 1;
        v12[6] = v16;
        if ( !v16 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    v6 = ExpWaitForSpinLockExclusiveAndAcquire(a1, a2);
  }
  v9 = *(unsigned int *)a1;
  v10 = v9 & 0xFFFFFFFFBFFFFFFFuLL;
  while ( (v9 & 0xBFFFFFFF) != 0x80000000 )
  {
    if ( (v9 & 0x40000000) == 0 )
    {
      v10 = (unsigned int)v9;
      LODWORD(v10) = v9 | 0x40000000;
      v14 = _InterlockedCompareExchange(a1, v9 | 0x40000000, v9);
      v13 = (_DWORD)v9 == v14;
      v9 = v14;
      if ( !v13 )
        continue;
    }
    if ( (++v6 & HvlLongSpinCountMask) == 0
      && (HvlEnlightenments & 0x40) != 0
      && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v10, v9, a3, a4, v17) )
    {
      HvlNotifyLongSpinWait(v6);
    }
    else
    {
      _mm_pause();
    }
    v9 = *(unsigned int *)a1;
  }
  return v6;
}
