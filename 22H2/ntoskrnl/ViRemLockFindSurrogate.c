/*
 * XREFs of ViRemLockFindSurrogate @ 0x140AD3978
 * Callers:
 *     VerifierIoAcquireRemoveLockEx @ 0x140AD3590 (VerifierIoAcquireRemoveLockEx.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x140AD3620 (VerifierIoInitializeRemoveLockEx.c)
 *     VerifierIoReleaseRemoveLockAndWaitEx @ 0x140AD3790 (VerifierIoReleaseRemoveLockAndWaitEx.c)
 *     VerifierIoReleaseRemoveLockEx @ 0x140AD3800 (VerifierIoReleaseRemoveLockEx.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x14020A004 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x14020A374 (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x140465E48 (VfAvlInitializeLockContext.c)
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
