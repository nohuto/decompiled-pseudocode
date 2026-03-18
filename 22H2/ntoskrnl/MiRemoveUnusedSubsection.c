/*
 * XREFs of MiRemoveUnusedSubsection @ 0x14021B994
 * Callers:
 *     MiPrepareSegmentForDeletion @ 0x14021980C (MiPrepareSegmentForDeletion.c)
 *     MiFlushSectionInternal @ 0x140275630 (MiFlushSectionInternal.c)
 *     MiReferenceActiveSubsection @ 0x140288C80 (MiReferenceActiveSubsection.c)
 *     MiReferenceSubsection @ 0x140289050 (MiReferenceSubsection.c)
 *     MmPurgeSection @ 0x1402DC8D0 (MmPurgeSection.c)
 *     MiDereferenceControlAreaPfnList @ 0x1403399D0 (MiDereferenceControlAreaPfnList.c)
 * Callees:
 *     MiReduceUnusedSubsectionCount @ 0x14021BA20 (MiReduceUnusedSubsectionCount.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402893A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028A810 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall MiRemoveUnusedSubsection(__int64 a1)
{
  __int64 v2; // rdi
  _QWORD *v3; // rax
  __int64 v4; // r8
  _QWORD *v5; // rdx

  v2 = *(_QWORD *)(qword_140C674C8 + 8LL * (*(_WORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF));
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
