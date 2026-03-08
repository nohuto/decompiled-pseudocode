/*
 * XREFs of ViRemLockFindSurrogate @ 0x140ACF978
 * Callers:
 *     VerifierIoAcquireRemoveLockEx @ 0x140ACF590 (VerifierIoAcquireRemoveLockEx.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x140ACF620 (VerifierIoInitializeRemoveLockEx.c)
 *     VerifierIoReleaseRemoveLockAndWaitEx @ 0x140ACF790 (VerifierIoReleaseRemoveLockAndWaitEx.c)
 *     VerifierIoReleaseRemoveLockEx @ 0x140ACF800 (VerifierIoReleaseRemoveLockEx.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x140303680 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403039F0 (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x14045DE58 (VfAvlInitializeLockContext.c)
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
