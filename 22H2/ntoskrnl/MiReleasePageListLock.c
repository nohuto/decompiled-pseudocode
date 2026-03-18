/*
 * XREFs of MiReleasePageListLock @ 0x1402DDAD0
 * Callers:
 *     MiAcquirePageListLock @ 0x140267280 (MiAcquirePageListLock.c)
 *     MiSynchronizeFastPageInsert @ 0x14026DDF0 (MiSynchronizeFastPageInsert.c)
 *     MiInsertPagesInList @ 0x1402DD520 (MiInsertPagesInList.c)
 *     MiReplaceTransitionPage @ 0x1403304D0 (MiReplaceTransitionPage.c)
 *     MiUpdatePageAttributeStamp @ 0x140334AD8 (MiUpdatePageAttributeStamp.c)
 *     MiDecayPfnFullyInitialized @ 0x14033EBB4 (MiDecayPfnFullyInitialized.c)
 *     MiUnlinkStandbyPage @ 0x14046CD9A (MiUnlinkStandbyPage.c)
 *     MiUnlinkPageFromBadList @ 0x14064E034 (MiUnlinkPageFromBadList.c)
 *     MiLockPageListAndFirstPage @ 0x140650C44 (MiLockPageListAndFirstPage.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x1406518C4 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiRepointPteAtExtendedStandby @ 0x140651C3C (MiRepointPteAtExtendedStandby.c)
 *     MiGetSlabStandbyPage @ 0x140656ECC (MiGetSlabStandbyPage.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402893A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14060B15C (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
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
