/*
 * XREFs of CmpDereferenceKeyControlBlock @ 0x1406B6660
 * Callers:
 *     CmCreateKey @ 0x1406BBA60 (CmCreateKey.c)
 *     CmLoadDifferencingKey @ 0x1406BC49C (CmLoadDifferencingKey.c)
 *     CmpCleanupParseContext @ 0x1406BD6A8 (CmpCleanupParseContext.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1406E1630 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1406E1D90 (CmpDoParseKey.c)
 *     CmpDeleteKeyObject @ 0x1406E5C50 (CmpDeleteKeyObject.c)
 *     CmOpenKey @ 0x1406E7B60 (CmOpenKey.c)
 *     CmpLateUnloadHiveWorker @ 0x14074A6B0 (CmpLateUnloadHiveWorker.c)
 *     CmReleaseLoadKeyContext @ 0x14079329C (CmReleaseLoadKeyContext.c)
 *     CmEnumerateKey @ 0x1407ACAE0 (CmEnumerateKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x1407B0EF0 (CmpGetSymbolicLinkTarget.c)
 *     CmpWalkOneLevel @ 0x1407B1C90 (CmpWalkOneLevel.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1407B8FB0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpDestroyVirtualStack @ 0x140A16224 (CmpDestroyVirtualStack.c)
 *     CmpDoBuildVirtualStack @ 0x140A1641C (CmpDoBuildVirtualStack.c)
 *     CmpFreeSiloKeyLockEntry @ 0x140A190DC (CmpFreeSiloKeyLockEntry.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x140A19124 (CmpGlobalUnlockKeyForWrite.c)
 *     CmpKeyEnumStackFreeResumeContext @ 0x140A21354 (CmpKeyEnumStackFreeResumeContext.c)
 * Callees:
 *     CmpInitializeDelayDerefContext @ 0x140262F00 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x140262F30 (CmpDrainDelayDerefContext.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1406B7100 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpDoQueueLateUnloadWorker @ 0x1406C01CC (CmpDoQueueLateUnloadWorker.c)
 *     CmpUnlockHashEntry @ 0x1407AB010 (CmpUnlockHashEntry.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x1407AB174 (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpLockKcbExclusive @ 0x1407AF778 (CmpLockKcbExclusive.c)
 *     CmpUnlockKcb @ 0x140AF2140 (CmpUnlockKcb.c)
 */

void __fastcall CmpDereferenceKeyControlBlock(ULONG_PTR BugCheckParameter2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // r9
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // r8
  bool v6; // cl
  void *v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v10; // rcx
  __int128 v11; // [rsp+30h] [rbp-18h] BYREF

  v11 = 0LL;
  CmpInitializeDelayDerefContext(&v11);
  v2 = *(_QWORD *)BugCheckParameter2;
  v3 = *(_QWORD *)(BugCheckParameter2 + 32);
  if ( *(_QWORD *)BugCheckParameter2 <= 1uLL )
  {
LABEL_8:
    v7 = *(void **)(BugCheckParameter2 + 32);
    CmpLockHashEntryExclusiveByKcb(BugCheckParameter2);
    CmpLockKcbExclusive(BugCheckParameter2);
    v8 = *(_QWORD *)(BugCheckParameter2 + 192);
    v9 = 0LL;
    if ( v8 )
    {
      v10 = *(_QWORD *)(v8 + 24);
      if ( v10 )
      {
        v9 = *(_QWORD *)(v10 + 16);
        CmpUnlockKcb(BugCheckParameter2);
        CmpLockKcbExclusive(v9);
        CmpLockKcbExclusive(BugCheckParameter2);
      }
    }
    CmpDereferenceKeyControlBlockWithLock(BugCheckParameter2);
    CmpUnlockKcb(BugCheckParameter2);
    if ( v9 )
      CmpUnlockKcb(v9);
    CmpUnlockHashEntry(v7);
    CmpDrainDelayDerefContext((_QWORD **)&v11);
  }
  else
  {
    while ( 1 )
    {
      v4 = v2 - 1;
      v5 = v2;
      v6 = v2 == 3 && (*(_DWORD *)(BugCheckParameter2 + 184) & 0x40000) != 0 && *(_BYTE *)(v3 + 2944) == 1;
      v2 = _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, v4, v2);
      if ( v2 == v5 )
        break;
      if ( v2 <= 1 )
        goto LABEL_8;
    }
    if ( v2 < v4 )
      KeBugCheckEx(0x51u, 0x25uLL, BugCheckParameter2, 0LL, 0LL);
    if ( v6 )
      CmpDoQueueLateUnloadWorker(v3);
  }
}
