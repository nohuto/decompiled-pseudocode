/*
 * XREFs of ViTargetFreeContiguousMemory @ 0x1409D83E4
 * Callers:
 *     VerifierMmFreeContiguousMemory @ 0x1409E7810 (VerifierMmFreeContiguousMemory.c)
 *     VerifierMmFreeContiguousMemorySpecifyCache @ 0x1409E7850 (VerifierMmFreeContiguousMemorySpecifyCache.c)
 *     VerifierMmFreeNonCachedMemory @ 0x1409E78B0 (VerifierMmFreeNonCachedMemory.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x140371674 (VfAvlCleanupLockContext.c)
 *     VfAvlLookupTreeNode @ 0x14037E744 (VfAvlLookupTreeNode.c)
 *     VfAvlInitializeLockContext @ 0x1405A2804 (VfAvlInitializeLockContext.c)
 *     ViTargetFreeContiguousMemoryFromNode @ 0x1409D8498 (ViTargetFreeContiguousMemoryFromNode.c)
 *     ViTargetUpdateTreeAllowed @ 0x1409D87C8 (ViTargetUpdateTreeAllowed.c)
 *     VfAvlEnumerateNodes @ 0x1409E1658 (VfAvlEnumerateNodes.c)
 */

char __fastcall ViTargetFreeContiguousMemory(__int64 a1, __int64 a2)
{
  int updated; // eax
  int v4; // edx
  unsigned __int64 v5; // r8
  PVOID v6; // rax
  __int64 v7; // rcx
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF

  v9 = 0LL;
  updated = ViTargetUpdateTreeAllowed(a1, a2, a1);
  if ( updated )
  {
    VfAvlInitializeLockContext((__int64)&v9, 0);
    v6 = VfAvlLookupTreeNode((__int64 *)&ViTargetDriversAvl, (__int64)&v9, v5, (unsigned int)(v4 + 1));
    if ( !v6 || !(unsigned int)ViTargetFreeContiguousMemoryFromNode(a2, v6) )
      ((void (__fastcall *)(__int64, __int128 *, __int64 (__fastcall *)(), __int64))VfAvlEnumerateNodes)(
        v7,
        &v9,
        ViTargetFreeContiguousMemoryCallback,
        a2);
    LOBYTE(updated) = VfAvlCleanupLockContext((__int64)&v9);
  }
  return updated;
}
