/*
 * XREFs of MiRemoveDecayClusterTimer @ 0x14028BB90
 * Callers:
 *     MiUnlinkPageFromListEx @ 0x140266510 (MiUnlinkPageFromListEx.c)
 *     MiDecayNodeNowEmpty @ 0x14034A440 (MiDecayNodeNowEmpty.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402893A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028A810 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlinkDecayClusterTimer @ 0x1403476B0 (MiUnlinkDecayClusterTimer.c)
 */

void __fastcall MiRemoveDecayClusterTimer(__int64 a1)
{
  __int64 v2; // rax

  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C68280);
  v2 = *(_QWORD *)(a1 + 8);
  if ( (v2 & 0x100000000LL) == 0 )
  {
    *(_QWORD *)(a1 + 8) = v2 | 0x100000000LL;
    MiUnlinkDecayClusterTimer(a1);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C68280);
}
