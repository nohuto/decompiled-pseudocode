/*
 * XREFs of PnpFreeResourceRequirementsForAssignTable @ 0x140752800
 * Callers:
 *     PnpAllocateResources @ 0x14074F4D8 (PnpAllocateResources.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x14074F8BC (PnpGetResourceRequirementsForAssignTable.c)
 *     PnpReallocateResources @ 0x1408B31B0 (PnpReallocateResources.c)
 *     PnpRestoreResourcesInternal @ 0x1408B3398 (PnpRestoreResourcesInternal.c)
 *     PnpRebalance @ 0x1408B87F4 (PnpRebalance.c)
 * Callees:
 *     IopFreeReqList @ 0x140752858 (IopFreeReqList.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
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
