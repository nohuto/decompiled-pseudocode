/*
 * XREFs of MiRemoveDecayClusterTimer @ 0x1402D6C5C
 * Callers:
 *     MiUnlinkPageFromListEx @ 0x140264100 (MiUnlinkPageFromListEx.c)
 *     MiDecayNodeNowEmpty @ 0x1402D6BC0 (MiDecayNodeNowEmpty.c)
 * Callees:
 *     MiUnlinkDecayClusterTimer @ 0x1402D6CAC (MiUnlinkDecayClusterTimer.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140333520 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall MiRemoveDecayClusterTimer(__int64 a1)
{
  __int64 v2; // rax

  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C67E00);
  v2 = *(_QWORD *)(a1 + 8);
  if ( (v2 & 0x100000000LL) == 0 )
  {
    *(_QWORD *)(a1 + 8) = v2 | 0x100000000LL;
    MiUnlinkDecayClusterTimer(a1);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C67E00);
}
