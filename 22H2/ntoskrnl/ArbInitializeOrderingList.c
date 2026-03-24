/*
 * XREFs of ArbInitializeOrderingList @ 0x1407A302C
 * Callers:
 *     ArbBuildAssignmentOrdering @ 0x1407A29A8 (ArbBuildAssignmentOrdering.c)
 * Callees:
 *     memset @ 0x140413800 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ArbInitializeOrderingList(__int64 a1)
{
  PVOID PoolWithTag; // rax

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x100uLL, 0x4C627241u);
  *(_QWORD *)(a1 + 8) = PoolWithTag;
  memset(PoolWithTag, 0, 0x100uLL);
  *(_WORD *)a1 = 0;
  if ( *(_QWORD *)(a1 + 8) )
  {
    *(_WORD *)(a1 + 2) = 16;
    return 0LL;
  }
  else
  {
    *(_WORD *)(a1 + 2) = 0;
    return 3221225626LL;
  }
}
