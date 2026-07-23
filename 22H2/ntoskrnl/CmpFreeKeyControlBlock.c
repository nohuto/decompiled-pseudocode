/*
 * XREFs of CmpFreeKeyControlBlock @ 0x14066D340
 * Callers:
 *     CmpCreateKeyControlBlock @ 0x1405EF650 (CmpCreateKeyControlBlock.c)
 *     CmpUnlockTwoKcbs @ 0x1405F3950 (CmpUnlockTwoKcbs.c)
 *     CmEnumerateValueKey @ 0x1405F4EF0 (CmEnumerateValueKey.c)
 *     CmpWalkOneLevel @ 0x1405F63C0 (CmpWalkOneLevel.c)
 *     CmQueryValueKey @ 0x1405F7700 (CmQueryValueKey.c)
 *     CmpUnlockKcb @ 0x140640260 (CmpUnlockKcb.c)
 *     CmpPerformSingleKcbCacheLookup @ 0x1406405D0 (CmpPerformSingleKcbCacheLookup.c)
 *     CmpUnlockKcbStack @ 0x140648B60 (CmpUnlockKcbStack.c)
 *     CmpDereferenceKeyControlBlock @ 0x140648D30 (CmpDereferenceKeyControlBlock.c)
 *     CmpCleanUpKCBCacheTable @ 0x14066D23C (CmpCleanUpKCBCacheTable.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1406778F0 (CmpDereferenceKeyControlBlockWithLock.c)
 *     DelistKeyBodyFromKCB @ 0x1406E0720 (DelistKeyBodyFromKCB.c)
 *     CmpCloneToUnbackedKcb @ 0x14086EB2C (CmpCloneToUnbackedKcb.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x14086F224 (CmpSearchKeyControlBlockTreeEx.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x140206F68 (CmpFreeTransientPoolWithTag.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x140406FF0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

PSLIST_ENTRY __fastcall CmpFreeKeyControlBlock(ULONG_PTR BugCheckParameter2)
{
  void *v2; // rcx
  unsigned __int64 v3; // rcx
  PSLIST_ENTRY result; // rax

  _InterlockedDecrement64(&CmPerfCounters);
  if ( *(_QWORD *)(BugCheckParameter2 + 120) != BugCheckParameter2 + 120 )
    KeBugCheckEx(0x51u, 0x11uLL, BugCheckParameter2, 0LL, 0LL);
  if ( (*(_DWORD *)(BugCheckParameter2 + 8) & 0x10000) != 0 )
    KeBugCheckEx(0x51u, 0x11uLL, BugCheckParameter2, 1uLL, 0LL);
  v2 = *(void **)(BugCheckParameter2 + 200);
  if ( (unsigned __int64)v2 >= 2 )
    ExFreePoolWithTag(v2, 0x624E4D43u);
  v3 = *(_QWORD *)(BugCheckParameter2 + 296);
  if ( (v3 & 1) != 0 )
    v3 &= ~1uLL;
  if ( v3 )
    CmpFreeTransientPoolWithTag((void *)v3, 0x624E4D43u);
  *(_DWORD *)(BugCheckParameter2 + 8) |= 0x10000u;
  *(_QWORD *)(BugCheckParameter2 + 32) = 0LL;
  ++dword_140CDB4DC;
  if ( LOWORD(CmpKcbLookaside.Alignment) >= (unsigned __int16)word_140CDB4D0 )
  {
    ++dword_140CDB4E0;
    result = (PSLIST_ENTRY)((__int64 (__fastcall *)(ULONG_PTR, _SLIST_HEADER *))qword_140CDB4F8)(
                             BugCheckParameter2,
                             &CmpKcbLookaside);
  }
  else
  {
    result = RtlpInterlockedPushEntrySList(&CmpKcbLookaside, (PSLIST_ENTRY)BugCheckParameter2);
  }
  _InterlockedDecrement64(qword_140D2EFA0);
  return result;
}
