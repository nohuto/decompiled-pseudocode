/*
 * XREFs of ExAllocateFromLookasideListEx @ 0x14030DE20
 * Callers:
 *     CcAllocateAndZeroSharedCacheMapRaiseOnError @ 0x140409D5C (CcAllocateAndZeroSharedCacheMapRaiseOnError.c)
 *     CcAllocatePrivateCacheMap @ 0x140409D94 (CcAllocatePrivateCacheMap.c)
 *     NtQueryValueKey @ 0x1406E6C50 (NtQueryValueKey.c)
 *     CmpBounceContextStart @ 0x1407AC9C0 (CmpBounceContextStart.c)
 *     CmpCreateKeyControlBlock @ 0x1407AFAA0 (CmpCreateKeyControlBlock.c)
 *     VmAccessFault @ 0x1409D9200 (VmAccessFault.c)
 *     CmpAllocateKeyControlBlock @ 0x140A14CE8 (CmpAllocateKeyControlBlock.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140420460 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
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
