/*
 * XREFs of CmUnlockHiveSecurity @ 0x140AF25F0
 * Callers:
 *     CmpCreateTombstone @ 0x140614A00 (CmpCreateTombstone.c)
 *     CmpUndoDeleteKeyForTransEx @ 0x14067D5F4 (CmpUndoDeleteKeyForTransEx.c)
 *     CmpSetKeySecurity @ 0x1406B7E3C (CmpSetKeySecurity.c)
 *     CmpFreeKeyByCell @ 0x1406BA854 (CmpFreeKeyByCell.c)
 *     CmpUnlockTwoSecurityCaches @ 0x14078F228 (CmpUnlockTwoSecurityCaches.c)
 *     CmpAssignSecurityToKcb @ 0x1407A560C (CmpAssignSecurityToKcb.c)
 *     CmpCreateChild @ 0x1407A7590 (CmpCreateChild.c)
 *     CmpCreateKeyControlBlock @ 0x1407AFAA0 (CmpCreateKeyControlBlock.c)
 *     CmpAssignKeySecurity @ 0x140854E7C (CmpAssignKeySecurity.c)
 *     CmpCreateHiveRootCell @ 0x140871A9C (CmpCreateHiveRootCell.c)
 *     CmDumpKeyToFile @ 0x140A07E64 (CmDumpKeyToFile.c)
 *     CmSaveMergedKeys @ 0x140A09144 (CmSaveMergedKeys.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x140A1E428 (CmpCopyMergeOfLayeredKeyNode.c)
 * Callees:
 *     ExfReleasePushLock @ 0x140238E10 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 */

signed __int32 __fastcall CmUnlockHiveSecurity(__int64 a1)
{
  volatile signed __int64 *v1; // rbx
  signed __int64 v2; // rax
  signed __int64 v3; // rdx

  v1 = (volatile signed __int64 *)(a1 + 1784);
  _m_prefetchw((const void *)(a1 + 1784));
  v2 = *(_QWORD *)(a1 + 1784);
  v3 = v2 - 16;
  if ( (v2 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v3 = 0LL;
  if ( (v2 & 2) != 0 || v2 != _InterlockedCompareExchange64(v1, v3, v2) )
    ExfReleasePushLock(v1);
  return KeAbPostRelease((ULONG_PTR)v1);
}
