/*
 * XREFs of MiGetSubsectionHoldingCrossPartitionReferences @ 0x140368520
 * Callers:
 *     MiUpdateLastSubsectionSize @ 0x1402A4BE0 (MiUpdateLastSubsectionSize.c)
 *     MiIncrementSubsectionViewCount @ 0x140332840 (MiIncrementSubsectionViewCount.c)
 *     MiDecrementSubsectionViewCount @ 0x140334C10 (MiDecrementSubsectionViewCount.c)
 *     MiGetSubsectionCrossPartitionReferences @ 0x140368500 (MiGetSubsectionCrossPartitionReferences.c)
 *     MiUpdateControlAreaCommitCount @ 0x140368568 (MiUpdateControlAreaCommitCount.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetSubsectionHoldingCrossPartitionReferences(__int64 a1)
{
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 56LL) & 0xA0) != 0x80 )
    return *(_QWORD *)a1 + 128LL;
  return a1;
}
