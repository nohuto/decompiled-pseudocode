/*
 * XREFs of ViRemLockDeleteFirstTreeNode @ 0x140ACF8CC
 * Callers:
 *     VfRemLockDeleteMemoryRange @ 0x140ABD1C2 (VfRemLockDeleteMemoryRange.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x140ACF620 (VerifierIoInitializeRemoveLockEx.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140298E70 (ExFreeToNPagedLookasideList.c)
 *     VfUtilFreePoolCheckIRQL @ 0x140303240 (VfUtilFreePoolCheckIRQL.c)
 *     VfAvlDeleteTreeNode @ 0x140303394 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x140303680 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403039F0 (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x14045DE58 (VfAvlInitializeLockContext.c)
 */

__int64 ViRemLockDeleteFirstTreeNode()
{
  struct _SLIST_ENTRY *v0; // rbx
  unsigned __int64 v1; // r8
  __int64 v2; // r9
  __int64 *v3; // rax
  __int64 *v4; // rdi
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  v0 = 0LL;
  v6 = 0LL;
  VfAvlInitializeLockContext((__int64)&v6, 0);
  v3 = (__int64 *)VfAvlLookupTreeNode(&ViRemLockAvl, (__int64)&v6, v1, v2);
  v4 = v3;
  if ( v3 )
    v0 = (struct _SLIST_ENTRY *)VfAvlDeleteTreeNode(&ViRemLockAvl, (__int64)&v6, *v3, 0LL);
  VfAvlCleanupLockContext((__int64)&v6);
  if ( !v4 )
    return 0LL;
  if ( v0 )
  {
    if ( dword_140D71A00 == 1 )
      ExFreeToNPagedLookasideList(&ViAvlNodeLookaside, v0);
    else
      VfUtilFreePoolCheckIRQL(v0);
  }
  return 1LL;
}
