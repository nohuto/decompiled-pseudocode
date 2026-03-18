/*
 * XREFs of MiDeleteFileExtentList @ 0x140A33E80
 * Callers:
 *     MiDeleteSegmentPages @ 0x140219690 (MiDeleteSegmentPages.c)
 *     MiEnableImageDirectMap @ 0x14063CCC0 (MiEnableImageDirectMap.c)
 *     MiCreateImageFileMap @ 0x1406A8928 (MiCreateImageFileMap.c)
 *     MiDeleteFileExtents @ 0x1406B0AB0 (MiDeleteFileExtents.c)
 *     MiAllocateFileExtents @ 0x140A330D8 (MiAllocateFileExtents.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x14028AE30 (RtlAvlRemoveNode.c)
 *     MiGetExtentTable @ 0x14063D9B0 (MiGetExtentTable.c)
 *     MiLockFileExtentsExclusive @ 0x140A341B0 (MiLockFileExtentsExclusive.c)
 *     MiUnlockFileExtentsExclusive @ 0x140A34214 (MiUnlockFileExtentsExclusive.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
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
