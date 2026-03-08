/*
 * XREFs of IopFreeReqList @ 0x140806108
 * Callers:
 *     PnpReleaseBootResourcesForFilteredRequirements @ 0x14055F1D4 (PnpReleaseBootResourcesForFilteredRequirements.c)
 *     PnpFreeResourceRequirementsForAssignTable @ 0x140803C30 (PnpFreeResourceRequirementsForAssignTable.c)
 *     IopAllocateBootResourcesInternal @ 0x1408046F8 (IopAllocateBootResourcesInternal.c)
 *     IopResourceRequirementsListToReqList @ 0x140805448 (IopResourceRequirementsListToReqList.c)
 * Callees:
 *     IopFreeReqAlternative @ 0x140806160 (IopFreeReqAlternative.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
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
