/*
 * XREFs of ArbFreeOrderingList @ 0x1C00A19C8
 * Callers:
 *     ArbBuildAssignmentOrdering @ 0x1C00A124C (ArbBuildAssignmentOrdering.c)
 *     ArbDeleteArbiterInstance @ 0x1C00A17E4 (ArbDeleteArbiterInstance.c)
 * Callees:
 *     <none>
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
