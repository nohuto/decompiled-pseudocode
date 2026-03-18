/*
 * XREFs of VfTrackResource @ 0x140AA16A4
 * Callers:
 *     VfMiscExInitializeResourceLite_Exit @ 0x140AA3D80 (VfMiscExInitializeResourceLite_Exit.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140203D88 (ExFreeToNPagedLookasideList.c)
 *     VfAvlCleanupLockContext @ 0x1402D81DC (VfAvlCleanupLockContext.c)
 *     VfAvlInsertReservedTreeNode @ 0x1402D8234 (VfAvlInsertReservedTreeNode.c)
 *     VfAvlReserveNode @ 0x1402D83B4 (VfAvlReserveNode.c)
 *     VfAvlLookupTreeNode @ 0x1402D8518 (VfAvlLookupTreeNode.c)
 *     VfUtilFreePoolCheckIRQL @ 0x1402DB870 (VfUtilFreePoolCheckIRQL.c)
 *     VfAvlDeleteTreeNode @ 0x1402DB8D8 (VfAvlDeleteTreeNode.c)
 *     VfAvlInitializeLockContext @ 0x14045F6C8 (VfAvlInitializeLockContext.c)
 *     VerifierBugCheckIfAppropriate @ 0x140A8C924 (VerifierBugCheckIfAppropriate.c)
 */

char __fastcall VfTrackResource(__int64 BugCheckParameter2)
{
  _QWORD *v3; // rbp
  struct _SLIST_ENTRY *v4; // rdi
  __int128 v5; // [rsp+30h] [rbp-18h] BYREF

  v5 = 0LL;
  if ( !ViResourceInitialized )
    return 0;
  v3 = (_QWORD *)VfAvlReserveNode(&ViResourceAvl, BugCheckParameter2, 0LL);
  if ( !v3 )
  {
    _InterlockedExchange(&ViResourceNotTracked, 1);
    return 0;
  }
  v4 = 0LL;
  VfAvlInitializeLockContext((__int64)&v5, 0);
  if ( VfAvlLookupTreeNode(&ViResourceAvl, (__int64)&v5, BugCheckParameter2, 0LL) )
  {
    if ( !ViResourcesAlreadyLoadedDrivers )
      VerifierBugCheckIfAppropriate(0xC4u, 0xD0uLL, BugCheckParameter2, 0LL, 0LL);
    _InterlockedAdd(&ViResourceStaleNodes, 1u);
    v4 = (struct _SLIST_ENTRY *)VfAvlDeleteTreeNode((__int64)&ViResourceAvl, (__int64)&v5, BugCheckParameter2, 0LL);
  }
  VfAvlInsertReservedTreeNode((__int64)&ViResourceAvl, (__int64)&v5, v3);
  VfAvlCleanupLockContext((__int64)&v5);
  if ( v4 )
  {
    if ( dword_140D577E8 == 1 )
      ExFreeToNPagedLookasideList(&ViAvlNodeLookaside, v4);
    else
      VfUtilFreePoolCheckIRQL(v4);
  }
  return 1;
}
