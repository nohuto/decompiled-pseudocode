/*
 * XREFs of ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14060B15C
 * Callers:
 *     MiLocateCombineBlock @ 0x140215B40 (MiLocateCombineBlock.c)
 *     MiZeroFault @ 0x140232300 (MiZeroFault.c)
 *     MiUserFault @ 0x140235870 (MiUserFault.c)
 *     MiGetSlabPage @ 0x14023BD50 (MiGetSlabPage.c)
 *     MiUnlockWorkingSetShared @ 0x14023C4E0 (MiUnlockWorkingSetShared.c)
 *     MiLockPagableImageSection @ 0x14025A6C0 (MiLockPagableImageSection.c)
 *     MiEmptyDecayClusterTimers @ 0x14025AE00 (MiEmptyDecayClusterTimers.c)
 *     MiUnlinkPageFromListEx @ 0x140266510 (MiUnlinkPageFromListEx.c)
 *     MiAddWorkingSetEntries @ 0x14026BC00 (MiAddWorkingSetEntries.c)
 *     MiInsertPageInList @ 0x14026EAE0 (MiInsertPageInList.c)
 *     MiSetVaAgeList @ 0x1402708C0 (MiSetVaAgeList.c)
 *     MiQueryAddressSpan @ 0x140273C40 (MiQueryAddressSpan.c)
 *     MiEndingOffsetWithLock @ 0x140279D30 (MiEndingOffsetWithLock.c)
 *     MiRemoveWsle @ 0x14027B330 (MiRemoveWsle.c)
 *     MiGetControlAreaPtes @ 0x1402884F0 (MiGetControlAreaPtes.c)
 *     MiLocateSubsectionNode @ 0x1402891A0 (MiLocateSubsectionNode.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402A7AE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D3670 (MiInsertPageInFreeOrZeroedList.c)
 *     MiReleasePageListLock @ 0x1402DDAD0 (MiReleasePageListLock.c)
 *     ExpRemoveTagForBigPages @ 0x140323630 (ExpRemoveTagForBigPages.c)
 *     ExpAddTagForBigPages @ 0x140331990 (ExpAddTagForBigPages.c)
 *     ExReleaseSpinLockShared @ 0x1403373A0 (ExReleaseSpinLockShared.c)
 * Callees:
 *     PerfLogSpinLockRelease @ 0x140600DE8 (PerfLogSpinLockRelease.c)
 */

__int64 __fastcall ExpReleaseSpinLockSharedFromDpcLevelInstrumented(volatile signed __int32 *a1, __int64 a2)
{
  _InterlockedAnd(a1, 0xBFFFFFFF);
  _InterlockedDecrement(a1);
  return PerfLogSpinLockRelease((__int64)a1, a2, __rdtsc());
}
