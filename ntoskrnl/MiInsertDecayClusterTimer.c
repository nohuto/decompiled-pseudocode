/*
 * XREFs of MiInsertDecayClusterTimer @ 0x14021450C
 * Callers:
 *     MiInsertPageInList @ 0x140318540 (MiInsertPageInList.c)
 * Callees:
 *     MiRelinkDecayClusterTimer @ 0x14021456C (MiRelinkDecayClusterTimer.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140333520 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall MiInsertDecayClusterTimer(__int64 a1)
{
  __int64 v2; // rbx

  v2 = *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C67E00);
  MiRelinkDecayClusterTimer(a1, *(unsigned int *)(v2 + 15776));
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C67E00);
}
