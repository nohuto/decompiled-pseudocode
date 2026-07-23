/*
 * XREFs of CmpAllocateKeyControlBlock @ 0x1405EFFAC
 * Callers:
 *     CmpCreateKeyControlBlock @ 0x1405EF650 (CmpCreateKeyControlBlock.c)
 *     CmpCloneToUnbackedKcb @ 0x14086EB2C (CmpCloneToUnbackedKcb.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140406FB0 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     memset @ 0x140413800 (memset.c)
 */

PSLIST_ENTRY CmpAllocateKeyControlBlock()
{
  PSLIST_ENTRY v0; // rbx

  _InterlockedIncrement64(&CmPerfCounters);
  ++dword_140CDB4D4;
  v0 = RtlpInterlockedPopEntrySList(&CmpKcbLookaside);
  if ( v0
    || (++dword_140CDB4D8,
        (v0 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _SLIST_HEADER *))qword_140CDB4F0)(
                              (unsigned int)dword_140CDB4E4,
                              (unsigned int)dword_140CDB4EC,
                              (unsigned int)dword_140CDB4E8,
                              &CmpKcbLookaside)) != 0LL) )
  {
    _InterlockedIncrement64(qword_140D2EFA0);
    memset(v0, 0, 0x138uLL);
  }
  return v0;
}
