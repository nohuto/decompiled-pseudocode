/*
 * XREFs of ExpWaitForSpinLockSharedAndAcquire @ 0x14030AD60
 * Callers:
 *     MiMakeSystemCacheRangeValid @ 0x140221870 (MiMakeSystemCacheRangeValid.c)
 *     MiSynchronizeSystemVa @ 0x1402228B0 (MiSynchronizeSystemVa.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140225810 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiLocateCombineBlock @ 0x140229F50 (MiLocateCombineBlock.c)
 *     MiGetSlabPage @ 0x14025BA50 (MiGetSlabPage.c)
 *     MiAcquirePageListLock @ 0x140264E70 (MiAcquirePageListLock.c)
 *     MiZeroFault @ 0x140266000 (MiZeroFault.c)
 *     MiUserFault @ 0x140268260 (MiUserFault.c)
 *     MiProbeAndLockPrepare @ 0x14026B160 (MiProbeAndLockPrepare.c)
 *     MiAddWorkingSetEntries @ 0x14026D700 (MiAddWorkingSetEntries.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140277CE0 (MiInsertPageInFreeOrZeroedList.c)
 *     ExpRemoveTagForBigPages @ 0x1402B6920 (ExpRemoveTagForBigPages.c)
 *     ExpAddTagForBigPages @ 0x1402C7A20 (ExpAddTagForBigPages.c)
 *     ExAcquireSpinLockShared @ 0x140308060 (ExAcquireSpinLockShared.c)
 *     MiInsertPageInList @ 0x140318540 (MiInsertPageInList.c)
 *     MiSynchronizeFastPageInsert @ 0x140319210 (MiSynchronizeFastPageInsert.c)
 *     MiSetVaAgeList @ 0x14031AB40 (MiSetVaAgeList.c)
 *     MiQueryAddressSpan @ 0x14031E2D0 (MiQueryAddressSpan.c)
 *     MiCommitExistingVad @ 0x140320D70 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x140321FC0 (MiSetProtectionOnSection.c)
 *     MiLockPageListAndLastPage @ 0x1403232E0 (MiLockPageListAndLastPage.c)
 *     MiEndingOffsetWithLock @ 0x140324190 (MiEndingOffsetWithLock.c)
 *     MiRemoveWsle @ 0x140325790 (MiRemoveWsle.c)
 *     MiLockWorkingSetShared @ 0x14032DAF0 (MiLockWorkingSetShared.c)
 *     MiGetControlAreaPtes @ 0x140331C60 (MiGetControlAreaPtes.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140462F92 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 * Callees:
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1403C8140 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     HvlNotifyLongSpinWait @ 0x1403C8170 (HvlNotifyLongSpinWait.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExpWaitForSpinLockSharedAndAcquire(unsigned __int64 CurrentIrql, unsigned __int8 a2)
{
  volatile signed __int32 *v3; // rsi
  unsigned int v4; // ebx
  signed __int32 v5; // eax
  signed __int32 v6; // edx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf
  _DWORD *v12; // r9
  __int64 v13; // rdx

  v3 = (volatile signed __int32 *)CurrentIrql;
  v4 = 0;
  _m_prefetchw((const void *)CurrentIrql);
  v5 = *(_DWORD *)CurrentIrql;
  do
  {
    if ( v5 < 0 )
    {
      do
      {
        if ( (v5 & 0x40000000) == 0 )
          _InterlockedOr(v3, 0x40000000u);
        if ( a2 != 0xFF )
        {
          if ( KiIrqlFlags )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0
              && (unsigned __int8)CurrentIrql <= 0xFu
              && a2 <= 0xFu
              && (unsigned __int8)CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              CurrentIrql = (unsigned int)a2 + 1;
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v10 = ~(unsigned __int16)(-1LL << (a2 + 1));
              v11 = (v10 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v10;
              if ( v11 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          __writecr8(a2);
        }
        if ( (++v4 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(CurrentIrql) )
        {
          HvlNotifyLongSpinWait(v4);
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
              v12 = KeGetCurrentPrcb()->SchedulerAssist;
              if ( a2 == 2 )
              {
                LODWORD(v13) = 4;
              }
              else
              {
                CurrentIrql = (unsigned int)a2 + 1;
                v13 = (-1LL << (a2 + 1)) & 4;
              }
              v12[5] |= v13;
            }
          }
        }
        v5 = *v3;
      }
      while ( *(int *)v3 < 0 );
    }
    CurrentIrql = (unsigned int)(v5 + 1);
    v6 = v5;
    LODWORD(CurrentIrql) = CurrentIrql & 0xBFFFFFFF;
    v5 = _InterlockedCompareExchange(v3, CurrentIrql, v5);
  }
  while ( v5 != v6 );
  return v4;
}
