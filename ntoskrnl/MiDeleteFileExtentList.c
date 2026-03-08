/*
 * XREFs of MiDeleteFileExtentList @ 0x140A31150
 * Callers:
 *     MiDeleteSegmentPages @ 0x14034BEB8 (MiDeleteSegmentPages.c)
 *     MiEnableImageDirectMap @ 0x14063A850 (MiEnableImageDirectMap.c)
 *     MiDeleteFileExtents @ 0x1406A7130 (MiDeleteFileExtents.c)
 *     MiCreateImageFileMap @ 0x1407F1C28 (MiCreateImageFileMap.c)
 *     MiAllocateFileExtents @ 0x140A303A8 (MiAllocateFileExtents.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140333B40 (RtlAvlRemoveNode.c)
 *     MiGetExtentTable @ 0x14063B540 (MiGetExtentTable.c)
 *     MiLockFileExtentsExclusive @ 0x140A31480 (MiLockFileExtentsExclusive.c)
 *     MiUnlockFileExtentsExclusive @ 0x140A314E4 (MiUnlockFileExtentsExclusive.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteFileExtentList(_DWORD *P)
{
  __int64 v2; // rbx
  unsigned __int64 *i; // rsi
  unsigned __int64 *v4; // rdx

  MiLockFileExtentsExclusive();
  v2 = 0LL;
  for ( i = (unsigned __int64 *)MiGetExtentTable(P[1]); (unsigned int)v2 < *P; v2 = (unsigned int)(v2 + 1) )
  {
    v4 = (unsigned __int64 *)&P[12 * v2 + 2];
    if ( v4[4] != 0x8000000000000000uLL )
      RtlAvlRemoveNode(i, v4);
  }
  MiUnlockFileExtentsExclusive();
  ExFreePoolWithTag(P, 0);
}
