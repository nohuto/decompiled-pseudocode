/*
 * XREFs of VfTargetDriversDisableVerifier @ 0x140A8AAE0
 * Callers:
 *     VfSuspectApplyDifVolatileVerification @ 0x140A9A468 (VfSuspectApplyDifVolatileVerification.c)
 *     VfSuspectRemoveDifVolatileVerification @ 0x140A9AEC0 (VfSuspectRemoveDifVolatileVerification.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x1402D81DC (VfAvlCleanupLockContext.c)
 *     VfAvlLookupTreeNode @ 0x1402D8518 (VfAvlLookupTreeNode.c)
 *     VfAvlInitializeLockContext @ 0x14045F6C8 (VfAvlInitializeLockContext.c)
 *     ViTargetDriversFreeVerifiedData @ 0x1405FF00C (ViTargetDriversFreeVerifiedData.c)
 */

void VfTargetDriversDisableVerifier()
{
  int v0; // edx
  unsigned __int64 v1; // r8
  void **v2; // rax
  void **v3; // rbx
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0LL;
  if ( !VfSafeMode )
  {
    VfAvlInitializeLockContext((__int64)&v4, 0);
    v2 = (void **)VfAvlLookupTreeNode((__int64 *)&ViTargetDriversAvl, (__int64)&v4, v1, (unsigned int)(v0 + 1));
    v3 = v2;
    if ( v2 )
    {
      ViTargetDriversFreeVerifiedData(v2[7]);
      v3[7] = 0LL;
      --dword_140C1B248;
    }
    VfAvlCleanupLockContext((__int64)&v4);
  }
}
