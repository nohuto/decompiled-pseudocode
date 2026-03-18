/*
 * XREFs of IopFreeReqList @ 0x14081ACA8
 * Callers:
 *     PnpReleaseBootResourcesForFilteredRequirements @ 0x140561674 (PnpReleaseBootResourcesForFilteredRequirements.c)
 *     PnpFreeResourceRequirementsForAssignTable @ 0x1408187CC (PnpFreeResourceRequirementsForAssignTable.c)
 *     IopAllocateBootResourcesInternal @ 0x140819298 (IopAllocateBootResourcesInternal.c)
 *     IopResourceRequirementsListToReqList @ 0x140819FE8 (IopResourceRequirementsListToReqList.c)
 * Callees:
 *     IopFreeReqAlternative @ 0x14081AD00 (IopFreeReqAlternative.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall IopFreeReqList(_QWORD *P)
{
  __int64 i; // rsi

  if ( P )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)P + 8); i = (unsigned int)(i + 1) )
    {
      IopFreeReqAlternative(P[i + 5]);
      P[i + 5] = 0LL;
    }
    ExFreePoolWithTag(P, 0);
  }
}
