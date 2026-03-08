/*
 * XREFs of MiControlAreaExemptFromCrossPartitionCharges @ 0x14034C584
 * Callers:
 *     MiIncrementSubsectionViewCount @ 0x140332840 (MiIncrementSubsectionViewCount.c)
 *     MiDecrementSubsectionViewCount @ 0x140334C10 (MiDecrementSubsectionViewCount.c)
 *     MiControlAreaRequiresCharge @ 0x14034C4DC (MiControlAreaRequiresCharge.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiControlAreaExemptFromCrossPartitionCharges(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 62) & 0xC) != 0 )
    return 1LL;
  if ( *(_QWORD *)(a1 + 64) )
    return 0LL;
  return *(_WORD *)(a1 + 94) & 1;
}
