/*
 * XREFs of MiMirrorBlackPhase @ 0x140626C54
 * Callers:
 *     MmDuplicateMemory @ 0x140AAC90C (MmDuplicateMemory.c)
 * Callees:
 *     MiMirrorPerformBlackWrites @ 0x140627464 (MiMirrorPerformBlackWrites.c)
 *     MiMirrorReduceBlackToActiveAndPrivatePages @ 0x140627EB0 (MiMirrorReduceBlackToActiveAndPrivatePages.c)
 *     MiMirrorReduceBlackWrites @ 0x1406280D0 (MiMirrorReduceBlackWrites.c)
 *     MiIterateOverPartitions @ 0x14062947C (MiIterateOverPartitions.c)
 *     MiMirrorDiscardPageContents @ 0x14064F4A4 (MiMirrorDiscardPageContents.c)
 *     MiRemoveEnclavePagesFromMirror @ 0x140AAD6E8 (MiRemoveEnclavePagesFromMirror.c)
 */

__int64 __fastcall MiMirrorBlackPhase(__int64 *a1)
{
  __int64 v2; // rdi
  int v3; // eax
  int v4; // eax

  v2 = *a1;
  if ( qword_140C69988 )
    MiRemoveEnclavePagesFromMirror(*a1);
  v3 = *((_DWORD *)a1 + 2);
  if ( (v3 & 0x40D) != 0 )
  {
    if ( (v3 & 0x100) != 0 )
      MiIterateOverPartitions(MiMirrorRemoveBlackChildPartitionPages, a1);
    v4 = *((_DWORD *)a1 + 2);
    if ( (v4 & 0xC0) != 0 )
    {
      MiMirrorReduceBlackToActiveAndPrivatePages(a1);
    }
    else if ( (v4 & 0x100) != 0 )
    {
      MiMirrorReduceBlackWrites(MiSystemPartition, a1);
    }
    else
    {
      MiIterateOverPartitions(MiMirrorReduceBlackWrites, a1);
    }
    MiMirrorDiscardPageContents();
  }
  return MiMirrorPerformBlackWrites(v2);
}
