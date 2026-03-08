/*
 * XREFs of MiReleasePageListLock @ 0x140288360
 * Callers:
 *     MiAcquirePageListLock @ 0x140264E70 (MiAcquirePageListLock.c)
 *     MiInsertPagesInList @ 0x140287DB0 (MiInsertPagesInList.c)
 *     MiReplaceTransitionPage @ 0x1402C6784 (MiReplaceTransitionPage.c)
 *     MiDecayPfnFullyInitialized @ 0x1402D6FA4 (MiDecayPfnFullyInitialized.c)
 *     MiSynchronizeFastPageInsert @ 0x140319210 (MiSynchronizeFastPageInsert.c)
 *     MiUpdatePageAttributeStamp @ 0x14036A854 (MiUpdatePageAttributeStamp.c)
 *     MiUnlinkStandbyPage @ 0x140464E9A (MiUnlinkStandbyPage.c)
 *     MiUnlinkPageFromBadList @ 0x14064BA18 (MiUnlinkPageFromBadList.c)
 *     MiLockPageListAndFirstPage @ 0x14064E5E4 (MiLockPageListAndFirstPage.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x14064F264 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiRepointPteAtExtendedStandby @ 0x14064F5DC (MiRepointPteAtExtendedStandby.c)
 *     MiGetSlabStandbyPage @ 0x14065488C (MiGetSlabStandbyPage.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140608D0C (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

void __fastcall MiReleasePageListLock(__int64 a1, __int64 a2)
{
  volatile signed __int32 *v2; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_BYTE *)a2 )
  {
    if ( *(_BYTE *)(a2 + 24) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(a2 + 16) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
      *(_BYTE *)(a2 + 24) = 0;
    }
    if ( *(_BYTE *)(a2 + 48) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(a2 + 40) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
      *(_BYTE *)(a2 + 48) = 0;
    }
    if ( *(_BYTE *)(a2 + 72) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(a2 + 64) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
      *(_BYTE *)(a2 + 72) = 0;
    }
    if ( *(_BYTE *)(a2 + 96) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(a2 + 88) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
      *(_BYTE *)(a2 + 96) = 0;
    }
    v2 = (volatile signed __int32 *)(a1 + 32);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v2, retaddr);
    }
    else
    {
      _InterlockedAnd(v2, 0xBFFFFFFF);
      _InterlockedDecrement(v2);
    }
  }
  else
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 32));
  }
}
