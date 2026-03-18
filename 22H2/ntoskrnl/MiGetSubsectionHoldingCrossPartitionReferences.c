/*
 * XREFs of MiGetSubsectionHoldingCrossPartitionReferences @ 0x1402ED410
 * Callers:
 *     MiIncrementSubsectionViewCount @ 0x1402890D0 (MiIncrementSubsectionViewCount.c)
 *     MiDecrementSubsectionViewCount @ 0x14029F9B0 (MiDecrementSubsectionViewCount.c)
 *     MiUpdateControlAreaCommitCount @ 0x1402EBFC8 (MiUpdateControlAreaCommitCount.c)
 *     MiGetSubsectionCrossPartitionReferences @ 0x1402ED3F0 (MiGetSubsectionCrossPartitionReferences.c)
 *     MiUpdateLastSubsectionSize @ 0x140365844 (MiUpdateLastSubsectionSize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetSubsectionHoldingCrossPartitionReferences(__int64 a1)
{
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 56LL) & 0xA0) != 0x80 )
    return *(_QWORD *)a1 + 128LL;
  return a1;
}
