/*
 * XREFs of MiHugeRangeFreeToZero @ 0x140620CF4
 * Callers:
 *     MiZeroPage @ 0x1402D09F0 (MiZeroPage.c)
 * Callees:
 *     MiSearchNumaNodeTable @ 0x14026E9B0 (MiSearchNumaNodeTable.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402893A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028A810 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiInsertHugeRangeInList @ 0x14062103C (MiInsertHugeRangeInList.c)
 *     MiUnlinkHugeRange @ 0x140622B2C (MiUnlinkHugeRange.c)
 */

void __fastcall MiHugeRangeFreeToZero(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  _QWORD *v5; // rsi
  __int64 v6; // rdi

  v4 = a2 & 0x3FFFFF;
  v5 = (_QWORD *)(qword_140C67EF0 + 8 * v4);
  v6 = *(_QWORD *)(a1 + 16) + 25408LL * *((unsigned int *)MiSearchNumaNodeTable(v4 << 18) + 2);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v6 + 23104));
  *v5 &= ~0x800000000000000uLL;
  MiUnlinkHugeRange(a1, a2);
  MiInsertHugeRangeInList(0LL, a2, 3LL);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v6 + 23104));
}
