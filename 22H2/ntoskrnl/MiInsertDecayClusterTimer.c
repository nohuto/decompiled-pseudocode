/*
 * XREFs of MiInsertDecayClusterTimer @ 0x14021A95C
 * Callers:
 *     MiInsertPageInList @ 0x14026EAE0 (MiInsertPageInList.c)
 * Callees:
 *     MiRelinkDecayClusterTimer @ 0x14021A9BC (MiRelinkDecayClusterTimer.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402893A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028A810 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall MiInsertDecayClusterTimer(__int64 a1)
{
  __int64 v2; // rbx

  v2 = *(_QWORD *)(qword_140C674C8 + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C68280);
  MiRelinkDecayClusterTimer(a1, *(unsigned int *)(v2 + 15776));
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C68280);
}
