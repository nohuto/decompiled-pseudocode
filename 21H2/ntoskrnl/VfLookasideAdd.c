/*
 * XREFs of VfLookasideAdd @ 0x140A9F0C0
 * Callers:
 *     VfMiscExInitializePagedLookasideList_Exit @ 0x140AA3CF0 (VfMiscExInitializePagedLookasideList_Exit.c)
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

void __fastcall VfLookasideAdd(ULONG_PTR BugCheckParameter2)
{
  _QWORD *v2; // rsi
  struct _SLIST_ENTRY *v3; // rbx
  __int128 v4; // [rsp+30h] [rbp-18h] BYREF

  v4 = 0LL;
  if ( ViLookasideInitialized )
  {
    v2 = (_QWORD *)VfAvlReserveNode((__int64 *)&ViLookasideAvl, BugCheckParameter2, 0LL);
    if ( v2 )
    {
      v3 = 0LL;
      VfAvlInitializeLockContext((__int64)&v4, 0);
      if ( VfAvlLookupTreeNode((__int64 *)&ViLookasideAvl, (__int64)&v4, BugCheckParameter2, 0LL) )
      {
        if ( !ViLookasideAllocationFailures && !ViLookasideAlreadyLoadedDrivers )
          VerifierBugCheckIfAppropriate(0xC4u, 0xCAuLL, BugCheckParameter2, 0LL, 0LL);
        v3 = (struct _SLIST_ENTRY *)VfAvlDeleteTreeNode((__int64)&ViLookasideAvl, (__int64)&v4, BugCheckParameter2, 0LL);
      }
      VfAvlInsertReservedTreeNode((__int64)&ViLookasideAvl, (__int64)&v4, v2);
      VfAvlCleanupLockContext((__int64)&v4);
      if ( v3 )
      {
        if ( dword_140D57810 == 1 )
          ExFreeToNPagedLookasideList(&ViAvlNodeLookaside, v3);
        else
          VfUtilFreePoolCheckIRQL(v3);
      }
    }
    else
    {
      _InterlockedExchange(&ViLookasideAllocationFailures, 1);
    }
  }
}
