/*
 * XREFs of ViRemLockDeleteFirstTreeNode @ 0x1409D6814
 * Callers:
 *     VerifierIoInitializeRemoveLockEx @ 0x1409D64D0 (VerifierIoInitializeRemoveLockEx.c)
 *     VfRemLockDeleteMemoryRange @ 0x1409D671C (VfRemLockDeleteMemoryRange.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140252644 (ExFreeToNPagedLookasideList.c)
 *     VfAvlCleanupLockContext @ 0x140372304 (VfAvlCleanupLockContext.c)
 *     VfUtilFreePoolCheckIRQL @ 0x14037E440 (VfUtilFreePoolCheckIRQL.c)
 *     VfAvlDeleteTreeNode @ 0x14037E4A8 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x14037E564 (VfAvlLookupTreeNode.c)
 *     VfAvlInitializeLockContext @ 0x1405A2514 (VfAvlInitializeLockContext.c)
 */

__int64 ViRemLockDeleteFirstTreeNode()
{
  _SLIST_ENTRY *v0; // rbx
  unsigned __int64 v1; // r8
  __int64 v2; // r9
  unsigned __int64 *v3; // rax
  unsigned __int64 *v4; // rdi
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  v0 = 0LL;
  v6 = 0LL;
  VfAvlInitializeLockContext((__int64)&v6, 0);
  v3 = (unsigned __int64 *)VfAvlLookupTreeNode(&ViRemLockAvl, (__int64)&v6, v1, v2);
  v4 = v3;
  if ( v3 )
    v0 = (_SLIST_ENTRY *)VfAvlDeleteTreeNode((__int64)&ViRemLockAvl, (__int64)&v6, *v3, 0LL);
  VfAvlCleanupLockContext((__int64)&v6);
  if ( !v4 )
    return 0LL;
  if ( v0 )
  {
    if ( dword_140D4B548 == 1 )
      ExFreeToNPagedLookasideList(&ViAvlNodeLookaside, v0);
    else
      VfUtilFreePoolCheckIRQL(v0);
  }
  return 1LL;
}
