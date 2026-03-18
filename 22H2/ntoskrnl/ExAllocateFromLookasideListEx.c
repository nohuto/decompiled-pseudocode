/*
 * XREFs of ExAllocateFromLookasideListEx @ 0x14022D0A0
 * Callers:
 *     CcAllocateAndZeroSharedCacheMapRaiseOnError @ 0x14040F358 (CcAllocateAndZeroSharedCacheMapRaiseOnError.c)
 *     CcAllocatePrivateCacheMap @ 0x14040F390 (CcAllocatePrivateCacheMap.c)
 *     CmpCreateKeyControlBlock @ 0x1406D8840 (CmpCreateKeyControlBlock.c)
 *     CmpBounceContextStart @ 0x1406DC3D0 (CmpBounceContextStart.c)
 *     NtQueryValueKey @ 0x1406E2F20 (NtQueryValueKey.c)
 *     VmAccessFault @ 0x1409DC0A0 (VmAccessFault.c)
 *     CmpAllocateKeyControlBlock @ 0x140A17A38 (CmpAllocateKeyControlBlock.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x1404287F0 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

PVOID __stdcall ExAllocateFromLookasideListEx(PLOOKASIDE_LIST_EX Lookaside)
{
  PVOID result; // rax

  ++Lookaside->L.TotalAllocates;
  result = RtlpInterlockedPopEntrySList(&Lookaside->L.ListHead);
  if ( !result )
  {
    ++Lookaside->L.AllocateMisses;
    return Lookaside->L.AllocateEx((unsigned int)Lookaside->L.Type, Lookaside->L.Size, Lookaside->L.Tag, Lookaside);
  }
  return result;
}
