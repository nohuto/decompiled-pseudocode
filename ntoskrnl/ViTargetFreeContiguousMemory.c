/*
 * XREFs of ViTargetFreeContiguousMemory @ 0x140AC8AC0
 * Callers:
 *     VerifierMmFreeContiguousMemory @ 0x140ADFE60 (VerifierMmFreeContiguousMemory.c)
 *     VerifierMmFreeContiguousMemorySpecifyCache @ 0x140ADFEA0 (VerifierMmFreeContiguousMemorySpecifyCache.c)
 *     VerifierMmFreeNonCachedMemory @ 0x140ADFF00 (VerifierMmFreeNonCachedMemory.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x140303680 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403039F0 (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x14045DE58 (VfAvlInitializeLockContext.c)
 *     ViTargetFreeContiguousMemoryFromNode @ 0x140AC8B68 (ViTargetFreeContiguousMemoryFromNode.c)
 *     ViTargetUpdateTreeAllowed @ 0x140AC8E94 (ViTargetUpdateTreeAllowed.c)
 *     VfAvlEnumerateNodes @ 0x140AD92A4 (VfAvlEnumerateNodes.c)
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
