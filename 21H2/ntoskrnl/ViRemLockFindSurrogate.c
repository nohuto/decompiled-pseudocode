/*
 * XREFs of ViRemLockFindSurrogate @ 0x140A91F88
 * Callers:
 *     VerifierIoAcquireRemoveLockEx @ 0x140A91BA0 (VerifierIoAcquireRemoveLockEx.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x140A91C30 (VerifierIoInitializeRemoveLockEx.c)
 *     VerifierIoReleaseRemoveLockAndWaitEx @ 0x140A91DA0 (VerifierIoReleaseRemoveLockAndWaitEx.c)
 *     VerifierIoReleaseRemoveLockEx @ 0x140A91E10 (VerifierIoReleaseRemoveLockEx.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x1402D81DC (VfAvlCleanupLockContext.c)
 *     VfAvlLookupTreeNode @ 0x1402D8518 (VfAvlLookupTreeNode.c)
 *     VfAvlInitializeLockContext @ 0x14045F6C8 (VfAvlInitializeLockContext.c)
 */

PVOID ViRemLockFindSurrogate()
{
  int v0; // edx
  unsigned __int64 v1; // r8
  PVOID v2; // rbx
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0LL;
  VfAvlInitializeLockContext((__int64)&v4, 1);
  v2 = VfAvlLookupTreeNode(&ViRemLockAvl, (__int64)&v4, v1, (unsigned int)(v0 + 31));
  VfAvlCleanupLockContext((__int64)&v4);
  return v2;
}
