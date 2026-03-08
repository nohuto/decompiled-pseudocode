/*
 * XREFs of CmpFreeKeyControlBlock @ 0x14074C060
 * Callers:
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1406B7100 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpDoParseKey @ 0x1406E1D90 (CmpDoParseKey.c)
 *     CmpDeleteKeyObject @ 0x1406E5C50 (CmpDeleteKeyObject.c)
 *     CmpCleanUpKCBCacheTable @ 0x14074B9E4 (CmpCleanUpKCBCacheTable.c)
 *     CmpDecommisssionKcb @ 0x14074C040 (CmpDecommisssionKcb.c)
 *     CmpCreateKeyControlBlock @ 0x1407AFAA0 (CmpCreateKeyControlBlock.c)
 *     CmpCloneToUnbackedKcb @ 0x140A14164 (CmpCloneToUnbackedKcb.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x140A14AA4 (CmpSearchKeyControlBlockTreeEx.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x1402A4B0C (CmpFreeTransientPoolWithTag.c)
 *     ExFreeToLookasideListEx @ 0x1402C0A60 (ExFreeToLookasideListEx.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall CmpFreeKeyControlBlock(ULONG_PTR BugCheckParameter2)
{
  void *v2; // rcx
  unsigned __int64 v3; // rcx

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
  ExFreeToLookasideListEx(&CmpKcbLookaside, (PVOID)BugCheckParameter2);
  _InterlockedDecrement64(qword_140D55300);
}
