/*
 * XREFs of MiIsVadLarge @ 0x1402988E4
 * Callers:
 *     MiInPagePageTable @ 0x14028C440 (MiInPagePageTable.c)
 *     MiVadCommitCrossPartition @ 0x1402988BC (MiVadCommitCrossPartition.c)
 *     MiRemoveVadCharges @ 0x14063A910 (MiRemoveVadCharges.c)
 *     MiProcessVaRangesInfoClass @ 0x1406FAC44 (MiProcessVaRangesInfoClass.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsVadLarge(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 48);
  if ( (v1 & 0x100000) != 0 )
  {
    if ( (v1 & 0x400000) == 0 && (v1 & 0xC0000u) < 0x80000 )
      return 0LL;
  }
  else if ( (*(_DWORD *)(a1 + 64) & 0x1000000) == 0 )
  {
    return 0LL;
  }
  return 1LL;
}
