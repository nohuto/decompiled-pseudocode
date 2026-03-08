/*
 * XREFs of MiRemoveUnusedSubsection @ 0x140214CC0
 * Callers:
 *     MiPrepareSegmentForDeletion @ 0x140214F04 (MiPrepareSegmentForDeletion.c)
 *     MmPurgeSection @ 0x1402836F0 (MmPurgeSection.c)
 *     MiDereferenceControlAreaPfnList @ 0x1402CFBF0 (MiDereferenceControlAreaPfnList.c)
 *     MiFlushSectionInternal @ 0x14031FA90 (MiFlushSectionInternal.c)
 *     MiReferenceActiveSubsection @ 0x1403323F0 (MiReferenceActiveSubsection.c)
 *     MiReferenceSubsection @ 0x1403327C0 (MiReferenceSubsection.c)
 * Callees:
 *     MiReduceUnusedSubsectionCount @ 0x140214D4C (MiReduceUnusedSubsectionCount.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140333520 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall MiRemoveUnusedSubsection(__int64 a1)
{
  __int64 v2; // rdi
  _QWORD *v3; // rax
  __int64 v4; // r8
  _QWORD *v5; // rdx

  v2 = *(_QWORD *)(qword_140C67048 + 8LL * (*(_WORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF));
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v2 + 1408));
  v3 = (_QWORD *)(a1 + 80);
  v4 = *(_QWORD *)(a1 + 80);
  if ( *(_QWORD *)(v4 + 8) != a1 + 80 || (v5 = *(_QWORD **)(a1 + 88), (_QWORD *)*v5 != v3) )
    __fastfail(3u);
  *v5 = v4;
  *(_QWORD *)(v4 + 8) = v5;
  *(_WORD *)(a1 + 34) &= ~8u;
  *(_QWORD *)(a1 + 88) = a1 + 80;
  *v3 = v3;
  MiReduceUnusedSubsectionCount(a1);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 1408));
}
