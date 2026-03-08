/*
 * XREFs of ExpWaitForSpinLockExclusiveAndAcquire @ 0x140350400
 * Callers:
 *     ExpAcquireSpinLockExclusive @ 0x140224E80 (ExpAcquireSpinLockExclusive.c)
 *     RtlpHpSegPageRangeAllocate @ 0x1402493A0 (RtlpHpSegPageRangeAllocate.c)
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     RtlpHpSegPageRangeShrink @ 0x14024DB00 (RtlpHpSegPageRangeShrink.c)
 *     MiIdentifyPfn @ 0x14025E5D0 (MiIdentifyPfn.c)
 *     MiMakePageAvoidRead @ 0x140272670 (MiMakePageAvoidRead.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140276500 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140277CE0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiPfPutPagesInTransition @ 0x140288890 (MiPfPutPagesInTransition.c)
 *     MiGetVadWakeList @ 0x140289A20 (MiGetVadWakeList.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x1402CB850 (RtlpHpVsSubsegmentCommitPages.c)
 *     ExInitializeResourceLite @ 0x14030FAB0 (ExInitializeResourceLite.c)
 *     MiInsertLargePageInNodeList @ 0x14031C970 (MiInsertLargePageInNodeList.c)
 *     MiAgePte @ 0x1403260A0 (MiAgePte.c)
 *     MiLogPageAccess @ 0x140326EF0 (MiLogPageAccess.c)
 *     MmDoesFileHaveUserWritableReferences @ 0x140330F30 (MmDoesFileHaveUserWritableReferences.c)
 *     MiAddViewsForSection @ 0x140331DC0 (MiAddViewsForSection.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140333520 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExDeleteResourceLite @ 0x140336580 (ExDeleteResourceLite.c)
 *     MiGetLargePage @ 0x14034EF30 (MiGetLargePage.c)
 *     MiLockFreeLargePageLists @ 0x14034F4A0 (MiLockFreeLargePageLists.c)
 *     RtlpHpAcquireQueuedLockExclusive @ 0x140350330 (RtlpHpAcquireQueuedLockExclusive.c)
 * Callees:
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1403C8140 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     HvlNotifyLongSpinWait @ 0x1403C8170 (HvlNotifyLongSpinWait.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExpWaitForSpinLockExclusiveAndAcquire(int *CurrentIrql, unsigned __int8 a2)
{
  unsigned int v2; // edi
  int *v4; // rsi
  int i; // eax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v9; // eax
  bool v10; // zf
  _DWORD *v11; // r9
  __int64 v12; // rdx

  v2 = 0;
  v4 = CurrentIrql;
  do
  {
    _m_prefetchw(v4);
    for ( i = *v4; *v4 < 0; i = *v4 )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedOr(v4, 0x40000000u);
      if ( a2 != 0xFF )
      {
        if ( KiIrqlFlags )
        {
          CurrentIrql = (int *)KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0
            && (unsigned __int8)CurrentIrql <= 0xFu
            && a2 <= 0xFu
            && (unsigned __int8)CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            CurrentIrql = (int *)((unsigned int)a2 + 1);
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v9 = ~(unsigned __int16)(-1LL << (a2 + 1));
            v10 = (v9 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v9;
            if ( v10 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        __writecr8(a2);
      }
      if ( (++v2 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(CurrentIrql) )
      {
        HvlNotifyLongSpinWait(v2);
      }
      else
      {
        _mm_pause();
      }
      if ( a2 != 0xFF )
      {
        a2 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 && a2 <= 0xFu )
          {
            v11 = KeGetCurrentPrcb()->SchedulerAssist;
            if ( a2 == 2 )
            {
              LODWORD(v12) = 4;
            }
            else
            {
              CurrentIrql = (int *)((unsigned int)a2 + 1);
              v12 = (-1LL << (a2 + 1)) & 4;
            }
            v11[5] |= v12;
          }
        }
      }
    }
  }
  while ( _interlockedbittestandset(v4, 0x1Fu) );
  return v2;
}
