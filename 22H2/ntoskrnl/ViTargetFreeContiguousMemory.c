/*
 * XREFs of ViTargetFreeContiguousMemory @ 0x140ACCAC0
 * Callers:
 *     VerifierMmFreeContiguousMemory @ 0x140AE3E60 (VerifierMmFreeContiguousMemory.c)
 *     VerifierMmFreeContiguousMemorySpecifyCache @ 0x140AE3EA0 (VerifierMmFreeContiguousMemorySpecifyCache.c)
 *     VerifierMmFreeNonCachedMemory @ 0x140AE3F00 (VerifierMmFreeNonCachedMemory.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x14020A004 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x14020A374 (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x140465E48 (VfAvlInitializeLockContext.c)
 *     ViTargetFreeContiguousMemoryFromNode @ 0x140ACCB68 (ViTargetFreeContiguousMemoryFromNode.c)
 *     ViTargetUpdateTreeAllowed @ 0x140ACCE94 (ViTargetUpdateTreeAllowed.c)
 *     VfAvlEnumerateNodes @ 0x140ADD2A4 (VfAvlEnumerateNodes.c)
 */

void __fastcall ViTargetFreeContiguousMemory(__int64 a1, __int64 a2)
{
  int v3; // edx
  unsigned __int64 v4; // r8
  PVOID v5; // rax
  __int64 v6; // rcx
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  v7 = 0LL;
  if ( (unsigned int)ViTargetUpdateTreeAllowed(a1, a2, a1) )
  {
    VfAvlInitializeLockContext((__int64)&v7, 0);
    v5 = VfAvlLookupTreeNode((__int64 *)&ViTargetDriversAvl, (__int64)&v7, v4, (unsigned int)(v3 + 1));
    if ( !v5 || !(unsigned int)ViTargetFreeContiguousMemoryFromNode(a2, v5) )
      ((void (__fastcall *)(__int64, __int128 *, __int64 (__fastcall *)(), __int64))VfAvlEnumerateNodes)(
        v6,
        &v7,
        ViTargetFreeContiguousMemoryCallback,
        a2);
    VfAvlCleanupLockContext((__int64)&v7);
  }
}
