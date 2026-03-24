/*
 * XREFs of IopFreeReqList @ 0x140752858
 * Callers:
 *     PnpReleaseBootResourcesForFilteredRequirements @ 0x1403BEE5C (PnpReleaseBootResourcesForFilteredRequirements.c)
 *     IopResourceRequirementsListToReqList @ 0x140751044 (IopResourceRequirementsListToReqList.c)
 *     PnpFreeResourceRequirementsForAssignTable @ 0x140752800 (PnpFreeResourceRequirementsForAssignTable.c)
 *     IopAllocateBootResourcesInternal @ 0x1407B6290 (IopAllocateBootResourcesInternal.c)
 *     IopQueryConflictListInternal @ 0x1408B993C (IopQueryConflictListInternal.c)
 * Callees:
 *     IopFreeReqAlternative @ 0x1407528B0 (IopFreeReqAlternative.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
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
