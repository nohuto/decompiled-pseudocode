/*
 * XREFs of ExFreeToLookasideListEx @ 0x1402C0A60
 * Callers:
 *     CcFreePrivateCacheMapIgnoreNull @ 0x140409DB0 (CcFreePrivateCacheMapIgnoreNull.c)
 *     CcFreeSharedCacheMapIgnoreNull @ 0x140409DD4 (CcFreeSharedCacheMapIgnoreNull.c)
 *     NtQueryKey @ 0x1406E6630 (NtQueryKey.c)
 *     NtQueryValueKey @ 0x1406E6C50 (NtQueryValueKey.c)
 *     CmpFreeKeyControlBlock @ 0x14074C060 (CmpFreeKeyControlBlock.c)
 *     CmpBounceContextCleanup @ 0x1407ACEB8 (CmpBounceContextCleanup.c)
 *     VmAccessFault @ 0x1409D9200 (VmAccessFault.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1404204A0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

void __stdcall ExFreeToLookasideListEx(PLOOKASIDE_LIST_EX Lookaside, PVOID Entry)
{
  ++Lookaside->L.TotalFrees;
  if ( LOWORD(Lookaside->L.ListHead.Alignment) >= Lookaside->L.Depth )
  {
    ++Lookaside->L.FreeMisses;
    Lookaside->L.FreeEx(Entry, Lookaside);
  }
  else
  {
    RtlpInterlockedPushEntrySList(&Lookaside->L.ListHead, (PSLIST_ENTRY)Entry);
  }
}
