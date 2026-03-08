/*
 * XREFs of ArbFreeOrderingList @ 0x14081ED88
 * Callers:
 *     ArbBuildAssignmentOrdering @ 0x14081E6C8 (ArbBuildAssignmentOrdering.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall ArbFreeOrderingList(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 8);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
}
