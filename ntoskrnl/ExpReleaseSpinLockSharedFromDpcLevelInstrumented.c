/*
 * XREFs of ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140608D0C
 * Callers:
 *     MiEmptyDecayClusterTimers @ 0x140224EE0 (MiEmptyDecayClusterTimers.c)
 *     MiLockPagableImageSection @ 0x1402252E0 (MiLockPagableImageSection.c)
 *     MiLocateCombineBlock @ 0x140229F50 (MiLocateCombineBlock.c)
 *     MiGetSlabPage @ 0x14025BA50 (MiGetSlabPage.c)
 *     MiUnlockWorkingSetShared @ 0x14025C1E0 (MiUnlockWorkingSetShared.c)
 *     MiUnlinkPageFromListEx @ 0x140264100 (MiUnlinkPageFromListEx.c)
 *     MiZeroFault @ 0x140266000 (MiZeroFault.c)
 *     MiUserFault @ 0x140268260 (MiUserFault.c)
 *     MiAddWorkingSetEntries @ 0x14026D700 (MiAddWorkingSetEntries.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140277CE0 (MiInsertPageInFreeOrZeroedList.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027F8D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiReleasePageListLock @ 0x140288360 (MiReleasePageListLock.c)
 *     ExpRemoveTagForBigPages @ 0x1402B6920 (ExpRemoveTagForBigPages.c)
 *     ExpAddTagForBigPages @ 0x1402C7A20 (ExpAddTagForBigPages.c)
 *     ExReleaseSpinLockShared @ 0x1402CBAE0 (ExReleaseSpinLockShared.c)
 *     MiInsertPageInList @ 0x140318540 (MiInsertPageInList.c)
 *     MiSetVaAgeList @ 0x14031AB40 (MiSetVaAgeList.c)
 *     MiQueryAddressSpan @ 0x14031E2D0 (MiQueryAddressSpan.c)
 *     MiEndingOffsetWithLock @ 0x140324190 (MiEndingOffsetWithLock.c)
 *     MiRemoveWsle @ 0x140325790 (MiRemoveWsle.c)
 *     MiGetControlAreaPtes @ 0x140331C60 (MiGetControlAreaPtes.c)
 *     MiLocateSubsectionNode @ 0x140332910 (MiLocateSubsectionNode.c)
 * Callees:
 *     PerfLogSpinLockRelease @ 0x1405FE984 (PerfLogSpinLockRelease.c)
 */

void __fastcall ExpReleaseSpinLockSharedFromDpcLevelInstrumented(volatile signed __int32 *a1, __int64 a2)
{
  _InterlockedAnd(a1, 0xBFFFFFFF);
  _InterlockedDecrement(a1);
  PerfLogSpinLockRelease((__int64)a1, a2, __rdtsc());
}
