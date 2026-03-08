/*
 * XREFs of CmpCleanUpKcbCacheWithLock @ 0x1407AF820
 * Callers:
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1406B7100 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpDoParseKey @ 0x1406E1D90 (CmpDoParseKey.c)
 *     CmpDeleteKeyObject @ 0x1406E5C50 (CmpDeleteKeyObject.c)
 *     CmpCleanUpKCBCacheTable @ 0x14074B9E4 (CmpCleanUpKCBCacheTable.c)
 *     CmpDelayCloseWorker @ 0x1407AB950 (CmpDelayCloseWorker.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x140A14AA4 (CmpSearchKeyControlBlockTreeEx.c)
 * Callees:
 *     CmpRemoveKeyHashFromDeletedKcbTable @ 0x14074B040 (CmpRemoveKeyHashFromDeletedKcbTable.c)
 *     CmpLockDeletedHashEntryExclusiveByKcb @ 0x14074B1B8 (CmpLockDeletedHashEntryExclusiveByKcb.c)
 *     CmpUnlockDeletedHashEntryByKcb @ 0x14074B268 (CmpUnlockDeletedHashEntryByKcb.c)
 *     CmpRemoveKeyHashFromTableEntry @ 0x1407AF7E4 (CmpRemoveKeyHashFromTableEntry.c)
 *     CmpDelayDerefKeyControlBlock @ 0x1407AF9B0 (CmpDelayDerefKeyControlBlock.c)
 *     CmpDereferenceNameControlBlockWithLock @ 0x1407B00A0 (CmpDereferenceNameControlBlockWithLock.c)
 *     CmpEtwDumpKcb @ 0x1408A6EE6 (CmpEtwDumpKcb.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall CmpCleanUpKcbCacheWithLock(ULONG_PTR BugCheckParameter4, __int64 a2)
{
  ULONG_PTR v3; // rbp
  _QWORD *v4; // rcx
  ULONG_PTR v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rax

  v3 = 0LL;
  if ( !*(_QWORD *)BugCheckParameter4 )
  {
    if ( CmpTraceRoutine )
    {
      LOBYTE(a2) = 23;
      CmpEtwDumpKcb(BugCheckParameter4, a2);
    }
    if ( (*(_WORD *)(BugCheckParameter4 + 186) & 0x40) == 0 && (*(_BYTE *)(BugCheckParameter4 + 8) & 8) != 0 )
    {
      CmpDelayDerefKeyControlBlock(*(_QWORD *)(BugCheckParameter4 + 104));
      *(_QWORD *)(BugCheckParameter4 + 104) = 0LL;
      *(_WORD *)(BugCheckParameter4 + 8) &= ~8u;
    }
    CmpDereferenceNameControlBlockWithLock(*(_QWORD *)(BugCheckParameter4 + 80));
    if ( (*(_DWORD *)(BugCheckParameter4 + 8) & 4) != 0 )
      ExFreePoolWithTag(*(PVOID *)(BugCheckParameter4 + 112), 0x6E494D43u);
    v4 = *(_QWORD **)(BugCheckParameter4 + 192);
    if ( v4 )
    {
      v6 = v4[3];
      if ( v6 )
      {
        v7 = *v4;
        v3 = *(_QWORD *)(v6 + 16);
        if ( *(_QWORD **)(*v4 + 8LL) != v4 || (v8 = (_QWORD *)v4[1], (_QWORD *)*v8 != v4) )
          __fastfail(3u);
        *v8 = v7;
        *(_QWORD *)(v7 + 8) = v8;
      }
      ExFreePoolWithTag(v4, 0);
      *(_QWORD *)(BugCheckParameter4 + 192) = 0LL;
    }
    v5 = *(_QWORD *)(BugCheckParameter4 + 72);
    if ( (*(_DWORD *)(BugCheckParameter4 + 8) & 0x20000) != 0 )
    {
      CmpLockDeletedHashEntryExclusiveByKcb(BugCheckParameter4);
      CmpRemoveKeyHashFromDeletedKcbTable(*(_QWORD *)(BugCheckParameter4 + 32), (_DWORD *)(BugCheckParameter4 + 16));
      CmpUnlockDeletedHashEntryByKcb(BugCheckParameter4);
    }
    else
    {
      CmpRemoveKeyHashFromTableEntry(
        BugCheckParameter4 + 16,
        *(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 32) + 1648LL)
      + 24
      * ((unsigned int)(*(_DWORD *)(*(_QWORD *)(BugCheckParameter4 + 32) + 1656LL) - 1) & ((unsigned int)(101027 * (*(_DWORD *)(BugCheckParameter4 + 16) ^ (*(_DWORD *)(BugCheckParameter4 + 16) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*(_DWORD *)(BugCheckParameter4 + 16) ^ (*(_DWORD *)(BugCheckParameter4 + 16) >> 9))) >> 9))));
    }
    *(_DWORD *)(BugCheckParameter4 + 8) |= 0x80000u;
    if ( v3 )
      CmpDelayDerefKeyControlBlock(v3);
    if ( v5 )
      CmpDelayDerefKeyControlBlock(v5);
  }
}
