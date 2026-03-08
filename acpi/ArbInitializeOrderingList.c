/*
 * XREFs of ArbInitializeOrderingList @ 0x1C00A1F40
 * Callers:
 *     ArbBuildAssignmentOrdering @ 0x1C00A124C (ArbBuildAssignmentOrdering.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ArbInitializeOrderingList(__int64 a1)
{
  __int64 Pool2; // rax

  Pool2 = ExAllocatePool2(256LL, 256LL, 1281520193LL);
  *(_QWORD *)(a1 + 8) = Pool2;
  *(_WORD *)a1 = 0;
  if ( Pool2 )
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
