/*
 * XREFs of MiHugeRangeFreeToZero @ 0x14061E83C
 * Callers:
 *     MiZeroPage @ 0x140275060 (MiZeroPage.c)
 * Callees:
 *     MiSearchNumaNodeTable @ 0x140319DD0 (MiSearchNumaNodeTable.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140333520 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiInsertHugeRangeInList @ 0x14061EB84 (MiInsertHugeRangeInList.c)
 *     MiUnlinkHugeRange @ 0x140620680 (MiUnlinkHugeRange.c)
 */

void __fastcall MiHugeRangeFreeToZero(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  _QWORD *v5; // rsi
  __int64 v6; // rdi

  v4 = a2 & 0x3FFFFF;
  v5 = (_QWORD *)(qword_140C67A70 + 8 * v4);
  v6 = *(_QWORD *)(a1 + 16) + 25408LL * *((unsigned int *)MiSearchNumaNodeTable(v4 << 18) + 2);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v6 + 23104));
  *v5 &= ~0x800000000000000uLL;
  MiUnlinkHugeRange(a1, a2);
  MiInsertHugeRangeInList(0LL, a2, 3LL);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v6 + 23104));
}
