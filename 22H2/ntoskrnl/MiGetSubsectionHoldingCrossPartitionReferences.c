/*
 * XREFs of MiGetSubsectionHoldingCrossPartitionReferences @ 0x14025BF44
 * Callers:
 *     MiGetSubsectionCrossPartitionReferences @ 0x14025BF24 (MiGetSubsectionCrossPartitionReferences.c)
 *     MiDecrementSubsectionViewCount @ 0x1402957F0 (MiDecrementSubsectionViewCount.c)
 *     MiIncrementSubsectionViewCount @ 0x140296460 (MiIncrementSubsectionViewCount.c)
 *     MiUpdateLastSubsectionSize @ 0x1402F9A78 (MiUpdateLastSubsectionSize.c)
 *     MiUpdateControlAreaCommitCount @ 0x14030F5E0 (MiUpdateControlAreaCommitCount.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetSubsectionHoldingCrossPartitionReferences(__int64 a1)
{
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 56LL) & 0xA0) != 0x80 )
    return *(_QWORD *)a1 + 128LL;
  return a1;
}
