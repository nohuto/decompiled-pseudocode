/*
 * XREFs of PnpFreeResourceRequirementsForAssignTable @ 0x140803C30
 * Callers:
 *     PnpAllocateResources @ 0x1406F5CE0 (PnpAllocateResources.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x1406F6080 (PnpGetResourceRequirementsForAssignTable.c)
 *     PnpReallocateResources @ 0x14096A5D8 (PnpReallocateResources.c)
 *     PnpRestoreResourcesInternal @ 0x14096A7C4 (PnpRestoreResourcesInternal.c)
 *     PnpRebalance @ 0x14096B948 (PnpRebalance.c)
 * Callees:
 *     IopFreeReqList @ 0x140806108 (IopFreeReqList.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PnpFreeResourceRequirementsForAssignTable(unsigned __int64 a1, unsigned __int64 a2)
{
  PVOID *v2; // rdi
  unsigned __int64 v3; // rbx
  void *v4; // rcx

  if ( a1 < a2 )
  {
    v2 = (PVOID *)(a1 + 32);
    v3 = ((a2 - a1 - 1) >> 6) + 1;
    do
    {
      IopFreeReqList(*v2);
      *v2 = 0LL;
      if ( (*(_DWORD *)(v2 - 3) & 0x200) != 0 )
      {
        v4 = *(v2 - 1);
        if ( v4 )
        {
          ExFreePoolWithTag(v4, 0);
          *(v2 - 1) = 0LL;
        }
      }
      v2 += 8;
      --v3;
    }
    while ( v3 );
  }
}
